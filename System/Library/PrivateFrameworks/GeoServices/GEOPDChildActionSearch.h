//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDRelatedSearchSuggestion, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDChildActionSearch : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDRelatedSearchSuggestion *_relatedSearchSuggestion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000bad2d6
- (unsigned long long)hash;	// IMP=0x0000000000bad2b9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bad21f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000bad194
- (void)writeTo:(id)arg1;	// IMP=0x0000000000bad139
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000bad12a
- (id)jsonRepresentation;	// IMP=0x0000000000bad018
- (id)dictionaryRepresentation;	// IMP=0x0000000000bace18
- (id)description;	// IMP=0x0000000000bacd69

@end

