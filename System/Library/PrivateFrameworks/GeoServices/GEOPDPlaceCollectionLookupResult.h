//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDComponent, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlaceCollectionLookupResult : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDComponent *_collectionComponent;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000588758
- (unsigned long long)hash;	// IMP=0x000000000058873b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005886a1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000588616
- (void)writeTo:(id)arg1;	// IMP=0x00000000005885bb
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005885ac
- (id)jsonRepresentation;	// IMP=0x0000000000588231
- (id)dictionaryRepresentation;	// IMP=0x0000000000588031
- (id)description;	// IMP=0x0000000000587f82

@end

