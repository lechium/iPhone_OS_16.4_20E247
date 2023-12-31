//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKGameCacheObject, GKLeaderboardSetCacheObject, GKPlayerProfileCacheObject, MISSING_TYPE;

@interface GKLeaderboardListCacheObject
{
}

+ (id)entityName;	// IMP=0x00400000001587b4
- (MISSING_TYPE *)isValid;	// IMP=0x00200000001588c1
- (void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2;	// IMP=0x00100000001587c1

// Remaining properties
@property(retain, nonatomic) GKGameCacheObject *game; // @dynamic game;
@property(retain, nonatomic) GKPlayerProfileCacheObject *player; // @dynamic player;
@property(retain, nonatomic) GKLeaderboardSetCacheObject *set; // @dynamic set;

@end

