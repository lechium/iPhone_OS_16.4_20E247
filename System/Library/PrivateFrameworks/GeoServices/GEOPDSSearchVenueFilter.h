//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDVenueIdentifier, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSSearchVenueFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDVenueIdentifier *_venueFilter;	// 16 = 0x10
    int _venueSearchType;	// 24 = 0x18
    struct {
        unsigned int has_venueSearchType:1;
    } _flags;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x00000000006a27be
- (unsigned long long)hash;	// IMP=0x00000000006a276b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006a26aa
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006a25fc
- (void)writeTo:(id)arg1;	// IMP=0x00000000006a257d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000006a256e
- (id)jsonRepresentation;	// IMP=0x00000000006a245c
- (id)dictionaryRepresentation;	// IMP=0x00000000006a21dc
- (id)description;	// IMP=0x00000000006a212d

@end

