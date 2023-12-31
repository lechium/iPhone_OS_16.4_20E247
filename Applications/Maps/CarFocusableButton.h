//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAShapeLayer, UIColor, UILongPressGestureRecognizer;

@interface CarFocusableButton
{
    UILongPressGestureRecognizer *_recognizer;	// 8 = 0x8
    CAShapeLayer *_focusShapeLayer;	// 16 = 0x10
    struct CGSize _lastKnownSize;	// 24 = 0x18
    _Bool _needsUpdateAppearance;	// 40 = 0x28
    _Bool _customDisabledColor;	// 41 = 0x29
    _Bool _generatedDisabledColor;	// 42 = 0x2a
    _Bool _customHighlightedColor;	// 43 = 0x2b
    _Bool _generatedHighlightedColor;	// 44 = 0x2c
    _Bool _modifiesBackgroundColor;	// 45 = 0x2d
    _Bool _showsEllipticalFocusIndicator;	// 46 = 0x2e
    UIColor *_focusedTintColor;	// 48 = 0x30
    UIColor *_nonFocusedTintColor;	// 56 = 0x38
    UIColor *_focusedBackgroundColor;	// 64 = 0x40
    UIColor *_nonFocusedBackgroundColor;	// 72 = 0x48
}

+ (id)buttonWithType:(long long)arg1;	// IMP=0x00400000008cc386
+ (id)closeButton;	// IMP=0x00100000008cc1e7
+ (id)button;	// IMP=0x00100000008cc1d3
- (void).cxx_destruct;	// IMP=0x00200000008cd5ef
@property(nonatomic) _Bool showsEllipticalFocusIndicator; // @synthesize showsEllipticalFocusIndicator=_showsEllipticalFocusIndicator;
@property(nonatomic) _Bool modifiesBackgroundColor; // @synthesize modifiesBackgroundColor=_modifiesBackgroundColor;
@property(retain, nonatomic) UIColor *nonFocusedBackgroundColor; // @synthesize nonFocusedBackgroundColor=_nonFocusedBackgroundColor;
@property(retain, nonatomic) UIColor *focusedBackgroundColor; // @synthesize focusedBackgroundColor=_focusedBackgroundColor;
@property(retain, nonatomic) UIColor *nonFocusedTintColor; // @synthesize nonFocusedTintColor=_nonFocusedTintColor;
@property(retain, nonatomic) UIColor *focusedTintColor; // @synthesize focusedTintColor=_focusedTintColor;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00100000008cd47d
- (void)focusDidChange:(_Bool)arg1;	// IMP=0x00100000008cd46b
- (void)tappedButton:(id)arg1;	// IMP=0x00100000008cd3bf
- (void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00100000008cd30b
- (void)tintColorDidChange;	// IMP=0x00100000008cd2b4
- (void)_updateColorSettings;	// IMP=0x00100000008ccfb2
- (void)_updateAppearance;	// IMP=0x00100000008cccdb
- (void)_setNeedsUpdateAppearance;	// IMP=0x00100000008ccbfe
- (id)_focusShapeLayer;	// IMP=0x00100000008cca74
- (_Bool)canBecomeFocused;	// IMP=0x00100000008cca15
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00100000008cc999
- (void)setEnabled:(_Bool)arg1;	// IMP=0x00100000008cc913
- (void)setAdjustsImageWhenHighlighted:(_Bool)arg1;	// IMP=0x00100000008cc763
- (void)setAdjustsImageWhenDisabled:(_Bool)arg1;	// IMP=0x00100000008cc732
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000008cc674
- (void)didMoveToWindow;	// IMP=0x00100000008cc606
- (void)willMoveToSuperview:(id)arg1;	// IMP=0x00100000008cc5a7
- (void)_commonInit;	// IMP=0x00100000008cc436
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000008cc3d9

@end

