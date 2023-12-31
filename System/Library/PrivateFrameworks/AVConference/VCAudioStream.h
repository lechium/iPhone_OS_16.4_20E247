//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVCStatisticsCollector, DTMFEventHandler, NSMutableArray, NSNumber, NSObject, NSString, VCAudioIO, VCAudioPayload, VCAudioPowerSpectrumSource, VCAudioTransmitter, VCTelephonyInterface, WRMClient;
@protocol OS_dispatch_source, VCMediaStreamSyncSourceDelegate;

__attribute__((visibility("hidden")))
@interface VCAudioStream
{
    int _clientPid;	// 544 = 0x220
    int numBufferBytesAvailable;	// 548 = 0x224
    NSObject<OS_dispatch_source> *pausedAudioHeartBeat;	// 552 = 0x228
    double dAudioHostTime;	// 560 = 0x230
    _Bool lastVoiceActive;	// 568 = 0x238
    double _remoteMediaStallTimeout;	// 576 = 0x240
    unsigned int conferenceID;	// 584 = 0x248
    unsigned int lastInputAudioTimeStamp;	// 588 = 0x24c
    unsigned int lastSentAudioSampleTime;	// 592 = 0x250
    struct _opaque_pthread_rwlock_t stateLock;	// 600 = 0x258
    NSMutableArray *audioPayloads;	// 800 = 0x320
    struct tagVCAudioFrameFormat _vpioFormat;	// 808 = 0x328
    _Bool _useExternalIO;	// 856 = 0x358
    int preferredAudioCodec;	// 860 = 0x35c
    DTMFEventHandler *dtmfEventHandler;	// 864 = 0x360
    WRMClient *wrmClient;	// 872 = 0x368
    VCAudioPayload *currentAudioPayload;	// 880 = 0x370
    VCAudioPayload *currentDTXPayload;	// 888 = 0x378
    VCAudioTransmitter *_audioTransmitter;	// 896 = 0x380
    int _reportingModuleID;	// 904 = 0x388
    VCTelephonyInterface *_telephonyInterface;	// 912 = 0x390
    _Bool isValid;	// 920 = 0x398
    int deviceRole;	// 924 = 0x39c
    id syncSourceDelegate;	// 928 = 0x3a0
    VCAudioIO *_audioIO;	// 936 = 0x3a8
    _Bool _isMuted;	// 944 = 0x3b0
    unsigned int *_reportingSSRCList;	// 952 = 0x3b8
    unsigned int _reportingSSRCCount;	// 960 = 0x3c0
    _Bool _sendActiveVoiceOnly;	// 964 = 0x3c4
    _Bool _currentDTXEnable;	// 965 = 0x3c5
    NSNumber *_targetStreamID;	// 968 = 0x3c8
    _Bool _rtpEnabledBeforeInterrupt;	// 976 = 0x3d0
    _Bool _rtcpEnabledBeforeInterrupt;	// 977 = 0x3d1
    unsigned int _pullAudioSamplesCount;	// 980 = 0x3d4
    struct _VCAudioStreamSinkContext _sinkContext;	// 984 = 0x3d8
    struct _VCAudioStreamSourceContext _sourceContext;	// 1000 = 0x3e8
    long long _inputAudioPowerSpectrumToken;	// 1184 = 0x4a0
    long long _outputAudioPowerSpectrumToken;	// 1192 = 0x4a8
    VCAudioPowerSpectrumSource *_inputAudioPowerSpectrumSource;	// 1200 = 0x4b0
    VCAudioPowerSpectrumSource *_outputAudioPowerSpectrumSource;	// 1208 = 0x4b8
    unsigned int _abnormalOWRDCount;	// 1216 = 0x4c0
    double _lastAbnormalOWRDVerificationTime;	// 1224 = 0x4c8
    double _lastNetworkHealthPrintTime;	// 1232 = 0x4d0
    double _packetLossRateAccum;	// 1240 = 0x4d8
    int _packetLossRateCount;	// 1248 = 0x4e0
    double _packetLossRate5Secs;	// 1256 = 0x4e8
    double _timeLastPLR5Secs;	// 1264 = 0x4f0
    _Bool _anbrEnabled;	// 1272 = 0x4f8
    _Bool _anbrActive;	// 1273 = 0x4f9
    struct ifnet_interface_advisory _lastNWConnectionNotification;	// 1280 = 0x500
    unsigned int _awdTimeTransmitter;	// 1376 = 0x560
    unsigned int _lastNoVoiceActivityPacketCount;	// 1380 = 0x564
    _Bool _isTelephony;	// 1384 = 0x568
    unsigned int _uplinkRateAdaptationMaxAllowedBitrate;	// 1388 = 0x56c
    unsigned int _preferredMediaBitrate;	// 1392 = 0x570
    AVCStatisticsCollector *_statsCollector;	// 1400 = 0x578
    _Bool _enableAudioPowerSpectrum;	// 1408 = 0x580
}

