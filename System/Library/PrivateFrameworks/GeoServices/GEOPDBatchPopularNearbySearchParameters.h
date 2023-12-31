//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDViewportInfo, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBatchPopularNearbySearchParameters : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    double _requestLocalTimestamp;	// 24 = 0x18
    NSMutableArray *_suggestionEntryMetadatas;	// 32 = 0x20
    GEOPDViewportInfo *_viewportInfo;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    unsigned int _maxResults;	// 60 = 0x3c
    struct {
        unsigned int has_requestLocalTimestamp:1;
        unsigned int has_maxResults:1;
        unsigned int read_unknownFields:1;
        unsigned int read_suggestionEntryMetadatas:1;
        unsigned int read_viewportInfo:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000052251c
- (unsigned long long)hash;	// IMP=0x0000000000522399
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000052224f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000521f19
- (void)writeTo:(id)arg1;	// IMP=0x0000000000521c25
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000521c16
- (id)jsonRepresentation;	// IMP=0x0000000000521895
- (id)dictionaryRepresentation;	// IMP=0x0000000000521348
- (id)description;	// IMP=0x0000000000521299
- (id)initWithData:(id)arg1;	// IMP=0x00000000005207c5
- (id)init;	// IMP=0x0000000000520769

@end

