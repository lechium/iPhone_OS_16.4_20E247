//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKAction.h"

__attribute__((visibility("hidden")))
@interface SKRepeat : SKAction
{
    struct SKCRepeat *_mycaction;	// 8 = 0x8
    SKAction *_repeatedAction;	// 16 = 0x10
}

+ (id)repeatActionForever:(id)arg1;	// IMP=0x00600000000148fc
+ (id)repeatAction:(id)arg1 count:(unsigned long long)arg2;	// IMP=0x00600000000147c3
+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000141a0
- (void).cxx_destruct;	// IMP=0x0000000000014bbf
- (id)reversedAction;	// IMP=0x0000000000014b08
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000014a5d
- (id)subactions;	// IMP=0x00000000000149f2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001462e
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000014318
- (id)init;	// IMP=0x00000000000141a8

@end
