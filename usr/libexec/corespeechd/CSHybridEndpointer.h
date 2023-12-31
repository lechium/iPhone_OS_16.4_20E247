//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAsset, CSAudioRecordContext, CSServerEndpointFeatures, MISSING_TYPE, NSDate, NSDictionary, NSMutableArray, NSString, OSDFeatures, _EAREndpointer;
@protocol CSEndpointAnalyzerDelegate, CSEndpointAnalyzerImplDelegate, OS_dispatch_queue;

@interface CSHybridEndpointer : NSObject
{
    _Bool _saveSamplesSeenInReset;	// 8 = 0x8
    _Bool _canProcessCurrentRequest;	// 9 = 0x9
    _Bool _epResult;	// 10 = 0xa
    _Bool _didReceiveServerFeatures;	// 11 = 0xb
    _Bool _useDefaultServerFeaturesOnClientLag;	// 12 = 0xc
    _Bool _didCommunicateEndpoint;	// 13 = 0xd
    _Bool _speechEndpointDetected;	// 14 = 0xe
    _Bool _didTimestampFirstAudioPacket;	// 15 = 0xf
    _Bool _isAnchorTimeBuffered;	// 16 = 0x10
    _Bool _isRequestTimeout;	// 17 = 0x11
    _Bool _isASRFeatureFromServer;	// 18 = 0x12
    _Bool _recordingDidStop;	// 19 = 0x13
    _Bool _didDetectSpeech;	// 20 = 0x14
    float _lastEndpointPosterior;	// 24 = 0x18
    id <CSEndpointAnalyzerDelegate> _delegate;	// 32 = 0x20
    id <CSEndpointAnalyzerImplDelegate> _implDelegate;	// 40 = 0x28
    unsigned long long _activeChannel;	// 48 = 0x30
    NSString *_mhId;	// 56 = 0x38
    long long _endpointStyle;	// 64 = 0x40
    long long _endpointMode;	// 72 = 0x48
    double _startWaitTime;	// 80 = 0x50
    double _endWaitTime;	// 88 = 0x58
    double _interspeechWaitTime;	// 96 = 0x60
    double _delay;	// 104 = 0x68
    double _automaticEndpointingSuspensionEndTime;	// 112 = 0x70
    double _minimumDurationForEndpointer;	// 120 = 0x78
    NSObject<OS_dispatch_queue> *_targetQueue;	// 128 = 0x80
    MISSING_TYPE *_currentAsset;	// 136 = 0x88
    OSDFeatures *_osdFeaturesAtEndpoint;	// 144 = 0x90
    _EAREndpointer *_hybridClassifier;	// 152 = 0x98
    NSString *_endpointerModelVersion;	// 160 = 0xa0
    NSObject<OS_dispatch_queue> *_serverFeaturesQueue;	// 168 = 0xa8
    CSServerEndpointFeatures *_lastKnownServerEPFeatures;	// 176 = 0xb0
    OSDFeatures *_lastKnownOSDFeatures;	// 184 = 0xb8
    NSMutableArray *_serverFeatureLatencies;	// 192 = 0xc0
    double _lastKnowServerFeaturesLatency;	// 200 = 0xc8
    double _serverFeaturesWarmupLatency;	// 208 = 0xd0
    NSDate *_lastServerFeatureTimestamp;	// 216 = 0xd8
    double _clientLagThresholdMs;	// 224 = 0xe0
    double _clampedSFLatencyMsForClientLag;	// 232 = 0xe8
    unsigned long long _extraDelayFrequency;	// 240 = 0xf0
    NSDictionary *_taskThresholdMap;	// 248 = 0xf8
    NSObject<OS_dispatch_queue> *_hybridClassifierQueue;	// 256 = 0x100
    double _lastReportedEndpointTimeMs;	// 264 = 0x108
    double _processedAudioInSeconds;	// 272 = 0x110
    NSObject<OS_dispatch_queue> *_stateSerialQueue;	// 280 = 0x118
    unsigned long long _currentRequestSampleRate;	// 288 = 0x120
    double _vtExtraAudioAtStartInMs;	// 296 = 0x128
    unsigned long long _vtEndInSampleCount;	// 304 = 0x130
    double _hepAudioOriginInMs;	// 312 = 0x138
    CSAudioRecordContext *_recordContext;	// 320 = 0x140
    NSDate *_firstAudioPacketTimestamp;	// 328 = 0x148
    double _firstAudioSampleSensorTimestamp;	// 336 = 0x150
    unsigned long long _numSamplesProcessedBeforeAnchorTime;	// 344 = 0x158
    unsigned long long _anchorMachAbsTime;	// 352 = 0x160
    double _elapsedTimeWithNoSpeech;	// 360 = 0x168
    long long _endpointerOperationMode;	// 368 = 0x170
}

