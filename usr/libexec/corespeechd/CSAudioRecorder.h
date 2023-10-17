//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVVoiceController, CSAudioFileReader, CSRemoteRecordClient, CSReusableBufferPool, NSHashTable, NSMutableDictionary, NSMutableSet, NSString;
@protocol CSAudioServerCrashEventProvidingDelegate, CSAudioSessionEventProvidingDelegate, OS_dispatch_queue;

@interface CSAudioRecorder : NSObject
{
    AVVoiceController *_voiceController;	// 8 = 0x8
    struct AudioBufferList _interleavedABL;	// 16 = 0x10
    struct AudioBufferList *_pNonInterleavedABL;	// 40 = 0x28
    CSRemoteRecordClient *_remoteRecordClient;	// 48 = 0x30
    NSMutableDictionary *_opusDecoders;	// 56 = 0x38
    CSAudioFileReader *_audioFileReader;	// 64 = 0x40
    unsigned long long _audioFilePathIndex;	// 72 = 0x48
    _Bool _waitingForDidStart;	// 80 = 0x50
    unsigned long long _pendingTwoShotVTToken;	// 88 = 0x58
    CSReusableBufferPool *_audioBufferPool;	// 96 = 0x60
    NSMutableDictionary *_hasSetAlertDictionary;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_queue;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_voiceControllerCreationQueue;	// 120 = 0x78
    NSHashTable *_observers;	// 128 = 0x80
    id <CSAudioServerCrashEventProvidingDelegate> _crashEventDelegate;	// 136 = 0x88
    id <CSAudioSessionEventProvidingDelegate> _sessionEventDelegate;	// 144 = 0x90
    NSMutableSet *_remoteAccessoryStreamIdSet;	// 152 = 0x98
}

