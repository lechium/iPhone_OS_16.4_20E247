//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface CLCompanionSyncAuthObject : PBCodable
{
    unsigned int _authMask;	// 8 = 0x8
    NSMutableArray *_interestZones;	// 16 = 0x10
    NSString *_clientKey;	// 24 = 0x18
    unsigned int _correctiveCompensationMask;	// 32 = 0x20
    int _notification;	// 36 = 0x24
    int _operationType;	// 40 = 0x28
    NSMutableArray *_vectorClocks;	// 48 = 0x30
    _Bool _clearClient;	// 56 = 0x38
    struct {
        unsigned int authMask:1;
        unsigned int correctiveCompensationMask:1;
        unsigned int notification:1;
        unsigned int clearClient:1;
    } _has;	// 60 = 0x3c
}

+ (Class)interestZonesType;	// IMP=0x0040000000611981
+ (Class)vectorClocksType;	// IMP=0x00100000006118cc
@property(retain, nonatomic) NSMutableArray *interestZones; // @synthesize interestZones=_interestZones;
@property(retain, nonatomic) NSMutableArray *vectorClocks; // @synthesize vectorClocks=_vectorClocks;
@property(nonatomic) int operationType; // @synthesize operationType=_operationType;
@property(nonatomic) unsigned int correctiveCompensationMask; // @synthesize correctiveCompensationMask=_correctiveCompensationMask;
@property(retain, nonatomic) NSString *clientKey; // @synthesize clientKey=_clientKey;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000612f54
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000612c88
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000612906
- (void)copyTo:(id)arg1;	// IMP=0x0010000000612750
- (void)writeTo:(id)arg1;	// IMP=0x00100000006124b1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000006124a4
- (id)dictionaryRepresentation;	// IMP=0x0010000000611a09
@property(readonly, copy) NSString *description;
- (id)interestZonesAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000611964
- (unsigned long long)interestZonesCount;	// IMP=0x0010000000611947
- (void)addInterestZones:(id)arg1;	// IMP=0x00100000006118fa
- (void)clearInterestZones;	// IMP=0x00100000006118dd
- (id)vectorClocksAtIndex:(unsigned long long)arg1;	// IMP=0x00100000006118af
- (unsigned long long)vectorClocksCount;	// IMP=0x0010000000611892
- (void)addVectorClocks:(id)arg1;	// IMP=0x0010000000611845
- (void)clearVectorClocks;	// IMP=0x0010000000611828
- (int)StringAsOperationType:(id)arg1;	// IMP=0x00100000006117bc
- (id)operationTypeAsString:(int)arg1;	// IMP=0x0010000000611781
- (int)StringAsNotification:(id)arg1;	// IMP=0x001000000061171a
- (id)notificationAsString:(int)arg1;	// IMP=0x00100000006116e1
@property(nonatomic) _Bool hasNotification;
@property(nonatomic) int notification; // @synthesize notification=_notification;
@property(nonatomic) _Bool hasClearClient;
@property(nonatomic) _Bool clearClient; // @synthesize clearClient=_clearClient;
@property(nonatomic) _Bool hasCorrectiveCompensationMask;
@property(nonatomic) _Bool hasAuthMask;
@property(nonatomic) unsigned int authMask; // @synthesize authMask=_authMask;
- (void)dealloc;	// IMP=0x00100000006114f4
- (void)setChangeType:(long long)arg1;	// IMP=0x001000000078d3a0
@property(readonly, nonatomic) long long changeType;
@property(readonly, nonatomic) NSString *sequencer;
- (void)setObjectIdentifier:(id)arg1;	// IMP=0x001000000078d362
@property(readonly, nonatomic) NSString *objectIdentifier;
- (void)setSyncId:(id)arg1;	// IMP=0x001000000078d33a
- (id)syncId;	// IMP=0x001000000078d326

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
