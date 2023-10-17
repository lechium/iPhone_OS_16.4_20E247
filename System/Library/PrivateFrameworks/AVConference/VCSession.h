//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVCRateController, NSArray, NSDate, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSString, VCAudioCaptionsCoordinator, VCControlChannelMultiWay, VCMoments, VCNetworkFeedbackController, VCRateControlMediaController, VCSecurityKeyManager, VCSessionBitrateArbiter, VCSessionConfiguration, VCSessionDownlinkBandwidthAllocator, VCSessionMessaging, VCSessionParticipant, VCSessionParticipantLocal, VCSessionParticipantRemote, VCSessionPresentationInfo, VCSessionStatsController, VCSwitchManager, VCTransportSession;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_nw_activity, VCConnectionProtocol, VCSessionDelegate;

__attribute__((visibility("hidden")))
@interface VCSession
{
    unsigned int _state;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_sessionQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 40 = 0x28
    id <VCSessionDelegate> _delegate;	// 48 = 0x30
    NSString *_uuid;	// 56 = 0x38
    NSString *_idsDestination;	// 64 = 0x40
    VCControlChannelMultiWay *_controlChannel;	// 72 = 0x48
    VCSessionMessaging *_sessionMessaging;	// 80 = 0x50
    VCSessionConfiguration *_configuration;	// 88 = 0x58
    VCSessionParticipantLocal *_localParticipant;	// 96 = 0x60
    NSMutableDictionary *_remoteParticipantsMapByUUID;	// 104 = 0x68
    NSMutableDictionary *_remoteParticipantsMapByServerID;	// 112 = 0x70
    int _reportUpdateInterval;	// 120 = 0x78
    int _reportReportFrequency;	// 124 = 0x7c
    VCSessionStatsController *_sessionStatsController;	// 128 = 0x80
    VCNetworkFeedbackController *_feedbackController;	// 136 = 0x88
    NSMutableArray *_startingParticipants;	// 144 = 0x90
    NSMutableSet *_stoppingParticipants;	// 152 = 0x98
    NSMutableArray *_initializingParticipants;	// 160 = 0xa0
    VCSecurityKeyManager *_securityKeyManager;	// 168 = 0xa8
    VCTransportSession *_transportSession;	// 176 = 0xb0
    id <VCConnectionProtocol> _currentActiveConnection;	// 184 = 0xb8
    unsigned int _transportSessionID;	// 192 = 0xc0
    _Bool _localSourceNeedsReset;	// 196 = 0xc4
    struct _VCSessionOneToOneSettings _oneToOneSettings;	// 200 = 0xc8
    _Bool _switchFromGFTToOneToOneEnabled;	// 240 = 0xf0
    double _remoteMediaStallReconnectTimeout;	// 248 = 0xf8
    double _oneToOneSwitchStartTime;	// 256 = 0x100
    _Bool _isOneToOneInitiator;	// 264 = 0x108
    _Bool _oneToOneModeEnabled;	// 265 = 0x109
    _Bool _isReconnectPending;	// 266 = 0x10a
    _Bool _isOneToOneRemoteMediaStalling;	// 267 = 0x10b
    unsigned short _maxConnectionMTU;	// 268 = 0x10c
    _Bool _useReducedSizeRTCP;	// 270 = 0x10e
    AVCRateController *_uplinkRateController;	// 272 = 0x110
    AVCRateController *_downlinkRateController;	// 280 = 0x118
    unsigned int _uplinkTargetBitrate;	// 288 = 0x120
    unsigned int _downlinkTargetBitrate;	// 292 = 0x124
    VCRateControlMediaController *_uplinkMediaController;	// 296 = 0x128
    unsigned int _basebandFlushTransactionID;	// 304 = 0x130
    VCSessionDownlinkBandwidthAllocator *_downlinkBandwidthAllocator;	// 312 = 0x138
    NSMutableDictionary *_optInDictionary;	// 320 = 0x140
    double _sessionStartTime;	// 328 = 0x148
    struct tagVCMediaQueue *_mediaQueue;	// 336 = 0x150
    _Bool _forceDisableMediaPriority;	// 344 = 0x158
    NSError *_stopError;	// 352 = 0x160
    void *_spatialMetadata;	// 360 = 0x168
    _Bool _isGKVoiceChat;	// 368 = 0x170
    double _remoteMediaStallDisconnectTimeout;	// 376 = 0x178
    int _reportingModuleID;	// 384 = 0x180
    int _reportingClientType;	// 388 = 0x184
    VCAudioCaptionsCoordinator *_captionsCoordinator;	// 392 = 0x188
    NSObject<OS_nw_activity> *_parentNWActivity;	// 400 = 0x190
    NSObject<OS_nw_activity> *_nwActivity;	// 408 = 0x198
    NSObject<OS_nw_activity> *_nwActivityActiveSession;	// 416 = 0x1a0
    VCSessionPresentationInfo *_presentationInfo;	// 424 = 0x1a8
    VCSessionBitrateArbiter *_bitrateArbiter;	// 432 = 0x1b0
    NSString *_conversationID;	// 440 = 0x1b8
    NSDate *_conversationTimeBase;	// 448 = 0x1c0
    NSDate *_conversationTimeBaseTruncated;	// 456 = 0x1c8
    _Bool _forceFixedEncryptionLabel;	// 464 = 0x1d0
    VCSwitchManager *_switchManager;	// 472 = 0x1d8
    int _currentConnectionType;	// 480 = 0x1e0
    _Bool _sharingEnabled;	// 484 = 0x1e4
    struct __CFDictionary *_mediaTypeToSpatialMetadataEntryMap;	// 488 = 0x1e8
    unsigned long long _siriSpatialAudioSourceID;	// 496 = 0x1f0
    NSObject<OS_dispatch_semaphore> *_stopCompletedSemaphore;	// 504 = 0x1f8
    _Bool _didServerDie;	// 512 = 0x200
    _Bool _isServerPacketRetransmissionForVideoEnabled;	// 513 = 0x201
    _Bool _isSSRCCollisionDetectionEnabled;	// 514 = 0x202
    VCMoments *_moments;	// 520 = 0x208
}

