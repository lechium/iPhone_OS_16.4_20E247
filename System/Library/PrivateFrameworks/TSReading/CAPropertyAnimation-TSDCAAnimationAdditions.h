//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CAPropertyAnimation.h>

@interface CAPropertyAnimation (TSDCAAnimationAdditions)
- (id)TSD_animationForKeyPath:(id)arg1 atTime:(double)arg2;	// IMP=0x0060000000229b88
- (_Bool)TSD_containsAnimationForKeyPath:(id)arg1;	// IMP=0x0060000000229b57
- (double)TSD_animationPercentFromAnimationTime:(double)arg1;	// IMP=0x0060000000229ae7
- (id)p_interpolatedValueFrom:(id)arg1 to:(id)arg2 percent:(double)arg3;	// IMP=0x0060000000229a30
- (id)p_adjustedResultWithValue:(id)arg1;	// IMP=0x0060000000229872
@end
