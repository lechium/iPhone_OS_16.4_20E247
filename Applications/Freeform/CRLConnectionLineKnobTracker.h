//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRLCanvasLayout, CRLCanvasRep, NSString;

@interface CRLConnectionLineKnobTracker
{
    CRLCanvasLayout *mOriginalConnectedFrom;	// 8 = 0x8
    CRLCanvasLayout *mOriginalConnectedTo;	// 16 = 0x10
    CRLCanvasRep *mConnectedRepForHighlighting;	// 24 = 0x18
    _Bool mInitialSnap;	// 32 = 0x20
    struct CGPoint mInitialPosition;	// 40 = 0x28
    struct CGAffineTransform mOriginalTransformInRoot;	// 56 = 0x38
    _Bool mKnobsVisible;	// 104 = 0x68
    _Bool mSnapEnabled;	// 105 = 0x69
    _Bool mSnapAngles;	// 106 = 0x6a
    _Bool mResizeFromCenter;	// 107 = 0x6b
}

- (void).cxx_destruct;	// IMP=0x0020000000467761
@property(nonatomic) _Bool resizeFromCenter; // @synthesize resizeFromCenter=mResizeFromCenter;
@property(nonatomic) _Bool snapAngles; // @synthesize snapAngles=mSnapAngles;
@property(nonatomic) _Bool snapEnabled; // @synthesize snapEnabled=mSnapEnabled;
- (id)connectedRepForHighlighting;	// IMP=0x00100000004676ec
- (_Bool)shouldHideOtherKnobs;	// IMP=0x00100000004675f6
- (_Bool)shouldDisplayGuides;	// IMP=0x00100000004675e1
- (void)endMovingKnob;	// IMP=0x0010000000466e19
- (_Bool)didChangeGeometry;	// IMP=0x0010000000466c94
- (void)moveKnobToRepPosition:(struct CGPoint)arg1;	// IMP=0x0010000000466c31
- (void)moveKnobToCanvasPosition:(struct CGPoint)arg1;	// IMP=0x00100000004660bd
- (void)beginMovingKnob;	// IMP=0x0010000000465e18
- (id)initWithRep:(id)arg1 knob:(id)arg2;	// IMP=0x0010000000465dd9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

