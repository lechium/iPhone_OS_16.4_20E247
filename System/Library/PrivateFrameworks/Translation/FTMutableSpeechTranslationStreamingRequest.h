//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FTAudioPacket, FTFinishAudio, FTLanguageDetected, FTResetServerEndpointer, FTSetEndpointerState, FTSpeechTranslationAudioPacket, FTStartSpeechTranslationLoggingRequest, FTStartSpeechTranslationRequest, NSObject;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTMutableSpeechTranslationStreamingRequest
{
}

+ (long long)content_typeForObject:(id)arg1;	// IMP=0x006000000018c913
+ (long long)content_typeForMutableObject:(id)arg1;	// IMP=0x006000000018c79d
+ (Class)content_mutableClassForType:(long long)arg1;	// IMP=0x006000000018c763
@property(copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content; // @dynamic content;
@property(copy, nonatomic) FTStartSpeechTranslationLoggingRequest *contentAsFTStartSpeechTranslationLoggingRequest;
@property(copy, nonatomic) FTResetServerEndpointer *contentAsFTResetServerEndpointer;
@property(copy, nonatomic) FTSetEndpointerState *contentAsFTSetEndpointerState;
@property(copy, nonatomic) FTFinishAudio *contentAsFTFinishAudio;
@property(copy, nonatomic) FTSpeechTranslationAudioPacket *contentAsFTSpeechTranslationAudioPacket;
@property(copy, nonatomic) FTAudioPacket *contentAsFTAudioPacket;
@property(copy, nonatomic) FTLanguageDetected *contentAsFTLanguageDetected;
@property(copy, nonatomic) FTStartSpeechTranslationRequest *contentAsFTStartSpeechTranslationRequest;
@property(nonatomic) long long content_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000018bd3c
- (id)init;	// IMP=0x000000000018bcae

@end
