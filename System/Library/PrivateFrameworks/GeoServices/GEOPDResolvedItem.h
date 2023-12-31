//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDResolvedItem : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSString *_extractedTerm;	// 16 = 0x10
    int _resolvedItemType;	// 24 = 0x18
    unsigned int _resultIndex;	// 28 = 0x1c
    struct {
        unsigned int has_resolvedItemType:1;
        unsigned int has_resultIndex:1;
    } _flags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000cf09c8
- (unsigned long long)hash;	// IMP=0x0000000000cf0959
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cf0872
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cf07a7
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cf06fe
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cf06ef
- (id)jsonRepresentation;	// IMP=0x0000000000ceffb9
- (id)dictionaryRepresentation;	// IMP=0x0000000000cefd27
- (id)description;	// IMP=0x0000000000cefc78

@end

