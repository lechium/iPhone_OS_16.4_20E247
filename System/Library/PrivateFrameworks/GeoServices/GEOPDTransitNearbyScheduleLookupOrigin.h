//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOWaypointTyped, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitNearbyScheduleLookupOrigin : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOWaypointTyped *_waypointTyped;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000642fb6
- (unsigned long long)hash;	// IMP=0x0000000000642f99
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000642eff
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000642e74
- (void)writeTo:(id)arg1;	// IMP=0x0000000000642d1e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000642d0f
- (id)jsonRepresentation;	// IMP=0x0000000000642994
- (id)dictionaryRepresentation;	// IMP=0x0000000000642794
- (id)description;	// IMP=0x00000000006426e5

@end
