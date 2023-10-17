//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDSearchTokenSet, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchQueryTokenizerMetadata : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    GEOPDSearchTokenSet *_tokenSet;	// 16 = 0x10
    NSString *_tokenizerName;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    int _tokenizerType;	// 44 = 0x2c
    struct {
        unsigned int has_tokenizerType:1;
        unsigned int read_tokenSet:1;
        unsigned int read_tokenizerName:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000b29e4c
- (unsigned long long)hash;	// IMP=0x0000000000b29dcf
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b29cbc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b29ae6
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b2992f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b29920
- (id)jsonRepresentation;	// IMP=0x0000000000b29544
- (id)dictionaryRepresentation;	// IMP=0x0000000000b2922f
- (id)description;	// IMP=0x0000000000b29180
- (id)initWithData:(id)arg1;	// IMP=0x0000000000b28ba6
- (id)init;	// IMP=0x0000000000b28b4a

@end
