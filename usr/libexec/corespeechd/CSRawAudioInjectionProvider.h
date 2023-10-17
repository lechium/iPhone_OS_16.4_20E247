//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSHashTable, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CSRawAudioInjectionProvider
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_audioFeedTimer;	// 24 = 0x18
    struct __sFILE *_fp;	// 32 = 0x20
}

+ (void)createSharedAudioSession;	// IMP=0x00400000000a3220
- (void).cxx_destruct;	// IMP=0x00200000000a32bd
@property(nonatomic) struct __sFILE *fp; // @synthesize fp=_fp;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *audioFeedTimer; // @synthesize audioFeedTimer=_audioFeedTimer;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)enableSmartRoutingConsiderationForStream:(unsigned long long)arg1 enable:(_Bool)arg2;	// IMP=0x00100000000a3226
- (void)configureAlertBehavior:(id)arg1 audioStreamHandleId:(unsigned long long)arg2;	// IMP=0x00100000000a321a
- (id)metrics;	// IMP=0x00100000000a3212
- (void)enableMiniDucking:(_Bool)arg1;	// IMP=0x00100000000a320c
- (id)voiceTriggerInfoWithRecordDeviceIndicator:(id)arg1;	// IMP=0x00100000000a3204
- (_Bool)isSessionCurrentlyActivated;	// IMP=0x00100000000a31fc
- (float)averagePowerForChannel:(unsigned long long)arg1;	// IMP=0x00100000000a31f3
- (float)peakPowerForChannel:(unsigned long long)arg1;	// IMP=0x00100000000a31ea
- (void)updateMeters;	// IMP=0x00100000000a31e4
- (void)setMeteringEnabled:(_Bool)arg1;	// IMP=0x00100000000a31de
- (unsigned long long)alertStartTime;	// IMP=0x00100000000a31d6
- (_Bool)playAlertSoundForType:(long long)arg1 recordDevideIndicator:(id)arg2;	// IMP=0x00100000000a31ce
- (_Bool)playRecordStartingAlertAndResetEndpointerFromStream:(unsigned long long)arg1;	// IMP=0x00100000000a31c6
- (_Bool)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2 force:(_Bool)arg3;	// IMP=0x00100000000a31be
- (id)playbackRoute;	// IMP=0x00100000000a31b1
- (_Bool)duckOthersOption;	// IMP=0x00100000000a31a9
- (void)setDuckOthersOption:(_Bool)arg1;	// IMP=0x00100000000a31a3
- (_Bool)setRecordMode:(long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00100000000a319b
- (_Bool)deactivateAudioSession:(unsigned long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00100000000a3193
- (_Bool)activateAudioSessionWithReason:(unsigned long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00100000000a3112
- (_Bool)prewarmAudioSessionWithStreamHandleId:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00100000000a3091
- (_Bool)isNarrowBandWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x00100000000a3089
- (float)recordingSampleRateWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x00100000000a3070
- (id)recordSettingsWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x00100000000a3063
- (id)audioDeviceInfoWithStreamHandleId:(unsigned long long)arg1 recordDeviceIndicator:(id)arg2;	// IMP=0x00100000000a305b
- (id)recordDeviceInfoWithStreamHandleId:(unsigned long long)arg1 recordDeviceIndicator:(id)arg2;	// IMP=0x00100000000a3053
- (id)recordRouteWithRecordDeviceIndicator:(id)arg1;	// IMP=0x00100000000a3046
- (_Bool)isRecordingWithRecordDeviceIndicator:(id)arg1;	// IMP=0x00100000000a2fc5
- (_Bool)stopAudioStreamWithRecordDeviceIndicator:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000a2d96
- (void)_readAudioBufferAndFeed;	// IMP=0x00100000000a2b9a
- (_Bool)startAudioStreamWithOption:(id)arg1 recordDeviceIndicator:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000a27d7
- (_Bool)prepareAudioStreamRecord:(id)arg1 recordDeviceIndicator:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000a2756
- (_Bool)setCurrentContext:(id)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00100000000a26b1
- (void)setContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a25d9
- (void)setAudioSessionEventDelegate:(id)arg1;	// IMP=0x00100000000a25d3
- (void)setAudioServerCrashEventDelegate:(id)arg1;	// IMP=0x00100000000a25cd
- (void)unregisterObserver:(id)arg1;	// IMP=0x00100000000a2516
- (void)registerObserver:(id)arg1;	// IMP=0x00100000000a245f
- (void)dealloc;	// IMP=0x00100000000a23bb
- (id)init;	// IMP=0x00100000000a2292

@end
