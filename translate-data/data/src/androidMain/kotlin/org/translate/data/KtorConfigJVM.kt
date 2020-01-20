package org.translate.data

import android.util.Log
import io.ktor.client.HttpClient
import io.ktor.client.engine.okhttp.OkHttp
import okhttp3.Interceptor
import okhttp3.OkHttpClient
import okhttp3.Response

actual val CLIENT = HttpClient(OkHttp) {
    configJson()
    engine {
        config {
            followRedirects(true)
        }
        // addInterceptor(interceptor)
        // addNetworkInterceptor(interceptor)
        preconfigured = sOkHttpClientInstance
    }
}

internal val sOkHttpClientInstance = OkHttpClient.Builder()
    .addNetworkInterceptor {
        it.proceed(it.request())
    }.build()

actual fun Exception.handleException() = printStackTrace()