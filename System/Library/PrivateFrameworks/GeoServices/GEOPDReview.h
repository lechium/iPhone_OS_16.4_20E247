//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDRating, GEOPDUser, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDReview : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDRating *_rating;	// 24 = 0x18
    NSString *_reviewId;	// 32 = 0x20
    double _reviewTime;	// 40 = 0x28
    GEOPDUser *_reviewer;	// 48 = 0x30
    NSMutableArray *_snippets;	// 56 = 0x38
    unsigned int _readerMarkPos;	// 64 = 0x40
    unsigned int _readerMarkLength;	// 68 = 0x44
    struct os_unfair_lock_s _readerLock;	// 72 = 0x48
    struct {
        unsigned int has_reviewTime:1;
        unsigned int read_unknownFields:1;
        unsigned int read_rating:1;
        unsigned int read_reviewId:1;
        unsigned int read_reviewer:1;
        unsigned int read_snippets:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 76 = 0x4c
}

+ (id)reviewsForPlaceData:(id)arg1;	// IMP=0x0010000000a7524b
- (void).cxx_destruct;	// IMP=0x0000000000cf7671
- (unsigned long long)hash;	// IMP=0x0000000000cf74e6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cf7362
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cf6fdd
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cf6c42
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cf6c33
- (id)jsonRepresentation;	// IMP=0x0000000000cf67ea
- (id)dictionaryRepresentation;	// IMP=0x0000000000cf62aa
- (id)description;	// IMP=0x0000000000cf61fb
- (id)initWithData:(id)arg1;	// IMP=0x0000000000cf51f7
- (id)init;	// IMP=0x0000000000cf519b
- (id)_bestSnippetLocale;	// IMP=0x0000000000a751c7
- (id)_bestSnippet;	// IMP=0x0000000000a75171

@end
