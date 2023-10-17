//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKPlayerInternal, NSArray, NSString, NSURL;

@interface GKGameplayBulletin
{
    unsigned char _gameLocation;	// 16 = 0x10
    NSString *_receiverPlayerID;	// 24 = 0x18
    NSString *_originatorPlayerID;	// 32 = 0x20
    GKPlayerInternal *_receiverPlayer;	// 40 = 0x28
    GKPlayerInternal *_originatorPlayer;	// 48 = 0x30
    NSString *_receiverGuestPlayerID;	// 56 = 0x38
    NSString *_originatorGuestPlayerID;	// 64 = 0x40
    GKPlayerInternal *_receiverGuestPlayer;	// 72 = 0x48
    GKPlayerInternal *_originatorGuestPlayer;	// 80 = 0x50
    NSURL *_storeURL;	// 88 = 0x58
    NSArray *_compatibleVersions;	// 96 = 0x60
    NSArray *_compatibleShortVersions;	// 104 = 0x68
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00400000001fba8f
- (void).cxx_destruct;	// IMP=0x0020000000200c5c
@property unsigned char gameLocation; // @synthesize gameLocation=_gameLocation;
@property(retain) NSArray *compatibleShortVersions; // @synthesize compatibleShortVersions=_compatibleShortVersions;
@property(retain) NSArray *compatibleVersions; // @synthesize compatibleVersions=_compatibleVersions;
@property(retain) NSURL *storeURL; // @synthesize storeURL=_storeURL;
@property(retain) GKPlayerInternal *originatorGuestPlayer; // @synthesize originatorGuestPlayer=_originatorGuestPlayer;
@property(retain) GKPlayerInternal *receiverGuestPlayer; // @synthesize receiverGuestPlayer=_receiverGuestPlayer;
@property(retain) NSString *originatorGuestPlayerID; // @synthesize originatorGuestPlayerID=_originatorGuestPlayerID;
@property(retain) NSString *receiverGuestPlayerID; // @synthesize receiverGuestPlayerID=_receiverGuestPlayerID;
// Error: Property attributes should begin with the type ('T') attribute, property name: originatorPlayer
// Property attributes: (null)

@property(retain) GKPlayerInternal *receiverPlayer; // @synthesize receiverPlayer=_receiverPlayer;
@property(retain) NSString *originatorPlayerID; // @synthesize originatorPlayerID=_originatorPlayerID;
@property(retain) NSString *receiverPlayerID; // @synthesize receiverPlayerID=_receiverPlayerID;
- (void)loadOriginatorPlayerWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000200425
- (void)loadStoreItemWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001ff363
- (void)determineGameLocationOnDeviceOrInStoreWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001fe7a8
- (void)determineGameLocationOnDeviceViaCompatibilityMatrixWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001fd5b7
- (void)determineGameLocationOnDeviceOnly;	// IMP=0x00100000001fcf60
- (_Bool)isCompatibleWithGameDescriptor:(id)arg1;	// IMP=0x00100000001fcb6a
- (_Bool)isPushFromLocalPlayers;	// IMP=0x00100000001fc99f
- (_Bool)isPushForLocalPlayers;	// IMP=0x00100000001fc7d4
- (_Bool)playerIsLocal:(id)arg1;	// IMP=0x00100000001fc44a
@property(readonly, retain) NSString *URLContext;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001fbfd3
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001fba97

@end
