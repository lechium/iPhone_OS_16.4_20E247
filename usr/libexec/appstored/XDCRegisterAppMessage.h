//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface XDCRegisterAppMessage : PBCodable
{
    NSMutableArray *_metadatas;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000002236f1
- (unsigned long long)hash;	// IMP=0x00100000002236d4
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000022363a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000022349d
- (void)writeTo:(id)arg1;	// IMP=0x001000000022336d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000002231af
- (id)dictionaryRepresentation;	// IMP=0x0010000000222f7c
- (id)description;	// IMP=0x0010000000222ecd

@end

