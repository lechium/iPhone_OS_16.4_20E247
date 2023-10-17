//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPLocationBound, CKDPRecordFieldIdentifier, CKDPRecordFieldValue;

@interface CKDPQueryFilter : PBCodable
{
    CKDPLocationBound *_bounds;	// 8 = 0x8
    CKDPRecordFieldIdentifier *_fieldName;	// 16 = 0x10
    CKDPRecordFieldValue *_fieldValue;	// 24 = 0x18
    int _type;	// 32 = 0x20
    CDStruct_f953fb60 _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x00000000001791ec
@property(retain, nonatomic) CKDPLocationBound *bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic) CKDPRecordFieldValue *fieldValue; // @synthesize fieldValue=_fieldValue;
@property(retain, nonatomic) CKDPRecordFieldIdentifier *fieldName; // @synthesize fieldName=_fieldName;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000017908c
- (unsigned long long)hash;	// IMP=0x0000000000178ff3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000178eca
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000178de6
- (void)copyTo:(id)arg1;	// IMP=0x0000000000178d43
- (void)writeTo:(id)arg1;	// IMP=0x0000000000178ca5
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000178c98
- (id)dictionaryRepresentation;	// IMP=0x00000000001787eb
- (id)description;	// IMP=0x000000000017873c
- (int)StringAsType:(id)arg1;	// IMP=0x0000000000178451
- (id)typeAsString:(int)arg1;	// IMP=0x0000000000178406
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) _Bool hasBounds;
@property(readonly, nonatomic) _Bool hasFieldValue;
@property(readonly, nonatomic) _Bool hasFieldName;

@end
