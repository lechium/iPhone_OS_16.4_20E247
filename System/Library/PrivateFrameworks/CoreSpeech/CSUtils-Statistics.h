//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSUtils.h>

@interface CSUtils (Statistics)
+ (id)distributionDictionary:(id)arg1;	// IMP=0x0080000000002650
+ (id)getSiriLanguageWithEndpointId:(id)arg1 fallbackLanguage:(id)arg2;	// IMP=0x008000000002e773
+ (id)getSiriLanguageWithFallback:(id)arg1;	// IMP=0x008000000002e69d
+ (_Bool)isRemoteDarwinWithDeviceId:(id)arg1;	// IMP=0x0080000000074080
+ (_Bool)hasRemoteBuiltInMic;	// IMP=0x0080000000074078
+ (_Bool)readAudioChunksFrom:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00800000000b2df7
+ (void)iterateBitset:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00800000000d538c
+ (unsigned int)getNumElementInBitset:(unsigned long long)arg1;	// IMP=0x00800000000d52d2
+ (_Bool)xpcConnection:(id)arg1 hasEntitlement:(id)arg2;	// IMP=0x00800000000e4db9
+ (void)getTrialIdsForAssetType:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0080000000107530
+ (unsigned long long)getAssetTypeForNamespace:(id)arg1;	// IMP=0x0080000000107528
+ (id)recordContextString:(id)arg1;	// IMP=0x0080000000107c35
+ (_Bool)isValidRecordContext:(id)arg1;	// IMP=0x0080000000107c2d
+ (_Bool)isRecordContextJarvisButtonPress:(id)arg1;	// IMP=0x0080000000107bcd
+ (_Bool)isRecordContextJarvisVoiceTrigger:(id)arg1;	// IMP=0x0080000000107b6d
+ (_Bool)isRecordContextRaiseToSpeak:(id)arg1;	// IMP=0x0080000000107b0d
+ (_Bool)isRecordContextHearstDoubleTap:(id)arg1;	// IMP=0x0080000000107aad
+ (_Bool)isRecordContextHearstVoiceTrigger:(id)arg1;	// IMP=0x0080000000107a4d
+ (_Bool)isRecordContextSpeakerIdTrainingTrigger:(id)arg1;	// IMP=0x00800000001079ed
+ (_Bool)isRecordContextAutoPrompt:(id)arg1;	// IMP=0x008000000010798d
+ (_Bool)isRecordContextHomeButtonPress:(id)arg1;	// IMP=0x008000000010792d
+ (_Bool)isRecordContextRemoraVoiceTrigger:(id)arg1;	// IMP=0x00800000001078cd
+ (_Bool)isRecordContextDarwinVoiceTrigger:(id)arg1;	// IMP=0x008000000010786d
+ (_Bool)isRecordContextBuiltInVoiceTrigger:(id)arg1;	// IMP=0x008000000010780d
+ (_Bool)isRecordContextVoiceTrigger:(id)arg1;	// IMP=0x008000000010774f
@end
