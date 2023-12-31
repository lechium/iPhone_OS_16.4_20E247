//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class COEndpointMonitor, NSArray, NSDictionary, NSString, NSUserDefaults;

__attribute__((visibility("hidden")))
@interface COStateService
{
    NSDictionary *_connectedClients;	// 8 = 0x8
    NSUserDefaults *_SoundBoardDefaults;	// 16 = 0x10
    NSArray *_mediaObservers;	// 24 = 0x18
    COEndpointMonitor *_endpointMonitor;	// 32 = 0x20
    double _doorbellDelay;	// 40 = 0x28
}

+ (id)serviceWithDelegate:(id)arg1;	// IMP=0x0010000000036732
- (void).cxx_destruct;	// IMP=0x000000000003de78
@property(nonatomic) double doorbellDelay; // @synthesize doorbellDelay=_doorbellDelay;
@property(copy, nonatomic) COEndpointMonitor *endpointMonitor; // @synthesize endpointMonitor=_endpointMonitor;
@property(copy, nonatomic) NSArray *mediaObservers; // @synthesize mediaObservers=_mediaObservers;
@property(readonly, nonatomic) NSUserDefaults *SoundBoardDefaults; // @synthesize SoundBoardDefaults=_SoundBoardDefaults;
@property(copy, nonatomic) NSDictionary *connectedClients; // @synthesize connectedClients=_connectedClients;
- (void)endpointAvailableInHomeChanged:(_Bool)arg1;	// IMP=0x000000000003dc95
- (void)_cleanupDisconnectedClient:(id)arg1;	// IMP=0x000000000003d612
- (void)_setIsWriting:(_Bool)arg1 forClient:(id)arg2;	// IMP=0x000000000003d4c0
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000003d165
- (void)requestCompositionForCluster:(id)arg1 withCallback:(CDUnknownBlockType)arg2;	// IMP=0x000000000003c2e8
- (void)unregisterForMediaSystemLeaderChange;	// IMP=0x000000000003c2e2
- (void)registerForMediaSystemLeaderChange;	// IMP=0x000000000003c1e6
- (void)isMediaSystemLeader:(CDUnknownBlockType)arg1;	// IMP=0x000000000003c19a
- (_Bool)isMediaSystemLeader;	// IMP=0x000000000003c0ad
- (id)_stateSetByClientsForSuite:(id)arg1 cluster:(id)arg2;	// IMP=0x000000000003bdb6
- (void)_informClientsOfUpdates:(id)arg1 removals:(id)arg2 inCluster:(id)arg3;	// IMP=0x000000000003b3e3
- (void)_checkinClientWithSuite:(id)arg1 clusters:(id)arg2;	// IMP=0x000000000003b0ff
- (void)doorbellDelayWithCallback:(CDUnknownBlockType)arg1;	// IMP=0x000000000003b0b6
- (void)removeKeyPaths:(id)arg1 targetClusters:(id)arg2 withCallback:(CDUnknownBlockType)arg3;	// IMP=0x000000000003a1da
- (void)setDictionary:(id)arg1 suite:(id)arg2 interestClusters:(id)arg3 targetCluster:(id)arg4 withCallback:(CDUnknownBlockType)arg5;	// IMP=0x0000000000038d1b
- (void)removeObserverWithPredicate:(id)arg1;	// IMP=0x0000000000038a43
- (void)addObserverWithPredicate:(id)arg1 suite:(id)arg2 interestClusters:(id)arg3;	// IMP=0x000000000003804c
- (void)stateForAddOn:(id)arg1 withCallback:(CDUnknownBlockType)arg2;	// IMP=0x0000000000037a2b
- (void)addOn:(id)arg1 receivedUpdates:(id)arg2 removals:(id)arg3;	// IMP=0x00000000000376f0
- (_Bool)_applicableToCluster:(id)arg1;	// IMP=0x00000000000376a7
- (_Bool)_canRequestCreationOfCluster:(id)arg1;	// IMP=0x00000000000375b6
- (void)_addOnRemoved:(id)arg1;	// IMP=0x0000000000037500
- (void)_addOnAdded:(id)arg1;	// IMP=0x0000000000036faa
- (void)_configureServiceInterfacesOnConnection:(id)arg1;	// IMP=0x0000000000036a82
- (void)_clientLost:(id)arg1;	// IMP=0x0000000000036a0a
- (void)dealloc;	// IMP=0x000000000003694f
- (id)initWithListenerProvider:(id)arg1 addOnProvider:(id)arg2 delegate:(id)arg3;	// IMP=0x00000000000367e3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

