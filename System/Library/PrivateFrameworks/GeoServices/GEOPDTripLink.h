//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTripLink : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSData *_linkGeometry;	// 16 = 0x10
    unsigned long long _linkId;	// 24 = 0x18
    struct {
        unsigned int has_linkId:1;
    } _flags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000d3e728
- (unsigned long long)hash;	// IMP=0x0000000000d3e6de
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d3e619
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d3e572
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d3e4f2
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d3e4e3
- (id)jsonRepresentation;	// IMP=0x0000000000d3e3d1
- (id)dictionaryRepresentation;	// IMP=0x0000000000d3e175
- (id)description;	// IMP=0x0000000000d3e0c6

@end
