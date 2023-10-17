//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKProfileServicePrivate
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x002000000002b825
+ (Class)interfaceClass;	// IMP=0x001000000002b814
- (oneway void)clearScopedIdsCacheWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0020000000035ad4
- (void)cacheScopedIds:(id)arg1 forPlayerId:(id)arg2;	// IMP=0x00100000000355c2
- (void)requestScopedIdsFromNetwork:(id)arg1 requestDict:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000350a7
- (oneway void)loadScopedPlayerIDs:(id)arg1 gameBundleIds:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000033ff9
- (oneway void)loadScopedPlayerIDs:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000033eb7
- (void)loadProfileForPlayer:(id)arg1 pieces:(unsigned char)arg2 context:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000033270
- (oneway void)getProfilesForPlayerIDs:(id)arg1 fetchOptions:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000032c7f
- (oneway void)startContactsIntegrationIDSSyncForHandles:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000329d9
- (oneway void)startContactsIntegrationSyncWithOptions:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000003277d
- (oneway void)clearContactsIntegrationCachesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000032707
- (oneway void)getGameCenterRelationshipsForContact:(id)arg1 shouldRefresh:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000032016
- (void)updateContactsIntegrationInfoFromLocalPlayerProfile:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000031d35
- (oneway void)setContactsIntegrationConsent:(int)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000310cf
- (oneway void)getContactsIntegrationConsentWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000030b71
- (oneway void)getProfilePrivacyWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000307a0
- (oneway void)invalidateCachedProfileForLocalPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000030600
- (oneway void)setProfileSettings:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000301f3
- (oneway void)setProfilePrivacy:(int)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002fabc
- (oneway void)setPrivacyNoticeVersion:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002f400
- (oneway void)setArcadeSubscriptionExpiration:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002f093
- (oneway void)setGlobalFriendListAccess:(int)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002ebec
- (oneway void)getTermsAndConditionsURLWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000002e5df
- (oneway void)getSuggestionsForNickname:(id)arg1 suggestionsCount:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000002df7b
- (oneway void)setPlayerNickname:(id)arg1 suggestionsCount:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000002d5bf
- (oneway void)setFindable:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002d0fc
- (oneway void)deletePhotoWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000002cb05
- (oneway void)setPhotoData:(id)arg1 avatarType:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000002c44d
- (oneway void)cachePhotos:(id)arg1 avatarType:(id)arg2 fileNames:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x001000000002bdf9
- (oneway void)setStatus:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002b830

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
