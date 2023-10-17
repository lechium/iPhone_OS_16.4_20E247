//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKAction.h"

__attribute__((visibility("hidden")))
@interface SKFade : SKAction
{
    struct SKCFade *_mycaction;	// 8 = 0x8
}

+ (id)fadeOutWithDuration:(double)arg1;	// IMP=0x0060000000009ca3
+ (id)fadeInWithDuration:(double)arg1;	// IMP=0x0060000000009c34
+ (id)fadeAlphaTo:(double)arg1 duration:(double)arg2;	// IMP=0x0060000000009bb6
+ (id)fadeAlphaBy:(double)arg1 duration:(double)arg2;	// IMP=0x0060000000009b1f
+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000095a8
- (id)reversedAction;	// IMP=0x0000000000009db0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000009d18
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000995b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000096af
- (id)init;	// IMP=0x00000000000095b0

@end
