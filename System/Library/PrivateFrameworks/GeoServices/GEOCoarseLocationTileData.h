//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOCoarseLocationTileData : PBCodable
{
    NSMutableArray *_territorys;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002b3139
- (unsigned long long)hash;	// IMP=0x00000000002b311c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002b3082
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002b2ee5
- (void)writeTo:(id)arg1;	// IMP=0x00000000002b2db5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002b2ba5
- (id)jsonRepresentation;	// IMP=0x00000000002b2b96
- (id)dictionaryRepresentation;	// IMP=0x00000000002b2927
- (id)description;	// IMP=0x00000000002b2878

@end