+ (_Bool)shouldUseRandomRTPTimestampForMode:(int)arg1;	// IMP=0x00100000000b0df8
+ (id)capabilities;	// IMP=0x00100000000ae7ef
+ (id)supportedAudioPayloads;	// IMP=0x00100000000ae726
+ (void)terminateProcess:(id)arg1 terminateSource:(id)arg2 agent:(struct opaqueRTCReporting *)arg3;	// IMP=0x00100000000aba5f
+ (unsigned char)audioIODirectionWithMediaStreamDirection:(long long)arg1;	// IMP=0x00100000000ab87f
+ (int)operatingModeForAudioStreamMode:(long long)arg1;	// IMP=0x00100000000ab806
+ (id)newPayloadConfigForCodecConfig:(id)arg1 streamConfig:(id)arg2 inputSampleRate:(unsigned int)arg3;	// IMP=0x00100000000a9e1d
+ (_Bool)isVoLTE:(long long)arg1;	// IMP=0x00100000000a9e07
+ (_Bool)isTelephony:(long long)arg1;	// IMP=0x00100000000a9dea
+ (unsigned int)audioIOTypeForMode:(long long)arg1;	// IMP=0x00100000000a9d6c
+ (unsigned int)audioChannelCountForMode:(long long)arg1;	// IMP=0x00100000000a9d5b
+ (_Bool)shouldUseAACELDSBRForMode:(long long)arg1;	// IMP=0x00100000000a9d4a
@property(nonatomic) unsigned int lastNoVoiceActivityPacketCount; // @synthesize lastNoVoiceActivityPacketCount=_lastNoVoiceActivityPacketCount;
@property(retain, nonatomic) NSNumber *targetStreamID; // @synthesize targetStreamID=_targetStreamID;
@property(nonatomic, getter=isCurrentDTXEnabled) _Bool currentDTXEnable; // @synthesize currentDTXEnable=_currentDTXEnable;
@property(retain) VCAudioIO *audioIO; // @synthesize audioIO=_audioIO;
@property(retain) VCAudioTransmitter *audioTransmitter; // @synthesize audioTransmitter=_audioTransmitter;
@property(nonatomic) int deviceRole; // @synthesize deviceRole;
@property(nonatomic) _Bool isValid; // @synthesize isValid;
@property(readonly) unsigned int conferenceID; // @synthesize conferenceID;
- (void)rateAdaptation:(id)arg1 targetBitrateDidChange:(unsigned int)arg2 rateChangeCounter:(unsigned int)arg3;	// IMP=0x00000000000b7700
- (void)telephonyInterface:(id)arg1 anbrRecommendation:(unsigned int)arg2 forDirection:(long long)arg3;	// IMP=0x00000000000b75a3
- (void)telephonyInterface:(id)arg1 anbrActivationUpdate:(_Bool)arg2;	// IMP=0x00000000000b755e
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo *)arg1;	// IMP=0x00000000000b750c
- (void)handleActiveConnectionChange:(id)arg1;	// IMP=0x00000000000b74a1
- (void)collectTxChannelMetrics:(CDStruct_b671a7c4 *)arg1;	// IMP=0x00000000000b73fb
- (void)collectRxChannelMetrics:(CDStruct_b671a7c4 *)arg1;	// IMP=0x00000000000b7283
- (void)collectRxChannelMetrics:(CDStruct_b671a7c4 *)arg1 interval:(float)arg2;	// IMP=0x00000000000b7271
- (void)didServerDie;	// IMP=0x00000000000b71ff
- (void)didResumeAudioIO:(id)arg1;	// IMP=0x00000000000b7137
- (void)didSuspendAudioIO:(id)arg1;	// IMP=0x00000000000b7009
- (void)handleANBR:(unsigned int)arg1 forDirection:(long long)arg2;	// IMP=0x00000000000b6a62
- (int)selectCodecBandwidthForCodecRateMode:(int)arg1;	// IMP=0x00000000000b677b
- (void)handleDownlinkANBR:(struct _VCAudioCodecModeChangeEvent)arg1;	// IMP=0x00000000000b6750
- (void)handleUplinkANBR:(struct _VCAudioCodecModeChangeEvent)arg1;	// IMP=0x00000000000b66a3
- (void)handleCodecModeChangeEvent:(struct _VCAudioCodecModeChangeEvent)arg1;	// IMP=0x00000000000b616c
- (void)notifyCodecModeChangeEvent:(struct _VCAudioCodecModeChangeEvent)arg1 didUpdateBandwidth:(_Bool)arg2 didUpdateBitrate:(_Bool)arg3;	// IMP=0x00000000000b6115
- (void)queryAnbrBitrate:(unsigned int)arg1 forDirection:(long long)arg2;	// IMP=0x00000000000b5e63
- (void)setRemoteCodecTypeAndSampleRate:(struct _VCAudioCodecModeChangeEvent)arg1;	// IMP=0x00000000000b5dfb
- (void)notifyCodecModeChangeToCT:(struct _VCAudioCodecModeChangeEvent)arg1;	// IMP=0x00000000000b5dcf
- (void)unregisterCodecRateModeChangeNotifications;	// IMP=0x00000000000b5db5
- (void)registerActiveAudioStreamChangeNotifications;	// IMP=0x00000000000b5bda
- (void)registerCodecRateModeChangeNotifications;	// IMP=0x00000000000b5b2d
- (long long)getSyncSourceSampleRate;	// IMP=0x00000000000b5b1a
@property(nonatomic) NSObject<VCMediaStreamSyncSourceDelegate> *syncSourceDelegate; // @synthesize syncSourceDelegate;
- (void)setCanProcessAudio:(_Bool)arg1;	// IMP=0x00000000000b5a55
- (_Bool)canProcessAudio;	// IMP=0x00000000000b5a43
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg1;	// IMP=0x00000000000b5919
- (void)pullAudioSamples:(struct opaqueVCAudioBufferList *)arg1;	// IMP=0x00000000000b526c
- (int)getConnectionTypeForStreamMode:(long long)arg1;	// IMP=0x00000000000b51b7
- (void)reportingAlgosAudioStreamEvent:(unsigned short)arg1;	// IMP=0x00000000000b50c5
- (void)reportingAudioStreamEvent:(unsigned short)arg1;	// IMP=0x00000000000b4d4a
- (void)updateCodecPayloadAndBitrateForStartEvent:(int *)arg1 bitrate:(unsigned int *)arg2;	// IMP=0x00000000000b4771
- (void)gatherRealtimeStats:(struct __CFDictionary *)arg1;	// IMP=0x00000000000b4725
- (id)getReportingServiceID;	// IMP=0x00000000000b46f4
- (struct __CFString *)getReportingClientName;	// IMP=0x00000000000b4661
- (int)getReportingClientType;	// IMP=0x00000000000b4634
- (struct __CFDictionary *)getClientSpecificUserInfo:(id)arg1;	// IMP=0x00000000000b4167
- (_Bool)isClientSpecificUserInfoSupported;	// IMP=0x00000000000b414b
- (void)setupReportingAgent:(id)arg1;	// IMP=0x00000000000b3dad
- (void)setupPeriodicReporting;	// IMP=0x00000000000b3cf2
- (void)setStreamIDs:(id)arg1 repairStreamIDs:(id)arg2;	// IMP=0x00000000000b3a29
- (double)rtcpHeartbeatLeeway;	// IMP=0x00000000000b3a1b
- (void)onSendRTCPPacket;	// IMP=0x00000000000b3844
- (void)onRTCPTimeout;	// IMP=0x00000000000b381b
- (void)onRTPTimeout;	// IMP=0x00000000000b3815
- (void)onResumeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b3497
- (void)onPauseWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b3235
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;	// IMP=0x00000000000b3218
- (void)onStopWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b3064
- (void)onStartWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b2a34
- (_Bool)shouldRegisterReportingPeriodicTask;	// IMP=0x00000000000b2a0b
- (_Bool)shouldReportNetworkInterfaceType;	// IMP=0x00000000000b29f4
- (_Bool)shouldResetRTPTimestampOnStart;	// IMP=0x00000000000b29dd
- (void)updateRateAdaptationWithNetworkNotification:(struct ifnet_interface_advisory *)arg1;	// IMP=0x00000000000b29bd
- (_Bool)onConfigureStreamWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000b0fb8
- (_Bool)isVoLTERateAdaptationEnabled;	// IMP=0x00000000000b0edd
- (void)setPreferredMediaBitrateWithConfiguration:(id)arg1;	// IMP=0x00000000000b0e19
- (id)streamIDsFromTransport;	// IMP=0x00000000000b0bc7
- (void)cleanupBeforeReconfigure:(id)arg1;	// IMP=0x00000000000b08c2
- (void)createReportSSRCListWithStreamConfigs:(id)arg1;	// IMP=0x00000000000b0698
- (id)createTransportWithStreamConfig:(id)arg1;	// IMP=0x00000000000b013c
- (_Bool)setupSourceTransport:(id)arg1;	// IMP=0x00000000000b003c
- (_Bool)validateAudioStreamConfigurations:(id)arg1;	// IMP=0x00000000000afbea
- (void)onCallIDChanged;	// IMP=0x00000000000afabf
- (id)supportedPayloads;	// IMP=0x00000000000afaa6
- (_Bool)shouldUseNWConnectionBackingSocket;	// IMP=0x00000000000afa9e
@property(readonly, nonatomic) unsigned int actualAudioSendingBitrate;
- (void)setTargetBitrate:(unsigned int)arg1 rateChangeCounter:(unsigned int)arg2;	// IMP=0x00000000000afa39
- (void)setVCStatistics:(struct tagVCStatisticsMessage)arg1;	// IMP=0x00000000000af9f8
- (CDUnknownFunctionPointerType)pullSamplesCallback;	// IMP=0x00000000000aed24
@property(readonly, nonatomic) void *realtimeSourceContext;
@property(nonatomic) float volume;
@property(nonatomic, getter=isRemoteMuted) _Bool remoteMuted;
@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_isMuted;
@property(nonatomic) _Bool sendActiveVoiceOnly;
- (void)setStreamDirection:(long long)arg1;	// IMP=0x00000000000aea40
- (_Bool)generateReceptionReportList:(struct _RTCP_RECEPTION_REPORT *)arg1 reportCount:(char *)arg2;	// IMP=0x00000000000ae9c4
- (void)cleanupAudio;	// IMP=0x00000000000ae931
- (void)prepareAudio;	// IMP=0x00000000000ae8f2
- (void)setFrequencyMeteringEnabled:(_Bool)arg1 meterType:(int)arg2;	// IMP=0x00000000000ae8a5
- (_Bool)isFrequencyMeteringEnabled:(int)arg1;	// IMP=0x00000000000ae890
- (struct _METER_INFO *)meterWithType:(int)arg1;	// IMP=0x00000000000ae86e
- (void)stopSendDTMFEvent;	// IMP=0x00000000000ae6ef
- (void)sendDTMFEvent:(id)arg1;	// IMP=0x00000000000ae6b8
- (_Bool)bitrateIsAudioOnly;	// IMP=0x00000000000ae690
- (_Bool)createAudioTransmitter:(long long)arg1 streamIDs:(id)arg2;	// IMP=0x00000000000adc7a
- (_Bool)createAudioReceiver;	// IMP=0x00000000000accd6
- (void)configureAudioJBAlgos:(struct tagVCAudioReceiverConfig *)arg1;	// IMP=0x00000000000acb96
- (int)getPacketsPerBundleForStreamConfig:(id)arg1;	// IMP=0x00000000000aca46
- (void)dealloc;	// IMP=0x00000000000ac622
- (_Bool)setupAudioStreamWithClientPid:(int)arg1 enableAudioPowerSpectrum:(_Bool)arg2;	// IMP=0x00000000000abd50
- (id)setLocalParticipantInfo:(id)arg1 networkSockets:(id)arg2 withError:(id *)arg3;	// IMP=0x00000000000abc1e
- (id)initWithClientPid:(int)arg1 ssrc:(unsigned int)arg2 transportSessionID:(unsigned int)arg3;	// IMP=0x00000000000abb91
- (id)initWithClientPid:(int)arg1 ssrc:(unsigned int)arg2;	// IMP=0x00000000000abb02
- (id)initWithClientPid:(int)arg1;	// IMP=0x00000000000aba73
- (void)setupAudioPowerSpectrum;	// IMP=0x00000000000ab97d
- (void)setDeviceRoleForAudioStreamMode:(long long)arg1 direction:(long long)arg2;	// IMP=0x00000000000ab8a2
- (void)didEnterState:(int)arg1 oldState:(int)arg2;	// IMP=0x00000000000ab7d3
- (void)willExitState:(int)arg1 newState:(int)arg2;	// IMP=0x00000000000ab7ae
- (double)lastReceivedRTCPPacketTime;	// IMP=0x00000000000ab620
- (double)lastReceivedRTPPacketTime;	// IMP=0x00000000000ab60a
- (_Bool)setReceiverPayloads;	// IMP=0x00000000000aac9c
- (void)setDTXPayload:(id)arg1;	// IMP=0x00000000000aa9b1
- (id)addAudioPayload:(int)arg1;	// IMP=0x00000000000aa93a
- (id)configForPayloadType:(int)arg1;	// IMP=0x00000000000aa7e5
- (unsigned int)preferredAudioBitrateForPayload:(int)arg1;	// IMP=0x00000000000a9bf2
- (void)getCodecConfigForPayload:(int)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a987f
- (_Bool)setupPayloads;	// IMP=0x00000000000a9516
- (id)getSupportedPayloads;	// IMP=0x00000000000a9185
- (void)stopAudioWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a9009
- (void)startAudioWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a8c16
- (_Bool)generateRTCPXRVoIPMetricsReports:(struct tagVCRTCPXRVoIPMetricsReport *)arg1 reportCount:(char *)arg2;	// IMP=0x00000000000a8808
- (_Bool)generateRTCPXRSummaryReports:(struct tagVCRTCPXRSummaryReport *)arg1 reportCount:(char *)arg2;	// IMP=0x00000000000a8581
- (void)_computeInternalFormatForStreamConfigurations:(id)arg1;	// IMP=0x00000000000a8248
- (unsigned int)internalSampleRateForCodecType:(long long)arg1;	// IMP=0x00000000000a819f
- (unsigned int)computePacketTimestampWithInputTimestamp:(unsigned int)arg1 numSamples:(int)arg2 hostTime:(double)arg3;	// IMP=0x00000000000a7f44

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

