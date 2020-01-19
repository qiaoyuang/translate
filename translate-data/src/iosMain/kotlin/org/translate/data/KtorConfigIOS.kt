package org.translate.data

import io.ktor.client.HttpClient
import io.ktor.client.engine.ios.Ios
import platform.Foundation.NSLog

actual val CLIENT = HttpClient(Ios) {
    configJson()
    engine {
        configureRequest {
            setAllowsCellularAccess(true)
        }
    }
}

actual fun Exception.handleException() = NSLog(message ?: "")