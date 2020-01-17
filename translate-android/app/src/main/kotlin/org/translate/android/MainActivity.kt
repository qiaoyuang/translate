package org.translate.android

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.Job
import kotlinx.coroutines.launch
import org.jetbrains.anko.setContentView
import org.translate.data.inquireSuspend
import kotlin.coroutines.CoroutineContext

class MainActivity : AppCompatActivity(), CoroutineScope {

    private val mUIComponent = MainActivityUIComponent(this)

    private lateinit var job: Job

    override val coroutineContext: CoroutineContext
        get() = Dispatchers.Main + job

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        job = Job()
        mUIComponent.setContentView(this)
    }

    override fun onRestart() {
        super.onRestart()
        job = Job()
    }

    override fun onStop() {
        super.onStop()
        job.cancel()
    }

    fun inquire(word: String) = launch {
        val (inquireResult, otherTranslation, relatedWords) = inquireSuspend(word) ?: return@launch
        mUIComponent.displayInquireResult(inquireResult, otherTranslation, relatedWords)
    }

}