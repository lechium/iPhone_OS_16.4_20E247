//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAudioStream, NSHashTable, NSMutableSet, NSString;
@protocol CSAudioAlertProvidingDelegate, CSAudioSessionProvidingDelegate, CSAudioStreamProvidingDelegate, CSXPCClientDelegate, OS_dispatch_queue, OS_xpc_object;

@interface CSXPCClient : NSObject
{
    id <CSAudioSessionProvidingDelegate> _audioSessionProvidingDelegate;	// 8 = 0x8
    id <CSAudioStreamProvidingDelegate> _audioStreamProvidingDelegate;	// 16 = 0x10
    id <CSAudioAlertProvidingDelegate> _audioAlertProvidingDelegate;	// 24 = 0x18
    id <CSXPCClientDelegate> _delegate;	// 32 = 0x20
    NSString *_UUID;	// 40 = 0x28
    NSObject<OS_xpc_object> *_xpcConnection;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_targetQueue;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_xpcReplyQueue;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_xpcClientQueue;	// 72 = 0x48
    CSAudioStream *_audioStream;	// 80 = 0x50
    NSMutableSet *_activationAssertions;	// 88 = 0x58
    NSHashTable *_audioSessionInfoObservers;	// 96 = 0x60
    unsigned long long _xpcClientType;	// 104 = 0x68
}

