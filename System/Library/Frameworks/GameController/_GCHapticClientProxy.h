//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GCSProfile, NSArray, NSMutableDictionary, NSString, _GCControllerManagerServer;
@protocol GCSSettingsStoreService, NSCopying><NSObject><NSSecureCoding, _GCIPCIncomingConnection;

__attribute__((visibility("hidden")))
@interface _GCHapticClientProxy : NSObject
{
    _Bool _playersPlayedHapticsThisSlice;	// 8 = 0x8
    _GCControllerManagerServer *_server;	// 16 = 0x10
    struct HapticSharedMemory _sharedMemory;	// 24 = 0x18
    id <GCSSettingsStoreService> _settingsStore;	// 80 = 0x50
    GCSProfile *_activeProfile;	// 88 = 0x58
    _Bool _dirtyMuteState;	// 96 = 0x60
    _Bool _muted;	// 97 = 0x61
    _Bool _neverMute;	// 98 = 0x62
    int _muteReasons[5];	// 100 = 0x64
    float _hapticStrength;	// 120 = 0x78
    _Atomic _Bool _invalid;	// 124 = 0x7c
    _Bool _running;	// 125 = 0x7d
    _Bool _stopping;	// 126 = 0x7e
    id <_GCIPCIncomingConnection> _connection;	// 128 = 0x80
    id _connectionInvalidationRegistration;	// 136 = 0x88
    id _connectionInterruptedRegistration;	// 144 = 0x90
    double _initializationTime;	// 152 = 0x98
    _Bool _complete;	// 160 = 0xa0
    _Bool _mockClient;	// 161 = 0xa1
    unsigned int _applicationState;	// 164 = 0xa4
    int _totalPlayers;	// 168 = 0xa8
    unsigned long long _clientID;	// 176 = 0xb0
    NSString *_bundleIdentifier;	// 184 = 0xb8
    id <NSCopying><NSObject><NSSecureCoding> _identifier;	// 192 = 0xc0
    NSString *_persistentControllerIdentifier;	// 200 = 0xc8
    NSString *_controllerProductCategory;	// 208 = 0xd0
    NSArray *_actuators;	// 216 = 0xd8
    NSMutableDictionary *_hapticPlayers;	// 224 = 0xe0
    double _activeLifetimeInSeconds;	// 232 = 0xe8
    NSArray *_invalidationHandlers;	// 240 = 0xf0
}

