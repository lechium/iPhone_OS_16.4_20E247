//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CRLWPTextMagnifierHorizontalRanged
{
}

- (void)drawMagnifierClippedCanvasLayer:(id)arg1 inContext:(struct CGContext *)arg2;	// IMP=0x00400000000bf996
- (_Bool)shouldHideCanvasLayer;	// IMP=0x00100000000bf84d
- (id)maskImageName;	// IMP=0x00100000000bf840
- (id)overlayImageName;	// IMP=0x00100000000bf833
- (id)underlayImageName;	// IMP=0x00100000000bf826
- (void)stopMagnifying:(_Bool)arg1;	// IMP=0x00100000000bf7a7
- (void)beginMagnifyingTarget:(id)arg1 magnificationPoint:(struct CGPoint)arg2 offset:(struct CGPoint)arg3 animated:(_Bool)arg4;	// IMP=0x00100000000bf6a6
- (void)updateFrame;	// IMP=0x00100000000bf48c
- (double)currentOffset;	// IMP=0x00100000000bf44b
- (void)zoomDownAnimation;	// IMP=0x00100000000bf231
- (void)zoomUpAnimation;	// IMP=0x00100000000bf07a
- (id)init;	// IMP=0x00100000000bf028

@end
