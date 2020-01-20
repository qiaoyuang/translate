package org.translate.data.entries

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class Alternative(@SerialName("word_postproc") val word: String = "")