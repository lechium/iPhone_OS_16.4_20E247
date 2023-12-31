//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAShapeLayer, UIBezierPath;

__attribute__((visibility("hidden")))
@interface _UITextFieldPasscodeCutoutBackground
{
    _Bool _hasCustomStrokeColor;	// 160 = 0xa0
    _Bool _hasCustomFillColor;	// 161 = 0xa1
    CAShapeLayer *_lighteningOutline;	// 168 = 0xa8
    double _outlineAlpha;	// 176 = 0xb0
    double _cornerRadius;	// 184 = 0xb8
}

+ (id)_fillColor:(_Bool)arg1;	// IMP=0x0060000001237e3a
+ (id)_strokeColor:(_Bool)arg1;	// IMP=0x0060000001237e21
+ (Class)layerClass;	// IMP=0x0060000001237ac0
- (void).cxx_destruct;	// IMP=0x0000000001238ca7
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (id)_fillColor:(_Bool)arg1;	// IMP=0x0000000001238c4a
- (id)_strokeColor:(_Bool)arg1;	// IMP=0x0000000001238c11
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;	// IMP=0x0000000001238b3d
- (void)setEnabled:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000123894a
- (void)setActive:(_Bool)arg1;	// IMP=0x0000000001238944
- (void)_updatePath;	// IMP=0x0000000001238621
- (void)_updateLightingOutlinePath;	// IMP=0x00000000012384db
@property(readonly, nonatomic) UIBezierPath *customPath;
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000012381f6
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x00000000012381a4
- (double)lineWidth;	// IMP=0x0000000001238154
- (void)setLineWidth:(double)arg1;	// IMP=0x000000000123813d
- (void)setLineWidth:(double)arg1 updatePath:(_Bool)arg2;	// IMP=0x00000000012380be
- (id)fillColor;	// IMP=0x000000000123804e
- (void)setFillColor:(id)arg1;	// IMP=0x0000000001237f80
- (id)strokeColor;	// IMP=0x0000000001237f10
- (void)setStrokeColor:(id)arg1;	// IMP=0x0000000001237e42
@property(nonatomic) double outlineAlpha;
- (double)_pathInset;	// IMP=0x0000000001237d30
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000001237d19
- (id)initWithFrame:(struct CGRect)arg1 active:(_Bool)arg2;	// IMP=0x0000000001237ae3
- (id)_shapeLayer;	// IMP=0x0000000001237ad1

@end

