//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPoiAtAddressLookupParameters : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_components;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000607ba3
- (unsigned long long)hash;	// IMP=0x0000000000607b86
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000607aec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000060792c
- (void)writeTo:(id)arg1;	// IMP=0x00000000006077cd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000006077be
- (id)jsonRepresentation;	// IMP=0x00000000006076ac
- (id)dictionaryRepresentation;	// IMP=0x000000000060731b
- (id)description;	// IMP=0x000000000060726c

@end

