//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchKeyValuePair : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    NSString *_value;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    CDStruct_d2d52b7f _flags;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x00000000003fb748
- (unsigned long long)hash;	// IMP=0x00000000003fb6f1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003fb60f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003fb47a
- (void)writeTo:(id)arg1;	// IMP=0x00000000003fb2eb
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003fb2dc
- (id)jsonRepresentation;	// IMP=0x00000000003fb063
- (id)dictionaryRepresentation;	// IMP=0x00000000003fae2e
- (id)description;	// IMP=0x00000000003fad7f
- (id)initWithData:(id)arg1;	// IMP=0x00000000003fa92a
- (id)init;	// IMP=0x00000000003fa8ce

@end
