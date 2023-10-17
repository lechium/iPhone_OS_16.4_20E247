//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDate, NSNumber, NSOrderedSet, NSString;

@interface GKTurnBasedSessionCacheObject
{
}

+ (id)sessionsWithSessionIDs:(id)arg1 inContext:(id)arg2;	// IMP=0x00400000001680b8
+ (const void *)uniqueObjectIDLookupKey;	// IMP=0x00100000001680ab
+ (id)uniqueAttributeName;	// IMP=0x001000000016809e
+ (id)sessionWithID:(id)arg1 inManagedObjectContext:(id)arg2;	// IMP=0x0010000000167fa6
+ (id)relationshipKeyPathsForPrefetch;	// IMP=0x0010000000165ff8
+ (id)entityName;	// IMP=0x0010000000165feb
- (id)internalRepresentation;	// IMP=0x0020000000168715
- (id)participantAtIndex:(long long)arg1;	// IMP=0x00100000001684fc
- (void)expire;	// IMP=0x001000000016848b
- (void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2;	// IMP=0x0010000000166e50
- (id)participantWithPlayerID:(id)arg1;	// IMP=0x0010000000166b4e
- (void)saveGameData:(id)arg1 expirationDate:(id)arg2;	// IMP=0x00100000001667e3
- (void)expireGameData;	// IMP=0x0010000000166621
- (void)deleteGameData;	// IMP=0x001000000016630c
- (id)gameData;	// IMP=0x00100000001660f9
- (void)prepareForDeletion;	// IMP=0x00100000001660bb
- (_Bool)isActive;	// IMP=0x0010000000166024

// Remaining properties
@property(retain, nonatomic) NSString *bundleID; // @dynamic bundleID;
@property(retain, nonatomic) NSString *bundleVersion; // @dynamic bundleVersion;
@property(retain, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property(retain, nonatomic) NSString *currentGuestID; // @dynamic currentGuestID;
@property(nonatomic) int currentParticipant; // @dynamic currentParticipant;
@property(retain, nonatomic) NSString *currentPlayerID; // @dynamic currentPlayerID;
@property(retain, nonatomic) NSDate *dataExpirationDate; // @dynamic dataExpirationDate;
@property(retain, nonatomic) NSDate *deletionDate; // @dynamic deletionDate;
@property(retain, nonatomic) NSOrderedSet *exchanges; // @dynamic exchanges;
@property(retain, nonatomic) NSDate *lastTurnDate; // @dynamic lastTurnDate;
@property(retain, nonatomic) NSString *lastTurnPlayerID; // @dynamic lastTurnPlayerID;
@property(retain, nonatomic) NSData *localizableMessage; // @dynamic localizableMessage;
@property(retain, nonatomic) NSString *matchDataVersion; // @dynamic matchDataVersion;
@property(nonatomic) int maxPlayers; // @dynamic maxPlayers;
@property(retain, nonatomic) NSString *message; // @dynamic message;
@property(nonatomic) int minPlayers; // @dynamic minPlayers;
@property(retain, nonatomic) NSOrderedSet *participants; // @dynamic participants;
@property(retain, nonatomic) NSNumber *platform; // @dynamic platform;
@property(retain, nonatomic) NSString *reason; // @dynamic reason;
@property(retain, nonatomic) NSString *sessionID; // @dynamic sessionID;
@property(retain, nonatomic) NSString *shortBundleVersion; // @dynamic shortBundleVersion;
@property(retain, nonatomic) NSString *status; // @dynamic status;
@property(nonatomic) int turnNumber; // @dynamic turnNumber;
@property(retain, nonatomic) NSString *unusedID; // @dynamic unusedID;

@end
