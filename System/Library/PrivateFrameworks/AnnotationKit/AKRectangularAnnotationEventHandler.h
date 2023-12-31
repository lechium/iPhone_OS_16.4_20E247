//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AKAnnotationEventHandler.h"

@interface AKRectangularAnnotationEventHandler : AKAnnotationEventHandler
{
    _Bool _initialHorizontalFlip;	// 8 = 0x8
    _Bool _initialVerticalFlip;	// 9 = 0x9
}

@property _Bool initialVerticalFlip; // @synthesize initialVerticalFlip=_initialVerticalFlip;
@property _Bool initialHorizontalFlip; // @synthesize initialHorizontalFlip=_initialHorizontalFlip;
- (void)_updateModelFlippednessWithCurrentPoint:(struct CGPoint)arg1;	// IMP=0x00000000000a0ad9
- (void)updateModelWithCurrentPoint:(struct CGPoint)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000009ff17
- (struct CGRect)_rectForModifiedRotatedRect:(struct CGRect)arg1 withOriginal:(struct CGRect)arg2 andRotation:(double)arg3;	// IMP=0x000000000009fdbc
- (void)setupDraggingConstraints;	// IMP=0x000000000009fce8
- (void)getInitialDraggedPoint:(struct CGPoint *)arg1 otherPoint:(struct CGPoint *)arg2 center:(struct CGPoint *)arg3 forEvent:(id)arg4 orRecognizer:(id)arg5;	// IMP=0x000000000009f7c4

@end

