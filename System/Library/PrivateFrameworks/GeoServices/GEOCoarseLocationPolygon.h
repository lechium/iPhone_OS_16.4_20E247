//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOCoarseLocationRing, NSMutableArray, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOCoarseLocationPolygon : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    NSMutableArray *_holes;	// 16 = 0x10
    GEOCoarseLocationRing *_shell;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    struct {
        unsigned int read_holes:1;
        unsigned int read_shell:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x00000000002aef42
- (unsigned long long)hash;	// IMP=0x00000000002aeeeb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002aee09
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002aeb0d
- (void)writeTo:(id)arg1;	// IMP=0x00000000002ae88e
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002ae87f
- (id)jsonRepresentation;	// IMP=0x00000000002ae1a4
- (id)dictionaryRepresentation;	// IMP=0x00000000002adeb3
- (id)description;	// IMP=0x00000000002ade04
- (id)initWithData:(id)arg1;	// IMP=0x00000000002ad4dc
- (id)init;	// IMP=0x00000000002ad480

@end

