package org.translate.data.entries

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class Dict(@SerialName("pos") val posType: String = "",
                @SerialName("entry") val dictInfo: List<DictInfo>? = null)