//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface GEOTFPredictedSpeed : PBCodable
{
    unsigned int _deltaMinutesInFuture;	// 8 = 0x8
    unsigned int _speed;	// 12 = 0xc
    struct {
        unsigned int has_deltaMinutesInFuture:1;
        unsigned int has_speed:1;
    } _flags;	// 16 = 0x10
}

- (unsigned long long)hash;	// IMP=0x000000000031cd43
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000031cc90
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000031cc13
- (void)writeTo:(id)arg1;	// IMP=0x000000000031cba2
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000031cb93
- (id)jsonRepresentation;	// IMP=0x000000000031c8a6
- (id)dictionaryRepresentation;	// IMP=0x000000000031c77f
- (id)description;	// IMP=0x000000000031c6d0

@end
