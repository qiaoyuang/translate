package org.translate.data

import io.ktor.client.request.get
import io.ktor.client.request.parameter
import kotlinx.coroutines.*
import org.translate.data.entries.InquireResult

private const val BASE_URL = "http://translate.google.cn/translate_a/single"

// 回调式查询
fun inquire(word: String,
            updateWord: (InquireResult, String, String) -> Unit) = GlobalScope.launch(Dispatchers.Unconfined) {
    val inquireResult = try {
        getInquireResult(word)
    } catch (e: Exception) {
        e.handleException()
        return@launch
    }
    val (otherTranslation, relatedWords) = getOtherTranslationAndRelateWords(inquireResult)
    updateWord(inquireResult, otherTranslation, relatedWords)
}

// 挂起式查询
suspend fun inquireSuspend(word: String): Triple<InquireResult, String, String>? = withContext(Dispatchers.Main) {
    val inquireResult = try {
        getInquireResult(word)
    } catch (e: Exception) {
        e.handleException()
        return@withContext null
    }
    val (otherTranslation, relatedWords) = getOtherTranslationAndRelateWords(inquireResult)
    Triple(inquireResult, otherTranslation, relatedWords)
}

// 发起 get 请求查询
private suspend fun getInquireResult(word: String): InquireResult = CLIENT.get(BASE_URL) {
    parameter("q", word)
    parameter("dj", 1)
    parameter("client", "gtx")
    parameter("sl", "en")
    parameter("tl", "zh-CN")
    parameter("ie", "UTF-8")
    parameter("dt", "t")
    parameter("dt", "at")
    parameter("dt", "rw")
    parameter("dt", "bd")
    parameter("dt", "rm")
}

// 处理数据
private fun getOtherTranslationAndRelateWords(inquireResult: InquireResult): Pair<String, String> {
    // 拼接其它义项
    val otherTranslationDeferred = inquireResult.alternativeTranslations?.first()?.words?.let {
        StringBuilder().apply {
            it.forEachIndexed { index, alternative ->
                if (index != 0)
                    append(if (index == it.lastIndex) alternative.word else "${alternative.word}，")
            }
        }.toString()
    } ?: ""
    // 拼接相关词组
    val relatedWordsDeferred = inquireResult.relatedWords?.words?.let {
        StringBuilder().apply {
            it.forEachIndexed { index, word -> append(if (index == it.lastIndex) word else "$word, ") }
        }.toString()
    } ?: ""
    return otherTranslationDeferred to relatedWordsDeferred
}