+ (id)clientProxyWithConnection:(id)arg1 server:(id)arg2 clientID:(unsigned long long)arg3;	// IMP=0x00100000000bf2b0
- (id).cxx_construct;	// IMP=0x00000000000c0a1c
- (void).cxx_destruct;	// IMP=0x00000000000c094a
@property(copy, nonatomic) NSArray *invalidationHandlers; // @synthesize invalidationHandlers=_invalidationHandlers;
@property(readonly, nonatomic) double activeLifetimeInSeconds; // @synthesize activeLifetimeInSeconds=_activeLifetimeInSeconds;
@property(readonly, nonatomic) int totalPlayers; // @synthesize totalPlayers=_totalPlayers;
@property(nonatomic) unsigned int applicationState; // @synthesize applicationState=_applicationState;
@property(nonatomic, getter=isMockClient) _Bool mockClient; // @synthesize mockClient=_mockClient;
@property(nonatomic) _Bool complete; // @synthesize complete=_complete;
@property(copy, nonatomic) NSMutableDictionary *hapticPlayers; // @synthesize hapticPlayers=_hapticPlayers;
@property(readonly, copy, nonatomic) NSArray *actuators; // @synthesize actuators=_actuators;
@property(readonly, copy, nonatomic) NSString *controllerProductCategory; // @synthesize controllerProductCategory=_controllerProductCategory;
@property(readonly, copy, nonatomic) NSString *persistentControllerIdentifier; // @synthesize persistentControllerIdentifier=_persistentControllerIdentifier;
@property(readonly, copy, nonatomic) id <NSCopying><NSObject><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) unsigned long long clientID; // @synthesize clientID=_clientID;
- (void)addActiveTime:(double)arg1;	// IMP=0x00000000000c0841
@property(readonly, nonatomic) double totalLifetimeInSeconds;
- (id)description;	// IMP=0x00000000000c0758
- (void)notifyClientCompletedWithError:(id)arg1;	// IMP=0x00000000000c0543
- (_Bool)isMuted;	// IMP=0x00000000000c0508
- (_Bool)isMutedForReason:(unsigned long long)arg1;	// IMP=0x00000000000c0464
- (float)hapticStrength;	// IMP=0x00000000000c0459
- (void)setHapticStrength:(float)arg1;	// IMP=0x00000000000c044e
- (void)setMute:(_Bool)arg1 forReason:(unsigned long long)arg2;	// IMP=0x00000000000c0428
- (void)notifyClientOnStopWithReason:(long long)arg1 error:(id)arg2;	// IMP=0x00000000000c02e8
- (void *)sharedMemory;	// IMP=0x00000000000c02de
- (_Bool)stopping;	// IMP=0x00000000000c02d5
- (_Bool)running;	// IMP=0x00000000000c02cc
- (void)refreshUserSettingForMuteHaptics;	// IMP=0x00000000000c0117
- (void)invalidate;	// IMP=0x00000000000bfd1e
- (void)invalidateDueToControllerDisconnect;	// IMP=0x00000000000bfc14
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000bfb3b
- (void)dealloc;	// IMP=0x00000000000bf7e9
- (id)init;	// IMP=0x00000000000bf7ab
- (id)_initWithConnection:(id)arg1 server:(id)arg2 clientID:(unsigned long long)arg3;	// IMP=0x00000000000bf34b
- (id)addInvalidationHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c0a64
@property(readonly, nonatomic, getter=isInvalid) _Bool invalid;
- (void)debugEngineIsRunning:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c4c2f
- (void)debugExpectNotifyOnFinishAfter:(double)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c4b40
- (void)stopRunning:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c4a5a
- (void)stopRunning;	// IMP=0x00000000000c49b4
- (void)startRunning:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c48d5
- (void)stopPrewarm;	// IMP=0x00000000000c4835
- (void)prewarm:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c475b
- (void)detachSequence:(unsigned long long)arg1;	// IMP=0x00000000000c46a6
- (void)prepareHapticSequence:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c4582
- (void)removeCustomAudioEvent:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c445e
- (void)releaseCustomAudioEvent:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c433a
- (void)referenceCustomAudioEvent:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c4216
- (void)copyCustomAudioEvent:(unsigned long long)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c40b6
- (void)createCustomAudioEvent:(id)arg1 format:(id)arg2 frames:(unsigned long long)arg3 options:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x00000000000c3f00
- (void)setSequenceEventBehavior:(unsigned long long)arg1 behavior:(unsigned long long)arg2 channelIndex:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000000000c3ddc
- (void)loadVibePattern:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c3c8f
- (void)loadHapticSequenceFromEvents:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c3b2f
- (void)loadHapticSequenceFromData:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c39cf
- (void)loadHapticEvent:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c3882
- (void)setChannelEventBehavior:(unsigned long long)arg1 behavior:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c3534
- (void)removeChannel:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c3194
- (void)requestChannels:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c2a5e
- (void)releaseChannels;	// IMP=0x00000000000c276c
- (void)teardownAndReleaseChannels;	// IMP=0x00000000000c2466
- (void)setPlayerBehavior:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c2272
- (void)getHapticLatency:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c2190
- (void)releaseClientResources;	// IMP=0x00000000000c20df
- (void)allocateClientResources:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c1f4b
- (void)queryCapabilities:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c19b9
- (void)configureWithOptions:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c1318
- (void)_configureActuatorsLegacyWithOptions:(id)arg1;	// IMP=0x00000000000c0e0a

@end
