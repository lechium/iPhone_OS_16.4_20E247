//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitTripGeometry : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_9f2792e4 _tripStepIndexs;	// 24 = 0x18
    NSMutableArray *_tripLinks;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_tripStepIndexs:1;
        unsigned int read_tripLinks:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 68 = 0x44
}

+ (id)transitTripGeometryForPlaceData:(id)arg1;	// IMP=0x0010000000a6f50b
- (void).cxx_destruct;	// IMP=0x0000000000d3ae9c
- (unsigned long long)hash;	// IMP=0x0000000000d3ae56
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d3ad8d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d3aab3
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d3a7f2
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d3a7e3
- (id)jsonRepresentation;	// IMP=0x0000000000d3a333
- (id)dictionaryRepresentation;	// IMP=0x0000000000d39f2d
- (id)description;	// IMP=0x0000000000d39e7e
- (void)dealloc;	// IMP=0x0000000000d3921a
- (id)initWithData:(id)arg1;	// IMP=0x0000000000d391be
- (id)init;	// IMP=0x0000000000d39162

@end

