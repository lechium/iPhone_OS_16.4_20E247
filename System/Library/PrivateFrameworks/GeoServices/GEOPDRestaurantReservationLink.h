//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDRestaurantReservationLink : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_restaurantLinks;	// 16 = 0x10
}

+ (id)reservationLinkForPlaceData:(id)arg1;	// IMP=0x0010000000a7602d
- (void).cxx_destruct;	// IMP=0x0000000000cf15ab
- (unsigned long long)hash;	// IMP=0x0000000000cf158e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cf14f4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cf1334
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cf11d5
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cf11c6
- (id)jsonRepresentation;	// IMP=0x0000000000cf0f0d
- (id)dictionaryRepresentation;	// IMP=0x0000000000cf0b6a
- (id)description;	// IMP=0x0000000000cf0abb

@end

