//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDFeatureIdGeocodingResult : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000549d72
- (unsigned long long)hash;	// IMP=0x0000000000549d6a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000549d25
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000549cca
- (void)writeTo:(id)arg1;	// IMP=0x0000000000549cad
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000549c9e
- (id)jsonRepresentation;	// IMP=0x00000000005499de
- (id)dictionaryRepresentation;	// IMP=0x0000000000549873
- (id)description;	// IMP=0x00000000005497c4

@end

