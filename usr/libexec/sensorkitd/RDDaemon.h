//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, RDAnalyticsEventListener, RDAppLauncher, RDAuthorizationBroadcaster, RDCacheDelete, RDClientInterestCache, RDDefaults, RDFileURLs, RDGizmoSyncService, RDIDSMessageEventListener, RDLaunchEvents, RDListener, RDNotifier, RDStateCache, SRAuthorizationStore;
@protocol OS_dispatch_queue, RDGizmoSyncing;

@interface RDDaemon : NSObject
{
    _Bool _active;	// 8 = 0x8
    id <RDGizmoSyncing> _gizmoSync;	// 16 = 0x10
    RDAuthorizationBroadcaster *_authorizationBroadcaster;	// 24 = 0x18
    RDClientInterestCache *_clientInterest;	// 32 = 0x20
    RDAppLauncher *_appLauncher;	// 40 = 0x28
    RDLaunchEvents *_launchEvents;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_q;	// 56 = 0x38
    RDDefaults *_defaults;	// 64 = 0x40
    RDFileURLs *_fileURLs;	// 72 = 0x48
    RDIDSMessageEventListener *_IDSMessageEventListener;	// 80 = 0x50
    RDAnalyticsEventListener *;	// 88 = 0x58
    RDGizmoSyncService *_gizmoSyncService;	// 96 = 0x60
    RDNotifier *_notifier;	// 104 = 0x68
    RDStateCache *_stateCache;	// 112 = 0x70
    SRAuthorizationStore *_authStore;	// 120 = 0x78
    RDCacheDelete *_cacheDelete;	// 128 = 0x80
    RDListener *_readerListener;	// 136 = 0x88
    RDListener *_writerListener;	// 144 = 0x90
    RDListener *_prunerListener;	// 152 = 0x98
    RDListener *_debuggingListener;	// 160 = 0xa0
}

+ (void)initialize;	// IMP=0x0020000000033dc0
- (void)dumpDefaultsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00200000000414a0
- (void)dumpConfigurationsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000000411b0
- (void)listDatastoreWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000040fd0
- (void)dumpStateCacheWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000040ed0
- (void)dumpClientsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000040b00
- (long long)prerequisitesStatusForAnalytics:(id)arg1;	// IMP=0x0010000000040ae0
- (id)currentRecordingStatesForAnalytics:(id)arg1;	// IMP=0x0010000000040ad0
- (void)gizmoSync:(id)arg1 didSyncRTCOffset:(double)arg2 timeBeforeUpdate:(double)arg3;	// IMP=0x00100000000405f0
- (void)gizmoSync:(id)arg1 didSyncState:(id)arg2 deviceID:(id)arg3;	// IMP=0x001000000003fc00
- (void)gizmoSyncConnectedDevicesAdded:(id)arg1;	// IMP=0x001000000003fb80
- (long long)cacheDelete:(id)arg1 purgeWithUrgency:(long long)arg2 dryRun:(_Bool)arg3;	// IMP=0x001000000003ee70
- (void)launchEventCheckInActivity:(id)arg1;	// IMP=0x001000000003ee10
- (void)launchEventXPCEventReceived:(id)arg1;	// IMP=0x001000000003ed30
- (void)launchEventRunActivity:(id)arg1;	// IMP=0x001000000003d7a0
- (void)authorizationBroadcaster:(id)arg1 didSetDataCollectionEnabled:(_Bool)arg2;	// IMP=0x001000000003d3e0
- (void)authorizationStore:(id)arg1 didUpdateAuthorizationsForBundleId:(id)arg2 sensors:(id)arg3;	// IMP=0x001000000003d1a0
- (void)authorizationStore:(id)arg1 didDetermineInitialAuthorizationValues:(id)arg2;	// IMP=0x001000000003cc40
- (id)bundleIdForConnection:(id)arg1;	// IMP=0x001000000003c820
- (id)valueForEntitlement:(id)arg1 connection:(id)arg2;	// IMP=0x001000000003c800
- (void)removeAllSamplesForAllSensorsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000003c500
- (void)removeAllSamplesForCurrentSensorWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000003c220
- (void)requestFileHandleForPruningAfterSegment:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003bc70
- (void)requestFileHandleForPruningSample:(double)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003b900
- (void)startPruningForSensor:(id)arg1 deviceId:(id)arg2;	// IMP=0x001000000003b720
- (_Bool)validateBundleRecord:(id)arg1 withFilters:(id)arg2;	// IMP=0x001000000003b510
- (void)fetchEligibilityStatusForBundleIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003b1e0
- (void)requestFileHandleForWritingWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000003a490
- (void)startWritingForSensor:(id)arg1;	// IMP=0x001000000003a170
- (void)fetchAllDevices:(id)arg1 idOnly:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000039e90
- (void)fetchReaderMetadata:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000039c60
- (void)stopRecording:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000039c40
- (void)startRecording:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000039750
- (void)requestFileHandleForReading:(id)arg1 afterSegment:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000038bf0
- (void)requestFileHandleForReading:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000038bd0
- (void)setWriterService:(id)arg1 enabled:(_Bool)arg2;	// IMP=0x0010000000038a70
- (void)dealloc;	// IMP=0x0010000000035250

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

