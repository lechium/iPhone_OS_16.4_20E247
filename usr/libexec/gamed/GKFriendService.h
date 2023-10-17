//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKFriendService
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x0020000000036e12
+ (Class)interfaceClass;	// IMP=0x0010000000036e01
- (oneway void)createFriendRequestWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00200000000397da
- (oneway void)establishNearbyRelationshipsUsingPlayerTokens:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000003924b
- (id)predicateForFriendPredicate:(id)arg1 withFilter:(id)arg2;	// IMP=0x0010000000039118
- (oneway void)getNearbyTokenForLocalPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000038afd
- (void)getFriendIDsForPlayer:(id)arg1 withPredicate:(CDUnknownBlockType)arg2 withFilter:(id)arg3 commonFriends:(_Bool)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000375a0
- (id)filterCachedFriendObjects:(id)arg1 filter:(id)arg2;	// IMP=0x00100000000372ab
- (void)getFriendIDsForPlayer:(id)arg1 withPredicate:(CDUnknownBlockType)arg2 commonFriends:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000037283
- (oneway void)getChallengableFriendsForPlayer:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000370c0
- (void)getFriendIDsForPlayer:(id)arg1 commonFriends:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000003707c
- (void)getFriendsForPlayer:(id)arg1 commonFriends:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000036ee5
- (void)updateFriendsOfLocalPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000036e3a
- (oneway void)getFriendsForPlayer:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000036e23
- (oneway void)notifyWidgetFriendListUpdated;	// IMP=0x0010000000036e1d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
