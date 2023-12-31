//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOTerritoryDataPolygon : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    CDStruct_9f2792e4 _shells;	// 16 = 0x10
    NSMutableArray *_holes;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    struct {
        unsigned int read_shells:1;
        unsigned int read_holes:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x0000000000db2f5d
- (unsigned long long)hash;	// IMP=0x0000000000db2f17
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000db2e4b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000db2b52
- (void)writeTo:(id)arg1;	// IMP=0x0000000000db2890
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000db2881
- (id)jsonRepresentation;	// IMP=0x0000000000db22cc
- (id)dictionaryRepresentation;	// IMP=0x0000000000db200b
- (id)description;	// IMP=0x0000000000db1f5c
- (void)dealloc;	// IMP=0x0000000000db15dc
- (id)initWithData:(id)arg1;	// IMP=0x0000000000db1580
- (id)init;	// IMP=0x0000000000db1524

@end

