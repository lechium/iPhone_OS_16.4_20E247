//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOPDSearchKey64ValuePairList : PBCodable
{
    NSMutableArray *_pairs;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000003f2237
- (unsigned long long)hash;	// IMP=0x00000000003f221a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003f2180
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003f1fe3
- (void)writeTo:(id)arg1;	// IMP=0x00000000003f1eb3
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003f1ca3
- (id)jsonRepresentation;	// IMP=0x00000000003f1c94
- (id)dictionaryRepresentation;	// IMP=0x00000000003f1a25
- (id)description;	// IMP=0x00000000003f1976

@end

