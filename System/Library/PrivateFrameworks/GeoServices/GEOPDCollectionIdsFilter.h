//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDCollectionIdsFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000bb14ed
- (unsigned long long)hash;	// IMP=0x0000000000bb14e5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bb14a0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000bb1445
- (void)writeTo:(id)arg1;	// IMP=0x0000000000bb1428
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000bb1419
- (id)jsonRepresentation;	// IMP=0x0000000000bb1159
- (id)dictionaryRepresentation;	// IMP=0x0000000000bb0fee
- (id)description;	// IMP=0x0000000000bb0f3f

@end
