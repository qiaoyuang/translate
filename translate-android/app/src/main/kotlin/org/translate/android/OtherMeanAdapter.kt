package org.translate.android

import android.content.Context
import android.os.Build
import android.view.View
import android.view.ViewGroup
import android.widget.TextView
import androidx.core.content.ContextCompat
import androidx.recyclerview.widget.RecyclerView
import org.jetbrains.anko.*
import org.translate.android.OtherMeanAdapter.OtherMeanViewHolder
import org.translate.data.entries.DictInfo

class OtherMeanAdapter(private val mContext: Context,
                       private val mData: List<DictInfo>) : RecyclerView.Adapter<OtherMeanViewHolder>() {

    private companion object {
        const val WORD = 1
        const val REVERSE = 2
    }

    private val black by lazy { ContextCompat.getColor(mContext, android.R.color.black) }
    private val gray600 by lazy { ContextCompat.getColor(mContext, R.color.gray600) }

    override fun getItemCount(): Int = mData.size

    override fun onBindViewHolder(holder: OtherMeanViewHolder, position: Int) = with(holder) {
        val data = mData[position]
        tvWord.text = data.word
        tvReverse.text = StringBuilder().apply {
            data.reverses?.let {
                val last = it.size - 1
                it.forEachIndexed { index, word ->
                    append(if (index == last) word else "$word, ")
                }
            }
        }.toString()
    }

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): OtherMeanViewHolder =
        OtherMeanViewHolder(mContext.UI {
            verticalLayout {
                lparams(matchParent, wrapContent)
                if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.M) {
                    isClickable = true
                }
                textView {
                    id = WORD
                    textColor = black
                    textSize = 14f
                }.lparams(wrapContent, wrapContent)
                textView {
                    id = REVERSE
                    textColor = gray600
                    textSize = 14f
                }.lparams(wrapContent, wrapContent) {
                    bottomMargin = dip(8)
                }
            }
        }.view)

    class OtherMeanViewHolder(itemView: View) : RecyclerView.ViewHolder(itemView) {
        val tvWord = itemView.find<TextView>(WORD)
        val tvReverse = itemView.find<TextView>(REVERSE)
    }

}