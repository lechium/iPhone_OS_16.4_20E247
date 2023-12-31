//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CRLConnectionLinePathSource
{
    long long mType;	// 48 = 0x30
    double mOutsetFrom;	// 56 = 0x38
    double mOutsetTo;	// 64 = 0x40
}

+ (id)pathSourceAtAngleOfSize:(struct CGSize)arg1 forType:(long long)arg2;	// IMP=0x00200000002dd23b
+ (id)pathSourceOfLength:(double)arg1;	// IMP=0x00100000002dd18b
@property(nonatomic) double outsetTo; // @synthesize outsetTo=mOutsetTo;
@property(nonatomic) double outsetFrom; // @synthesize outsetFrom=mOutsetFrom;
@property(nonatomic) long long type; // @synthesize type=mType;
- (id)crlaxCommandForAccessibilityIncrementDecrement:(_Bool)arg1 forKnobTag:(unsigned long long)arg2 usingLayout:(id)arg3 andCanvasController:(id)arg4;	// IMP=0x00100000002ddcf9
- (_Bool)crlaxOffersMoveActionsForKnobTag:(unsigned long long)arg1;	// IMP=0x00100000002ddcf1
- (_Bool)crlaxIsAdjustableForKnobTag:(unsigned long long)arg1;	// IMP=0x00100000002ddce9
- (id)crlaxUserInputLabelForKnobTag:(unsigned long long)arg1;	// IMP=0x00100000002ddc61
- (id)crlaxValueForKnobTag:(unsigned long long)arg1;	// IMP=0x00100000002ddc59
- (id)crlaxLabelComponentForKnobTag:(unsigned long long)arg1;	// IMP=0x00100000002ddbd1
- (id)description;	// IMP=0x00100000002ddaf9
- (void)p_setBezierPath:(id)arg1;	// IMP=0x00100000002dd7b3
- (_Bool)isLineSegment;	// IMP=0x00100000002dd7ab
- (_Bool)isCircular;	// IMP=0x00100000002dd7a3
- (_Bool)isRectangular;	// IMP=0x00100000002dd79b
- (const struct CGPath *)newFeedbackPathForKnob:(unsigned long long)arg1;	// IMP=0x00100000002dd793
- (id)getFeedbackStringForKnob:(unsigned long long)arg1;	// IMP=0x00100000002dd786
@property(readonly, nonatomic) struct CGPoint fixedPointForControlKnobChange;
- (id)bezierPath;	// IMP=0x00100000002dd72b
- (void)scaleToNaturalSize:(struct CGSize)arg1;	// IMP=0x00100000002dd62e
- (void)setControlKnobPosition:(unsigned long long)arg1 toPoint:(struct CGPoint)arg2;	// IMP=0x00100000002dd5dd
- (struct CGPoint)getControlKnobPosition:(unsigned long long)arg1;	// IMP=0x00100000002dd57e
- (long long)pathElementIndexForKnobTag:(unsigned long long)arg1;	// IMP=0x00100000002dd55b
@property(readonly) unsigned long long numberOfControlKnobs;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000002dd4b9
- (void)bend;	// IMP=0x00100000002dd370
- (id)initWithBezierPath:(id)arg1;	// IMP=0x00100000002dcd3c

@end

