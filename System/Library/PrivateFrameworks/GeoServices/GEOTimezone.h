//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOTimezone : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000001278d96
- (unsigned long long)hash;	// IMP=0x0000000001278d76
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001278cdc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001278c51
- (void)writeTo:(id)arg1;	// IMP=0x0000000001278bef
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000001278be0
- (id)jsonRepresentation;	// IMP=0x0000000001278652
- (id)dictionaryRepresentation;	// IMP=0x00000000012784c0
- (id)description;	// IMP=0x0000000001278411

@end
