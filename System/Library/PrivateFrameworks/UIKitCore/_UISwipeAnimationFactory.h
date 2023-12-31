//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UISwipeAnimationFactory : NSObject
{
}

+ (id)_animatorForDuration:(double)arg1 initialVelocity:(struct CGVector)arg2 shouldLayoutSubviews:(_Bool)arg3;	// IMP=0x0080000000c5fdff
+ (id)_animatorForStiffnessFactor:(double)arg1 initialVelocity:(struct CGVector)arg2;	// IMP=0x0080000000c5fd28
+ (id)animatorForGenericUpdates;	// IMP=0x0080000000c5fcc0
+ (id)animatorForScanlineCollapse;	// IMP=0x0080000000c5fc9b
+ (id)animatorForCollapseWithAdditivelyAnimatedViews:(id)arg1;	// IMP=0x0080000000c5fc19
+ (id)animatorForCollapse;	// IMP=0x0080000000c5fc05
+ (id)animatorForTentativeWithOccurrence:(id)arg1 additivelyAnimatedViews:(id)arg2;	// IMP=0x0080000000c5fb73
+ (id)animatorForTentativeWithOccurrence:(id)arg1;	// IMP=0x0080000000c5fb5f
+ (id)animatorForMoveWithOccurrence:(id)arg1;	// IMP=0x0080000000c5fa91

@end

