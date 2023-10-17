//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBatchReverseGeocodingParameters : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_95bda58d _additionalPlaceTypes;	// 24 = 0x18
    NSMutableArray *_assetLocations;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_additionalPlaceTypes:1;
        unsigned int read_assetLocations:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 68 = 0x44
}

- (void).cxx_destruct;	// IMP=0x00000000005254a5
- (unsigned long long)hash;	// IMP=0x000000000052545f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000525396
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005250bc
- (void)writeTo:(id)arg1;	// IMP=0x0000000000524b94
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000524b85
- (id)jsonRepresentation;	// IMP=0x0000000000524804
- (id)dictionaryRepresentation;	// IMP=0x00000000005241aa
- (id)description;	// IMP=0x00000000005240fb
- (void)dealloc;	// IMP=0x000000000052347e
- (id)initWithData:(id)arg1;	// IMP=0x0000000000523422
- (id)init;	// IMP=0x00000000005233c6

@end
