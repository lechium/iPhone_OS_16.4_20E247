//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPlaceResult, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOCluster : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    CDStruct_95bda58d _indexs;	// 16 = 0x10
    GEOPlaceResult *_container;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    struct {
        unsigned int read_indexs:1;
        unsigned int read_container:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x0000000001108008
- (unsigned long long)hash;	// IMP=0x0000000001107fc2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001107ef9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001107d75
- (void)writeTo:(id)arg1;	// IMP=0x0000000001107b9c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000001107b8d
- (id)jsonRepresentation;	// IMP=0x0000000001107b7e
- (id)dictionaryRepresentation;	// IMP=0x0000000001107a58
- (id)description;	// IMP=0x00000000011079a9
- (void)dealloc;	// IMP=0x00000000011071c2
- (id)initWithData:(id)arg1;	// IMP=0x0000000001107166
- (id)init;	// IMP=0x000000000110710a

@end

