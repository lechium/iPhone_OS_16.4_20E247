//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDSearchTokenSet, NSMutableArray, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchTokenCandidates : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    NSMutableArray *_candidates;	// 16 = 0x10
    GEOPDSearchTokenSet *_token;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    _Bool _isMerged;	// 44 = 0x2c
    _Bool _isSplit;	// 45 = 0x2d
    struct {
        unsigned int has_isMerged:1;
        unsigned int has_isSplit:1;
        unsigned int read_candidates:1;
        unsigned int read_token:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000011f2aa9
- (unsigned long long)hash;	// IMP=0x00000000011f2a03
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000011f28b8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000011f25a4
- (void)writeTo:(id)arg1;	// IMP=0x00000000011f22de
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000011f22cf
- (id)jsonRepresentation;	// IMP=0x00000000011f1d29
- (id)dictionaryRepresentation;	// IMP=0x00000000011f18a8
- (id)description;	// IMP=0x00000000011f17f9
- (id)initWithData:(id)arg1;	// IMP=0x00000000011f0e3c
- (id)init;	// IMP=0x00000000011f0de0

@end
