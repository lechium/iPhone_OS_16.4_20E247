//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDResolvedItem, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDDirectionIntent : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDResolvedItem *_destination;	// 24 = 0x18
    GEOPDResolvedItem *_origin;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    int _transportType;	// 52 = 0x34
    struct {
        unsigned int has_transportType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_destination:1;
        unsigned int read_origin:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000c3b9cb
- (unsigned long long)hash;	// IMP=0x0000000000c3b756
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c3b647
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c3b454
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c3b284
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c3b275
- (id)jsonRepresentation;	// IMP=0x0000000000c3a704
- (id)dictionaryRepresentation;	// IMP=0x0000000000c3a40f
- (id)description;	// IMP=0x0000000000c3a360
- (id)initWithData:(id)arg1;	// IMP=0x0000000000c39937
- (id)init;	// IMP=0x0000000000c398db

@end
