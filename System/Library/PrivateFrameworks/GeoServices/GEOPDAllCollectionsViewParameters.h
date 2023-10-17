//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDAllCollectionsViewResultFilter, GEOPDPublisherSuggestionParameters, GEOPDViewportInfo, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAllCollectionsViewParameters : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDPublisherSuggestionParameters *_publisherSuggestionParameters;	// 24 = 0x18
    GEOPDAllCollectionsViewResultFilter *_resultFilter;	// 32 = 0x20
    GEOPDViewportInfo *_viewportInfo;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    unsigned int _numClientizedResults;	// 60 = 0x3c
    struct {
        unsigned int has_numClientizedResults:1;
        unsigned int read_unknownFields:1;
        unsigned int read_publisherSuggestionParameters:1;
        unsigned int read_resultFilter:1;
        unsigned int read_viewportInfo:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000004dca39
- (unsigned long long)hash;	// IMP=0x00000000004dc7e7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004dc6a4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004dc477
- (void)writeTo:(id)arg1;	// IMP=0x00000000004dc1f0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004dc1e1
- (id)jsonRepresentation;	// IMP=0x00000000004db1c4
- (id)dictionaryRepresentation;	// IMP=0x00000000004dae3a
- (id)description;	// IMP=0x00000000004dad8b
- (id)initWithData:(id)arg1;	// IMP=0x00000000004da151
- (id)init;	// IMP=0x00000000004da0f5

@end
