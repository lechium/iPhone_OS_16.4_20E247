//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface CPLRemappedBy : PBCodable
{
    NSMutableArray *_remappedBys;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000c41b7
- (unsigned long long)hash;	// IMP=0x00100000000c4181
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000c40e7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000c3f4a
- (void)writeTo:(id)arg1;	// IMP=0x00100000000c3e1a
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000c3e0d
- (id)dictionaryRepresentation;	// IMP=0x00100000000c3a1f
- (id)description;	// IMP=0x00100000000c3970

@end
