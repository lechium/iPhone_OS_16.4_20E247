//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOPDSearchQueryPoiMetadata : PBCodable
{
    NSMutableArray *_namedFeatures;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000b1df1f
- (unsigned long long)hash;	// IMP=0x0000000000b1df02
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b1de68
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b1dccb
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b1db9b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b1db8c
- (id)jsonRepresentation;	// IMP=0x0000000000b1db7d
- (id)dictionaryRepresentation;	// IMP=0x0000000000b1d8fc
- (id)description;	// IMP=0x0000000000b1d84d

@end
