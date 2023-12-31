//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOMapRegion;

__attribute__((visibility("hidden")))
@interface GEOPDSearchViewportInfo : PBCodable
{
    GEOMapRegion *_mapRegion;	// 8 = 0x8
    int _mapType;	// 16 = 0x10
    unsigned int _timeSinceMapViewportChanged;	// 20 = 0x14
    struct {
        unsigned int has_mapType:1;
        unsigned int has_timeSinceMapViewportChanged:1;
    } _flags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000011f75fe
- (unsigned long long)hash;	// IMP=0x00000000011f758f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000011f74a8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000011f73f3
- (void)writeTo:(id)arg1;	// IMP=0x00000000011f7365
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000011f7356
- (id)jsonRepresentation;	// IMP=0x00000000011f7347
- (id)dictionaryRepresentation;	// IMP=0x00000000011f7167
- (id)description;	// IMP=0x00000000011f70b8

@end

