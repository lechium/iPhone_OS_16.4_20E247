//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSMutableDictionary, NSNumber, NSObject, NSString, TimingCollection, VCAudioCaptionsCoordinator, VCPositionalInfo, VCSessionBandwidthAllocationTable, VCSessionParticipantMediaStreamInfo;
@protocol OS_dispatch_source, OS_nw_activity;

__attribute__((visibility("hidden")))
@interface VCSessionParticipantRemote
{
    _Bool _remoteVideoEnabled;	// 368 = 0x170
    _Bool _remoteScreenEnabled;	// 369 = 0x171
    _Bool _remoteVideoPaused;	// 370 = 0x172
    _Bool _remoteSystemAudioPaused;	// 371 = 0x173
    _Bool _receivedFirstFrame;	// 372 = 0x174
    unsigned char _videoQuality;	// 373 = 0x175
    unsigned int _visibilityIndex;	// 376 = 0x178
    unsigned int _prominenceIndex;	// 380 = 0x17c
    VCSessionBandwidthAllocationTable *_mediaTable;	// 384 = 0x180
    VCSessionBandwidthAllocationTable *_repairMediaTable;	// 392 = 0x188
    _Bool _isVideoDegraded;	// 400 = 0x190
    _Bool _isRedundancyRequested;	// 401 = 0x191
    _Bool _isRemoteMediaStalled;	// 402 = 0x192
    struct tagVCAudioStreamGroupPriorityInfo _mediaPriorityInfo;	// 404 = 0x194
    TimingCollection *_perfTimers;	// 440 = 0x1b8
    _Bool _haveReportedPerfTimers;	// 448 = 0x1c0
    _Bool _isMediaSuspended;	// 449 = 0x1c1
    _Bool _oneToOneVideoEnabled;	// 450 = 0x1c2
    _Bool _isServerRTxEnabled;	// 451 = 0x1c3
    struct _VCSessionParticipantCapabilities _capabilities;	// 452 = 0x1c4
    VCPositionalInfo *_positionalInfo;	// 472 = 0x1d8
    struct __CFDictionary *_mediaTypeToSpatialAudioMetadataEntryMap;	// 480 = 0x1e0
    NSObject<OS_nw_activity> *_nwActivity;	// 488 = 0x1e8
    NSObject<OS_nw_activity> *_participantPoorConnectionNwActivity;	// 496 = 0x1f0
    NSObject<OS_nw_activity> *_participantMediaStallNwActivity;	// 504 = 0x1f8
    double _lastVideoExpectationSwitch;	// 512 = 0x200
    _Bool _isVideoExpected;	// 520 = 0x208
    _Bool _isVideoJitterForPlayoutEnabled;	// 521 = 0x209
    _Bool _remoteAudioEnabled;	// 522 = 0x20a
    _Bool _remoteAudioPaused;	// 523 = 0x20b
    _Bool _remoteScreenEnabledStateChanged;	// 524 = 0x20c
    NSMutableDictionary *_jbSynchronizerPerSyncGroupID;	// 528 = 0x210
    NSMutableDictionary *_remoteMediaStates;	// 536 = 0x218
    NSObject<OS_dispatch_source> *_remoteStreamGroupStateUpdateTimer;	// 544 = 0x220
    VCAudioCaptionsCoordinator *_captionsCoordinator;	// 552 = 0x228
}

