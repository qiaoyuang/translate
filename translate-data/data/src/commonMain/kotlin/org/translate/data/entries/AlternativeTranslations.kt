package org.translate.data.entries

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class AlternativeTranslations(@SerialName("alternative") val words: List<Alternative>? = null)