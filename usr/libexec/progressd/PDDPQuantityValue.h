//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface PDDPQuantityValue : PBCodable
{
    double _value;	// 8 = 0x8
    struct {
        unsigned int value:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) double value; // @synthesize value=_value;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000d60f2
- (unsigned long long)hash;	// IMP=0x00100000000d5ff4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000d5f5c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000d5ef6
- (void)copyTo:(id)arg1;	// IMP=0x00100000000d5ece
- (void)writeTo:(id)arg1;	// IMP=0x00100000000d5ea1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000d5e94
- (id)dictionaryRepresentation;	// IMP=0x00100000000d5c42
- (id)description;	// IMP=0x00100000000d5b93
@property(nonatomic) _Bool hasValue;

@end

