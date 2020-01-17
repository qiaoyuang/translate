#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class Translate_dataAlternative, Translate_dataAlternativeTranslations, Translate_dataDictInfo, Translate_dataDict, Translate_dataWord, Translate_dataRelatedWords, Translate_dataInquireResult, Translate_dataKotlinThrowable, Translate_dataKotlinArray, Translate_dataKotlinException, Translate_dataKtor_client_coreHttpClient, Translate_dataKtor_client_coreHttpClientConfig, Translate_dataKotlinx_coroutines_coreCoroutineDispatcher, Translate_dataKtor_client_coreHttpClientEngineConfig, Translate_dataKtor_client_coreHttpReceivePipeline, Translate_dataKtor_client_coreHttpRequestPipeline, Translate_dataKtor_client_coreHttpResponsePipeline, Translate_dataKtor_client_coreHttpSendPipeline, Translate_dataKotlinx_coroutines_coreCancellationException, Translate_dataKotlinx_serialization_runtimeSerialKind, Translate_dataKotlinNothing, Translate_dataKotlinx_serialization_runtimeUpdateMode, Translate_dataKtor_utilsAttributeKey, Translate_dataKotlinAbstractCoroutineContextElement, Translate_dataKtor_client_coreProxyConfig, Translate_dataKtor_utilsPipelinePhase, Translate_dataKtor_utilsPipeline, Translate_dataKotlinRuntimeException, Translate_dataKotlinIllegalStateException, Translate_dataKotlinEnum, Translate_dataKtor_httpUrl, Translate_dataKotlinx_coroutines_coreAtomicDesc, Translate_dataKotlinx_coroutines_corePrepareOp, Translate_dataKtor_httpURLProtocol, Translate_dataKotlinx_coroutines_coreAtomicOp, Translate_dataKotlinx_coroutines_coreOpDescriptor, Translate_dataKotlinx_coroutines_coreLinkedListNode, Translate_dataKotlinx_coroutines_coreAbstractAtomicDesc;

@protocol Translate_dataKotlinx_serialization_runtimeKSerializer, Translate_dataKotlinx_coroutines_coreJob, Translate_dataKotlinx_serialization_runtimeEncoder, Translate_dataKotlinx_serialization_runtimeSerialDescriptor, Translate_dataKotlinx_serialization_runtimeSerializationStrategy, Translate_dataKotlinx_serialization_runtimeDecoder, Translate_dataKotlinx_serialization_runtimeDeserializationStrategy, Translate_dataKotlinIterator, Translate_dataKotlinCoroutineContext, Translate_dataKotlinx_coroutines_coreCoroutineScope, Translate_dataKtor_ioCloseable, Translate_dataKtor_client_coreHttpClientEngine, Translate_dataKtor_utilsAttributes, Translate_dataKotlinx_coroutines_coreChildHandle, Translate_dataKotlinx_coroutines_coreChildJob, Translate_dataKotlinx_coroutines_coreDisposableHandle, Translate_dataKotlinSequence, Translate_dataKotlinx_coroutines_coreSelectClause0, Translate_dataKotlinCoroutineContextKey, Translate_dataKotlinCoroutineContextElement, Translate_dataKotlinx_serialization_runtimeCompositeEncoder, Translate_dataKotlinx_serialization_runtimeSerialModule, Translate_dataKotlinAnnotation, Translate_dataKotlinx_serialization_runtimeCompositeDecoder, Translate_dataKtor_client_coreHttpClientFeature, Translate_dataKotlinContinuation, Translate_dataKotlinContinuationInterceptor, Translate_dataKotlinx_coroutines_coreRunnable, Translate_dataKotlinSuspendFunction2, Translate_dataKotlinx_coroutines_coreParentJob, Translate_dataKotlinx_coroutines_coreSelectInstance, Translate_dataKotlinSuspendFunction0, Translate_dataKotlinx_serialization_runtimeSerialModuleCollector, Translate_dataKotlinKClass, Translate_dataKotlinComparable, Translate_dataKotlinFunction, Translate_dataKotlinKDeclarationContainer, Translate_dataKotlinKAnnotatedElement, Translate_dataKotlinKClassifier, Translate_dataKtor_httpParameters, Translate_dataKotlinMapEntry, Translate_dataKtor_utilsStringValues;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wnullability"

@interface KotlinBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface KotlinBase (KotlinBaseCopying) <NSCopying>
@end;

