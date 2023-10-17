//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface SOSAccountTrustClassic
{
}

+ (id)trustClassic;	// IMP=0x0040000000208abb
- (void)resetRingDictionary;	// IMP=0x0020000000207c11
- (void)addRingDictionary;	// IMP=0x0010000000207b08
- (_Bool)clientPing:(id)arg1;	// IMP=0x0010000000207a18
- (_Bool)removeIncompleteiCloudIdentities:(struct __OpaqueSOSCircle *)arg1 privKey:(struct __SecKey *)arg2 err:(struct __CFError **)arg3;	// IMP=0x001000000020792d
- (struct __SecKey *)copyDeviceKey:(struct __CFError **)arg1;	// IMP=0x00100000002078c2
- (_Bool)postDebugScope:(id)arg1 scope:(void *)arg2 err:(struct __CFError **)arg3;	// IMP=0x001000000020789a
- (struct __OpaqueSOSEngine *)getDataSourceEngine:(struct SOSDataSourceFactory *)arg1;	// IMP=0x00100000002077d4
- (_Bool)isSyncingV0;	// IMP=0x0010000000207735
- (_Bool)requestSyncWithAllPeers:(id)arg1 key:(struct __SecKey *)arg2 err:(struct __CFError **)arg3;	// IMP=0x0010000000207608
- (struct __CFSet *)syncWithPeers:(id)arg1 peerIDs:(struct __CFSet *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00100000002073e8
- (char *)encodeToDER:(id)arg1 err:(id *)arg2 start:(const char *)arg3 end:(char *)arg4;	// IMP=0x0010000000207109
- (unsigned long long)getDEREncodedSize:(id)arg1 err:(id *)arg2;	// IMP=0x0010000000206db9
- (struct __CFArray *)copySortedPeerArray:(struct __CFError **)arg1 action:(CDUnknownBlockType)arg2;	// IMP=0x0010000000206d46
- (_Bool)addEscrowToPeerInfo:(struct __OpaqueSOSFullPeerInfo *)arg1 err:(struct __CFError **)arg2;	// IMP=0x0010000000206d13
- (_Bool)addiCloudIdentity:(struct __OpaqueSOSCircle *)arg1 key:(struct __SecKey *)arg2 err:(struct __CFError **)arg3;	// IMP=0x0010000000206a98
- (struct __CFSet *)copyPreApprovedHSA2Info;	// IMP=0x0010000000206a5b
- (_Bool)upgradeiCloudIdentity:(struct __OpaqueSOSCircle *)arg1 privKey:(struct __SecKey *)arg2;	// IMP=0x00100000002069f7
- (void)removeInvalidApplications:(struct __OpaqueSOSCircle *)arg1 userPublic:(struct __SecKey *)arg2;	// IMP=0x001000000020694d
- (_Bool)updatePeerInfo:(id)arg1 description:(struct __CFString *)arg2 err:(struct __CFError **)arg3 update:(CDUnknownBlockType)arg4;	// IMP=0x0010000000206842
- (_Bool)peerSignatureUpdate:(struct __SecKey *)arg1 err:(struct __CFError **)arg2;	// IMP=0x00100000002067ec
- (struct __CFArray *)copyPeersToListenTo:(struct __SecKey *)arg1 err:(struct __CFError **)arg2;	// IMP=0x0010000000206765
- (struct __CFSet *)copyPeerSetMatching:(CDUnknownBlockType)arg1;	// IMP=0x00100000002066a2
- (_Bool)isAccountIdentity:(struct __OpaqueSOSPeerInfo *)arg1 err:(struct __CFError **)arg2;	// IMP=0x0010000000206663
- (struct __OpaqueSOSPeerInfo *)copyPeerWithID:(struct __CFString *)arg1 err:(struct __CFError **)arg2;	// IMP=0x001000000020660d
- (struct __SecKey *)copyPublicKeyForPeer:(struct __CFString *)arg1 err:(struct __CFError **)arg2;	// IMP=0x0010000000206584
- (struct __CFSet *)copyPeerSetForView:(struct __CFString *)arg1;	// IMP=0x00100000002064ec
- (void)addSyncablePeerBlock:(id)arg1 dsName:(struct __CFString *)arg2 change:(CDUnknownBlockType)arg3;	// IMP=0x0010000000206360
- (_Bool)updateViewSets:(id)arg1 enabled:(struct __CFSet *)arg2 disabled:(struct __CFSet *)arg3;	// IMP=0x0010000000205d81
- (_Bool)matchOTUserViewSettings:(id)arg1 userViewsEnabled:(_Bool)arg2 err:(struct __CFError **)arg3;	// IMP=0x0010000000205b2f
- (int)viewStatus:(id)arg1 name:(struct __CFString *)arg2 err:(struct __CFError **)arg3;	// IMP=0x001000000020590a
- (_Bool)activeValidInCircle:(id)arg1 err:(struct __CFError **)arg2;	// IMP=0x0010000000205882
- (MISSING_TYPE *)updateView:name:code:err: /* Error: Ran out of types for this method. */;	// IMP=0x001000000020547c
- (_Bool)updateGestalt:(id)arg1 newGestalt:(struct __CFDictionary *)arg2;	// IMP=0x00100000002052eb
- (id)initWithRetirees:(id)arg1 fpi:(struct __OpaqueSOSFullPeerInfo *)arg2 circle:(struct __OpaqueSOSCircle *)arg3 departureCode:(int)arg4 peerExpansion:(id)arg5;	// IMP=0x0010000000205180
- (id)init;	// IMP=0x0010000000205088
- (_Bool)cleanupAfterPeer:(id)arg1 circleTransport:(id)arg2 seconds:(unsigned long long)arg3 circle:(struct __OpaqueSOSCircle *)arg4 cleanupPeer:(struct __OpaqueSOSPeerInfo *)arg5 err:(struct __CFError **)arg6;	// IMP=0x00100000001f9240
- (_Bool)cleanupRetirementTickets:(id)arg1 circle:(struct __OpaqueSOSCircle *)arg2 time:(unsigned long long)arg3 err:(struct __CFError **)arg4;	// IMP=0x00100000001f9087
- (_Bool)resetRing:(id)arg1 ringName:(struct __CFString *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00100000002047bf
- (struct __CFDictionary *)getRings:(struct __CFError **)arg1;	// IMP=0x0010000000204728
- (struct __OpaqueSOSRing *)copyRing:(struct __CFString *)arg1 err:(struct __CFError **)arg2;	// IMP=0x00100000002046ac
- (_Bool)handleUpdateRing:(id)arg1 prospectiveRing:(struct __OpaqueSOSRing *)arg2 transport:(id)arg3 userPublicKey:(struct __SecKey *)arg4 writeUpdate:(_Bool)arg5 err:(struct __CFError **)arg6;	// IMP=0x0010000000202c87
- (_Bool)setRing:(struct __OpaqueSOSRing *)arg1 ringName:(struct __CFString *)arg2 err:(struct __CFError **)arg3;	// IMP=0x0010000000202bfa
- (_Bool)checkForRings:(struct __CFError **)arg1;	// IMP=0x0010000000202af2
- (void)setRings:(struct __CFDictionary *)arg1;	// IMP=0x0010000000202a9f
- (_Bool)resetAccountToEmpty:(id)arg1 transport:(id)arg2 err:(struct __CFError **)arg3;	// IMP=0x00100000002027d4
- (_Bool)resetAllRings:(id)arg1 err:(struct __CFError **)arg2;	// IMP=0x001000000020265e
- (_Bool)forEachRing:(CDUnknownBlockType)arg1;	// IMP=0x00100000002023a9
- (_Bool)updateV2Dictionary:(id)arg1 v2:(struct __CFDictionary *)arg2;	// IMP=0x0010000000202278
- (void)pendEnableViewSet:(struct __CFSet *)arg1;	// IMP=0x00100000002021bb
- (void)valueSubtractFrom:(struct __CFString *)arg1 valuesToSubtract:(struct __CFSet *)arg2;	// IMP=0x00100000002020e5
- (void)valueUnionWith:(struct __CFString *)arg1 valuesToUnion:(struct __CFSet *)arg2;	// IMP=0x0010000000202010
- (_Bool)valueSetContainsValue:(struct __CFString *)arg1 value:(void *)arg2;	// IMP=0x0010000000201fb0
- (_Bool)setValueInExpansion:(struct __CFString *)arg1 value:(void *)arg2 err:(struct __CFError **)arg3;	// IMP=0x0010000000201f18
- (_Bool)clearValueFromExpansion:(struct __CFString *)arg1 err:(struct __CFError **)arg2;	// IMP=0x0010000000201eac
- (_Bool)ensureExpansion:(struct __CFError **)arg1;	// IMP=0x0010000000201dea
- (void *)getValueFromExpansion:(struct __CFString *)arg1 err:(struct __CFError **)arg2;	// IMP=0x0010000000201d60
- (_Bool)joinCircle:(id)arg1 userKey:(struct __SecKey *)arg2 useCloudPeer:(_Bool)arg3 err:(struct __CFError **)arg4;	// IMP=0x001000000021b3ce
- (_Bool)resetCircleToOffering:(id)arg1 userKey:(struct __SecKey *)arg2 err:(struct __CFError **)arg3;	// IMP=0x001000000021b242
- (_Bool)resetToOffering:(id)arg1 key:(struct __SecKey *)arg2 err:(struct __CFError **)arg3;	// IMP=0x001000000021b17b
- (_Bool)leaveCircle:(id)arg1 err:(struct __CFError **)arg2;	// IMP=0x001000000021b02e
- (_Bool)leaveCircleWithAccount:(id)arg1 err:(struct __CFError **)arg2;	// IMP=0x001000000021aef1
- (void)forEachCirclePeerExceptMe:(CDUnknownBlockType)arg1;	// IMP=0x001000000021ade8
- (void)generationSignatureUpdateWith:(id)arg1 key:(struct __SecKey *)arg2;	// IMP=0x001000000021abd4
- (_Bool)fixICloudIdentities:(id)arg1 circle:(struct __OpaqueSOSCircle *)arg2;	// IMP=0x001000000021a8d7
- (_Bool)modifyCircle:(id)arg1 err:(struct __CFError **)arg2 action:(CDUnknownBlockType)arg3;	// IMP=0x001000000021a7d9
- (_Bool)updateCircle:(id)arg1 newCircle:(struct __OpaqueSOSCircle *)arg2 err:(struct __CFError **)arg3;	// IMP=0x001000000021a7b5
- (_Bool)updateCircleFromRemote:(id)arg1 newCircle:(struct __OpaqueSOSCircle *)arg2 err:(struct __CFError **)arg3;	// IMP=0x001000000021a794
- (_Bool)handleUpdateCircle:(struct __OpaqueSOSCircle *)arg1 transport:(id)arg2 update:(_Bool)arg3 err:(struct __CFError **)arg4;	// IMP=0x0010000000218931
- (id)iCloudCleanerHandle:(id)arg1;	// IMP=0x0010000000218893
- (id)iCloudCheckEventHandle:(id)arg1;	// IMP=0x00100000002187f5
- (_Bool)checkForSponsorshipTrust:(struct __OpaqueSOSCircle *)arg1;	// IMP=0x001000000021872b
- (_Bool)ghostBustingOK:(struct __OpaqueSOSCircle *)arg1 updatingTo:(struct __OpaqueSOSCircle *)arg2;	// IMP=0x0010000000218652
- (_Bool)hasLeft;	// IMP=0x0010000000218629
- (struct __OpaqueSOSCircle *)ensureCircle:(id)arg1 name:(struct __CFString *)arg2 err:(struct __CFError **)arg3;	// IMP=0x001000000021851e
- (struct __OpaqueSOSCircle *)getCircle:(struct __CFError **)arg1;	// IMP=0x00100000002184bd
- (int)getCircleStatusOnly:(struct __CFError **)arg1;	// IMP=0x0010000000218470
- (int)thisDeviceStatusInCircle:(struct __OpaqueSOSCircle *)arg1 peer:(struct __OpaqueSOSPeerInfo *)arg2;	// IMP=0x00100000002183f1
- (_Bool)hasCircle:(struct __CFError **)arg1;	// IMP=0x0010000000218395
- (_Bool)isInCircleOnly:(struct __CFError **)arg1;	// IMP=0x0010000000218356
- (void)purgeIdentity;	// IMP=0x001000000023d97f
- (_Bool)isMyPeerActive:(struct __CFError **)arg1;	// IMP=0x001000000023d909
- (_Bool)ensureFullPeerAvailable:(id)arg1 err:(struct __CFError **)arg2;	// IMP=0x001000000023d111
- (void)ensureOctagonPeerKeys:(id)arg1;	// IMP=0x001000000023c655
- (_Bool)haveConfirmedOctagonKeys;	// IMP=0x001000000023c48b
- (struct __SecKey *)randomPermanentFullECKey:(int)arg1 name:(id)arg2 error:(struct __CFError **)arg3;	// IMP=0x001000000023c465
- (struct __OpaqueSOSFullPeerInfo *)CopyAccountIdentityPeerInfo;	// IMP=0x001000000023c44b
- (_Bool)hasFullPeerInfo:(struct __CFError **)arg1;	// IMP=0x001000000023c3ef
- (_Bool)fullPeerInfoVerify:(struct __SecKey *)arg1 err:(struct __CFError **)arg2;	// IMP=0x001000000023c37e
- (struct __OpaqueSOSFullPeerInfo *)getMyFullPeerInfo;	// IMP=0x001000000023c344
- (_Bool)updateFullPeerInfo:(id)arg1 minimum:(struct __CFSet *)arg2 excluded:(struct __CFSet *)arg3;	// IMP=0x001000000023c246
- (_Bool)isLockedError:(id)arg1;	// IMP=0x001000000023c1ad

@end