- (void).cxx_destruct;	// IMP=0x00200000000a1fbf
@property(nonatomic) long long endpointerOperationMode; // @synthesize endpointerOperationMode=_endpointerOperationMode;
@property(nonatomic) double elapsedTimeWithNoSpeech; // @synthesize elapsedTimeWithNoSpeech=_elapsedTimeWithNoSpeech;
@property(nonatomic) _Bool didDetectSpeech; // @synthesize didDetectSpeech=_didDetectSpeech;
@property(nonatomic) _Bool recordingDidStop; // @synthesize recordingDidStop=_recordingDidStop;
@property(nonatomic) _Bool isASRFeatureFromServer; // @synthesize isASRFeatureFromServer=_isASRFeatureFromServer;
@property(nonatomic) _Bool isRequestTimeout; // @synthesize isRequestTimeout=_isRequestTimeout;
@property(nonatomic) _Bool isAnchorTimeBuffered; // @synthesize isAnchorTimeBuffered=_isAnchorTimeBuffered;
@property(nonatomic) unsigned long long anchorMachAbsTime; // @synthesize anchorMachAbsTime=_anchorMachAbsTime;
@property(nonatomic) unsigned long long numSamplesProcessedBeforeAnchorTime; // @synthesize numSamplesProcessedBeforeAnchorTime=_numSamplesProcessedBeforeAnchorTime;
@property(nonatomic) _Bool didTimestampFirstAudioPacket; // @synthesize didTimestampFirstAudioPacket=_didTimestampFirstAudioPacket;
@property(nonatomic) double firstAudioSampleSensorTimestamp; // @synthesize firstAudioSampleSensorTimestamp=_firstAudioSampleSensorTimestamp;
@property(retain, nonatomic) NSDate *firstAudioPacketTimestamp; // @synthesize firstAudioPacketTimestamp=_firstAudioPacketTimestamp;
@property(nonatomic) _Bool speechEndpointDetected; // @synthesize speechEndpointDetected=_speechEndpointDetected;
@property(retain, nonatomic) CSAudioRecordContext *recordContext; // @synthesize recordContext=_recordContext;
@property(nonatomic) double hepAudioOriginInMs; // @synthesize hepAudioOriginInMs=_hepAudioOriginInMs;
@property(nonatomic) unsigned long long vtEndInSampleCount; // @synthesize vtEndInSampleCount=_vtEndInSampleCount;
@property(nonatomic) double vtExtraAudioAtStartInMs; // @synthesize vtExtraAudioAtStartInMs=_vtExtraAudioAtStartInMs;
@property(nonatomic) unsigned long long currentRequestSampleRate; // @synthesize currentRequestSampleRate=_currentRequestSampleRate;
@property(nonatomic) _Bool didCommunicateEndpoint; // @synthesize didCommunicateEndpoint=_didCommunicateEndpoint;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *stateSerialQueue; // @synthesize stateSerialQueue=_stateSerialQueue;
@property(nonatomic) float lastEndpointPosterior; // @synthesize lastEndpointPosterior=_lastEndpointPosterior;
@property(nonatomic) double processedAudioInSeconds; // @synthesize processedAudioInSeconds=_processedAudioInSeconds;
@property(nonatomic) double lastReportedEndpointTimeMs; // @synthesize lastReportedEndpointTimeMs=_lastReportedEndpointTimeMs;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *hybridClassifierQueue; // @synthesize hybridClassifierQueue=_hybridClassifierQueue;
@property(retain, nonatomic) NSDictionary *taskThresholdMap; // @synthesize taskThresholdMap=_taskThresholdMap;
@property(nonatomic) unsigned long long extraDelayFrequency; // @synthesize extraDelayFrequency=_extraDelayFrequency;
@property(nonatomic) _Bool useDefaultServerFeaturesOnClientLag; // @synthesize useDefaultServerFeaturesOnClientLag=_useDefaultServerFeaturesOnClientLag;
@property(nonatomic) double clampedSFLatencyMsForClientLag; // @synthesize clampedSFLatencyMsForClientLag=_clampedSFLatencyMsForClientLag;
@property(nonatomic) double clientLagThresholdMs; // @synthesize clientLagThresholdMs=_clientLagThresholdMs;
@property(nonatomic) _Bool didReceiveServerFeatures; // @synthesize didReceiveServerFeatures=_didReceiveServerFeatures;
@property(retain, nonatomic) NSDate *lastServerFeatureTimestamp; // @synthesize lastServerFeatureTimestamp=_lastServerFeatureTimestamp;
@property(nonatomic) double serverFeaturesWarmupLatency; // @synthesize serverFeaturesWarmupLatency=_serverFeaturesWarmupLatency;
@property(nonatomic) _Bool epResult; // @synthesize epResult=_epResult;
@property(nonatomic) double lastKnowServerFeaturesLatency; // @synthesize lastKnowServerFeaturesLatency=_lastKnowServerFeaturesLatency;
@property(retain, nonatomic) NSMutableArray *serverFeatureLatencies; // @synthesize serverFeatureLatencies=_serverFeatureLatencies;
@property(retain, nonatomic) OSDFeatures *lastKnownOSDFeatures; // @synthesize lastKnownOSDFeatures=_lastKnownOSDFeatures;
@property(retain, nonatomic) CSServerEndpointFeatures *lastKnownServerEPFeatures; // @synthesize lastKnownServerEPFeatures=_lastKnownServerEPFeatures;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serverFeaturesQueue; // @synthesize serverFeaturesQueue=_serverFeaturesQueue;
@property(retain, nonatomic) NSString *endpointerModelVersion; // @synthesize endpointerModelVersion=_endpointerModelVersion;
@property(retain, nonatomic) _EAREndpointer *hybridClassifier; // @synthesize hybridClassifier=_hybridClassifier;
@property(retain, nonatomic) OSDFeatures *osdFeaturesAtEndpoint; // @synthesize osdFeaturesAtEndpoint=_osdFeaturesAtEndpoint;
@property(retain, nonatomic) CSAsset *currentAsset; // @synthesize currentAsset=_currentAsset;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue; // @synthesize targetQueue=_targetQueue;
@property(nonatomic) _Bool canProcessCurrentRequest; // @synthesize canProcessCurrentRequest=_canProcessCurrentRequest;
@property(nonatomic) _Bool saveSamplesSeenInReset; // @synthesize saveSamplesSeenInReset=_saveSamplesSeenInReset;
@property(nonatomic) double minimumDurationForEndpointer; // @synthesize minimumDurationForEndpointer=_minimumDurationForEndpointer;
@property(nonatomic) double automaticEndpointingSuspensionEndTime; // @synthesize automaticEndpointingSuspensionEndTime=_automaticEndpointingSuspensionEndTime;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) double interspeechWaitTime; // @synthesize interspeechWaitTime=_interspeechWaitTime;
@property(nonatomic) double endWaitTime; // @synthesize endWaitTime=_endWaitTime;
@property(nonatomic) double startWaitTime; // @synthesize startWaitTime=_startWaitTime;
@property(nonatomic) long long endpointMode; // @synthesize endpointMode=_endpointMode;
@property(nonatomic) long long endpointStyle; // @synthesize endpointStyle=_endpointStyle;
@property(retain, nonatomic) NSString *mhId; // @synthesize mhId=_mhId;
@property(nonatomic) unsigned long long activeChannel; // @synthesize activeChannel=_activeChannel;
@property(nonatomic) __weak id <CSEndpointAnalyzerImplDelegate> implDelegate; // @synthesize implDelegate=_implDelegate;
@property(nonatomic) __weak id <CSEndpointAnalyzerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_multimodalEndpointerEnabled;	// IMP=0x00100000000a1a19
- (_Bool)_shouldUsePhaticWithRecordContext;	// IMP=0x00100000000a197b
- (id)_getCSHybridEndpointerConfigForAsset:(id)arg1;	// IMP=0x00100000000a16a1
- (void)endpointerAssetManagerDidUpdateOSDAsset:(id)arg1;	// IMP=0x00100000000a169b
- (void)endpointerAssetManagerDidUpdateAsset:(id)arg1;	// IMP=0x00100000000a14d2
@property(readonly, nonatomic) double lastStartOfVoiceActivityTime;
@property(readonly, nonatomic) double lastEndOfVoiceActivityTime;
- (void)reset;	// IMP=0x00100000000a14ba
- (void)_readParametersFromHEPAsset:(id)arg1;	// IMP=0x00100000000a108d
- (void)resetForNewRequestWithSampleRate:(unsigned long long)arg1 recordContext:(id)arg2;	// IMP=0x00100000000a05ed
- (void)stopEndpointer;	// IMP=0x00100000000a0557
- (void)recordingStoppedForReason:(long long)arg1;	// IMP=0x00100000000a04af
- (void)terminateProcessing;	// IMP=0x00100000000a0424
- (void)preheat;	// IMP=0x00100000000a041e
- (void)handleVoiceTriggerWithActivationInfo:(id)arg1;	// IMP=0x00100000000a00aa
- (void)logFeaturesWithEvent:(id)arg1 locale:(id)arg2;	// IMP=0x001000000009f957
- (void)_emitEndpointDetectedEventWithEndpointTimeMs:(double)arg1 endpointBufferHostTime:(unsigned long long)arg2 endpointerFeatures:(id)arg3 endpointerDecisionLagInNs:(double)arg4 extraDelayMs:(unsigned long long)arg5 endpointScore:(double)arg6 asrFeatureLatencies:(id)arg7;	// IMP=0x001000000009f946
- (void)processOSDFeatures:(id)arg1 withFrameDurationMs:(double)arg2;	// IMP=0x001000000009db87
- (void)processFirstAudioPacketTimestamp:(id)arg1 firstAudioSampleSensorTimestamp:(unsigned long long)arg2;	// IMP=0x001000000009da10
- (void)logAnchorMachAbsTime:(unsigned long long)arg1 numSamplesProcessedBeforeAnchorTime:(unsigned long long)arg2 isAnchorTimeBuffered:(_Bool)arg3;	// IMP=0x001000000009d988
- (MISSING_TYPE *)shouldAcceptEagerResultForDuration:resultsCompletionHandler: /* Error: Ran out of types for this method. */;	// IMP=0x001000000009d29b
- (void)processServerEndpointFeatures:(id)arg1;	// IMP=0x001000000009cf1e
- (void)processTaskString:(id)arg1;	// IMP=0x001000000009cb98
- (void)processASRFeatures:(id)arg1 fromServer:(_Bool)arg2;	// IMP=0x001000000009caf1
- (long long)fetchCurrentEndpointerOperationMode;	// IMP=0x001000000009c9af
- (void)updateEndpointerDelayedTrigger:(_Bool)arg1;	// IMP=0x001000000009c7b8
- (void)_updateEndpointerDelayedTriggerByMhId:(id)arg1;	// IMP=0x001000000009c6a1
- (void)updateEndpointerThreshold:(float)arg1;	// IMP=0x001000000009c596
- (void)processAudioSamplesAsynchronously:(id)arg1;	// IMP=0x001000000009c590
- (id)init;	// IMP=0x001000000009be6e

// Remaining properties
@property(nonatomic) double bypassSamples;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

