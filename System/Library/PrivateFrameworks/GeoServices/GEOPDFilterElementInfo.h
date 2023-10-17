//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDVenueLabel, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDFilterElementInfo : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_filterIds;	// 24 = 0x18
    GEOPDVenueLabel *_label;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_filterIds:1;
        unsigned int read_label:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x0000000000407834
- (unsigned long long)hash;	// IMP=0x00000000004077dd
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004076fb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000407404
- (void)writeTo:(id)arg1;	// IMP=0x000000000040712a
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000040711b
- (id)jsonRepresentation;	// IMP=0x0000000000406b2b
- (id)dictionaryRepresentation;	// IMP=0x0000000000406709
- (id)description;	// IMP=0x000000000040665a
- (id)initWithData:(id)arg1;	// IMP=0x0000000000405b1d
- (id)init;	// IMP=0x0000000000405ac1

@end
