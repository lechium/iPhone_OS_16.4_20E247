//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _ICLLReactionAction : PBCodable
{
    NSString *_itemId;	// 8 = 0x8
    NSString *_reaction;	// 16 = 0x10
    NSString *_reactionId;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000008b3fc
- (unsigned long long)hash;	// IMP=0x000000000008b38f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008b297
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008b1d3
- (void)writeTo:(id)arg1;	// IMP=0x000000000008b159
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000008b14c
- (id)dictionaryRepresentation;	// IMP=0x000000000008b0a2
- (id)description;	// IMP=0x000000000008aff3

@end

