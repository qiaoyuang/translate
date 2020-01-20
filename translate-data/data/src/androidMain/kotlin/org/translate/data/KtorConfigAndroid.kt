package org.translate.data

import android.util.Log
import io.ktor.client.HttpClient
import io.ktor.client.engine.okhttp.OkHttp
import okhttp3.Interceptor
import okhttp3.OkHttpClient

actual val CLIENT = HttpClient(OkHttp) {
    configJson()
    engine {
        config {
            followRedirects(true)
        }
        addInterceptor(Interceptor {
            Log.d("输出", "拦截器 2")
            it.proceed(it.request())
        })
        addNetworkInterceptor(Interceptor {
            Log.d("输出", "网络拦截器 2")
            it.proceed(it.request())
        })
        preconfigured = sOkHttpClientInstance
    }
}

actual fun Exception.handleException() = printStackTrace()

internal val sOkHttpClientInstance = OkHttpClient.Builder()
    .addInterceptor {
        Log.d("输出", "拦截器 1")
        it.proceed(it.request())
    }
    .addNetworkInterceptor {
        Log.d("输出", "网络拦截器 1")
        it.proceed(it.request())
    }.build()