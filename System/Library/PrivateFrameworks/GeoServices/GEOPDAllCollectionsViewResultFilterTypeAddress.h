//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDMapsIdentifier, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAllCollectionsViewResultFilterTypeAddress : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDMapsIdentifier *_geoId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000004e18b7
- (unsigned long long)hash;	// IMP=0x00000000004e189a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004e1800
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004e1775
- (void)writeTo:(id)arg1;	// IMP=0x00000000004e171a
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004e170b
- (id)jsonRepresentation;	// IMP=0x00000000004e15f9
- (id)dictionaryRepresentation;	// IMP=0x00000000004e13f9
- (id)description;	// IMP=0x00000000004e134a

@end
