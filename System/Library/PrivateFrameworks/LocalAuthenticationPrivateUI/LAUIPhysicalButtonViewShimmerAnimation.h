//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAGradientLayer;

__attribute__((visibility("hidden")))
@interface LAUIPhysicalButtonViewShimmerAnimation
{
    CAGradientLayer *_shimmerGradient;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000013761
- (void)_endShimmerAnimation;	// IMP=0x000000000001371f
- (void)_beginRegularMotionAnimationWithDelay:(double)arg1;	// IMP=0x000000000001321e
- (void)_beginReducedMotionAnimationWithDelay:(double)arg1;	// IMP=0x00000000000130e7
- (_Bool)_isReducedMotionEnabled;	// IMP=0x00000000000130dd
- (void)endImmediately;	// IMP=0x000000000001308b
- (void)beginWithDelay:(double)arg1;	// IMP=0x000000000001301e
- (double)duration;	// IMP=0x0000000000012ff5

@end

