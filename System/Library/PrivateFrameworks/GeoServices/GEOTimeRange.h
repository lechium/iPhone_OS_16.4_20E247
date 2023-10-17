//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOTimeRange : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    unsigned int _from;	// 16 = 0x10
    unsigned int _to;	// 20 = 0x14
    struct {
        unsigned int has_from:1;
        unsigned int has_to:1;
    } _flags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000105a9bf
- (unsigned long long)hash;	// IMP=0x000000000105a97b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000105a8c8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000105a82b
- (void)writeTo:(id)arg1;	// IMP=0x000000000105a79f
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000105a790
- (id)jsonRepresentation;	// IMP=0x000000000105a67e
- (id)dictionaryRepresentation;	// IMP=0x000000000105a45d
- (id)description;	// IMP=0x000000000105a3ae
- (id)initWithPlaceDataTimeRange:(struct GEOPDLocalTimeRange *)arg1;	// IMP=0x0000000000a6c2c4

@end
