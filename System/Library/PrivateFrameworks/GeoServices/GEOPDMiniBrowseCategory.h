//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOStyleAttributes, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDMiniBrowseCategory : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOStyleAttributes *_styleAttributes;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000c9639c
- (unsigned long long)hash;	// IMP=0x0000000000c9637f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c962e5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c9625a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c961ff
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c961f0
- (id)jsonRepresentation;	// IMP=0x0000000000c960de
- (id)dictionaryRepresentation;	// IMP=0x0000000000c95ede
- (id)description;	// IMP=0x0000000000c95e2f

@end

