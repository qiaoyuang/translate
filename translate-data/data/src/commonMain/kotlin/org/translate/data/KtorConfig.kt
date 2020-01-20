package org.translate.data

import io.ktor.client.HttpClient
import io.ktor.client.HttpClientConfig
import io.ktor.client.engine.HttpClientEngineConfig
import io.ktor.client.features.json.JsonFeature
import io.ktor.client.features.json.serializer.KotlinxSerializer
import kotlinx.serialization.UnstableDefault
import kotlinx.serialization.json.Json

expect val CLIENT: HttpClient

@UseExperimental(UnstableDefault::class)
internal fun <T : HttpClientEngineConfig> HttpClientConfig<T>.configJson() =
    install(JsonFeature) {
        serializer = KotlinxSerializer(Json.nonstrict)
    }

expect fun Exception.handleException()