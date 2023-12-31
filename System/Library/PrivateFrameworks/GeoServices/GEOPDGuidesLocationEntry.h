//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOLatLng, GEOMapRegion, GEOPDGuidesLocationEntryTypeWorldWide, GEOPDMapsIdentifier, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDGuidesLocationEntry : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_62a50c50 _geoIdCandidates;	// 24 = 0x18
    GEOLatLng *_center;	// 48 = 0x30
    GEOMapRegion *_mapRegion;	// 56 = 0x38
    GEOPDMapsIdentifier *_placeId;	// 64 = 0x40
    GEOPDGuidesLocationEntryTypeWorldWide *_worldwide;	// 72 = 0x48
    unsigned int _readerMarkPos;	// 80 = 0x50
    unsigned int _readerMarkLength;	// 84 = 0x54
    struct os_unfair_lock_s _readerLock;	// 88 = 0x58
    unsigned int _numGuides;	// 92 = 0x5c
    int _type;	// 96 = 0x60
    struct {
        unsigned int has_numGuides:1;
        unsigned int has_type:1;
        unsigned int read_unknownFields:1;
        unsigned int read_geoIdCandidates:1;
        unsigned int read_center:1;
        unsigned int read_mapRegion:1;
        unsigned int read_placeId:1;
        unsigned int read_worldwide:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 100 = 0x64
}

- (void).cxx_destruct;	// IMP=0x0000000000c7293e
- (unsigned long long)hash;	// IMP=0x0000000000c72850
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c72688
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c72402
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c7214f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c72140
- (id)jsonRepresentation;	// IMP=0x0000000000c7146c
- (id)dictionaryRepresentation;	// IMP=0x0000000000c70faf
- (id)description;	// IMP=0x0000000000c70f00
- (void)dealloc;	// IMP=0x0000000000c6fb43
- (id)initWithData:(id)arg1;	// IMP=0x0000000000c6fae7
- (id)init;	// IMP=0x0000000000c6fa8b

@end