+ (void)resetDuckSettings;	// IMP=0x00200000000556e1
+ (void)createSharedAudioSession;	// IMP=0x0010000000055046
+ (unsigned long long)_convertDeactivateOption:(unsigned long long)arg1;	// IMP=0x0010000000055037
- (void).cxx_destruct;	// IMP=0x002000000005ab03
@property(retain, nonatomic) NSMutableSet *remoteAccessoryStreamIdSet; // @synthesize remoteAccessoryStreamIdSet=_remoteAccessoryStreamIdSet;
@property(nonatomic) __weak id <CSAudioSessionEventProvidingDelegate> sessionEventDelegate; // @synthesize sessionEventDelegate=_sessionEventDelegate;
@property(nonatomic) __weak id <CSAudioServerCrashEventProvidingDelegate> crashEventDelegate; // @synthesize crashEventDelegate=_crashEventDelegate;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *voiceControllerCreationQueue; // @synthesize voiceControllerCreationQueue=_voiceControllerCreationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)_fetchRemoteRecordClientWithDeviceId:(id)arg1 streamHandleId:(unsigned long long)arg2;	// IMP=0x001000000005a784
- (id)_getRecordSettingsWithRequest:(id)arg1;	// IMP=0x001000000005a3d3
- (void)audioFileReaderDidStopRecording:(id)arg1 forReason:(long long)arg2;	// IMP=0x001000000005a3b9
- (void)audioFileReaderDidStartRecording:(id)arg1 successfully:(_Bool)arg2 error:(id)arg3;	// IMP=0x001000000005a307
- (void)audioFileReaderBufferAvailable:(id)arg1 buffer:(id)arg2 atTime:(unsigned long long)arg3;	// IMP=0x001000000005a296
- (_Bool)_needResetAudioInjectionIndex:(id)arg1;	// IMP=0x001000000005a1da
- (_Bool)_hasLocalPendingTwoShot;	// IMP=0x001000000005a025
- (void)remoteRecordConnectionDisconnected:(id)arg1;	// IMP=0x0010000000059e16
- (void)remoteRecordTwoShotDetectedAtTime:(double)arg1;	// IMP=0x0010000000059e10
- (void)remoteRecordLPCMBufferAvailable:(id)arg1 streamHandleId:(unsigned long long)arg2;	// IMP=0x0010000000059afa
- (void)remoteRecordDidStopRecordingWithWithStreamHandleId:(unsigned long long)arg1 error:(id)arg2;	// IMP=0x0010000000059a89
- (void)remoteRecordDidStartRecordingWithStreamHandleId:(unsigned long long)arg1 error:(id)arg2;	// IMP=0x00100000000599c9
- (void)voiceControllerMediaServicesWereReset:(id)arg1;	// IMP=0x001000000005994a
- (void)voiceControllerMediaServicesWereLost:(id)arg1;	// IMP=0x00100000000596cc
- (void)voiceControllerDidSetAudioSessionActive:(id)arg1 isActivated:(_Bool)arg2;	// IMP=0x0010000000059461
- (void)voiceControllerWillSetAudioSessionActive:(id)arg1 willActivate:(_Bool)arg2;	// IMP=0x00100000000591f6
- (void)voiceControllerEndRecordInterruption:(id)arg1;	// IMP=0x0010000000058fdf
- (void)voiceControllerBeginRecordInterruption:(id)arg1 withContext:(id)arg2;	// IMP=0x0010000000058d7d
- (void)voiceControllerBeginRecordInterruption:(id)arg1;	// IMP=0x0010000000058b66
- (void)voiceControllerEncoderErrorDidOccur:(id)arg1 error:(id)arg2;	// IMP=0x00100000000588c3
- (void)voiceControllerDidFinishAlertPlayback:(id)arg1 ofType:(int)arg2 error:(id)arg3;	// IMP=0x0010000000058641
- (void)voiceControllerRecordHardwareConfigurationDidChange:(id)arg1 toConfiguration:(int)arg2;	// IMP=0x0010000000058411
- (void)voiceControllerStreamInvalidated:(id)arg1 forStream:(unsigned long long)arg2;	// IMP=0x00100000000581e4
- (void)voiceControllerDidStopRecording:(id)arg1 forStream:(unsigned long long)arg2 forReason:(long long)arg3;	// IMP=0x00100000000580b2
- (void)voiceControllerAudioCallback:(id)arg1 forStream:(unsigned long long)arg2 buffer:(id)arg3;	// IMP=0x0010000000057f45
- (void)voiceControllerDidStartRecording:(id)arg1 forStream:(unsigned long long)arg2 successfully:(_Bool)arg3 error:(id)arg4;	// IMP=0x0010000000057d6a
- (void)_audioRecorderDidStopRecordingForReason:(long long)arg1 streamHandleID:(unsigned long long)arg2;	// IMP=0x0010000000057bdd
- (void)_audioRecorderDidStartRecordingSuccessfully:(_Bool)arg1 streamHandleID:(unsigned long long)arg2 error:(id)arg3;	// IMP=0x0010000000057a36
- (id)metrics;	// IMP=0x0010000000057a20
- (float)averagePowerForChannel:(unsigned long long)arg1;	// IMP=0x0010000000057a17
- (float)peakPowerForChannel:(unsigned long long)arg1;	// IMP=0x0010000000057a0e
- (void)updateMeters;	// IMP=0x0010000000057a08
- (void)setMeteringEnabled:(_Bool)arg1;	// IMP=0x0010000000057a02
- (unsigned long long)alertStartTime;	// IMP=0x00100000000579ec
- (_Bool)playAlertSoundForType:(long long)arg1 recordDevideIndicator:(id)arg2;	// IMP=0x00100000000578b0
- (_Bool)playRecordStartingAlertAndResetEndpointerFromStream:(unsigned long long)arg1;	// IMP=0x00100000000577a9
- (_Bool)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2 force:(_Bool)arg3;	// IMP=0x0010000000057668
- (_Bool)_audioIsFromRemoteAccessory:(unsigned long long)arg1;	// IMP=0x0010000000057603
- (void)_stopTrackingRemoteAccessoryStreamId:(unsigned long long)arg1;	// IMP=0x0010000000057540
- (void)_trackRemoteAccessoryStreamIdIfNeeded:(id)arg1;	// IMP=0x001000000005737c
- (void)audioDecoderDidDecodePackets:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 remoteVAD:(id)arg4 timestamp:(unsigned long long)arg5 arrivalTimestampToAudioRecorder:(unsigned long long)arg6 wasBuffered:(_Bool)arg7 receivedNumChannels:(unsigned int)arg8;	// IMP=0x00100000000570e5
- (id)_compensateChannelDataIfNeeded:(id)arg1 receivedNumChannels:(unsigned int)arg2;	// IMP=0x0010000000056f04
- (void)_processAudioBuffer:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 arrivalTimestampToAudioRecorder:(unsigned long long)arg3;	// IMP=0x00100000000562f5
- (void)_processAudioChain:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 remoteVAD:(id)arg3 atTime:(unsigned long long)arg4 arrivalTimestampToAudioRecorder:(unsigned long long)arg5 numberOfChannels:(int)arg6;	// IMP=0x00100000000560bc
- (_Bool)_shouldUseRemoteBuiltInMic:(id)arg1;	// IMP=0x0010000000056063
- (id)_updateLanguageCodeForRemoteVTEIResult:(id)arg1;	// IMP=0x0010000000055f03
- (_Bool)isDuckingSupportedOnCurrentRouteWithStreamHandleID:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0010000000055ded
- (id)voiceTriggerInfoWithRecordDeviceIndicator:(id)arg1;	// IMP=0x0010000000055bfd
- (id)playbackRoute;	// IMP=0x0010000000055be7
- (void)configureAlertBehavior:(id)arg1 audioStreamHandleId:(unsigned long long)arg2;	// IMP=0x0010000000055a6f
- (void)enableMiniDucking:(_Bool)arg1;	// IMP=0x00100000000558c5
- (void)setDuckMixWithOthersForStream:(unsigned long long)arg1 duckOthers:(_Bool)arg2 duckToLevelInDB:(id)arg3 mixWithOthers:(_Bool)arg4;	// IMP=0x0010000000055415
- (void)enableSmartRoutingConsiderationForStream:(unsigned long long)arg1 enable:(_Bool)arg2;	// IMP=0x0010000000055211
- (_Bool)deactivateAudioSession:(unsigned long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0010000000054e71
- (_Bool)deactivateAudioSession:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0010000000054ccb
- (_Bool)activateAudioSessionWithReason:(unsigned long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0010000000054986
- (_Bool)setRecordMode:(long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00100000000547c2
- (void)_logResourceNotAvailableErrorIfNeeded:(id)arg1;	// IMP=0x00100000000546d6
- (_Bool)_shouldLogResourceNotAvailableError;	// IMP=0x001000000005457f
- (_Bool)prewarmAudioSessionWithStreamHandleId:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0010000000054446
- (_Bool)isNarrowBandWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x0010000000054272
- (id)recordSettingsWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x001000000005425c
- (float)recordingSampleRateWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x00100000000540ad
- (id)audioDeviceInfoWithStreamHandleId:(unsigned long long)arg1 recordDeviceIndicator:(id)arg2;	// IMP=0x0010000000053ca4
- (id)recordDeviceInfoWithStreamHandleId:(unsigned long long)arg1 recordDeviceIndicator:(id)arg2;	// IMP=0x00100000000539b2
- (id)recordRouteWithRecordDeviceIndicator:(id)arg1;	// IMP=0x00100000000538a4
- (_Bool)isRecordingWithRecordDeviceIndicator:(id)arg1;	// IMP=0x001000000005381d
- (_Bool)isSessionCurrentlyActivated;	// IMP=0x00100000000536fb
- (_Bool)stopAudioStreamWithRecordDeviceIndicator:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000053370
- (_Bool)startAudioStreamWithOption:(id)arg1 recordDeviceIndicator:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000052c52
- (_Bool)_startAudioStreamForAudioInjectionWithAVVCContext:(id)arg1;	// IMP=0x0010000000052707
- (_Bool)_shouldInjectAudio;	// IMP=0x00100000000526bc
- (_Bool)prepareAudioStreamRecord:(id)arg1 recordDeviceIndicator:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000521c7
- (_Bool)setCurrentContext:(id)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0010000000051ea9
- (void)setContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000051919
- (void)setAnnounceCallsEnabled:(_Bool)arg1 withStreamHandleID:(unsigned long long)arg2;	// IMP=0x0010000000051851
- (id)_voiceControllerWithError:(id *)arg1;	// IMP=0x00100000000514ac
- (void)_destroyVoiceController;	// IMP=0x0010000000051385
- (void)dealloc;	// IMP=0x00100000000512bb
- (void)willDestroy;	// IMP=0x0010000000050fbb
- (void)userSessionActivateMonitor:(id)arg1 didReceivedUserSessionActiveHasChanged:(_Bool)arg2;	// IMP=0x0010000000050ecb
- (void)setAudioSessionEventDelegate:(id)arg1;	// IMP=0x0010000000050e26
- (void)setAudioServerCrashEventDelegate:(id)arg1;	// IMP=0x0010000000050d81
- (void)unregisterObserver:(id)arg1;	// IMP=0x0010000000050cd5
- (void)registerObserver:(id)arg1;	// IMP=0x0010000000050c29
- (id)initWithQueue:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005079d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
