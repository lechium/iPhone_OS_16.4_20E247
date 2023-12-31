//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray;

@interface CKDPZoneRetrieveChangesResponse : PBCodable
{
    NSMutableArray *_changedZones;	// 8 = 0x8
    int _status;	// 16 = 0x10
    NSData *_syncContinuationToken;	// 24 = 0x18
    CDStruct_47fe53f2 _has;	// 32 = 0x20
}

+ (Class)changedZonesType;	// IMP=0x0010000000337f91
- (void).cxx_destruct;	// IMP=0x0000000000338f36
@property(retain, nonatomic) NSData *syncContinuationToken; // @synthesize syncContinuationToken=_syncContinuationToken;
@property(retain, nonatomic) NSMutableArray *changedZones; // @synthesize changedZones=_changedZones;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000338d52
- (unsigned long long)hash;	// IMP=0x0000000000338cdd
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000338be8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003389b3
- (void)copyTo:(id)arg1;	// IMP=0x00000000003388b1
- (void)writeTo:(id)arg1;	// IMP=0x000000000033872b
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000033871e
- (id)dictionaryRepresentation;	// IMP=0x000000000033818a
- (id)description;	// IMP=0x00000000003380db
- (int)StringAsStatus:(id)arg1;	// IMP=0x0000000000338074
- (id)statusAsString:(int)arg1;	// IMP=0x000000000033801e
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status; // @synthesize status=_status;
@property(readonly, nonatomic) _Bool hasSyncContinuationToken;
- (id)changedZonesAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000337f74
- (unsigned long long)changedZonesCount;	// IMP=0x0000000000337f57
- (void)addChangedZones:(id)arg1;	// IMP=0x0000000000337eed
- (void)clearChangedZones;	// IMP=0x0000000000337ed0

@end

