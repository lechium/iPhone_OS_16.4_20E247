//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKGameServicePrivate
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x002000000004a01b
+ (Class)interfaceClass;	// IMP=0x001000000004a00a
- (oneway void)getFriendListAccessForAllGames:(CDUnknownBlockType)arg1;	// IMP=0x0020000000060544
- (oneway void)clearGlobalGameCacheWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000006029a
- (void)restoreGameIdCacheWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000060036
- (void)fetchInstalledGameIdCacheWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000005fb6c
- (void)fetchGameRecommendationsInContext:(id)arg1 responseKind:(int)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000005ef22
- (oneway void)removeGameForBundleID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005e921
- (oneway void)getGamesWithAchievementStatsForPlayer:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005dbce
- (void)loadGamesWithAchievementStatsForPlayer:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000005cfda
- (void)fetchGamesWithAchievementStatsForPlayer:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000005ccfd
- (oneway void)getStoreItemsForAdamIDs:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005c539
- (void)loadStorePiecesForGames:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000005b775
- (oneway void)getRatingForGameDescriptor:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005ad45
- (void)loadRatingForGameDescriptor:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000005a4ea
- (void)fetchRatingForGameDescriptor:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000005a137
- (oneway void)getGameMetadataForBundleIDs:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000059620
- (void)loadGameMetadataForBundleIDs:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000058619
- (void)fetchGameMetadataForBundleIDs:(id)arg1 responseKind:(int)arg2 context:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000057c51
- (oneway void)getGameStatsForPlayer:(id)arg1 bundleIDs:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000056d73
- (void)loadGameStatsForPlayer:(id)arg1 bundleIdentifiers:(id)arg2 context:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000055222
- (void)fetchGameStatsForPlayer:(id)arg1 bundleIdentifiers:(id)arg2 responseKind:(int)arg3 context:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000054aa0
- (oneway void)getGamesForPlayer:(id)arg1 includeInstalled:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000053a1a
- (void)loadGamesForPlayer:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000052700
- (void)fetchGamesForPlayer:(id)arg1 includeInstalled:(_Bool)arg2 responseKind:(int)arg3 context:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000051c4a
- (void)scanInstalledGamesForPlayer:(id)arg1 transaction:(id)arg2;	// IMP=0x0010000000051191
- (oneway void)getOnDeviceMultiplayerGamesForBundleIDs:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000050940
- (void)loadOnDeviceMultiplayerGamesWithContext:(id)arg1 forBundleIDs:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000501ad
- (void)fetchOnDeviceMultiplayerGamesInContext:(id)arg1 forBundleIDs:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000004fa3b
- (oneway void)getTopGamesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000004efcc
- (void)loadTopGamesWithContext:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000004e930
- (void)fetchTopGamesInContext:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000004e4cf
- (_Bool)requiresAuthenticationForSelector:(SEL)arg1;	// IMP=0x001000000004e47d
- (oneway void)getGamesPlayedSummaries:(id)arg1 limit:(id)arg2 withinSecs:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x001000000004cffb
- (oneway void)getGamesPlayedSummaries:(id)arg1 limit:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000004cfe3
- (oneway void)getGamesPlayedMetaData:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000004a5fc
- (oneway void)submitFriendListAccess:(id)arg1 value:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000004a1ab
- (id)cachedGamesPlayed:(id)arg1 context:(id)arg2;	// IMP=0x001000000004a026

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

