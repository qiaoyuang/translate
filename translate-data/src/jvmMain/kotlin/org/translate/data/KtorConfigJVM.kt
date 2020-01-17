package org.translate.data

import io.ktor.client.HttpClient
import io.ktor.client.engine.okhttp.OkHttp
import okhttp3.OkHttpClient

actual val CLIENT = HttpClient(OkHttp) {
    configJson()
    engine {
        config {
            followRedirects(true)
        }
        //addInterceptor(interceptor)
        //addNetworkInterceptor(interceptor)
        preconfigured = sOkHttpClientInstance
    }
}

internal val sOkHttpClientInstance = OkHttpClient.Builder().build()

actual fun Exception.handleException() = printStackTrace()