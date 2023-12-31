//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, VCSessionUplinkVideoStreamController, VCVideoRule;

__attribute__((visibility("hidden")))
@interface VCVideoStreamSendGroup
{
    int _captureSource;	// 496 = 0x1f0
    _Atomic unsigned char _videoPriority;	// 500 = 0x1f4
    unsigned char _lastVideoPriority;	// 501 = 0x1f5
    _Bool _videoPriorityEnabled;	// 502 = 0x1f6
    long long _maxSupportedMultiwayVideoResolution;	// 504 = 0x1f8
    struct CGSize _maxScreenCaptureSize;	// 512 = 0x200
    int _captureFrameRate;	// 528 = 0x210
    int _maxSupportedCaptureFrameRate;	// 532 = 0x214
    NSMutableSet *_videoPayloadTypes;	// 536 = 0x218
    VCSessionUplinkVideoStreamController *_uplinkVideoStreamController;	// 544 = 0x220
    struct tagVCMemoryPool *_videoRedundancyPool;	// 552 = 0x228
    struct opaqueCMSimpleQueue *_videoRedundancyChangeEventQueue;	// 560 = 0x230
    double _fecRatio;	// 568 = 0x238
    VCVideoRule *_captureVideoRule;	// 576 = 0x240
    NSMutableDictionary *_pendingActiveUplinkStreams;	// 584 = 0x248
    NSMutableArray *_temporalStreamsIDs;	// 592 = 0x250
    id _clientCaptureController;	// 600 = 0x258
    unsigned int _activeTemporalTierBitmap;	// 608 = 0x260
    id _videoSinkDelegate;	// 616 = 0x268
    _Bool _isStreamInputCaptureSource;	// 624 = 0x270
    _Bool _hasPeerSubscribedStreams;	// 625 = 0x271
    _Bool _allowSuspendProvisionedStreams;	// 626 = 0x272
    unsigned int _totalNumFramesReceived;	// 628 = 0x274
    unsigned int _totalNumFramesProcessed;	// 632 = 0x278
    _Bool _initTime;	// 636 = 0x27c
}

