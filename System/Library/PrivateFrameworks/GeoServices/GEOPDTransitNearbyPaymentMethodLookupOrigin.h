//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOWaypointTyped, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitNearbyPaymentMethodLookupOrigin : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOWaypointTyped *_waypointTyped;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000641c82
- (unsigned long long)hash;	// IMP=0x0000000000641c65
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000641bcb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000641b40
- (void)writeTo:(id)arg1;	// IMP=0x00000000006419ea
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000006419db
- (id)jsonRepresentation;	// IMP=0x0000000000641660
- (id)dictionaryRepresentation;	// IMP=0x0000000000641460
- (id)description;	// IMP=0x00000000006413b1

@end
