package org.translate.android

import android.content.Context
import android.graphics.Color
import android.text.InputType
import android.util.TypedValue
import android.view.View
import android.view.inputmethod.EditorInfo
import android.widget.EditText
import android.widget.LinearLayout
import android.widget.TextView
import androidx.appcompat.widget.Toolbar
import androidx.cardview.widget.CardView
import androidx.core.widget.NestedScrollView
import androidx.lifecycle.LifecycleObserver
import androidx.recyclerview.widget.LinearLayoutManager
import androidx.recyclerview.widget.RecyclerView
import com.google.android.material.appbar.AppBarLayout
import com.google.android.material.appbar.CollapsingToolbarLayout
import org.jetbrains.anko.*
import org.jetbrains.anko.appcompat.v7.toolbar
import org.jetbrains.anko.cardview.v7.cardView
import org.jetbrains.anko.design.appBarLayout
import org.jetbrains.anko.design.collapsingToolbarLayout
import org.jetbrains.anko.design.coordinatorLayout
import org.jetbrains.anko.recyclerview.v7.recyclerView
import org.jetbrains.anko.support.v4.nestedScrollView
import org.translate.data.entries.InquireResult

class MainActivityUIComponent(private val mMainActivity: MainActivity) : AnkoComponent<MainActivity>, LifecycleObserver {

    private lateinit var mAppBarLayout: AppBarLayout
    private lateinit var mCollapsingToolbarLayout: CollapsingToolbarLayout
    private lateinit var mToolBar: Toolbar
    private lateinit var mNestedScrollView: NestedScrollView

    private lateinit var mOtherMeanCard: CardView
    private lateinit var mOtherMeanLayout: LinearLayout
    private lateinit var mETInput: EditText

    private lateinit var mTVSrcPronunciation: TextView
    private lateinit var mTVResult: TextView
    private lateinit var mTVPronunciation: TextView
    private lateinit var mTVOtherTranslation: TextView
    private lateinit var mTVRelatedWords: TextView

    private val blue1 by lazy { Color.parseColor("#039be5") }
    private val blue2 by lazy { Color.parseColor("#0277bd") }
    private val deepWhite by lazy { Color.parseColor("#f0f0f0") }
    private val gray600 by lazy { Color.parseColor("#757575") }

    override fun createView(ui: AnkoContext<MainActivity>): View = ui.apply {
        coordinatorLayout {
            backgroundColor = deepWhite
            fitsSystemWindows = true

            mAppBarLayout = appBarLayout {
                fitsSystemWindows = true
                backgroundColor = Color.WHITE
                isFocusableInTouchMode = true
                translationZ = dip(8).toFloat()

                mCollapsingToolbarLayout = collapsingToolbarLayout {
                    fitsSystemWindows = true
                    title = "翻译词典"
                    setExpandedTitleColor(Color.TRANSPARENT)

                    view {
                        fitsSystemWindows = true
                        backgroundColor = blue2
                    }.lparams(matchParent, getStatusBarSize(context)) {
                        collapseMode = CollapsingToolbarLayout.LayoutParams.COLLAPSE_MODE_PIN
                    }

                    verticalLayout {
                        mETInput = editText {
                            hint = "点击可输入单词"
                            hintTextColor = gray600
                            textColor = Color.BLACK
                            background = null
                            textSize = 22f
                            singleLine = true
                            inputType = InputType.TYPE_TEXT_VARIATION_URI
                            imeOptions = EditorInfo.IME_ACTION_SEARCH
                            setOnEditorActionListener { _, actionId, _ ->
                                if (actionId == EditorInfo.IME_ACTION_SEARCH) {
                                    val text = text.toString().trim()
                                    mMainActivity.inquire(text)
                                }
                                false
                            }
                        }.lparams(matchParent, wrapContent)

                        mTVSrcPronunciation = textView {
                            visibility = View.GONE
                            textColor = Color.BLACK
                            textSize = 14f
                        }.lparams(wrapContent, wrapContent)

                    }.lparams(matchParent, wrapContent) {
                        topMargin = dip(100)
                        marginStart = dip(16)
                        marginEnd = dip(16)
                        collapseMode =
                            CollapsingToolbarLayout.LayoutParams.COLLAPSE_MODE_PARALLAX
                    }

                    mToolBar = toolbar {
                        backgroundColor = blue1
                    }.lparams(matchParent, getActionBarSize(context)) {
                        collapseMode = CollapsingToolbarLayout.LayoutParams.COLLAPSE_MODE_PIN
                    }

                }.lparams(matchParent, wrapContent) {
                    scrollFlags = AppBarLayout.LayoutParams.SCROLL_FLAG_SCROLL or AppBarLayout.LayoutParams.SCROLL_FLAG_EXIT_UNTIL_COLLAPSED
                }

            }.lparams(matchParent, wrapContent)

            mNestedScrollView = nestedScrollView {
                visibility = View.INVISIBLE
                verticalLayout {
                    bottomPadding = dip(16)
                    cardView {
                        elevation = dip(4).toFloat()
                        isClickable = true
                        backgroundColor = blue1
                        relativeLayout {
                            val sourceLanguageId = 1
                            val resultId = 2
                            val pronunciationId = 3
                            val otherTranslationId = 4
                            textView {
                                id = sourceLanguageId
                                text = "简体中文"
                                textColor = Color.WHITE
                                textSize = 16f
                            }.lparams(wrapContent, wrapContent) {
                                alignParentTop()
                                alignParentStart()
                            }
                            mTVResult = textView {
                                id = resultId
                                textColor = Color.WHITE
                                textSize = 22f
                            }.lparams(wrapContent, wrapContent) {
                                alignStart(sourceLanguageId)
                                bottomOf(sourceLanguageId)
                                topMargin = dip(16)
                                marginStart = dip(8)
                            }
                            mTVPronunciation = textView {
                                id = pronunciationId
                                textColor = Color.WHITE
                                textSize = 14f
                            }.lparams(wrapContent, wrapContent) {
                                alignStart(resultId)
                                bottomOf(resultId)
                                topMargin = dip(4)
                            }
                            mTVOtherTranslation = textView {
                                id = otherTranslationId
                                textColor = Color.WHITE
                                textSize = 14f
                            }.lparams(wrapContent, wrapContent) {
                                alignStart(pronunciationId)
                                bottomOf(pronunciationId)
                                topMargin = dip(16)
                            }
                            mTVRelatedWords = textView {
                                textColor = Color.WHITE
                                textSize = 14f
                            }.lparams(wrapContent, wrapContent) {
                                alignStart(otherTranslationId)
                                bottomOf(otherTranslationId)
                                topMargin = dip(16)
                            }
                        }.lparams(matchParent, wrapContent) {
                            margin = dip(16)
                        }
                    }.lparams(matchParent, wrapContent) {
                        topMargin = dip(8)
                        marginStart = dip(8)
                        marginEnd = dip(8)
                    }

                    mOtherMeanCard = cardView {
                        elevation = dip(4).toFloat()
                        isClickable = true
                        backgroundColor = Color.WHITE
                        verticalLayout {
                            textView {
                                text = "词汇扩展"
                                textColor = Color.BLACK
                                textSize = 16f
                            }.lparams(wrapContent, wrapContent) {
                                topMargin = dip(8)
                                bottomMargin = dip(16)
                                marginStart = dip(8)
                            }
                            mOtherMeanLayout = verticalLayout().lparams(matchParent, wrapContent)
                        }.lparams(matchParent, wrapContent)
                    }.lparams(matchParent, wrapContent) {
                        margin = dip(8)
                    }
                }.lparams(matchParent, wrapContent)
            }.lparams(matchParent, matchParent) {
                behavior = AppBarLayout.ScrollingViewBehavior()
            }
        }
    }.view

