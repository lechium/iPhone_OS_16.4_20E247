//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlaceLookupResult : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000005b7d14
- (unsigned long long)hash;	// IMP=0x00000000005b7d0c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005b7cc7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005b7c6c
- (void)writeTo:(id)arg1;	// IMP=0x00000000005b7c4f
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005b7c40
- (id)jsonRepresentation;	// IMP=0x00000000005b7b2e
- (id)dictionaryRepresentation;	// IMP=0x00000000005b79c3
- (id)description;	// IMP=0x00000000005b7914

@end

