//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDCanonicalLocationSearchResult : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000052be82
- (unsigned long long)hash;	// IMP=0x000000000052be7a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000052be35
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000052bdda
- (void)writeTo:(id)arg1;	// IMP=0x000000000052bdbd
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000052bdae
- (id)jsonRepresentation;	// IMP=0x000000000052baee
- (id)dictionaryRepresentation;	// IMP=0x000000000052b983
- (id)description;	// IMP=0x000000000052b8d4

@end