@property(nonatomic) int captureFrameRate; // @synthesize captureFrameRate=_captureFrameRate;
- (void)collectAndLogChannelMetrics:(CDStruct_b671a7c4 *)arg1;	// IMP=0x00000000003b3560
- (unsigned long long)maxStreamFrameRate;	// IMP=0x00000000003b315b
- (void)computeMaxScreenCaptureSize;	// IMP=0x00000000003b2c45
- (void)updateSendSampleRTPTimestamp:(unsigned int)arg1 sampleRate:(double)arg2 systemTime:(double)arg3;	// IMP=0x00000000003b2c39
- (void)vcMediaStreamDidDecryptionTimeOut:(id)arg1;	// IMP=0x00000000003b2ab4
- (void)vcMediaStreamDidRTCPTimeOut:(id)arg1;	// IMP=0x00000000003b292f
- (void)vcMediaStreamDidRTPTimeOut:(id)arg1;	// IMP=0x00000000003b27aa
- (void)redundancyController:(id)arg1 redundancyVectorDidChange:(CDStruct_d7e2e0ee)arg2;	// IMP=0x00000000003b2306
- (void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2;	// IMP=0x00000000003b2300
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;	// IMP=0x00000000003b1f06
- (void)frameRateIsBeingThrottled:(int)arg1 thermalLevelDidChange:(_Bool)arg2 powerLevelDidChange:(_Bool)arg3;	// IMP=0x00000000003b1de3
- (void)cameraAvailabilityDidChange:(_Bool)arg1;	// IMP=0x00000000003b1c59
- (void)thermalLevelDidChange:(int)arg1;	// IMP=0x00000000003b18c0
- (id)clientCaptureRule;	// IMP=0x00000000003b18af
- (void)avConferencePreviewError:(id)arg1;	// IMP=0x00000000003b16e0
- (CDUnknownBlockType)copyOnVideoFrameBlock;	// IMP=0x00000000003b164c
- (_Bool)onVideoFrame:(struct opaqueCMSampleBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2 attribute:(CDStruct_51555cf6)arg3;	// IMP=0x00000000003b10c9
- (void)sourceFrameRateDidChange:(unsigned int)arg1;	// IMP=0x00000000003b0e0e
- (void)controller:(id)arg1 didChangeActiveVideoStreams:(id)arg2;	// IMP=0x00000000003b075f
- (void)deregisterClientForScreenShare;	// IMP=0x00000000003b0759
- (void)registerClientForScreenShare;	// IMP=0x00000000003b0753
- (void)registerConfigForScreenShare;	// IMP=0x00000000003b074d
- (id)captureConfigForScreenShare;	// IMP=0x00000000003b0544
- (id)stopCapture;	// IMP=0x00000000003b02aa
- (id)startCapture;	// IMP=0x00000000003afad9
- (_Bool)enableRedundancy:(_Bool)arg1;	// IMP=0x00000000003af251
- (_Bool)shouldCompoundListIgnoreStream:(id)arg1 streamConfig:(id)arg2 activeStreamIds:(id)arg3;	// IMP=0x00000000003af1a2
- (_Bool)shouldSubscribeToStreamID:(id)arg1 peerSubscribedStreams:(id)arg2;	// IMP=0x00000000003aee50
- (id)streamDescriptionForMediaStreamConfig:(id)arg1;	// IMP=0x00000000003aec97
- (void)setActiveConnection:(id)arg1 uplinkBitrateCap:(unsigned int)arg2 activeMediaStreamIDs:(id)arg3 mediaBitrates:(id)arg4 rateChangeCounter:(unsigned int)arg5;	// IMP=0x00000000003aebe1
- (void)updateUplinkBitrateCapWifi:(unsigned int)arg1 activeStreamIDs:(id)arg2;	// IMP=0x00000000003aeb5e
- (void)updateUplinkBitrateCapCell:(unsigned int)arg1 activeStreamIDs:(id)arg2;	// IMP=0x00000000003aeadb
- (_Bool)updateUplinkStreamsForPeerSubscribedStreams:(id)arg1;	// IMP=0x00000000003ae624
- (id)activeStreamKeys;	// IMP=0x00000000003ae3ba
- (void)dispatchedUpdateActiveMediaStreamIDs:(id)arg1 withTargetBitrate:(unsigned int)arg2 mediaBitrates:(id)arg3 rateChangeCounter:(unsigned int)arg4;	// IMP=0x00000000003adbd4
- (void)updateSuspendedState;	// IMP=0x00000000003adbce
- (void)deregisterForScreenCapture;	// IMP=0x00000000003adbc8
- (id)registerForScreenCapture;	// IMP=0x00000000003adbc0
- (unsigned int)getPixelFormat;	// IMP=0x00000000003adb71
- (void)deregisterForVideoCapture;	// IMP=0x00000000003adb6b
- (void)registerForVideoCapture:(int)arg1;	// IMP=0x00000000003adb65
- (struct CGSize)getCaptureEncodingSize;	// IMP=0x00000000003adaca
- (void)flushVideoRedundancyEventQueue;	// IMP=0x00000000003ada7c
- (void)setupVideoPriority;	// IMP=0x00000000003ad66e
- (void)updateEnabledState;	// IMP=0x00000000003ad3d3
- (id)willStart;	// IMP=0x00000000003ad341
- (_Bool)generateKeyFrameWithStreamID:(id)arg1 firType:(int)arg2;	// IMP=0x00000000003ad0a3
- (id)uplinkVideoStreamControllerForMode:(unsigned int)arg1;	// IMP=0x00000000003acb92
- (int)maxCaptureCameraFrameRateForMode:(unsigned int)arg1;	// IMP=0x00000000003aca71
- (int)maxCaptureFrameRateForMode:(unsigned int)arg1;	// IMP=0x00000000003aca40
- (long long)maxCaptureResolution;	// IMP=0x00000000003aca35
- (void)cleanupRedundancySettings;	// IMP=0x00000000003ac9f1
- (void)setupPayloadTypes;	// IMP=0x00000000003ac769
- (id)setupRedundancyControllerForMode:(unsigned int)arg1;	// IMP=0x00000000003ac2b7
- (_Bool)setupRedundancySettings;	// IMP=0x00000000003ac0a7
- (_Bool)setupStreamGroupWithConfig:(id)arg1;	// IMP=0x00000000003abfdd
- (void)dealloc;	// IMP=0x00000000003abf36
- (id)initWithConfig:(id)arg1;	// IMP=0x00000000003ab83c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

