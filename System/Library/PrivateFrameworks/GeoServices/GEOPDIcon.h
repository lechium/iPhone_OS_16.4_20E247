//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDPhoto, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDIcon : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDPhoto *_image;	// 16 = 0x10
    int _iconType;	// 24 = 0x18
    struct {
        unsigned int has_iconType:1;
    } _flags;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000c7a566
- (unsigned long long)hash;	// IMP=0x0000000000c7a513
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c7a452
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c7a3a4
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c7a325
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c7a316
- (id)jsonRepresentation;	// IMP=0x0000000000c7a204
- (id)dictionaryRepresentation;	// IMP=0x0000000000c79f99
- (id)description;	// IMP=0x0000000000c79eea

@end
