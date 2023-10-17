//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRLCanvasRenderable, CRLSwappableAxesGeometry, NSMutableSet;

@interface CRLCanvasSpacing : NSObject
{
    NSMutableSet *mSpacingRects;	// 8 = 0x8
    NSMutableSet *mAssociatedFrames;	// 16 = 0x10
    CRLCanvasRenderable *mRenderable;	// 24 = 0x18
    _Bool mHasBeenDrawn;	// 32 = 0x20
    CRLSwappableAxesGeometry *mHorizontalGeom;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000572174
@property(readonly, nonatomic) NSMutableSet *associatedFrames; // @synthesize associatedFrames=mAssociatedFrames;
- (id)description;	// IMP=0x00100000005720bb
- (void)updateSpacingUIWithICC:(id)arg1;	// IMP=0x0010000000571e7d
- (id)spacingRectsRenderableForGuideRect:(struct CGRect)arg1 withICC:(id)arg2;	// IMP=0x0010000000571ae3
- (void)needsRedraw;	// IMP=0x0010000000571ad9
- (_Bool)containsNonIntersectingSpacingRectsWithRect:(struct CGRect)arg1 forEdge:(int)arg2;	// IMP=0x0010000000571848
- (_Bool)needsGuideForEdge:(int)arg1 ofRect:(struct CGRect)arg2;	// IMP=0x00100000005713f1
- (void)addSpacingRect:(struct CGRect)arg1 forFrame:(struct CGRect)arg2 andFrame:(struct CGRect)arg3;	// IMP=0x00100000005712b4
- (long long)compare:(id)arg1;	// IMP=0x0010000000571228
- (long long)guideType;	// IMP=0x0010000000571207
- (double)exactOffset;	// IMP=0x001000000057114f
- (int)integerOffset;	// IMP=0x0010000000571109
- (id)initWithGuideType:(long long)arg1 withSpacingRect:(struct CGRect)arg2 forFrame:(struct CGRect)arg3 andFrame:(struct CGRect)arg4;	// IMP=0x0010000000570fe1

@end
