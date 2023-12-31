//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRLShapeLayout, NSString;

@interface CRLShapeLineSegmentKnobTracker
{
    _Bool mSnapEnabled;	// 8 = 0x8
    _Bool mSnapAngles;	// 9 = 0x9
    _Bool mResizeFromCenter;	// 10 = 0xa
    CRLShapeLayout *mResizingLayout;	// 16 = 0x10
    struct CGPoint mNewKnobCenter;	// 24 = 0x18
    struct CGPoint mOriginalFixedPoint;	// 40 = 0x28
    struct CGPoint mOriginalKnobCenter;	// 56 = 0x38
    struct CGPoint mOriginalMiddlePoint;	// 72 = 0x48
    struct CGPoint mOriginalPathBoundsOrigin;	// 88 = 0x58
    _Bool mSnappedToAspectRatio;	// 104 = 0x68
    _Bool mBeganAlignmentOperation;	// 105 = 0x69
}

- (void).cxx_destruct;	// IMP=0x00200000003200b3
@property(nonatomic) _Bool resizeFromCenter; // @synthesize resizeFromCenter=mResizeFromCenter;
@property(nonatomic) _Bool snapAngles; // @synthesize snapAngles=mSnapAngles;
@property(nonatomic) _Bool snapEnabled; // @synthesize snapEnabled=mSnapEnabled;
- (void)p_showHUDAndGuidesAfterDelay:(id)arg1;	// IMP=0x0010000000320041
- (void)p_cancelDelayedHUDAndGuides;	// IMP=0x001000000032001b
- (void)p_hideHUD;	// IMP=0x001000000031ffc8
- (void)p_updateHUD;	// IMP=0x001000000031fe8e
- (id)p_HUDLabelText;	// IMP=0x001000000031fda5
- (void)p_enforceMinimumLength;	// IMP=0x001000000031fcde
- (void)p_validateLayout;	// IMP=0x001000000031fc54
- (void)endMovingKnob;	// IMP=0x001000000031f8ee
- (_Bool)shouldHideOtherKnobs;	// IMP=0x001000000031f8a8
- (_Bool)didChangeGeometry;	// IMP=0x001000000031f8a0
- (_Bool)shouldDisplayGuides;	// IMP=0x001000000031f898
- (void)moveKnobToRepPosition:(struct CGPoint)arg1;	// IMP=0x001000000031ec16
- (void)moveKnobToCanvasPosition:(struct CGPoint)arg1;	// IMP=0x001000000031eaf7
- (void)beginMovingKnob;	// IMP=0x001000000031ea46
- (id)currentGeometry;	// IMP=0x001000000031e834
- (id)shapeRep;	// IMP=0x001000000031e822
- (void)dealloc;	// IMP=0x001000000031e7e4
- (id)initWithRep:(id)arg1 knob:(id)arg2;	// IMP=0x001000000031e03c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