    // 获取系统的 ActionBarSize
    private fun getActionBarSize(context: Context): Int {
        val typedValue = context.attr(android.R.attr.actionBarSize).data
        return TypedValue.complexToDimension(typedValue, context.resources.displayMetrics).toInt()
    }

    // 获取系统 StatusBarSize
    private fun getStatusBarSize(context: Context): Int {
        val resourceId = context.resources.getIdentifier("status_bar_height", "dimen", "android")
        return context.resources.getDimensionPixelSize(resourceId)
    }

    fun displayInquireResult(inquireResult: InquireResult, otherTranslation: String, relatedWords: String) {

        if (mNestedScrollView.visibility == View.INVISIBLE)
            mNestedScrollView.visibility = View.VISIBLE

        //展示读音信息
        inquireResult.word?.let {
            mTVResult.text = it[0].ch
            if (it[1].srcPronunciation.isBlank()) {
                mTVSrcPronunciation.visibility = View.GONE
            } else {
                mTVSrcPronunciation.visibility = View.VISIBLE
                val srcPronunciationText = it[1].srcPronunciation
                mTVSrcPronunciation.text = srcPronunciationText
            }

            mTVPronunciation.visibility = if (it[1].pronunciation.isBlank())
                View.GONE
            else {
                mTVPronunciation.text = it[1].pronunciation
                View.VISIBLE
            }
        }

        //显示扩展词意
        mOtherMeanLayout.removeAllViews()
        mOtherMeanCard.visibility = if (inquireResult.dict == null) View.GONE
        else {
            inquireResult.dict!!.forEach { dict ->
                with<_LinearLayout, Unit>(mOtherMeanLayout as _LinearLayout) {
                    textView {
                        textSize = 16f
                        textColor = gray600
                        text = dict.posType
                    }.lparams(wrapContent, wrapContent) {
                        marginStart = dip(16)
                    }
                    recyclerView {
                        layoutManager = LinearLayoutManager(context)
                        overScrollMode = RecyclerView.OVER_SCROLL_NEVER
                        dict.dictInfo?.let {
                            adapter = OtherMeanAdapter(context, it)
                        }
                    }.lparams(matchParent, wrapContent) {
                        marginStart = dip(32)
                        marginEnd = dip(8)
                        topMargin = dip(16)
                        bottomMargin = dip(24)
                    }
                }
            }
            View.VISIBLE
        }

        mTVOtherTranslation.setWords("其他义项", otherTranslation)
        mTVRelatedWords.setWords("相关词组", relatedWords)
    }

    private fun TextView.setWords(tips: String, words: String) {
        visibility = if (words.isBlank()) View.GONE
        else {
            val wordText = "$tips\n$words"
            text = wordText
            View.VISIBLE
        }
    }

}