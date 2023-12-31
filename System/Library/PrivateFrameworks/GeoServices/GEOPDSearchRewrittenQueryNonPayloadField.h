//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOPDSearchRewrittenQueryNonPayloadField : PBCodable
{
    NSString *_rewrittenQuery;	// 8 = 0x8
    int _pipelineType;	// 16 = 0x10
    _Bool _hasCamelCase;	// 20 = 0x14
    _Bool _hasDirectionsIntent;	// 21 = 0x15
    _Bool _hasEmojiRewrite;	// 22 = 0x16
    _Bool _hasNumericSplit;	// 23 = 0x17
    _Bool _hasSynonymCounterpart;	// 24 = 0x18
    struct {
        unsigned int has_pipelineType:1;
        unsigned int has_hasCamelCase:1;
        unsigned int has_hasDirectionsIntent:1;
        unsigned int has_hasEmojiRewrite:1;
        unsigned int has_hasNumericSplit:1;
        unsigned int has_hasSynonymCounterpart:1;
    } _flags;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000b2b604
- (unsigned long long)hash;	// IMP=0x0000000000b2b502
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b2b324
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b2b203
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b2b0f5
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b2b0e6
- (id)jsonRepresentation;	// IMP=0x0000000000b2b0d7
- (id)dictionaryRepresentation;	// IMP=0x0000000000b2ada9
- (id)description;	// IMP=0x0000000000b2acfa

@end

