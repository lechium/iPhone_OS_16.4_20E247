//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, _ICLLQueueQuery;

__attribute__((visibility("hidden")))
@interface _ICLLMoveQueueItemAction : PBCodable
{
    NSString *_itemId;	// 8 = 0x8
    int _position;	// 16 = 0x10
    _ICLLQueueQuery *_queueQuery;	// 24 = 0x18
    int _revision;	// 32 = 0x20
    CDStruct_bf543796 _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x00000000000e2ecb
- (unsigned long long)hash;	// IMP=0x00000000000e2e21
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e2cfb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e2c1e
- (void)writeTo:(id)arg1;	// IMP=0x00000000000e2b75
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000e2b68
- (id)dictionaryRepresentation;	// IMP=0x00000000000e2a00
- (id)description;	// IMP=0x00000000000e2951

@end

