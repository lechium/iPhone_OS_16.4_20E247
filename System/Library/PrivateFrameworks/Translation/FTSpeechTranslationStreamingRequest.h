//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTAudioPacket, FTFinishAudio, FTLanguageDetected, FTResetServerEndpointer, FTSetEndpointerState, FTSpeechTranslationAudioPacket, FTStartSpeechTranslationLoggingRequest, FTStartSpeechTranslationRequest, NSData, NSMutableDictionary;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTSpeechTranslationStreamingRequest : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct SpeechTranslationStreamingRequest *_root;	// 24 = 0x18
}

+ (long long)content_typeForImmutableObject:(id)arg1;	// IMP=0x0010000000178c0e
+ (Class)content_immutableClassForType:(long long)arg1;	// IMP=0x0010000000178bd4
- (void).cxx_destruct;	// IMP=0x000000000017930a
- (id)flatbuffData;	// IMP=0x0000000000179192
- (Offset_c5a53c72)addObjectToBuffer:(void *)arg1;	// IMP=0x0000000000178d84
@property(readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content;
@property(readonly, nonatomic) FTStartSpeechTranslationLoggingRequest *contentAsFTStartSpeechTranslationLoggingRequest;
@property(readonly, nonatomic) FTResetServerEndpointer *contentAsFTResetServerEndpointer;
@property(readonly, nonatomic) FTSetEndpointerState *contentAsFTSetEndpointerState;
@property(readonly, nonatomic) FTFinishAudio *contentAsFTFinishAudio;
@property(readonly, nonatomic) FTSpeechTranslationAudioPacket *contentAsFTSpeechTranslationAudioPacket;
@property(readonly, nonatomic) FTAudioPacket *contentAsFTAudioPacket;
@property(readonly, nonatomic) FTLanguageDetected *contentAsFTLanguageDetected;
@property(readonly, nonatomic) FTStartSpeechTranslationRequest *contentAsFTStartSpeechTranslationRequest;
@property(readonly, nonatomic) long long content_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000178391
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechTranslationStreamingRequest *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000001781c3
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechTranslationStreamingRequest *)arg2;	// IMP=0x00000000001781ad
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000178192
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000017817a

@end

