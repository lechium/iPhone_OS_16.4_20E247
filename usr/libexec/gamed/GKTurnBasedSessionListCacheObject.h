//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKGameCacheObject;

@interface GKTurnBasedSessionListCacheObject
{
}

+ (void)expireListsForSessionID:(id)arg1 context:(id)arg2;	// IMP=0x004000000016a5d1
+ (Class)entryClass;	// IMP=0x00100000001699e5
+ (id)entityName;	// IMP=0x00100000001699d8
- (void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2;	// IMP=0x0020000000169f9b
- (id)internalRepresentation;	// IMP=0x0010000000169c41
- (id)sessions;	// IMP=0x0010000000169a4d
- (id)sessionIDs;	// IMP=0x00100000001699f6

// Remaining properties
@property(retain, nonatomic) GKGameCacheObject *game; // @dynamic game;

@end

