//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOIndexQueryNode : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_field;	// 24 = 0x18
    NSMutableArray *_operands;	// 32 = 0x20
    NSString *_value;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    int _type;	// 60 = 0x3c
    CDStruct_dc56225f _flags;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000100433f
- (unsigned long long)hash;	// IMP=0x000000000100414f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001004028
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001003d12
- (void)writeTo:(id)arg1;	// IMP=0x0000000001003a2b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000001003a1c
- (id)jsonRepresentation;	// IMP=0x0000000001002f9b
- (id)dictionaryRepresentation;	// IMP=0x00000000010029b8
- (id)description;	// IMP=0x0000000001002909
- (id)initWithData:(id)arg1;	// IMP=0x0000000001001d58
- (id)init;	// IMP=0x0000000001001cfc

@end

