//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlaceGlobalCommonResult : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_placeContextMetadatas;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000005893a9
- (unsigned long long)hash;	// IMP=0x000000000058938c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005892f2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000589132
- (void)writeTo:(id)arg1;	// IMP=0x0000000000588fd3
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000588fc4
- (id)jsonRepresentation;	// IMP=0x0000000000588c4d
- (id)dictionaryRepresentation;	// IMP=0x00000000005888aa
- (id)description;	// IMP=0x00000000005887fb

@end
