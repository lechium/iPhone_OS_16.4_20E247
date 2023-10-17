//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOLatLng, GEOPDSearchViewportInfo, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchLocationContext : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    GEOLatLng *_deviceLocation;	// 16 = 0x10
    GEOPDSearchViewportInfo *_viewportInfo;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    struct {
        unsigned int read_deviceLocation:1;
        unsigned int read_viewportInfo:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x00000000011f7030
- (unsigned long long)hash;	// IMP=0x00000000011f6e96
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000011f6db4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000011f6c1f
- (void)writeTo:(id)arg1;	// IMP=0x00000000011f6a07
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000011f69f8
- (id)jsonRepresentation;	// IMP=0x00000000011f5b77
- (id)dictionaryRepresentation;	// IMP=0x00000000011f59ef
- (id)description;	// IMP=0x00000000011f5940
- (id)initWithData:(id)arg1;	// IMP=0x00000000011f517b
- (id)init;	// IMP=0x00000000011f511f

@end
