//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitTripGeometryFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000d3b2de
- (unsigned long long)hash;	// IMP=0x0000000000d3b2d6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d3b291
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d3b236
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d3b219
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d3b20a
- (id)jsonRepresentation;	// IMP=0x0000000000d3b0f8
- (id)dictionaryRepresentation;	// IMP=0x0000000000d3af8d
- (id)description;	// IMP=0x0000000000d3aede

@end
