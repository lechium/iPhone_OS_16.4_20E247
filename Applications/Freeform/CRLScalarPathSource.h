//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CRLScalarPathSource
{
    _Bool mIsCurveContinuous;	// 8 = 0x8
    _Bool mShouldShowKnob;	// 9 = 0x9
    unsigned long long mType;	// 16 = 0x10
    double mScalar;	// 24 = 0x18
    struct CGSize mNaturalSize;	// 32 = 0x20
}

+ (id)pathSourceWithType:(unsigned long long)arg1 scalar:(double)arg2 naturalSize:(struct CGSize)arg3;	// IMP=0x00200000003ff9a3
+ (id)chevronWithScalar:(double)arg1 naturalSize:(struct CGSize)arg2;	// IMP=0x00100000003ff94d
+ (id)regularPolygonWithScalar:(double)arg1 naturalSize:(struct CGSize)arg2;	// IMP=0x00100000003ff8f7
+ (id)roundedRectangleWithScalar:(double)arg1 naturalSize:(struct CGSize)arg2 continuousCurve:(_Bool)arg3;	// IMP=0x00100000003ff8a0
+ (id)rectangleWithNaturalSize:(struct CGSize)arg1;	// IMP=0x00100000003ff87c
@property(nonatomic) _Bool shouldShowKnob; // @synthesize shouldShowKnob=mShouldShowKnob;
@property(nonatomic) _Bool isCurveContinuous; // @synthesize isCurveContinuous=mIsCurveContinuous;
- (void)setNaturalSize:(struct CGSize)arg1;	// IMP=0x00100000004027fe
- (struct CGSize)naturalSize;	// IMP=0x00100000004027e6
@property(nonatomic) double scalar; // @synthesize scalar=mScalar;
@property(nonatomic) unsigned long long type; // @synthesize type=mType;
- (id)crlaxCommandForAccessibilityIncrementDecrement:(_Bool)arg1 forKnobTag:(unsigned long long)arg2 usingLayout:(id)arg3 andCanvasController:(id)arg4;	// IMP=0x001000000040263b
- (_Bool)crlaxOffersMoveActionsForKnobTag:(unsigned long long)arg1;	// IMP=0x0010000000402633
- (_Bool)crlaxIsAdjustableForKnobTag:(unsigned long long)arg1;	// IMP=0x0010000000402619
- (id)crlaxUserInputLabelForKnobTag:(unsigned long long)arg1;	// IMP=0x0010000000402607
- (id)crlaxValueForKnobTag:(unsigned long long)arg1;	// IMP=0x0010000000402333
- (id)crlaxLabelComponentForKnobTag:(unsigned long long)arg1;	// IMP=0x001000000040207c
- (id)inferredLocalizedAccessibilityDescriptionPlaceholder;	// IMP=0x0010000000401cf4
- (id)inferredAccessibilityDescription;	// IMP=0x001000000040196c
- (id)inferredAccessibilityDescriptionNoShapeNames;	// IMP=0x00100000004018f8
- (struct CGPoint)p_getControlKnobPointForChevron;	// IMP=0x001000000040189a
- (void)p_setControlKnobPointForChevron:(struct CGPoint)arg1;	// IMP=0x0010000000401845
- (struct CGPoint)p_getControlKnobPointForRegularPolygon;	// IMP=0x001000000040170a
- (void)p_setControlKnobPointForRegularPolygon:(struct CGPoint)arg1;	// IMP=0x001000000040152e
- (struct CGPoint)p_getControlKnobPointForRoundedRect;	// IMP=0x0010000000401474
- (void)p_setControlKnobPointForRoundedRect:(struct CGPoint)arg1;	// IMP=0x00100000004013cd
- (struct CGPath *)p_newChevronPath;	// IMP=0x001000000040125f
- (struct CGPath *)p_newRegularPolygonPath;	// IMP=0x00100000004010a2
- (struct CGPath *)p_newRoundedRectPath;	// IMP=0x0010000000400f4d
- (id)name;	// IMP=0x0010000000400e62
- (_Bool)isCircular;	// IMP=0x0010000000400e5a
- (_Bool)isRectangular;	// IMP=0x0010000000400e13
- (id)bezierPathWithoutFlips;	// IMP=0x0010000000400da2
- (const struct CGPath *)newFeedbackPathForKnob:(unsigned long long)arg1;	// IMP=0x0010000000400c63
- (id)getFeedbackStringForKnob:(unsigned long long)arg1;	// IMP=0x0010000000400998
- (void)setControlKnobPosition:(unsigned long long)arg1 toPoint:(struct CGPoint)arg2;	// IMP=0x0010000000400941
- (struct CGPoint)getControlKnobPosition:(unsigned long long)arg1;	// IMP=0x00100000004008eb
@property(readonly) unsigned long long numberOfControlKnobs;
@property(readonly, nonatomic) unsigned long long numberOfSides;
@property(readonly, nonatomic) double maxCornerRadius;
@property(readonly, nonatomic) double cornerRadius;
@property(readonly, nonatomic) double maxScalar;
- (void)setScalarValue:(id)arg1;	// IMP=0x00100000004001af
- (void)scaleToNaturalSize:(struct CGSize)arg1;	// IMP=0x0010000000400139
- (id)description;	// IMP=0x00100000003ffdb2
- (unsigned long long)hash;	// IMP=0x00100000003ffd6f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000003ffbb9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000003ffae8
- (id)init;	// IMP=0x00100000003ffabc
- (id)initWithType:(unsigned long long)arg1 scalar:(double)arg2 naturalSize:(struct CGSize)arg3 continuousCurve:(_Bool)arg4;	// IMP=0x00100000003ff9fc

// Remaining properties
@property(readonly, nonatomic) struct CGPoint fixedPointForControlKnobChange;

@end

