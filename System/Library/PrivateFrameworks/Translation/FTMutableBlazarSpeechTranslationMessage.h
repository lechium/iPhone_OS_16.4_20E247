//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FTAudioLimitExceeded, FTAudioPacket, FTClientSetupInfo, FTFinalBlazarResponse, FTFinishAudio, FTLanguageDetected, FTRecognitionCandidate, FTRecognitionProgress, FTRequestStatsResponse, FTResetServerEndpointer, FTServerEndpointFeatures, FTSetEndpointerState, FTSpeechTranslationAudioPacket, FTSpeechTranslationFinalRecognitionResponse, FTSpeechTranslationMtResponse, FTSpeechTranslationPartialRecognitionResponse, FTSpeechTranslationServerEndpointFeatures, FTSpeechTranslationTextToSpeechResponse, FTStartSpeechTranslationLoggingRequest, FTStartSpeechTranslationRequest, NSObject;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTMutableBlazarSpeechTranslationMessage
{
}

+ (long long)session_message_typeForObject:(id)arg1;	// IMP=0x00600000000a26df
+ (long long)session_message_typeForMutableObject:(id)arg1;	// IMP=0x00600000000a2383
+ (Class)session_message_mutableClassForType:(long long)arg1;	// IMP=0x00600000000a2349
@property(copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message; // @dynamic session_message;
@property(copy, nonatomic) FTSpeechTranslationServerEndpointFeatures *session_messageAsFTSpeechTranslationServerEndpointFeatures;
@property(copy, nonatomic) FTClientSetupInfo *session_messageAsFTClientSetupInfo;
@property(copy, nonatomic) FTServerEndpointFeatures *session_messageAsFTServerEndpointFeatures;
@property(copy, nonatomic) FTRequestStatsResponse *session_messageAsFTRequestStatsResponse;
@property(copy, nonatomic) FTRecognitionCandidate *session_messageAsFTRecognitionCandidate;
@property(copy, nonatomic) FTRecognitionProgress *session_messageAsFTRecognitionProgress;
@property(copy, nonatomic) FTFinalBlazarResponse *session_messageAsFTFinalBlazarResponse;
@property(copy, nonatomic) FTSpeechTranslationTextToSpeechResponse *session_messageAsFTSpeechTranslationTextToSpeechResponse;
@property(copy, nonatomic) FTSpeechTranslationMtResponse *session_messageAsFTSpeechTranslationMtResponse;
@property(copy, nonatomic) FTAudioLimitExceeded *session_messageAsFTAudioLimitExceeded;
@property(copy, nonatomic) FTSpeechTranslationFinalRecognitionResponse *session_messageAsFTSpeechTranslationFinalRecognitionResponse;
@property(copy, nonatomic) FTSpeechTranslationPartialRecognitionResponse *session_messageAsFTSpeechTranslationPartialRecognitionResponse;
@property(copy, nonatomic) FTStartSpeechTranslationLoggingRequest *session_messageAsFTStartSpeechTranslationLoggingRequest;
@property(copy, nonatomic) FTResetServerEndpointer *session_messageAsFTResetServerEndpointer;
@property(copy, nonatomic) FTSetEndpointerState *session_messageAsFTSetEndpointerState;
@property(copy, nonatomic) FTFinishAudio *session_messageAsFTFinishAudio;
@property(copy, nonatomic) FTSpeechTranslationAudioPacket *session_messageAsFTSpeechTranslationAudioPacket;
@property(copy, nonatomic) FTAudioPacket *session_messageAsFTAudioPacket;
@property(copy, nonatomic) FTLanguageDetected *session_messageAsFTLanguageDetected;
@property(copy, nonatomic) FTStartSpeechTranslationRequest *session_messageAsFTStartSpeechTranslationRequest;
@property(nonatomic) long long session_message_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a0d2e
- (id)init;	// IMP=0x00000000000a0ca0

@end