+ (_Bool)isServerPacketRetransmissionEnabledForVideo;	// IMP=0x001000000022c3f6
+ (void)cleanupControlChannelParticipantConfig:(CDStruct_c24deb19 *)arg1;	// IMP=0x0010000000223c3f
+ (void)addUUIDToMutableData:(id)arg1 fromUUIDString:(id)arg2;	// IMP=0x0010000000223a41
+ (int)deviceRoleForSessionMode:(long long)arg1;	// IMP=0x001000000022045a
+ (void)terminateProcess:(id)arg1 terminateSource:(id)arg2 agent:(struct opaqueRTCReporting *)arg3;	// IMP=0x0010000000218786
+ (unsigned int)mediaStateForMediaStateMessageValue:(id)arg1;	// IMP=0x00100000003a75c7
+ (id)mediaStateMessageValueForMediaState:(unsigned int)arg1;	// IMP=0x00100000003a75a8
+ (unsigned int)mediaTypeForMediaStateMessageKey:(id)arg1;	// IMP=0x00100000003a74d4
+ (id)mediaStateMessageKeyForMediaType:(unsigned int)arg1;	// IMP=0x00100000003a74a8
+ (id)mediaStateMessageStreamGroupKeysForMediaType:(unsigned int)arg1;	// IMP=0x00100000003a72fe
@property(nonatomic) _Bool isOneToOneRemoteMediaStalling; // @synthesize isOneToOneRemoteMediaStalling=_isOneToOneRemoteMediaStalling;
@property(readonly, nonatomic) int reportingModuleID; // @synthesize reportingModuleID=_reportingModuleID;
@property(readonly, nonatomic) int reportingClientType; // @synthesize reportingClientType=_reportingClientType;
@property(nonatomic) _Bool sharingEnabled; // @synthesize sharingEnabled=_sharingEnabled;
@property(nonatomic) _Bool oneToOneModeEnabled; // @synthesize oneToOneModeEnabled=_oneToOneModeEnabled;
@property(retain, nonatomic) NSObject<OS_nw_activity> *nwActivity; // @synthesize nwActivity=_nwActivity;
@property(nonatomic, setter=setParentNWActivity:) NSObject<OS_nw_activity> *parentNWActivity; // @synthesize parentNWActivity=_parentNWActivity;
@property(readonly, nonatomic) VCSessionStatsController *sessionStatsController; // @synthesize sessionStatsController=_sessionStatsController;
@property(retain, nonatomic) VCSessionMessaging *sessionMessaging; // @synthesize sessionMessaging=_sessionMessaging;
@property(readonly, nonatomic) AVCRateController *downlinkRateController; // @synthesize downlinkRateController=_downlinkRateController;
@property(readonly, nonatomic) VCTransportSession *transportSession; // @synthesize transportSession=_transportSession;
@property(nonatomic) struct tagVCMediaQueue *mediaQueue; // @synthesize mediaQueue=_mediaQueue;
@property(retain, nonatomic) NSMutableDictionary *remoteParticipantsMapByServerID; // @synthesize remoteParticipantsMapByServerID=_remoteParticipantsMapByServerID;
@property(retain) NSMutableDictionary *optInDictionary; // @synthesize optInDictionary=_optInDictionary;
@property(retain, nonatomic) id <VCConnectionProtocol> currentActiveConnection; // @synthesize currentActiveConnection=_currentActiveConnection;
@property(readonly, nonatomic) unsigned int transportSessionID; // @synthesize transportSessionID=_transportSessionID;
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) NSString *idsDestination; // @synthesize idsDestination=_idsDestination;
@property(readonly, nonatomic) VCSessionParticipant *localParticipant; // @synthesize localParticipant=_localParticipant;
- (void)additionalFlushCountToOneToOneRateController:(unsigned int)arg1;	// IMP=0x000000000022c924
- (void)updateMomentsCapabillities:(unsigned int)arg1 imageType:(int)arg2 videoCodec:(int)arg3;	// IMP=0x000000000022c76c
- (void)didReceiveMomentsRequest:(id)arg1;	// IMP=0x000000000022c6c9
- (void)moments:(id)arg1 shouldProcessRequest:(id)arg2 recipientID:(id)arg3;	// IMP=0x000000000022c42e
- (void)mediaQualityDegraded:(_Bool)arg1;	// IMP=0x000000000022c346
- (void)preWarmStateChanged:(_Bool)arg1;	// IMP=0x000000000022c237
- (void)reportingIntervalChanged:(double)arg1;	// IMP=0x000000000022c21a
- (void)recommendedSettingsChanged:(id)arg1;	// IMP=0x000000000022c1df
- (void)unregisterReportingTask;	// IMP=0x000000000022c19d
- (void)registerReportingTask;	// IMP=0x000000000022bfd5
- (void)generateReportDictionary:(struct __CFDictionary *)arg1;	// IMP=0x000000000022b1b5
- (id)newNetworkBitrateString:(const CDStruct_b671a7c4 *)arg1;	// IMP=0x000000000022b124
- (void)dispatchedParticipant:(id)arg1 didStopWithError:(id)arg2;	// IMP=0x000000000022ae6b
- (void)processDidStop;	// IMP=0x000000000022ac59
- (void)remoteScreenAttributesDidChange:(id)arg1;	// IMP=0x000000000022aaeb
- (void)setupOneToOneVideoStreamDelegate;	// IMP=0x000000000022aaa8
- (void)setupOneToOneVideoReceiverDelegate;	// IMP=0x000000000022a9bb
- (void)dispatchedParticipant:(id)arg1 didStart:(_Bool)arg2 error:(id)arg3;	// IMP=0x0000000000229e7a
- (void)stopAllParticipants;	// IMP=0x0000000000229d0b
- (void)dispatchedUpdateConfiguration:(id)arg1;	// IMP=0x00000000002295a6
- (void)tearDown;	// IMP=0x0000000000229451
- (void)dispatchedTransportStop;	// IMP=0x000000000022941b
- (void)dispatchedStopWithError:(id)arg1 didRemoteCancel:(_Bool)arg2;	// IMP=0x0000000000228987
- (void)dispatchedStopWithError:(id)arg1;	// IMP=0x0000000000228973
- (void)stopMediaQueueOneToOne;	// IMP=0x0000000000228936
- (void)dispatchedStart;	// IMP=0x0000000000227b65
- (void)dispatchedRemoveParticipant:(id)arg1;	// IMP=0x00000000002276a5
- (void)dispatchedAddParticipantConfigurations:(id)arg1;	// IMP=0x000000000022757d
- (_Bool)configureRemoteParticipant:(id)arg1 withConfig:(id)arg2;	// IMP=0x000000000022728d
- (void)dispatchedAddParticipantWithConfig:(id)arg1;	// IMP=0x000000000022606c
- (void)reportingSessionRemoteParticipantEvent:(unsigned short)arg1 withParticipant:(id)arg2 value:(id)arg3;	// IMP=0x0000000000225dc4
- (void)collectSessionEventKeyFields:(struct __CFDictionary *)arg1 eventType:(unsigned short)arg2 withParticipant:(id)arg3 keyChangeReason:(id)arg4 newMKI:(id)arg5 withStreamID:(unsigned short)arg6;	// IMP=0x0000000000225763
- (void)reportingMomentsToGreenTeaWithRequest:(id)arg1;	// IMP=0x000000000022575d
- (void)reportingMomentsWithRequest:(id)arg1 recipientID:(id)arg2;	// IMP=0x0000000000225608
- (void)reportingSessionParticipantEvent:(unsigned short)arg1 withParticipant:(id)arg2 keyChangeReason:(id)arg3 newMKI:(id)arg4 withStreamID:(unsigned short)arg5;	// IMP=0x0000000000225245
- (void)reportingSessionParticipantEvent:(unsigned short)arg1 withParticipant:(id)arg2 keyChangeReason:(id)arg3 newMKI:(id)arg4;	// IMP=0x0000000000225223
- (void)reportingSessionParticipantEvent:(unsigned short)arg1 keyChangeReason:(id)arg2 newMKI:(id)arg3;	// IMP=0x00000000002251f9
- (void)reportingSessionParticipantEvent:(unsigned short)arg1 withParticipant:(id)arg2;	// IMP=0x00000000002251d1
- (void)reportingSessionParticipantEvent:(unsigned short)arg1 withStreamID:(unsigned short)arg2;	// IMP=0x00000000002251ab
- (struct __CFDictionary *)getClientSpecificUserInfo;	// IMP=0x00000000002250ea
- (id)computeConversationTimeBaseTruncated;	// IMP=0x0000000000225086
- (void)didEncryptionKeyRollTimeout;	// IMP=0x0000000000225010
- (void)resetDecryptionTimeout;	// IMP=0x0000000000224e8c
- (_Bool)handleEncryptionInfoChange:(id)arg1;	// IMP=0x0000000000224b78
- (_Bool)generateReceptionReportList:(struct _RTCP_RECEPTION_REPORT *)arg1 reportCount:(char *)arg2;	// IMP=0x0000000000224b70
- (void)setupMultiwayABTesting;	// IMP=0x0000000000224a20
- (void)cleanupNwActivity;	// IMP=0x00000000002249d5
- (void)cleanupVCRC;	// IMP=0x0000000000224994
- (void)sendSymptomsToRemoteParticipants:(id)arg1 symptom:(id)arg2 groupID:(id)arg3;	// IMP=0x000000000022465e
- (void)unregisterRemoteParticipantFromSession:(id)arg1;	// IMP=0x0000000000224449
- (void)removeDelegatesForRemoteParticipant:(id)arg1;	// IMP=0x0000000000224432
- (_Bool)registerRemoteParticipantToSession:(id)arg1;	// IMP=0x000000000022400a
- (_Bool)composeControlChannelParticipantConfig:(CDStruct_c24deb19 *)arg1 withRemoteParticipant:(id)arg2;	// IMP=0x0000000000223c8c
- (id)newEncryptionLabelWithLocalUUID:(id)arg1 remoteUUID:(id)arg2;	// IMP=0x0000000000223ae9
- (void)broadcastInitialMediaState;	// IMP=0x000000000022386d
- (void)messageMediaInitialStateToParticipant:(id)arg1;	// IMP=0x00000000002235f6
- (void)setDelegatesForRemoteParticipant:(id)arg1;	// IMP=0x00000000002235db
- (void)handleMembershipChangeInfoEvent:(id)arg1;	// IMP=0x00000000002234c8
- (void)handleEncryptionInfoEvent:(id)arg1;	// IMP=0x00000000002231f7
- (_Bool)detectSSRCCollisionWithRemoteMediaStream:(id)arg1 remoteBlobCreationTime:(union tagNTP)arg2 resetNeeded:(_Bool *)arg3;	// IMP=0x0000000000223045
- (_Bool)detectSSRCCollision:(id)arg1 resetNeeded:(_Bool *)arg2;	// IMP=0x0000000000222d95
- (void)optOutStreamWithIDSStreamIDs:(id)arg1;	// IMP=0x0000000000222cd7
- (void)optInStreamWithIDSStreamIDs:(id)arg1;	// IMP=0x0000000000222c19
- (void)updateLocalStreamConfiguration;	// IMP=0x00000000002228ff
- (void)updateLocalVideoCaptureFrameRate;	// IMP=0x000000000022207d
- (int)maxRemoteParticipants30fps;	// IMP=0x0000000000221fff
- (void)setMediaQueuePeakBitrateWithTargetBitrate:(unsigned int)arg1;	// IMP=0x0000000000221f18
- (void)handleMediaQueueSizeExceedThresholdWithQueueSize:(double)arg1 mediaQueueStreamId:(unsigned int)arg2 type:(int)arg3;	// IMP=0x0000000000221b13
- (void)createMediaQueue;	// IMP=0x000000000022190a
- (void)setupUplinkBitrateCaps;	// IMP=0x00000000002218a1
- (void)startRateControllersMultiwayFromOneToOne:(_Bool)arg1;	// IMP=0x00000000002216e9
- (void)updateMultiwayRateControllerWithActiveConnection:(id)arg1 isScreenEnabled:(_Bool)arg2 isLocal:(_Bool)arg3;	// IMP=0x000000000022159b
- (void)cleanupSpatialAudio;	// IMP=0x0000000000221400
- (int)reserveAudioChannelForMediaType:(unsigned int)arg1 spatialAudioSourceID:(unsigned long long)arg2;	// IMP=0x0000000000221222
- (int)setupSpatialAudio;	// IMP=0x0000000000220d8c
- (void)didRemoveSpatialMetadataEntry;	// IMP=0x0000000000220d01
- (void)setupRateControllersMultiway;	// IMP=0x0000000000220b34
- (id)vcrcServerBagWithOperatingMode:(int)arg1;	// IMP=0x000000000022097e
- (void)setSessionInfoSynchronizerPeerSubscribedStreamsCallback;	// IMP=0x00000000002207b7
- (void)setSessionInfoSynchronizerErrorResponseCallback;	// IMP=0x00000000002204a6
- (void)setSessionInfoSynchronizerCallbacks;	// IMP=0x0000000000220478
- (void)reportingSessionStopEventWithError:(id)arg1;	// IMP=0x00000000002201b7
- (void)reportingSessionDownlinkOptInEvent:(id)arg1 selectedMediaEntriesForParticipants:(id)arg2;	// IMP=0x000000000021fc81
- (void)distributeBitrateAndOptInToStreamIDsWithSeamlessTransition:(_Bool)arg1;	// IMP=0x000000000021f3f1
- (void)updateParticipantConfigurations:(id)arg1;	// IMP=0x000000000021eee3
- (void)updateParticipantWindowState;	// IMP=0x000000000021ec85
- (void)sendRateControlConfigToRemoteParticipant:(id)arg1;	// IMP=0x000000000021eb44
- (void)applySpatialMetadata;	// IMP=0x000000000021e55e
- (void)updatePresentationInfo:(id)arg1;	// IMP=0x000000000021e21b
- (int)flushBasebandWithPayloads:(id)arg1;	// IMP=0x000000000021e213
- (void)mediaController:(void *)arg1 mediaSuggestionDidChange:(struct VCRateControlMediaSuggestion)arg2;	// IMP=0x000000000021e1a3
- (int)learntBitrateForSegment:(id)arg1 defaultValue:(int)arg2;	// IMP=0x000000000021e177
- (void)rateController:(id)arg1 targetBitrateDidChange:(unsigned int)arg2 rateChangeCounter:(unsigned int)arg3;	// IMP=0x000000000021dbcf
- (void)updateNetworkFeedbackControllerReport:(CDStruct_4b4d87a1 *)arg1;	// IMP=0x000000000021da32
- (void)didReceivedSessionStatsAtTime:(double)arg1;	// IMP=0x000000000021d99f
- (void)didServerDie;	// IMP=0x000000000021d874
- (void)vcSessionParticipant:(id)arg1 remoteMediaStateDidChange:(unsigned int)arg2 forMediaType:(unsigned int)arg3;	// IMP=0x000000000021d6f3
- (void)vcSessionParticipant:(id)arg1 mediaStateDidChange:(unsigned int)arg2 forMediaType:(unsigned int)arg3 didSucceed:(_Bool)arg4 error:(id)arg5;	// IMP=0x000000000021d3b6
- (void)vcSessionParticipant:(id)arg1 didDetectError:(id)arg2;	// IMP=0x000000000021d2e0
- (void)vcSessionParticipant:(id)arg1 oneToOneModeDidChange:(_Bool)arg2;	// IMP=0x000000000021d1f5
- (void)vcSessionParticipantDidRemoteMediaStallTimeout:(id)arg1 duration:(double)arg2;	// IMP=0x000000000021ce16
- (void)vcSessionParticipantDidMediaDecryptionTimeOutForMKMRecovery:(id)arg1;	// IMP=0x000000000021ca2e
- (void)vcSessionParticipantDidMediaDecryptionTimeOut:(id)arg1;	// IMP=0x000000000021c682
- (void)vcSessionParticipantDidChangeReceivingStreams:(id)arg1;	// IMP=0x000000000021c5cd
- (void)vcSessionParticipantDidChangeSendingStreams:(id)arg1;	// IMP=0x000000000021c518
- (void)vcSessionParticipant:(id)arg1 didRequestVideoRedundancy:(_Bool)arg2;	// IMP=0x000000000021c40e
- (void)vcSessionParticipant:(id)arg1 didSwitchFromStreamID:(unsigned short)arg2 toStreamID:(unsigned short)arg3;	// IMP=0x000000000021c36f
- (void)vcSessionParticipant:(id)arg1 requestKeyFrameGenerationWithStreamID:(unsigned short)arg2 streamGroupID:(unsigned int)arg3 firType:(int)arg4;	// IMP=0x000000000021c159
- (void)vcSessionParticipant:(id)arg1 didChangeActualNetworkBitrateForStreamGroupID:(unsigned int)arg2;	// IMP=0x000000000021c13c
- (void)vcSessionParticipant:(id)arg1 didChangeMediaPriority:(unsigned char)arg2 description:(id)arg3;	// IMP=0x000000000021bf59
- (void)vcSessionParticipant:(id)arg1 remoteVideoPausedDidChange:(_Bool)arg2;	// IMP=0x000000000021bda9
- (void)vcSessionParticipant:(id)arg1 remoteAudioPausedDidChange:(_Bool)arg2;	// IMP=0x000000000021bc5a
- (void)vcSessionParticipant:(id)arg1 videoPaused:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x000000000021b8b8
- (void)vcSessionParticipant:(id)arg1 audioPaused:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x000000000021b4d4
- (void)vcSessionParticipant:(id)arg1 remoteScreenEnabledDidChange:(_Bool)arg2;	// IMP=0x000000000021b2ef
- (void)vcSessionParticipant:(id)arg1 remoteVideoEnabledDidChange:(_Bool)arg2;	// IMP=0x000000000021b179
- (void)vcSessionParticipant:(id)arg1 remoteAudioEnabledDidChange:(_Bool)arg2;	// IMP=0x000000000021b05c
- (void)vcSessionParticipantFetchStreamGroupState:(id)arg1;	// IMP=0x000000000021af76
- (void)vcSessionParticipant:(id)arg1 screenEnabled:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x000000000021ab0c
- (void)vcSessionParticipant:(id)arg1 videoEnabled:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x000000000021a6ca
- (void)vcSessionParticipant:(id)arg1 audioEnabled:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x000000000021a328
- (void)vcSessionParticipant:(id)arg1 didStopWithError:(id)arg2;	// IMP=0x000000000021a25e
- (void)vcSessionParticipant:(id)arg1 didStart:(_Bool)arg2 error:(id)arg3;	// IMP=0x000000000021a180
- (void)setOneToOneVideoStreamBandwidthProbing:(_Bool)arg1;	// IMP=0x000000000021a0d9
- (unsigned int)calculateExpectedTotalNetworkBitrateUplink;	// IMP=0x0000000000219ff3
- (unsigned int)calculateExpectedTotalNetworkBitrateDownlink;	// IMP=0x0000000000219d30
- (void)handlePreferredInterfaceForDuplicationUpdate:(unsigned char)arg1 notifyPeer:(_Bool)arg2 enableDuplication:(_Bool)arg3 isMediaUnrecoverableSignal:(_Bool)arg4;	// IMP=0x0000000000219bd1
- (void)handleActiveConnectionChangeForMultiway:(id)arg1;	// IMP=0x000000000021994b
- (void)dispatchedHandleActiveConnectionChange:(id)arg1;	// IMP=0x00000000002196da
- (void)handleActiveConnectionChange:(id)arg1;	// IMP=0x0000000000219644
- (void)handleCellularMTUChanged:(unsigned short)arg1 connection:(id)arg2;	// IMP=0x00000000002195ea
- (void)handlePrimaryConnectionChanged:(id)arg1;	// IMP=0x00000000002194c1
- (void)handleCellTechChange:(int)arg1 connection:(id)arg2;	// IMP=0x00000000002193be
- (void)notifyRemoteOfCellTechChange:(id)arg1 remoteParticipant:(id)arg2;	// IMP=0x0000000000219262
- (void)applyRemoteLinkConstrains:(id)arg1;	// IMP=0x00000000002191b9
- (void)applyLinkConstrains:(id)arg1;	// IMP=0x00000000002190ac
- (void)setTransportSessionEventHandler;	// IMP=0x000000000021879a
- (void)sendStreamGroupStateToParticipant:(id)arg1;	// IMP=0x00000000002186d7
- (void)dispatchedSetSharingEnabled:(_Bool)arg1;	// IMP=0x00000000002180af
- (void)setOneToOneModeEnabledFromRemoteSignal:(_Bool)arg1;	// IMP=0x0000000000217f83
- (void)generateKeyFrameWithReceivedMessage:(id)arg1 forParticipant:(id)arg2;	// IMP=0x0000000000217bde
- (void)reportingSetUserInfo;	// IMP=0x0000000000217a75
- (struct __CFString *)configurationSpecificReportingServiceName;	// IMP=0x00000000002179f0
@property(readonly, nonatomic) NSArray *remoteParticipants;
- (void)mediaStateChangedForParticipant:(id)arg1;	// IMP=0x000000000021787e
- (id)participantForID:(id)arg1;	// IMP=0x0000000000217700
- (void)updateConfiguration:(id)arg1;	// IMP=0x0000000000217651
- (void)stopWithError:(id)arg1 didRemoteCancel:(_Bool)arg2;	// IMP=0x00000000002175b4
- (void)stopWithError:(id)arg1;	// IMP=0x000000000021757b
- (void)start;	// IMP=0x00000000002174d9
@property(readonly, nonatomic) VCSessionParticipantRemote *oneToOneRemoteParticipant;
- (void)removeParticipant:(id)arg1;	// IMP=0x0000000000217418
- (void)addParticipantConfigurations:(id)arg1;	// IMP=0x000000000021737f
@property(readonly, nonatomic) id <VCSessionDelegate> delegate;
- (id)participantsToString;	// IMP=0x0000000000217324
@property(readonly, copy) NSString *description;
- (char *)sessionStateToString:(unsigned int)arg1;	// IMP=0x000000000021725e
- (void)setState:(unsigned int)arg1;	// IMP=0x0000000000216fef
- (void)setupTransportSessionWithDestination:(id)arg1;	// IMP=0x0000000000216e16
- (int)selectDataPath;	// IMP=0x0000000000216cdb
- (void)setTransportConnectionSelectionVersionWithLocalFrameWorkVersion:(id)arg1 remoteFrameworkVersion:(id)arg2;	// IMP=0x0000000000216c6e
@property(readonly, nonatomic) NSDictionary *transportMetadata;
@property(readonly, nonatomic) NSDictionary *capabilities;
- (void)startDeallocTimer;	// IMP=0x00000000002168a5
- (void)stopTimeoutTimer;	// IMP=0x0000000000216841
- (void)setReportingConfig:(CDStruct_80e040f5 *)arg1;	// IMP=0x0000000000216470
- (void)dealloc;	// IMP=0x0000000000215e06
- (id)initWithIDSDestination:(id)arg1 configurationDict:(id)arg2 negotiationData:(id)arg3 delegate:(id)arg4 processId:(int)arg5 isGKVoiceChat:(_Bool)arg6;	// IMP=0x000000000021452c
- (void)configureOneToOneReportingOnVideoEnabled;	// IMP=0x0000000000399e55
- (void)handleActiveConnectionChangeForOneToOne:(id)arg1;	// IMP=0x0000000000399c2d
- (void)notifyDelegateActiveConnectionDidChange;	// IMP=0x0000000000399a2a
- (void)reportActiveConnectionOneToOne;	// IMP=0x00000000003998cd
- (void)startOneToOne;	// IMP=0x0000000000398d28
- (void)setupOneToOneABTesting;	// IMP=0x000000000039742c
- (void)applyNegotiatedOneToOneFaceTimeSettings;	// IMP=0x00000000003972f0
- (void)dispatchedSetOneToOneModeEnabled:(_Bool)arg1 isLocal:(_Bool)arg2;	// IMP=0x00000000003965fb
- (void)completionHandlerOneToOneEnabled:(_Bool)arg1 didSucceed:(_Bool)arg2;	// IMP=0x0000000000396147
- (_Bool)completeTransitionToOneToOneEnabled:(_Bool)arg1;	// IMP=0x0000000000395ec9
- (_Bool)addOneToOneParticipant:(id)arg1;	// IMP=0x00000000003954e8
- (unsigned int)vcrcServerBagProfileNumber;	// IMP=0x000000000039527c
- (void)configureOneToOneRateController:(id)arg1 isUsingCamera:(_Bool)arg2 isUsingScreen:(_Bool)arg3;	// IMP=0x0000000000394e76
- (_Bool)negotiateOneToOneWithRemoteParticipant:(id)arg1;	// IMP=0x0000000000394619
- (void)setupOneToOneAdaptiveLearning;	// IMP=0x000000000039429b
- (void)renewOneToOneMediaQueue;	// IMP=0x0000000000394232
- (void)startReportingForOneToOneEnabled:(_Bool)arg1;	// IMP=0x0000000000393dc3
- (void)cleanUpOneToOneVideoStreamDelegate;	// IMP=0x0000000000393d7f
- (void)cleanupOneToOneVideoReceiverDelegate;	// IMP=0x0000000000393d3b
- (void)cleanupOneToOneDelegates;	// IMP=0x0000000000393d0d
- (void)cleanupOneToOne;	// IMP=0x0000000000393c62
- (void)cleanupOneToOneMediaQueue;	// IMP=0x0000000000393c11
- (_Bool)switchFromMultiwayToOneToOne;	// IMP=0x00000000003938a3
- (_Bool)multiwayToOneToOneSwitchConfigure;	// IMP=0x00000000003933db
- (void)multiwayToOneToOneSwitchResume;	// IMP=0x00000000003932fb
- (void)multiwayToOneToOneSwitchSuspend;	// IMP=0x0000000000393211
- (void)messageExistingParticipantsPostUpgrade;	// IMP=0x00000000003930ac
- (_Bool)switchFromOneToOneToMultiway;	// IMP=0x0000000000392e90
- (void)oneToOneToMultiwaySwitchConfigure;	// IMP=0x0000000000392b0c
- (void)oneToOneToMultiwaySwitchResume;	// IMP=0x00000000003929ba
- (void)oneToOneToMultiwaySwitchSuspend;	// IMP=0x0000000000392943
- (void)reportSwitchingError:(_Bool)arg1 errorEvent:(unsigned int)arg2;	// IMP=0x0000000000392897
- (void)reportCompletedSwitchingToOneToOne:(_Bool)arg1;	// IMP=0x00000000003925d3
- (void)reportStartedSwitchingToOneToOne:(_Bool)arg1;	// IMP=0x00000000003925b4
- (void)reportExistingParticipantsAnew;	// IMP=0x00000000003922d3
- (_Bool)configureRemoteParticipantForOneToOne:(id)arg1;	// IMP=0x0000000000391cc3
- (_Bool)isOneToOneRemoteParticipantUsingScreen;	// IMP=0x0000000000391c58
- (_Bool)isOneToOneUsingScreen;	// IMP=0x0000000000391bfc
- (_Bool)isOneToOneUsingVideo;	// IMP=0x0000000000391ba0
- (void)stopRateControllerOneToOne;	// IMP=0x0000000000391b80
- (void)startRateControllerOneToOne;	// IMP=0x0000000000391ae0
- (id)newParticipantOneToOneConfigWithIDSParticipantID:(unsigned long long)arg1 isLocal:(_Bool)arg2 mediaControlInfoVersion:(unsigned char)arg3 videoEnabled:(_Bool)arg4 screenEnabled:(_Bool)arg5 remoteParticipant:(id)arg6;	// IMP=0x00000000003915d1
- (int)setupOneToOneMediaControlInfoGeneratorsWithVersion:(unsigned char)arg1 oneToOneConfig:(id)arg2 videoEnabled:(_Bool)arg3;	// IMP=0x00000000003911c7
- (_Bool)configureLocalParticipantWithOneToOneRemoteParticipant:(id)arg1 isInitialConfiguration:(_Bool)arg2;	// IMP=0x0000000000390b48
- (void)cleanupRateControllerOneToOne;	// IMP=0x0000000000390b05
- (void)initWithRelevantStorebagEntries;	// IMP=0x0000000000390a5b
- (void)updateOneToOneRateControllerForVideoEnabled:(_Bool)arg1;	// IMP=0x0000000000390a1b
- (void)updateOneToOneRateControllerForVideoEnabled:(_Bool)arg1 screenEnabled:(_Bool)arg2;	// IMP=0x00000000003908e2
- (int)setupRateControllerOneToOne;	// IMP=0x000000000039004f
- (_Bool)setOneToOneConfigOnRemoteParticipant:(id)arg1;	// IMP=0x000000000038fde0
- (id)newNegotiatorForOneToOneWithRemoteParticipant:(id)arg1;	// IMP=0x000000000038f63d
- (int)setupOneToOneMediaQueue;	// IMP=0x000000000038f2ad
- (int)setupOneToOne;	// IMP=0x000000000038ef8a
- (void)processMediaStateMessage:(id)arg1 remoteParticipantID:(id)arg2;	// IMP=0x00000000003a8b34
- (void)processMediaTypeStatesWithMessage:(id)arg1 mediaTypeStates:(id)arg2;	// IMP=0x00000000003a866a
- (void)processStreamGroupStateMessageKey:(id)arg1 value:(id)arg2 mediaTypeStates:(id)arg3;	// IMP=0x00000000003a8152
- (void)setupMediaStateUpdateMessage;	// IMP=0x00000000003a805d
- (_Bool)validateStreamGroup:(id)arg1 state:(id)arg2;	// IMP=0x00000000003a7ff5
- (void)sendMediaStateUpdateMessageToRemoteParticipant:(id)arg1;	// IMP=0x00000000003a7f91
- (void)broadcastMediaStateUpdateMessage;	// IMP=0x00000000003a7da0
- (id)stateMessageDictionary;	// IMP=0x00000000003a75e8
- (void)setupLinkConstrainsChangedMessages;	// IMP=0x00000000003a71b4
- (void)setupCellTechChangeMessages;	// IMP=0x00000000003a6f6e
- (void)remoteCellTechStateUpdate:(int)arg1 maxRemoteBitrate:(unsigned int)arg2;	// IMP=0x00000000003a6d11
- (void)setupRateControlConfigMessage;	// IMP=0x00000000003a6ba2
- (void)handleControlConfigMessage:(id)arg1 forParticipantId:(id)arg2;	// IMP=0x00000000003a67f6
- (void)setupMediaQualityDegradedMessage;	// IMP=0x00000000003a6480
- (void)setupDisconnectMessage;	// IMP=0x00000000003a624d
- (void)setupPiPStateChangeMessage;	// IMP=0x00000000003a5f1e
- (void)setupPreferredInterfaceMessage;	// IMP=0x00000000003a5b83
- (void)setupVideoRedundancyMessages;	// IMP=0x00000000003a592e
- (void)setupMomentsMessages;	// IMP=0x00000000003a56f9
- (void)setupWRMAlertUpdateMessage;	// IMP=0x00000000003a5383
- (void)setupSymptomEnabledMessages;	// IMP=0x00000000003a5102
- (void)processSymptomFromMessage:(id)arg1 participantID:(id)arg2 isLocalInitiated:(_Bool)arg3 isLocalSideOnly:(_Bool)arg4;	// IMP=0x00000000003a4ddf
- (void)setupKeyFrameGenerationMessages;	// IMP=0x00000000003a4ce4
- (void)setupVideoPausedMessages;	// IMP=0x00000000003a4a62
- (void)setupOneToOneEnabledMessages;	// IMP=0x00000000003a47cc
- (void)setupAudioPausedMessages;	// IMP=0x00000000003a454a
- (void)setupStreamGroupStateFetchMessage;	// IMP=0x00000000003a4202
- (void)setupVideoEnabledMessages;	// IMP=0x00000000003a3f80
- (void)setupAudioEnabledMessages;	// IMP=0x00000000003a3cfc
- (void)broadcastSingleStateMessage:(id)arg1 withTopic:(id)arg2;	// IMP=0x00000000003a3b44
- (void)broadcastMessageDictionary:(id)arg1 withTopic:(id)arg2 toVersion:(int)arg3;	// IMP=0x00000000003a3979
- (void)broadcastMessageDictionary:(id)arg1 withTopic:(id)arg2;	// IMP=0x00000000003a37ee
- (void)broadcastMessage:(id)arg1 withTopic:(id)arg2;	// IMP=0x00000000003a3663
- (void)stopSessionMessaging;	// IMP=0x00000000003a35f7
- (void)startSessionMessaging;	// IMP=0x00000000003a35b0
- (void)destroySessionMessaging;	// IMP=0x00000000003a3558
- (void)createSessionMessaging;	// IMP=0x00000000003a33d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