+ (id)createStopAudioStreamMessage;	// IMP=0x00200000000299fd
+ (id)createStartAudioStreamMessageWithOption:(id)arg1;	// IMP=0x0010000000029791
+ (id)createPrepareAudioStreamMessageWithRequest:(id)arg1;	// IMP=0x001000000002930d
+ (id)createAudioStreamMessageWithRequest:(id)arg1;	// IMP=0x00100000000286f8
- (void).cxx_destruct;	// IMP=0x002000000002e657
@property(nonatomic) unsigned long long xpcClientType; // @synthesize xpcClientType=_xpcClientType;
@property(retain, nonatomic) NSHashTable *audioSessionInfoObservers; // @synthesize audioSessionInfoObservers=_audioSessionInfoObservers;
@property(retain, nonatomic) NSMutableSet *activationAssertions; // @synthesize activationAssertions=_activationAssertions;
@property(retain, nonatomic) CSAudioStream *audioStream; // @synthesize audioStream=_audioStream;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *xpcClientQueue; // @synthesize xpcClientQueue=_xpcClientQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *xpcReplyQueue; // @synthesize xpcReplyQueue=_xpcReplyQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue; // @synthesize targetQueue=_targetQueue;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(readonly, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(nonatomic) __weak id <CSXPCClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <CSAudioAlertProvidingDelegate> audioAlertProvidingDelegate; // @synthesize audioAlertProvidingDelegate=_audioAlertProvidingDelegate;
@property(nonatomic) __weak id <CSAudioStreamProvidingDelegate> audioStreamProvidingDelegate; // @synthesize audioStreamProvidingDelegate=_audioStreamProvidingDelegate;
@property(nonatomic) __weak id <CSAudioSessionProvidingDelegate> audioSessionProvidingDelegate; // @synthesize audioSessionProvidingDelegate=_audioSessionProvidingDelegate;
- (void)_handleStreamProvidingDelegateHardwareConfigChange:(id)arg1;	// IMP=0x001000000002e42a
- (void)_handleStreamProvidingDelegateChunkForTVAvailable:(id)arg1;	// IMP=0x001000000002e33c
- (void)_handleStreamProvidingDelegateChunkAvailable:(id)arg1;	// IMP=0x001000000002e24e
- (void)_handleStreamProvidingDelegateDidStopUnexpectly:(id)arg1;	// IMP=0x001000000002e198
- (void)_handleStreamProvidingDelegateMessageBody:(id)arg1;	// IMP=0x001000000002e0da
- (void)_handleSessionInfoProvidingDelegateMediaServicesWereResetNotification:(id)arg1;	// IMP=0x001000000002df1a
- (void)_handleSessionInfoProvidingDelegateMediaServicesWereLostNotification:(id)arg1;	// IMP=0x001000000002dd5a
- (void)_handleSessionInfoProvidingDelegateRouteChangeNotification:(id)arg1;	// IMP=0x001000000002daef
- (void)_handleSessionInfoProvidingDelegateInterruptionNotification:(id)arg1;	// IMP=0x001000000002d884
- (void)_handleSessionInfoProvidingDelegateMessageBody:(id)arg1;	// IMP=0x001000000002d73e
- (void)_handleSessionProvidingDelegateDidChangeContext:(id)arg1;	// IMP=0x001000000002d687
- (void)_handleSessionProvidingDelegateStreamHandleIdInvalidation:(id)arg1;	// IMP=0x001000000002d5d0
- (void)_handleSessionProvidingDelegateDidSetAudioSession:(id)arg1;	// IMP=0x001000000002d519
- (void)_handleSessionProvidingDelegateWillSetAudioSession:(id)arg1;	// IMP=0x001000000002d462
- (void)_handleSessionProvidingDelegateEndInterruption:(id)arg1;	// IMP=0x001000000002d3c5
- (void)_handleSessionProvidingDelegateBeginInterruptionWithContext:(id)arg1;	// IMP=0x001000000002d221
- (void)_handleSessionProvidingDelegateBeginInterruption:(id)arg1;	// IMP=0x001000000002d184
- (void)_handleSessionProvidingDelegateMessageBody:(id)arg1;	// IMP=0x001000000002d004
- (void)_handleAlertProvidingDelegateDidFinishAlertPlayback:(id)arg1;	// IMP=0x001000000002ce8f
- (void)_handleAlertProvidingDelegateMessageBody:(id)arg1;	// IMP=0x001000000002cd8d
- (void)_handleListenerDisconnectedError:(id)arg1;	// IMP=0x001000000002cc82
- (void)_handleListenerError:(id)arg1;	// IMP=0x001000000002cb50
- (void)_handleListenerMessage:(id)arg1;	// IMP=0x001000000002ca30
- (void)_handleListenerEvent:(id)arg1;	// IMP=0x001000000002c987
- (_Bool)sendMessageAndReplySync:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002c73f
- (id)_decodeError:(id)arg1;	// IMP=0x001000000002c675
- (void)_sendMessageAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002c4a1
- (void)sendMessageAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002c3c9
- (_Bool)fallbackDeactivateAudioSession:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x001000000002c29e
- (unsigned long long)sampleCountFromHostTime:(unsigned long long)arg1;	// IMP=0x001000000002bfaa
- (unsigned long long)hostTimeFromSampleCount:(unsigned long long)arg1;	// IMP=0x001000000002bcb6
- (unsigned int)audioSessionIdForDeviceId:(id)arg1;	// IMP=0x001000000002b9d3
- (void)unregisterObserver:(id)arg1;	// IMP=0x001000000002b9b6
- (void)registerObserver:(id)arg1;	// IMP=0x001000000002b999
- (void)attachTandemStream:(id)arg1 toPrimaryStream:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002b967
- (void)setAnnounceCallsEnabled:(_Bool)arg1 withStreamHandleID:(unsigned long long)arg2;	// IMP=0x001000000002b935
- (_Bool)isRecording;	// IMP=0x001000000002b901
- (void)cancelAudioStreamHold:(id)arg1;	// IMP=0x001000000002b8cf
- (id)holdAudioStreamWithDescription:(id)arg1 timeout:(double)arg2;	// IMP=0x001000000002b89b
- (void)saveRecordingBufferToEndFrom:(unsigned long long)arg1 toURL:(id)arg2;	// IMP=0x001000000002b869
- (void)saveRecordingBufferFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 toURL:(id)arg3;	// IMP=0x001000000002b837
- (id)audioChunkToEndFrom:(unsigned long long)arg1 channelIdx:(unsigned long long)arg2;	// IMP=0x001000000002b803
- (id)audioChunkToEndFrom:(unsigned long long)arg1;	// IMP=0x001000000002b7cf
- (id)audioChunkFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 channelIdx:(unsigned long long)arg3;	// IMP=0x001000000002b79b
- (id)audioChunkFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;	// IMP=0x001000000002b767
- (unsigned long long)audioStreamId;	// IMP=0x001000000002b733
- (id)playbackRoute;	// IMP=0x001000000002b4b1
- (_Bool)isNarrowBand;	// IMP=0x001000000002b28b
- (id)recordSettings;	// IMP=0x001000000002afdb
- (id)audioDeviceInfo;	// IMP=0x001000000002ad4c
- (id)recordDeviceInfo;	// IMP=0x001000000002aab4
- (id)recordRoute;	// IMP=0x001000000002a832
- (void)triggerInfoForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002a1d9
- (void)acousticSLResultForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000029c04
- (void)stopAudioStream:(id)arg1 option:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000029adc
- (void)startAudioStream:(id)arg1 option:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000298bb
- (_Bool)supportsDuckingOnCurrentRouteWithError:(id *)arg1;	// IMP=0x0010000000029686
- (void)prepareAudioStream:(id)arg1 request:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000029437
- (_Bool)prepareAudioStreamSync:(id)arg1 request:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000028dfe
- (void)audioStreamWithRequest:(id)arg1 streamName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000028822
- (id)audioStreamWithRequest:(id)arg1 streamName:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000028169
- (_Bool)setCurrentContext:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000027d14
- (id)audioMetric;	// IMP=0x00100000000278cf
- (float)averagePowerForChannel:(unsigned long long)arg1;	// IMP=0x00100000000275e8
- (float)peakPowerForChannel:(unsigned long long)arg1;	// IMP=0x0010000000027301
- (void)updateMeters;	// IMP=0x0010000000027208
- (void)setMeteringEnabled:(_Bool)arg1;	// IMP=0x00100000000270ed
- (void)configureAlertBehavior:(id)arg1;	// IMP=0x0010000000026fa6
- (unsigned long long)alertStartTime;	// IMP=0x0010000000026cf2
- (_Bool)playRecordStartingAlertAndResetEndpointer;	// IMP=0x0010000000026bed
- (_Bool)playAlertSoundForType:(long long)arg1;	// IMP=0x0010000000026acc
- (_Bool)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2 force:(_Bool)arg3;	// IMP=0x00100000000268ec
- (void)setAudioAlertDelegate:(id)arg1;	// IMP=0x00100000000268da
- (void)reportsDynamicActivityAttribute:(unsigned long long)arg1 bundleId:(id)arg2;	// IMP=0x0010000000026775
- (void)setAudioSessionDelegate:(id)arg1;	// IMP=0x0010000000026763
- (void)enableMiniDucking:(_Bool)arg1;	// IMP=0x0010000000026642
- (void)enableSmartRoutingConsideration:(_Bool)arg1;	// IMP=0x0010000000026521
- (void)setDuckOthersOption:(_Bool)arg1;	// IMP=0x0010000000026400
- (_Bool)deactivateAudioSession:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00100000000262d2
- (_Bool)activateAudioSessionWithReason:(unsigned long long)arg1 dynamicAttribute:(unsigned long long)arg2 bundleID:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000026135
- (_Bool)prewarmAudioSessionWithError:(id *)arg1;	// IMP=0x001000000002602d
- (void)pingpong:(CDUnknownBlockType)arg1;	// IMP=0x0010000000025f07
- (_Bool)prepareAudioProviderWithContext:(id)arg1 clientType:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0010000000025d31
- (void)_sendXPCClientType;	// IMP=0x0010000000025bcf
- (void)dealloc;	// IMP=0x0010000000025b91
- (void)_disconnect;	// IMP=0x0010000000025b45
- (void)disconnect;	// IMP=0x0010000000025ae4
- (void)connect;	// IMP=0x00100000000258b4
- (_Bool)isConnected;	// IMP=0x0010000000025808
- (id)initWithType:(unsigned long long)arg1;	// IMP=0x00100000000256a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

