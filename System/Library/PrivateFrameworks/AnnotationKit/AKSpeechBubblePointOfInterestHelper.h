//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AKSpeechBubblePointOfInterestHelper
{
}

+ (struct CGPoint)_endPointOfBoundingLineSegmentFromPointyPointThroughtPoint:(struct CGPoint)arg1 forAnnotation:(id)arg2;	// IMP=0x008000000007b84d
+ (struct CGPoint)_concreteValidatePoint:(struct CGPoint)arg1 ofDraggableArea:(unsigned long long)arg2 forAnnotation:(id)arg3 onPageController:(id)arg4;	// IMP=0x008000000007b4ae
+ (double)maxOutset;	// IMP=0x008000000007b4a0
+ (double)minOutset;	// IMP=0x008000000007b492
+ (unsigned long long)_concreteDraggableAreaForPointOfInterestWithIndex:(unsigned long long)arg1 ofAnnotation:(id)arg2 onPageController:(id)arg3;	// IMP=0x008000000007b455
+ (void)_concretePointsOfInterest:(id *)arg1 withVisualStyle:(id *)arg2 ofAnnotation:(id)arg3 pageControllerForPixelAlignment:(id)arg4;	// IMP=0x008000000007b089

@end

