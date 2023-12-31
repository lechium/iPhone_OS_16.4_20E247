//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol GKNearbyDelegate;

@interface GKMultiplayerMatchService
{
    id <GKNearbyDelegate> _delegate;	// 8 = 0x8
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x0020000000090af1
+ (Class)interfaceClass;	// IMP=0x0010000000090ae0
- (void).cxx_destruct;	// IMP=0x00200000000a4a7b
@property(nonatomic) __weak id <GKNearbyDelegate> delegate; // @synthesize delegate=_delegate;
- (oneway void)sendDataToParticipant:(id)arg1 deviceID:(id)arg2 data:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000a47ed
- (oneway void)forgetParticipant:(id)arg1 deviceID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a4632
- (oneway void)setupNearbyDiscovery;	// IMP=0x00100000000a38f3
- (oneway void)isGameCenterMultiplayerGameForBundleID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a363c
- (oneway void)fetchOnDeviceMultiplayerBundleIDsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a319f
- (oneway void)fetchOnDeviceMultiplayerBundleIDsForNewBundleID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a2cd4
- (oneway void)fetchDevicePushToken:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a2ae0
- (oneway void)nearbyInviteWasCancelled:(id)arg1;	// IMP=0x00100000000a2a6a
- (oneway void)presentNearbyInvite:(id)arg1;	// IMP=0x00000000000a29f4
- (oneway void)stopNearbyAdvertisingWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a286f
- (oneway void)startNearbyAdvertisingWithDiscoveryInfo:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a26a0
- (oneway void)stopNearbyBrowsingWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a251b
- (oneway void)startNearbyBrowsingWithPlayerID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a237a
- (oneway void)updateCacheWithNearbyProfileDictionary:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a1a30
- (oneway void)cancelRelayRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a1827
- (oneway void)updateRelayRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a14ac
- (oneway void)initiateRelayRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a1121
- (oneway void)_performRelayAction:(id)arg1 request:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a0d33
- (oneway void)sendReconnectInvitation:(id)arg1 toPlayer:(id)arg2 connectionData:(id)arg3 sessionToken:(id)arg4 pushToken:(id)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x00100000000a01de
- (oneway void)removeInviteSessionIfNeeded;	// IMP=0x001000000009fe75
- (oneway void)removeInviteSession;	// IMP=0x001000000009fe38
- (oneway void)getInviteSessionTokenWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000009fc7c
- (oneway void)getPlayersToInviteWithHandlerV2:(CDUnknownBlockType)arg1;	// IMP=0x001000000009f899
- (oneway void)hasCanceledMultiplayerInitiateBulletinForSessionToken:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009f6a0
- (oneway void)getAcceptedGameInviteWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000009ede7
- (oneway void)declineGameInvite:(id)arg1 reason:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009e9bd
- (oneway void)acceptGameInvite:(id)arg1 connectionData:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009daa1
- (oneway void)putMultiPlayerGroup:(id)arg1 participants:(id)arg2 playedAt:(long long)arg3 bundleID:(id)arg4 numberOfAutomatched:(long long)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x001000000009d49b
- (oneway void)getMultiPlayerGroups:(CDUnknownBlockType)arg1;	// IMP=0x001000000009c321
- (void)convertToInternalObjects:(id)arg1 results:(id)arg2;	// IMP=0x001000000009be94
- (id)ensureGroup:(id)arg1 participants:(id)arg2 playedAt:(long long)arg3 numberOfAutomatched:(long long)arg4 moc:(id)arg5 list:(id)arg6;	// IMP=0x001000000009b9ac
- (oneway void)cancelGameInviteWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000009b46c
- (oneway void)removePlayersFromGameInviteV2:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009ab7a
- (oneway void)invitePlayersForMatchRequest:(id)arg1 onlineConnectionData:(id)arg2 nearbyConnectionData:(id)arg3 devicePushToken:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000098c34
- (void)saveRecord:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000098870
- (id)privateDatabase;	// IMP=0x0010000000098812
- (void)setupInviteShareWithRecordID:(id)arg1 rootRecord:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009817f
- (oneway void)loadURLWithData:(id)arg1 player:(id)arg2 matchRequest:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000096730
- (void)initiateInvitationForMatchRequest:(id)arg1 connectionData:(id)arg2 recipients:(id)arg3 devicePushToken:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000951c3
- (oneway void)setShareRecordID:(id)arg1;	// IMP=0x0010000000095133
- (oneway void)hasExistingInviteSessionWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000950a8
- (oneway void)setShareInvitees:(id)arg1;	// IMP=0x00100000000946d3
- (oneway void)getCompatibilityMatrix:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000093813
- (oneway void)getOverallFlowRateWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000092c27
- (oneway void)getFlowRateForPlayerGroup:(long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000091f8f
- (oneway void)cancelOutstandingMatchRequestWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000091b0a
- (oneway void)getPlayersForMatchRequest:(id)arg1 connectionData:(id)arg2 connectedPeers:(long long)arg3 rematchID:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000090afc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

