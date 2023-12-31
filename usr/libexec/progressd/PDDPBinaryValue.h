//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface PDDPBinaryValue : PBCodable
{
    int _valueType;	// 8 = 0x8
    _Bool _value;	// 12 = 0xc
    struct {
        unsigned int valueType:1;
        unsigned int value:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) _Bool value; // @synthesize value=_value;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000019bbf8
- (unsigned long long)hash;	// IMP=0x001000000019bbb2
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000019baf4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000019ba77
- (void)copyTo:(id)arg1;	// IMP=0x001000000019ba1d
- (void)writeTo:(id)arg1;	// IMP=0x001000000019b9ab
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000019b99e
- (id)dictionaryRepresentation;	// IMP=0x001000000019b604
- (id)description;	// IMP=0x001000000019b555
- (int)StringAsValueType:(id)arg1;	// IMP=0x001000000019b48a
- (id)valueTypeAsString:(int)arg1;	// IMP=0x001000000019b441
@property(nonatomic) _Bool hasValueType;
@property(nonatomic) int valueType; // @synthesize valueType=_valueType;
@property(nonatomic) _Bool hasValue;

@end

