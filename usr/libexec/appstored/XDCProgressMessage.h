//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface XDCProgressMessage : PBCodable
{
    NSMutableArray *_progress;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000019227f
- (unsigned long long)hash;	// IMP=0x0010000000192262
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001921c8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000019202b
- (void)writeTo:(id)arg1;	// IMP=0x0010000000191efb
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000191d3d
- (id)dictionaryRepresentation;	// IMP=0x0010000000191b0a
- (id)description;	// IMP=0x0010000000191a5b

@end