+ (unsigned int)maxNetworkBitrateForStreamGroupID:(unsigned int)arg1 videoQuality:(unsigned char)arg2 isLocalOnWiFi:(_Bool)arg3 isRedundancyRequested:(_Bool)arg4 isSharingEnabled:(_Bool)arg5;	// IMP=0x00100000001485bc
+ (unsigned int)maxFdatNetworkBitrateForVideoQuality:(unsigned char)arg1 isLocalOnWiFi:(_Bool)arg2 isRedundancyRequested:(_Bool)arg3;	// IMP=0x0010000000148597
+ (unsigned int)maxBdatNetworkBitrateForVideoQuality:(unsigned char)arg1 isLocalOnWiFi:(_Bool)arg2 isRedundancyRequested:(_Bool)arg3;	// IMP=0x0010000000148550
+ (unsigned int)maxFtxtNetworkBitrateForVideoQuality:(unsigned char)arg1 isLocalOnWiFi:(_Bool)arg2 isRedundancyRequested:(_Bool)arg3;	// IMP=0x00100000001484ee
+ (unsigned int)maxCameraNetworkBitrateForVideoQuality:(unsigned char)arg1 isLocalOnWiFi:(_Bool)arg2 isRedundancyRequested:(_Bool)arg3 isSharingEnabled:(_Bool)arg4;	// IMP=0x0010000000148064
+ (unsigned int)maxAudioNetworkBitrateForLocalInterfaceOnWiFi:(_Bool)arg1 isLowLatencyAudio:(_Bool)arg2;	// IMP=0x001000000014804f
+ (_Bool)isDeviceLargeScreen;	// IMP=0x0010000000148047
@property(nonatomic) _Bool isServerRTxEnabled; // @synthesize isServerRTxEnabled=_isServerRTxEnabled;
@property(nonatomic, getter=isRemoteAudioPaused) _Bool remoteAudioPaused; // @synthesize remoteAudioPaused=_remoteAudioPaused;
@property(nonatomic, getter=isRemoteAudioEnabled) _Bool remoteAudioEnabled; // @synthesize remoteAudioEnabled=_remoteAudioEnabled;
@property(readonly, nonatomic) VCPositionalInfo *positionalInfo; // @synthesize positionalInfo=_positionalInfo;
@property(nonatomic) struct _VCSessionParticipantCapabilities capabilities; // @synthesize capabilities=_capabilities;
@property(nonatomic, getter=isRemoteScreenEnabled) _Bool remoteScreenEnabled; // @synthesize remoteScreenEnabled=_remoteScreenEnabled;
@property(nonatomic, getter=isRemoteVideoPaused) _Bool remoteVideoPaused; // @synthesize remoteVideoPaused=_remoteVideoPaused;
@property(nonatomic) unsigned int prominenceIndex; // @synthesize prominenceIndex=_prominenceIndex;
@property(nonatomic) unsigned int visibilityIndex; // @synthesize visibilityIndex=_visibilityIndex;
@property(nonatomic) unsigned char videoQuality; // @synthesize videoQuality=_videoQuality;
@property(nonatomic, getter=isRemoteVideoEnabled) _Bool remoteVideoEnabled; // @synthesize remoteVideoEnabled=_remoteVideoEnabled;
- (void)updateAndHandleVideoMediaStall:(_Bool)arg1 isOneToOneStream:(_Bool)arg2;	// IMP=0x0000000000150c91
- (void)cancelAndReleaseFetchTimer;	// IMP=0x0000000000150ac0
- (void)createAndResumeFetchTimer;	// IMP=0x000000000015046e
- (_Bool)isSeamlessTransitionSupportedForStreamGroup:(id)arg1;	// IMP=0x0000000000150427
- (void)updateShouldEnableMLEnhance;	// IMP=0x00000000001501d4
- (void)setSharingEnabled:(_Bool)arg1;	// IMP=0x000000000015012f
- (void)setShouldEnableFaceZoom:(_Bool)arg1;	// IMP=0x000000000014ffd9
- (void)updateShouldEnableFaceZoom;	// IMP=0x000000000014fd79
- (_Bool)setupStreamGroups;	// IMP=0x000000000014f886
- (void)setupJBTargetSynchronizers;	// IMP=0x000000000014f322
- (void)createJitterBufferTargetEstimatorSynchronizer:(struct tagVCJBTargetEstimatorSynchronizer **)arg1 syncGroupID:(unsigned int)arg2;	// IMP=0x000000000014f095
- (_Bool)shouldSetupStreamGroupWithID:(unsigned int)arg1;	// IMP=0x000000000014ee7e
- (_Bool)shouldEnablePacketRetransmissionForStreamGroupID:(unsigned int)arg1;	// IMP=0x000000000014ee4a
- (_Bool)didNegotiateStreamGroupWithID:(unsigned int)arg1;	// IMP=0x000000000014ed22
- (id)newVideoStreamGroupWithStreamGroupConfig:(id)arg1;	// IMP=0x000000000014eae4
- (_Bool)setupStreamGroupWithConfig:(id)arg1;	// IMP=0x000000000014e189
- (_Bool)oneToOneIsSupportedVideoStreamGroup:(unsigned int)arg1;	// IMP=0x000000000014e16f
- (_Bool)oneToOneIsSupportedAudioStreamGroup:(unsigned int)arg1;	// IMP=0x000000000014e155
- (_Bool)addOneToOneStreamConfigToMediaStreamInfo:(id)arg1 negotiatorStreamGroupConfig:(id)arg2;	// IMP=0x000000000014da3e
- (id)newMediaStreamWithNegotiationConfig:(id)arg1 streamToken:(long long)arg2;	// IMP=0x000000000014d950
- (id)newStreamGroupConfigWithNegotiationConfig:(id)arg1;	// IMP=0x000000000014d18e
- (int)setupSpatialInfoForStreamGroupConfig:(id)arg1;	// IMP=0x000000000014cc22
- (int)spatialChannelIndex:(unsigned int *)arg1 spatialAudioSourceID:(unsigned long long *)arg2 forMediaType:(unsigned int)arg3;	// IMP=0x000000000014c7b8
- (void)setupMediaStreamGroupConfig:(id)arg1 withNegotiationConfig:(id)arg2;	// IMP=0x000000000014c582
- (id)newMediaStreamInfoWithNegotiationConfig:(id)arg1 streamToken:(long long)arg2;	// IMP=0x000000000014bbf9
- (id)newMediaStreamConfigWithStreamConfig:(id)arg1 streamGroupConfig:(id)arg2 maxIDSStreamIDCount:(unsigned int)arg3;	// IMP=0x000000000014b926
- (_Bool)setupStreamConfigWithCodecs:(id)arg1 streamConfig:(id)arg2 codecConfigs:(id)arg3 featureStringsDict:(id)arg4;	// IMP=0x000000000014b2c5
- (id)newMediaStreamConfigWithStreamGroupConfig:(id)arg1 streamConfig:(id)arg2 rateControlConfig:(id)arg3 multiwayConfig:(id)arg4;	// IMP=0x000000000014ab09
- (_Bool)setupVideoStreamConfiguration:(id)arg1 withStreamGroupStreamConfig:(id)arg2 codecConfigs:(id)arg3 multiwayConfig:(id)arg4 groupID:(unsigned int)arg5;	// IMP=0x000000000014a4b6
- (id)newMultiwayConfigWithStreamGroupStreamConfig:(id)arg1 maxIDSStreamIDCount:(unsigned int)arg2 groupID:(unsigned int)arg3;	// IMP=0x000000000014a29c
- (void)updateVideoMultiwayConfig:(id)arg1 withStreamGroupStreamConfig:(id)arg2;	// IMP=0x000000000014a135
- (void)updateScreenStreamConfigurationWithStreamGroupResult:(id)arg1 multiwayConfig:(id)arg2 screenStreamConfig:(id)arg3;	// IMP=0x0000000000149f47
@property(readonly, nonatomic) _Bool isVideoExpected;
- (void)setMediaSuspended:(_Bool)arg1 forStreamToken:(id)arg2;	// IMP=0x0000000000149c94
@property(readonly) _Bool isVisible;
@property(readonly) NSArray *mediaEntries;
- (void)validateMediaEntries:(id)arg1;	// IMP=0x000000000014928a
- (void)appendStreamGroupsMediaEntries:(id)arg1;	// IMP=0x0000000000148a66
- (unsigned char)cappedVideoQualityWithShouldLimitCameraQualityForPIP:(_Bool)arg1;	// IMP=0x000000000014881b
- (void)appendStreamGroup:(id)arg1 maxBitrate:(unsigned int)arg2 mediaEntries:(id)arg3;	// IMP=0x0000000000148642
- (void)setRemoteMediaStalled:(_Bool)arg1;	// IMP=0x0000000000147e23
- (void)setVideoDegraded:(_Bool)arg1;	// IMP=0x00000000001479ed
- (void)pushEventToNwActivity:(long long)arg1 started:(_Bool)arg2;	// IMP=0x0000000000147694
- (void)collectAudioChannelMetrics:(CDStruct_b671a7c4 *)arg1;	// IMP=0x00000000001474ab
- (void)collectVideoChannelMetrics:(CDStruct_b671a7c4 *)arg1;	// IMP=0x000000000014730d
- (void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2;	// IMP=0x0000000000147307
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;	// IMP=0x0000000000146c6d
- (void)didReceiveFirstFrameForStreamGroup:(id)arg1;	// IMP=0x0000000000146c0c
- (unsigned int)optedInNetworkBitrateForStreamGroup:(unsigned int)arg1;	// IMP=0x0000000000146bbf
- (unsigned int)actualNetworkBitrateForStreamGroup:(unsigned int)arg1;	// IMP=0x0000000000146b72
- (id)activeDownlinkStreamIDForStreamGroupID:(unsigned int)arg1;	// IMP=0x0000000000146b47
- (id)optedInStreamIDForStreamGroupID:(unsigned int)arg1;	// IMP=0x0000000000146b1c
- (void)setMoments:(id)arg1;	// IMP=0x000000000014693a
- (id)startScreenGroup;	// IMP=0x0000000000146932
- (id)stopAudioStreams;	// IMP=0x000000000014692a
- (id)startAudioIO;	// IMP=0x0000000000146922
- (unsigned int)actualNetworkBitrateWithAudioBitrates:(id)arg1;	// IMP=0x0000000000146775
- (void)setVideoStreamDelegate:(id)arg1;	// IMP=0x00000000001462aa
- (void)setVideoReceiverFeedbackDelegate:(id)arg1;	// IMP=0x0000000000146211
- (void)dispatchedSetVideoReceiverFeedbackDelegate:(id)arg1;	// IMP=0x0000000000145f6a
- (_Bool)configureWithOneToOneParticipantConfig:(id)arg1 operatingMode:(int)arg2;	// IMP=0x0000000000145c99
@property(readonly, nonatomic) unsigned int lastDisplayedFrameRTPTimestamp;
- (long long)participantMicrophoneToken;	// IMP=0x0000000000145b30
- (id)audioGroup;	// IMP=0x0000000000145abe
- (id)videoGroup;	// IMP=0x0000000000145a62
- (id)screenGroup;	// IMP=0x0000000000145a06
- (long long)participantScreenToken;	// IMP=0x00000000001459c6
@property(readonly, nonatomic) VCSessionParticipantMediaStreamInfo *screenStreamInfo;
@property(readonly, nonatomic) VCSessionParticipantMediaStreamInfo *cameraStreamInfo;
@property(readonly, nonatomic) VCSessionParticipantMediaStreamInfo *micStreamInfo;
- (_Bool)isScreenActive;	// IMP=0x00000000001458cb
- (void)updateAudioSpectrumState;	// IMP=0x0000000000145761
- (_Bool)isAudioActive;	// IMP=0x000000000014571c
- (void)negotiateAudioRules:(id)arg1;	// IMP=0x000000000014534a
- (id)recommendedStreamIDsForSelectedMediaEntries:(id)arg1 forceSeamlessTransition:(_Bool)arg2;	// IMP=0x0000000000144cc0
- (void)appendOptedInStreamID:(id)arg1 toOptInStreamsIDs:(id)arg2 targetBandwidthEntry:(id)arg3 forceSeamlessTransition:(_Bool)arg4;	// IMP=0x00000000001449db
@property(readonly, nonatomic) NSNumber *optedInVideoStreamID;
@property(readonly, nonatomic) NSNumber *optedInAudioStreamID;
- (void)setActiveStreamIDs:(id)arg1;	// IMP=0x0000000000144729
- (void)setMuted:(_Bool)arg1;	// IMP=0x0000000000144648
- (id)getAudioDumpName;	// IMP=0x0000000000144640
- (id)entryForStreamID:(id)arg1;	// IMP=0x0000000000144471
- (_Bool)setupBandwidthAllocationTableForMediaStreamConfigs:(id)arg1 streamGroupID:(unsigned int)arg2 entryType:(unsigned char)arg3;	// IMP=0x00000000001436ca
- (id)checkSubstreams:(id)arg1 forLowerQualityIndex:(unsigned int)arg2;	// IMP=0x0000000000143580
- (_Bool)setupAudioStreamConfiguration:(id)arg1 withStreamGroupConfig:(id)arg2 streamGroupStreamConfig:(id)arg3;	// IMP=0x0000000000142f13
- (_Bool)isStreamGroupActive:(id)arg1;	// IMP=0x0000000000142db0
- (_Bool)isActiveMediaType:(unsigned int)arg1;	// IMP=0x0000000000142c90
- (void)cleanupNwActivity;	// IMP=0x0000000000142bd2
- (void)completeAndReleaseNwActivity:(id)arg1 withReason:(int)arg2;	// IMP=0x0000000000142bb1
- (_Bool)configureAudioIOWithDeviceRole:(int)arg1 operatingMode:(int)arg2;	// IMP=0x0000000000142ba9
- (id)setupStreamRTP:(id)arg1;	// IMP=0x0000000000142b94
- (_Bool)isParticipantPeace:(id)arg1;	// IMP=0x0000000000142930
- (_Bool)supportsGFTSwitchToOneToOne;	// IMP=0x00000000001424f3
- (_Bool)supportsNegotiatedCoordinateSystem;	// IMP=0x0000000000142260
- (id)getMajorVersionNumber;	// IMP=0x0000000000141d68
- (_Bool)processParticipantInfo;	// IMP=0x00000000001413a7
- (void)updateOneToOneAudioPositionalInfo:(const struct tagVCSpatialAudioMetadataPositionalInfo *)arg1;	// IMP=0x000000000014137e
- (_Bool)isInCanvas;	// IMP=0x0000000000141361
- (void)updatePositionalInfo:(id)arg1 shouldReapply:(_Bool)arg2;	// IMP=0x00000000001411c6
- (void)updateDownlinkBandwithAllocatorClientConfigurations:(id)arg1;	// IMP=0x0000000000140cfd
- (id)applyVideoEnabledSetting:(_Bool)arg1;	// IMP=0x0000000000140916
- (void)dispatchedSetRemoteVideoPaused:(_Bool)arg1;	// IMP=0x0000000000140328
- (unsigned int)remoteMediaStateForMediaType:(unsigned int)arg1;	// IMP=0x00000000001402db
- (void)setRemoteMediaState:(unsigned int)arg1 forMediaType:(unsigned int)arg2;	// IMP=0x000000000013faa6
- (id)updateMediaState:(unsigned int)arg1 forStreamGroup:(id)arg2;	// IMP=0x000000000013f8c4
- (void)setTransitionToDisabled:(unsigned int)arg1;	// IMP=0x000000000013f650
- (void)setTransitionToPaused:(unsigned int)arg1;	// IMP=0x000000000013f324
- (void)setTransitionToEnabled:(unsigned int)arg1;	// IMP=0x000000000013f002
- (void)setRemoteSystemAudioPaused:(_Bool)arg1;	// IMP=0x000000000013ef6a
- (void)dispatchedSetRemoteSystemAudioPaused:(_Bool)arg1;	// IMP=0x000000000013eade
- (void)dispatchedSetRemoteScreenEnabled:(_Bool)arg1;	// IMP=0x000000000013e3ed
- (void)dispatchedSetRemoteVideoEnabled:(_Bool)arg1;	// IMP=0x000000000013ddfb
- (void)setVideoPaused:(_Bool)arg1;	// IMP=0x000000000013dbd2
- (void)dispatchedSetRemoteAudioEnabled:(_Bool)arg1;	// IMP=0x000000000013d724
- (void)dispatchedSetRemoteAudioPaused:(_Bool)arg1;	// IMP=0x000000000013d276
- (void)setAudioPaused:(_Bool)arg1;	// IMP=0x000000000013cf65
@property(readonly, nonatomic) NSDictionary *participantSpatialAudioSourceIDs;
- (int)storeSpatialAudioMetadataEntry:(void *)arg1 forMediaType:(unsigned int)arg2;	// IMP=0x000000000013c95b
- (void *)spatialMetadataEntryForMediaType:(unsigned int)arg1;	// IMP=0x000000000013c78f
- (void)cleanupSpatialAudio;	// IMP=0x000000000013c763
- (int)setupSpatialAudioWithMetadata:(void *)arg1 spatialMetadataEntryMap:(struct __CFDictionary *)arg2;	// IMP=0x000000000013bc8b
- (void)initializeParticipantType;	// IMP=0x000000000013ba4a
- (void)stop;	// IMP=0x000000000013b99c
- (void)start;	// IMP=0x000000000013b8ec
- (void)dealloc;	// IMP=0x000000000013b803
- (id)initWithConfig:(id)arg1 delegate:(id)arg2;	// IMP=0x000000000013a498

// Remaining properties
@property(readonly) NSString *uuid;

@end