__attribute__((objc_runtime_name("KotlinMutableSet")))
__attribute__((swift_name("KotlinMutableSet")))
@interface Translate_dataMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((objc_runtime_name("KotlinMutableDictionary")))
__attribute__((swift_name("KotlinMutableDictionary")))
@interface Translate_dataMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((objc_runtime_name("KotlinNumber")))
__attribute__((swift_name("KotlinNumber")))
@interface Translate_dataNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((objc_runtime_name("KotlinByte")))
__attribute__((swift_name("KotlinByte")))
@interface Translate_dataByte : Translate_dataNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((objc_runtime_name("KotlinUByte")))
__attribute__((swift_name("KotlinUByte")))
@interface Translate_dataUByte : Translate_dataNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((objc_runtime_name("KotlinShort")))
__attribute__((swift_name("KotlinShort")))
@interface Translate_dataShort : Translate_dataNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((objc_runtime_name("KotlinUShort")))
__attribute__((swift_name("KotlinUShort")))
@interface Translate_dataUShort : Translate_dataNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((objc_runtime_name("KotlinInt")))
__attribute__((swift_name("KotlinInt")))
@interface Translate_dataInt : Translate_dataNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((objc_runtime_name("KotlinUInt")))
__attribute__((swift_name("KotlinUInt")))
@interface Translate_dataUInt : Translate_dataNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((objc_runtime_name("KotlinLong")))
__attribute__((swift_name("KotlinLong")))
@interface Translate_dataLong : Translate_dataNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((objc_runtime_name("KotlinULong")))
__attribute__((swift_name("KotlinULong")))
@interface Translate_dataULong : Translate_dataNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((objc_runtime_name("KotlinFloat")))
__attribute__((swift_name("KotlinFloat")))
@interface Translate_dataFloat : Translate_dataNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((objc_runtime_name("KotlinDouble")))
__attribute__((swift_name("KotlinDouble")))
@interface Translate_dataDouble : Translate_dataNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((objc_runtime_name("KotlinBoolean")))
__attribute__((swift_name("KotlinBoolean")))
@interface Translate_dataBoolean : Translate_dataNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Alternative")))
@interface Translate_dataAlternative : KotlinBase
- (instancetype)initWithWord:(NSString *)word __attribute__((swift_name("init(word:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (Translate_dataAlternative *)doCopyWord:(NSString *)word __attribute__((swift_name("doCopy(word:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *word __attribute__((swift_name("word")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Alternative.Companion")))
@interface Translate_dataAlternativeCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<Translate_dataKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlternativeTranslations")))
@interface Translate_dataAlternativeTranslations : KotlinBase
- (instancetype)initWithWords:(NSArray<Translate_dataAlternative *> * _Nullable)words __attribute__((swift_name("init(words:)"))) __attribute__((objc_designated_initializer));
- (NSArray<Translate_dataAlternative *> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (Translate_dataAlternativeTranslations *)doCopyWords:(NSArray<Translate_dataAlternative *> * _Nullable)words __attribute__((swift_name("doCopy(words:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<Translate_dataAlternative *> * _Nullable words __attribute__((swift_name("words")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlternativeTranslations.Companion")))
@interface Translate_dataAlternativeTranslationsCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<Translate_dataKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Dict")))
@interface Translate_dataDict : KotlinBase
- (instancetype)initWithPosType:(NSString *)posType dictInfo:(NSArray<Translate_dataDictInfo *> * _Nullable)dictInfo __attribute__((swift_name("init(posType:dictInfo:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSArray<Translate_dataDictInfo *> * _Nullable)component2 __attribute__((swift_name("component2()")));
- (Translate_dataDict *)doCopyPosType:(NSString *)posType dictInfo:(NSArray<Translate_dataDictInfo *> * _Nullable)dictInfo __attribute__((swift_name("doCopy(posType:dictInfo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<Translate_dataDictInfo *> * _Nullable dictInfo __attribute__((swift_name("dictInfo")));
@property (readonly) NSString *posType __attribute__((swift_name("posType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Dict.Companion")))
@interface Translate_dataDictCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<Translate_dataKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DictInfo")))
@interface Translate_dataDictInfo : KotlinBase
- (instancetype)initWithWord:(NSString *)word reverses:(NSArray<NSString *> * _Nullable)reverses __attribute__((swift_name("init(word:reverses:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSArray<NSString *> * _Nullable)component2 __attribute__((swift_name("component2()")));
- (Translate_dataDictInfo *)doCopyWord:(NSString *)word reverses:(NSArray<NSString *> * _Nullable)reverses __attribute__((swift_name("doCopy(word:reverses:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> * _Nullable reverses __attribute__((swift_name("reverses")));
@property (readonly) NSString *word __attribute__((swift_name("word")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DictInfo.Companion")))
@interface Translate_dataDictInfoCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<Translate_dataKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InquireResult")))
@interface Translate_dataInquireResult : KotlinBase
- (instancetype)initWithWord:(NSArray<Translate_dataWord *> * _Nullable)word dict:(NSArray<Translate_dataDict *> * _Nullable)dict alternativeTranslations:(NSArray<Translate_dataAlternativeTranslations *> * _Nullable)alternativeTranslations relatedWords:(Translate_dataRelatedWords * _Nullable)relatedWords __attribute__((swift_name("init(word:dict:alternativeTranslations:relatedWords:)"))) __attribute__((objc_designated_initializer));
- (NSArray<Translate_dataWord *> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSArray<Translate_dataDict *> * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSArray<Translate_dataAlternativeTranslations *> * _Nullable)component3 __attribute__((swift_name("component3()")));
- (Translate_dataRelatedWords * _Nullable)component4 __attribute__((swift_name("component4()")));
- (Translate_dataInquireResult *)doCopyWord:(NSArray<Translate_dataWord *> * _Nullable)word dict:(NSArray<Translate_dataDict *> * _Nullable)dict alternativeTranslations:(NSArray<Translate_dataAlternativeTranslations *> * _Nullable)alternativeTranslations relatedWords:(Translate_dataRelatedWords * _Nullable)relatedWords __attribute__((swift_name("doCopy(word:dict:alternativeTranslations:relatedWords:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<Translate_dataAlternativeTranslations *> * _Nullable alternativeTranslations __attribute__((swift_name("alternativeTranslations")));
@property (readonly) NSArray<Translate_dataDict *> * _Nullable dict __attribute__((swift_name("dict")));
@property (readonly) Translate_dataRelatedWords * _Nullable relatedWords __attribute__((swift_name("relatedWords")));
@property (readonly) NSArray<Translate_dataWord *> * _Nullable word __attribute__((swift_name("word")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InquireResult.Companion")))
@interface Translate_dataInquireResultCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<Translate_dataKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RelatedWords")))
@interface Translate_dataRelatedWords : KotlinBase
- (instancetype)initWithWords:(NSArray<NSString *> * _Nullable)words __attribute__((swift_name("init(words:)"))) __attribute__((objc_designated_initializer));
- (NSArray<NSString *> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (Translate_dataRelatedWords *)doCopyWords:(NSArray<NSString *> * _Nullable)words __attribute__((swift_name("doCopy(words:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> * _Nullable words __attribute__((swift_name("words")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RelatedWords.Companion")))
@interface Translate_dataRelatedWordsCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<Translate_dataKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Word")))
@interface Translate_dataWord : KotlinBase
- (instancetype)initWithCh:(NSString *)ch en:(NSString *)en pronunciation:(NSString *)pronunciation srcPronunciation:(NSString *)srcPronunciation __attribute__((swift_name("init(ch:en:pronunciation:srcPronunciation:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (Translate_dataWord *)doCopyCh:(NSString *)ch en:(NSString *)en pronunciation:(NSString *)pronunciation srcPronunciation:(NSString *)srcPronunciation __attribute__((swift_name("doCopy(ch:en:pronunciation:srcPronunciation:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *ch __attribute__((swift_name("ch")));
@property (readonly) NSString *en __attribute__((swift_name("en")));
@property (readonly) NSString *pronunciation __attribute__((swift_name("pronunciation")));
@property (readonly) NSString *srcPronunciation __attribute__((swift_name("srcPronunciation")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Word.Companion")))
@interface Translate_dataWordCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<Translate_dataKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface Translate_dataKotlinThrowable : KotlinBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(Translate_dataKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Translate_dataKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (Translate_dataKotlinArray *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Translate_dataKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((swift_name("KotlinException")))
@interface Translate_dataKotlinException : Translate_dataKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Translate_dataKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(Translate_dataKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

@interface Translate_dataKotlinException (Extensions)
- (void)handleException __attribute__((swift_name("handleException()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KtorConfigIOSKt")))
@interface Translate_dataKtorConfigIOSKt : KotlinBase
+ (NSString *)getHello __attribute__((swift_name("getHello()")));
@property (class, readonly) Translate_dataKtor_client_coreHttpClient *CLIENT __attribute__((swift_name("CLIENT")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InquireKt")))
@interface Translate_dataInquireKt : KotlinBase
+ (id<Translate_dataKotlinx_coroutines_coreJob>)inquireWord:(NSString *)word updateWord:(void (^)(Translate_dataInquireResult *, NSString *, NSString *))updateWord __attribute__((swift_name("inquire(word:updateWord:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerializationStrategy")))
@protocol Translate_dataKotlinx_serialization_runtimeSerializationStrategy
@required
- (void)serializeEncoder:(id<Translate_dataKotlinx_serialization_runtimeEncoder>)encoder obj:(id _Nullable)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@property (readonly) id<Translate_dataKotlinx_serialization_runtimeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeDeserializationStrategy")))
@protocol Translate_dataKotlinx_serialization_runtimeDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<Translate_dataKotlinx_serialization_runtimeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (id _Nullable)patchDecoder:(id<Translate_dataKotlinx_serialization_runtimeDecoder>)decoder old:(id _Nullable)old __attribute__((swift_name("patch(decoder:old:)")));
@property (readonly) id<Translate_dataKotlinx_serialization_runtimeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeKSerializer")))
@protocol Translate_dataKotlinx_serialization_runtimeKSerializer <Translate_dataKotlinx_serialization_runtimeSerializationStrategy, Translate_dataKotlinx_serialization_runtimeDeserializationStrategy>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface Translate_dataKotlinArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size init:(id _Nullable (^)(Translate_dataInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (id _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<Translate_dataKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(id _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol Translate_dataKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<Translate_dataKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol Translate_dataKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface Translate_dataKtor_client_coreHttpClient : KotlinBase <Translate_dataKotlinx_coroutines_coreCoroutineScope, Translate_dataKtor_ioCloseable>
- (instancetype)initWithEngine:(id<Translate_dataKtor_client_coreHttpClientEngine>)engine userConfig:(Translate_dataKtor_client_coreHttpClientConfig *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (Translate_dataKtor_client_coreHttpClient *)configBlock:(void (^)(Translate_dataKtor_client_coreHttpClientConfig *))block __attribute__((swift_name("config(block:)")));
@property (readonly) id<Translate_dataKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<Translate_dataKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) Translate_dataKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher"))) __attribute__((unavailable("[dispatcher] is deprecated. Use coroutineContext instead.")));
@property (readonly) id<Translate_dataKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) Translate_dataKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) Translate_dataKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) Translate_dataKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) Translate_dataKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) Translate_dataKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol Translate_dataKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<Translate_dataKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<Translate_dataKotlinCoroutineContextElement> _Nullable)getKey:(id<Translate_dataKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<Translate_dataKotlinCoroutineContext>)minusKeyKey:(id<Translate_dataKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<Translate_dataKotlinCoroutineContext>)plusContext:(id<Translate_dataKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol Translate_dataKotlinCoroutineContextElement <Translate_dataKotlinCoroutineContext>
@required
@property (readonly) id<Translate_dataKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol Translate_dataKotlinx_coroutines_coreJob <Translate_dataKotlinCoroutineContextElement>
@required
- (id<Translate_dataKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<Translate_dataKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(Translate_dataKotlinx_coroutines_coreCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (Translate_dataKotlinx_coroutines_coreCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<Translate_dataKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(Translate_dataKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<Translate_dataKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(Translate_dataKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));
- (id<Translate_dataKotlinx_coroutines_coreJob>)plusOther:(id<Translate_dataKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<Translate_dataKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<Translate_dataKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeEncoder")))
@protocol Translate_dataKotlinx_serialization_runtimeEncoder
@required
- (id<Translate_dataKotlinx_serialization_runtimeCompositeEncoder>)beginCollectionDesc:(id<Translate_dataKotlinx_serialization_runtimeSerialDescriptor>)desc collectionSize:(int32_t)collectionSize typeParams:(Translate_dataKotlinArray *)typeParams __attribute__((swift_name("beginCollection(desc:collectionSize:typeParams:)")));
- (id<Translate_dataKotlinx_serialization_runtimeCompositeEncoder>)beginStructureDesc:(id<Translate_dataKotlinx_serialization_runtimeSerialDescriptor>)desc typeParams:(Translate_dataKotlinArray *)typeParams __attribute__((swift_name("beginStructure(desc:typeParams:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescription:(id<Translate_dataKotlinx_serialization_runtimeSerialDescriptor>)enumDescription ordinal:(int32_t)ordinal __attribute__((swift_name("encodeEnum(enumDescription:ordinal:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<Translate_dataKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<Translate_dataKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
- (void)encodeUnit __attribute__((swift_name("encodeUnit()")));
@property (readonly) id<Translate_dataKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialDescriptor")))
@protocol Translate_dataKotlinx_serialization_runtimeSerialDescriptor
@required
- (NSArray<id<Translate_dataKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<Translate_dataKotlinx_serialization_runtimeSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (NSArray<id<Translate_dataKotlinAnnotation>> *)getEntityAnnotations __attribute__((swift_name("getEntityAnnotations()")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) Translate_dataKotlinx_serialization_runtimeSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeDecoder")))
@protocol Translate_dataKotlinx_serialization_runtimeDecoder
@required
- (id<Translate_dataKotlinx_serialization_runtimeCompositeDecoder>)beginStructureDesc:(id<Translate_dataKotlinx_serialization_runtimeSerialDescriptor>)desc typeParams:(Translate_dataKotlinArray *)typeParams __attribute__((swift_name("beginStructure(desc:typeParams:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescription:(id<Translate_dataKotlinx_serialization_runtimeSerialDescriptor>)enumDescription __attribute__((swift_name("decodeEnum(enumDescription:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (Translate_dataKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<Translate_dataKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<Translate_dataKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
- (void)decodeUnit __attribute__((swift_name("decodeUnit()")));
- (id _Nullable)updateNullableSerializableValueDeserializer:(id<Translate_dataKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableValue(deserializer:old:)")));
- (id _Nullable)updateSerializableValueDeserializer:(id<Translate_dataKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableValue(deserializer:old:)")));
@property (readonly) id<Translate_dataKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@property (readonly) Translate_dataKotlinx_serialization_runtimeUpdateMode *updateMode __attribute__((swift_name("updateMode")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol Translate_dataKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol Translate_dataKtor_client_coreHttpClientEngine <Translate_dataKotlinx_coroutines_coreCoroutineScope, Translate_dataKtor_ioCloseable>
@required
- (void)installClient:(Translate_dataKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) Translate_dataKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) Translate_dataKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface Translate_dataKtor_client_coreHttpClientConfig : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (Translate_dataKtor_client_coreHttpClientConfig *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(Translate_dataKtor_client_coreHttpClientEngineConfig *))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(Translate_dataKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installFeature:(id<Translate_dataKtor_client_coreHttpClientFeature>)feature configure:(void (^)(id))configure __attribute__((swift_name("install(feature:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(Translate_dataKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(Translate_dataKtor_client_coreHttpClientConfig *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end;

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol Translate_dataKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(Translate_dataKtor_utilsAttributeKey *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(Translate_dataKtor_utilsAttributeKey *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(Translate_dataKtor_utilsAttributeKey *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(Translate_dataKtor_utilsAttributeKey *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(Translate_dataKtor_utilsAttributeKey *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(Translate_dataKtor_utilsAttributeKey *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(Translate_dataKtor_utilsAttributeKey *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(Translate_dataKtor_utilsAttributeKey *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<Translate_dataKtor_utilsAttributeKey *> *allKeys __attribute__((swift_name("allKeys")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface Translate_dataKotlinAbstractCoroutineContextElement : KotlinBase <Translate_dataKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<Translate_dataKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<Translate_dataKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol Translate_dataKotlinContinuationInterceptor <Translate_dataKotlinCoroutineContextElement>
@required
- (id<Translate_dataKotlinContinuation>)interceptContinuationContinuation:(id<Translate_dataKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<Translate_dataKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface Translate_dataKotlinx_coroutines_coreCoroutineDispatcher : Translate_dataKotlinAbstractCoroutineContextElement <Translate_dataKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<Translate_dataKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)dispatchContext:(id<Translate_dataKotlinCoroutineContext>)context block:(id<Translate_dataKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<Translate_dataKotlinCoroutineContext>)context block:(id<Translate_dataKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<Translate_dataKotlinContinuation>)interceptContinuationContinuation:(id<Translate_dataKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<Translate_dataKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (Translate_dataKotlinx_coroutines_coreCoroutineDispatcher *)plusOther_:(Translate_dataKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<Translate_dataKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface Translate_dataKtor_client_coreHttpClientEngineConfig : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property Translate_dataKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property (readonly) Translate_dataKotlinNothing *response __attribute__((swift_name("response"))) __attribute__((unavailable("Response config is deprecated. See [HttpPlainText] feature for charset configuration")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount")));
@end;

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface Translate_dataKtor_utilsPipeline : KotlinBase
- (instancetype)initWithPhase:(Translate_dataKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<Translate_dataKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(Translate_dataKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(Translate_dataKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));
- (void)insertPhaseAfterReference:(Translate_dataKtor_utilsPipelinePhase *)reference phase:(Translate_dataKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(Translate_dataKtor_utilsPipelinePhase *)reference phase:(Translate_dataKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(Translate_dataKtor_utilsPipelinePhase *)phase block:(id<Translate_dataKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (void)mergeFrom:(Translate_dataKtor_utilsPipeline *)from __attribute__((swift_name("merge(from:)")));
@property (readonly) id<Translate_dataKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<Translate_dataKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface Translate_dataKtor_client_coreHttpReceivePipeline : Translate_dataKtor_utilsPipeline
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPhase:(Translate_dataKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<Translate_dataKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(Translate_dataKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface Translate_dataKtor_client_coreHttpRequestPipeline : Translate_dataKtor_utilsPipeline
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPhase:(Translate_dataKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<Translate_dataKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(Translate_dataKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface Translate_dataKtor_client_coreHttpResponsePipeline : Translate_dataKtor_utilsPipeline
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPhase:(Translate_dataKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<Translate_dataKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(Translate_dataKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface Translate_dataKtor_client_coreHttpSendPipeline : Translate_dataKtor_utilsPipeline
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPhase:(Translate_dataKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<Translate_dataKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(Translate_dataKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol Translate_dataKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol Translate_dataKotlinx_coroutines_coreChildHandle <Translate_dataKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(Translate_dataKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol Translate_dataKotlinx_coroutines_coreChildJob <Translate_dataKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<Translate_dataKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface Translate_dataKotlinRuntimeException : Translate_dataKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Translate_dataKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(Translate_dataKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface Translate_dataKotlinIllegalStateException : Translate_dataKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Translate_dataKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(Translate_dataKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCancellationException")))
@interface Translate_dataKotlinx_coroutines_coreCancellationException : Translate_dataKotlinIllegalStateException
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Translate_dataKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithCause:(Translate_dataKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinSequence")))
@protocol Translate_dataKotlinSequence
@required
- (id<Translate_dataKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol Translate_dataKotlinx_coroutines_coreSelectClause0
@required
- (void)registerSelectClause0Select:(id<Translate_dataKotlinx_coroutines_coreSelectInstance>)select block:(id<Translate_dataKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol Translate_dataKotlinCoroutineContextKey
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeCompositeEncoder")))
@protocol Translate_dataKotlinx_serialization_runtimeCompositeEncoder
@required
- (void)encodeBooleanElementDesc:(id<Translate_dataKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(desc:index:value:)")));
- (void)encodeByteElementDesc:(id<Translate_dataKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(desc:index:value:)")));
- (void)encodeCharElementDesc:(id<Translate_dataKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(desc:index:value:)")));
- (void)encodeDoubleElementDesc:(id<Translate_dataKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(desc:index:value:)")));
- (void)encodeFloatElementDesc:(id<Translate_dataKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(desc:index:value:)")));
- (void)encodeIntElementDesc:(id<Translate_dataKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(desc:index:value:)")));
- (void)encodeLongElementDesc:(id<Translate_dataKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(desc:index:value:)")));
- (void)encodeNonSerializableElementDesc:(id<Translate_dataKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(id)value __attribute__((swift_name("encodeNonSerializableElement(desc:index:value:)")));
- (void)encodeNullableSerializableElementDesc:(id<Translate_dataKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index serializer:(id<Translate_dataKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(desc:index:serializer:value:)")));
- (void)encodeSerializableElementDesc:(id<Translate_dataKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index serializer:(id<Translate_dataKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(desc:index:serializer:value:)")));
- (void)encodeShortElementDesc:(id<Translate_dataKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(desc:index:value:)")));
- (void)encodeStringElementDesc:(id<Translate_dataKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(desc:index:value:)")));
- (void)encodeUnitElementDesc:(id<Translate_dataKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("encodeUnitElement(desc:index:)")));
- (void)endStructureDesc:(id<Translate_dataKotlinx_serialization_runtimeSerialDescriptor>)desc __attribute__((swift_name("endStructure(desc:)")));
- (BOOL)shouldEncodeElementDefaultDesc:(id<Translate_dataKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(desc:index:)")));
@property (readonly) id<Translate_dataKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialModule")))
@protocol Translate_dataKotlinx_serialization_runtimeSerialModule
@required
- (void)dumpToCollector:(id<Translate_dataKotlinx_serialization_runtimeSerialModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<Translate_dataKotlinx_serialization_runtimeKSerializer> _Nullable)getContextualKclass:(id<Translate_dataKotlinKClass>)kclass __attribute__((swift_name("getContextual(kclass:)")));
- (id<Translate_dataKotlinx_serialization_runtimeKSerializer> _Nullable)getPolymorphicBaseClass:(id<Translate_dataKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<Translate_dataKotlinx_serialization_runtimeKSerializer> _Nullable)getPolymorphicBaseClass:(id<Translate_dataKotlinKClass>)baseClass serializedClassName:(NSString *)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol Translate_dataKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialKind")))
@interface Translate_dataKotlinx_serialization_runtimeSerialKind : KotlinBase
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeCompositeDecoder")))
@protocol Translate_dataKotlinx_serialization_runtimeCompositeDecoder
@required
- (BOOL)decodeBooleanElementDesc:(id<Translate_dataKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(desc:index:)")));
- (int8_t)decodeByteElementDesc:(id<Translate_dataKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeByteElement(desc:index:)")));
- (unichar)decodeCharElementDesc:(id<Translate_dataKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeCharElement(desc:index:)")));
- (int32_t)decodeCollectionSizeDesc:(id<Translate_dataKotlinx_serialization_runtimeSerialDescriptor>)desc __attribute__((swift_name("decodeCollectionSize(desc:)")));
- (double)decodeDoubleElementDesc:(id<Translate_dataKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(desc:index:)")));
- (int32_t)decodeElementIndexDesc:(id<Translate_dataKotlinx_serialization_runtimeSerialDescriptor>)desc __attribute__((swift_name("decodeElementIndex(desc:)")));
- (float)decodeFloatElementDesc:(id<Translate_dataKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeFloatElement(desc:index:)")));
- (int32_t)decodeIntElementDesc:(id<Translate_dataKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeIntElement(desc:index:)")));
- (int64_t)decodeLongElementDesc:(id<Translate_dataKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeLongElement(desc:index:)")));
- (id _Nullable)decodeNullableSerializableElementDesc:(id<Translate_dataKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<Translate_dataKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableElement(desc:index:deserializer:)")));
- (id _Nullable)decodeSerializableElementDesc:(id<Translate_dataKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<Translate_dataKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableElement(desc:index:deserializer:)")));
- (int16_t)decodeShortElementDesc:(id<Translate_dataKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeShortElement(desc:index:)")));
- (NSString *)decodeStringElementDesc:(id<Translate_dataKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeStringElement(desc:index:)")));
- (void)decodeUnitElementDesc:(id<Translate_dataKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeUnitElement(desc:index:)")));
- (void)endStructureDesc:(id<Translate_dataKotlinx_serialization_runtimeSerialDescriptor>)desc __attribute__((swift_name("endStructure(desc:)")));
- (id _Nullable)updateNullableSerializableElementDesc:(id<Translate_dataKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<Translate_dataKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableElement(desc:index:deserializer:old:)")));
- (id _Nullable)updateSerializableElementDesc:(id<Translate_dataKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<Translate_dataKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableElement(desc:index:deserializer:old:)")));
@property (readonly) id<Translate_dataKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@property (readonly) Translate_dataKotlinx_serialization_runtimeUpdateMode *updateMode __attribute__((swift_name("updateMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface Translate_dataKotlinNothing : KotlinBase
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol Translate_dataKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface Translate_dataKotlinEnum : KotlinBase <Translate_dataKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(Translate_dataKotlinEnum *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_runtimeUpdateMode")))
@interface Translate_dataKotlinx_serialization_runtimeUpdateMode : Translate_dataKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) Translate_dataKotlinx_serialization_runtimeUpdateMode *banned __attribute__((swift_name("banned")));
@property (class, readonly) Translate_dataKotlinx_serialization_runtimeUpdateMode *overwrite __attribute__((swift_name("overwrite")));
@property (class, readonly) Translate_dataKotlinx_serialization_runtimeUpdateMode *update __attribute__((swift_name("update")));
- (int32_t)compareToOther:(Translate_dataKotlinx_serialization_runtimeUpdateMode *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientFeature")))
@protocol Translate_dataKtor_client_coreHttpClientFeature
@required
- (void)installFeature:(id)feature scope:(Translate_dataKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(feature:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) Translate_dataKtor_utilsAttributeKey *key __attribute__((swift_name("key")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface Translate_dataKtor_utilsAttributeKey : KotlinBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinContinuation")))
@protocol Translate_dataKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<Translate_dataKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol Translate_dataKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface Translate_dataKtor_client_coreProxyConfig : KotlinBase
- (instancetype)initWithUrl:(Translate_dataKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Translate_dataKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface Translate_dataKtor_utilsPipelinePhase : KotlinBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinFunction")))
@protocol Translate_dataKotlinFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol Translate_dataKotlinSuspendFunction2 <Translate_dataKotlinFunction>
@required
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol Translate_dataKotlinx_coroutines_coreParentJob <Translate_dataKotlinx_coroutines_coreJob>
@required
- (Translate_dataKotlinx_coroutines_coreCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol Translate_dataKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnSelectHandle:(id<Translate_dataKotlinx_coroutines_coreDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicTrySelectDesc:(Translate_dataKotlinx_coroutines_coreAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectWithExceptionException:(Translate_dataKotlinThrowable *)exception __attribute__((swift_name("resumeSelectWithException(exception:)")));
- (BOOL)trySelect __attribute__((swift_name("trySelect()")));
- (id _Nullable)trySelectOtherOtherOp:(Translate_dataKotlinx_coroutines_corePrepareOp * _Nullable)otherOp __attribute__((swift_name("trySelectOther(otherOp:)")));
@property (readonly) id<Translate_dataKotlinContinuation> completion __attribute__((swift_name("completion")));
@property (readonly) BOOL isSelected __attribute__((swift_name("isSelected")));
@end;

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol Translate_dataKotlinSuspendFunction0 <Translate_dataKotlinFunction>
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialModuleCollector")))
@protocol Translate_dataKotlinx_serialization_runtimeSerialModuleCollector
@required
- (void)contextualKClass:(id<Translate_dataKotlinKClass>)kClass serializer:(id<Translate_dataKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<Translate_dataKotlinKClass>)baseClass actualClass:(id<Translate_dataKotlinKClass>)actualClass actualSerializer:(id<Translate_dataKotlinx_serialization_runtimeKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol Translate_dataKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol Translate_dataKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol Translate_dataKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol Translate_dataKotlinKClass <Translate_dataKotlinKDeclarationContainer, Translate_dataKotlinKAnnotatedElement, Translate_dataKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface Translate_dataKtor_httpUrl : KotlinBase
- (instancetype)initWithProtocol:(Translate_dataKtor_httpURLProtocol *)protocol host:(NSString *)host specifiedPort:(int32_t)specifiedPort encodedPath:(NSString *)encodedPath parameters:(id<Translate_dataKtor_httpParameters>)parameters fragment:(NSString *)fragment user:(NSString * _Nullable)user password:(NSString * _Nullable)password trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:specifiedPort:encodedPath:parameters:fragment:user:password:trailingQuery:)"))) __attribute__((objc_designated_initializer));
- (Translate_dataKtor_httpURLProtocol *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (id<Translate_dataKtor_httpParameters>)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (BOOL)component9 __attribute__((swift_name("component9()")));
- (Translate_dataKtor_httpUrl *)doCopyProtocol:(Translate_dataKtor_httpURLProtocol *)protocol host:(NSString *)host specifiedPort:(int32_t)specifiedPort encodedPath:(NSString *)encodedPath parameters:(id<Translate_dataKtor_httpParameters>)parameters fragment:(NSString *)fragment user:(NSString * _Nullable)user password:(NSString * _Nullable)password trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("doCopy(protocol:host:specifiedPort:encodedPath:parameters:fragment:user:password:trailingQuery:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<Translate_dataKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) Translate_dataKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicDesc")))
@interface Translate_dataKotlinx_coroutines_coreAtomicDesc : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(Translate_dataKotlinx_coroutines_coreAtomicOp *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(Translate_dataKotlinx_coroutines_coreAtomicOp *)op __attribute__((swift_name("prepare(op:)")));
@property Translate_dataKotlinx_coroutines_coreAtomicOp *atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreOpDescriptor")))
@interface Translate_dataKotlinx_coroutines_coreOpDescriptor : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isEarlierThanThat:(Translate_dataKotlinx_coroutines_coreOpDescriptor *)that __attribute__((swift_name("isEarlierThan(that:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Translate_dataKotlinx_coroutines_coreAtomicOp * _Nullable atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_corePrepareOp")))
@interface Translate_dataKotlinx_coroutines_corePrepareOp : Translate_dataKotlinx_coroutines_coreOpDescriptor
- (instancetype)initWithAffected:(Translate_dataKotlinx_coroutines_coreLinkedListNode *)affected desc:(Translate_dataKotlinx_coroutines_coreAbstractAtomicDesc *)desc atomicOp:(Translate_dataKotlinx_coroutines_coreAtomicOp *)atomicOp __attribute__((swift_name("init(affected:desc:atomicOp:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishPrepare __attribute__((swift_name("finishPrepare()")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
@property (readonly) Translate_dataKotlinx_coroutines_coreLinkedListNode *affected __attribute__((swift_name("affected")));
@property (readonly) Translate_dataKotlinx_coroutines_coreAtomicOp *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) Translate_dataKotlinx_coroutines_coreAbstractAtomicDesc *desc __attribute__((swift_name("desc")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface Translate_dataKtor_httpURLProtocol : KotlinBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (Translate_dataKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol Translate_dataKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<Translate_dataKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end;

__attribute__((swift_name("Ktor_httpParameters")))
@protocol Translate_dataKtor_httpParameters <Translate_dataKtor_utilsStringValues>
@required
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicOp")))
@interface Translate_dataKotlinx_coroutines_coreAtomicOp : Translate_dataKotlinx_coroutines_coreOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(id _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)decideDecision:(id _Nullable)decision __attribute__((swift_name("decide(decision:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (id _Nullable)prepareAffected:(id _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
@property (readonly) Translate_dataKotlinx_coroutines_coreAtomicOp *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) BOOL isDecided __attribute__((swift_name("isDecided")));
@property (readonly) int64_t opSequence __attribute__((swift_name("opSequence")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLinkedListNode")))
@interface Translate_dataKotlinx_coroutines_coreLinkedListNode : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLastNode:(Translate_dataKotlinx_coroutines_coreLinkedListNode *)node __attribute__((swift_name("addLast(node:)")));
- (BOOL)addLastIfNode:(Translate_dataKotlinx_coroutines_coreLinkedListNode *)node condition:(Translate_dataBoolean *(^)(void))condition __attribute__((swift_name("addLastIf(node:condition:)")));
- (BOOL)addLastIfPrevNode:(Translate_dataKotlinx_coroutines_coreLinkedListNode *)node predicate:(Translate_dataBoolean *(^)(Translate_dataKotlinx_coroutines_coreLinkedListNode *))predicate __attribute__((swift_name("addLastIfPrev(node:predicate:)")));
- (BOOL)addLastIfPrevAndIfNode:(Translate_dataKotlinx_coroutines_coreLinkedListNode *)node predicate:(Translate_dataBoolean *(^)(Translate_dataKotlinx_coroutines_coreLinkedListNode *))predicate condition:(Translate_dataBoolean *(^)(void))condition __attribute__((swift_name("addLastIfPrevAndIf(node:predicate:condition:)")));
- (BOOL)addOneIfEmptyNode:(Translate_dataKotlinx_coroutines_coreLinkedListNode *)node __attribute__((swift_name("addOneIfEmpty(node:)")));
- (void)helpRemove __attribute__((swift_name("helpRemove()")));
- (BOOL)remove __attribute__((swift_name("remove()")));
- (id _Nullable)removeFirstIfIsInstanceOfOrPeekIfPredicate:(Translate_dataBoolean *(^)(id _Nullable))predicate __attribute__((swift_name("removeFirstIfIsInstanceOfOrPeekIf(predicate:)")));
- (Translate_dataKotlinx_coroutines_coreLinkedListNode * _Nullable)removeFirstOrNull __attribute__((swift_name("removeFirstOrNull()")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@property (readonly) Translate_dataKotlinx_coroutines_coreLinkedListNode *nextNode __attribute__((swift_name("nextNode")));
@property (readonly) Translate_dataKotlinx_coroutines_coreLinkedListNode *prevNode __attribute__((swift_name("prevNode")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAbstractAtomicDesc")))
@interface Translate_dataKotlinx_coroutines_coreAbstractAtomicDesc : Translate_dataKotlinx_coroutines_coreAtomicDesc
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(Translate_dataKotlinx_coroutines_coreAtomicOp *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)failureAffected:(Translate_dataKotlinx_coroutines_coreLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(Translate_dataKotlinx_coroutines_coreLinkedListNode *)affected next:(Translate_dataKotlinx_coroutines_coreLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(Translate_dataKotlinx_coroutines_corePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (void)onComplete __attribute__((swift_name("onComplete()")));
- (id _Nullable)onPreparePrepareOp:(Translate_dataKotlinx_coroutines_corePrepareOp *)prepareOp __attribute__((swift_name("onPrepare(prepareOp:)")));
- (id _Nullable)prepareOp:(Translate_dataKotlinx_coroutines_coreAtomicOp *)op __attribute__((swift_name("prepare(op:)")));
- (BOOL)retryAffected:(Translate_dataKotlinx_coroutines_coreLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
@property (readonly) Translate_dataKotlinx_coroutines_coreLinkedListNode *affectedNode __attribute__((swift_name("affectedNode")));
@end;

__attribute__((swift_name("KotlinMapEntry")))
@protocol Translate_dataKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
