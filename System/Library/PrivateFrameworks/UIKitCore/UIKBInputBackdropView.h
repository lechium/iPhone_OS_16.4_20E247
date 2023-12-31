//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, NSLayoutConstraint, UIKBBackdropView, _UIVisualEffectBackdropView;

__attribute__((visibility("hidden")))
@interface UIKBInputBackdropView : UIView
{
    UIKBBackdropView *_inputBackdropFullView;	// 144 = 0x90
    UIKBBackdropView *_inputBackdropLeftView;	// 152 = 0x98
    UIKBBackdropView *_inputBackdropRightView;	// 160 = 0xa0
    unsigned long long _innerCorners;	// 168 = 0xa8
    _Bool _isTransitioning;	// 176 = 0xb0
    double _transitionGap;	// 184 = 0xb8
    double _transitionLeftOffset;	// 192 = 0xc0
    double _transitionRightOffset;	// 200 = 0xc8
    long long _style;	// 208 = 0xd0
    _Bool _hasStartRect;	// 216 = 0xd8
    _Bool _hasEndRect;	// 217 = 0xd9
    struct CGRect _savedStartRect;	// 224 = 0xe0
    struct CGRect _savedEndRect;	// 256 = 0x100
    _UIVisualEffectBackdropView *_captureView;	// 288 = 0x120
    NSArray *_splitConstraints;	// 296 = 0x128
    NSArray *_fullWidthConstraints;	// 304 = 0x130
    NSLayoutConstraint *_leftWidthConstraint;	// 312 = 0x138
    NSLayoutConstraint *_rightWidthConstraint;	// 320 = 0x140
    NSLayoutConstraint *_heightConstraint;	// 328 = 0x148
    double _leftWidthDiff;	// 336 = 0x150
    double _rightWidthDiff;	// 344 = 0x158
    double _tallHeight;	// 352 = 0x160
    double _heightDiff;	// 360 = 0x168
}

+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x0060000000b98084
- (void).cxx_destruct;	// IMP=0x0000000000b9a1b4
@property(nonatomic) double heightDiff; // @synthesize heightDiff=_heightDiff;
@property(nonatomic) double tallHeight; // @synthesize tallHeight=_tallHeight;
@property(nonatomic) double rightWidthDiff; // @synthesize rightWidthDiff=_rightWidthDiff;
@property(nonatomic) double leftWidthDiff; // @synthesize leftWidthDiff=_leftWidthDiff;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *rightWidthConstraint; // @synthesize rightWidthConstraint=_rightWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leftWidthConstraint; // @synthesize leftWidthConstraint=_leftWidthConstraint;
@property(retain, nonatomic) NSArray *fullWidthConstraints; // @synthesize fullWidthConstraints=_fullWidthConstraints;
@property(retain, nonatomic) NSArray *splitConstraints; // @synthesize splitConstraints=_splitConstraints;
@property(retain, nonatomic) _UIVisualEffectBackdropView *captureView; // @synthesize captureView=_captureView;
@property(retain, nonatomic) UIKBBackdropView *inputBackdropRightView; // @synthesize inputBackdropRightView=_inputBackdropRightView;
@property(retain, nonatomic) UIKBBackdropView *inputBackdropLeftView; // @synthesize inputBackdropLeftView=_inputBackdropLeftView;
@property(retain, nonatomic) UIKBBackdropView *inputBackdropFullView; // @synthesize inputBackdropFullView=_inputBackdropFullView;
@property(readonly) long long style; // @synthesize style=_style;
- (_Bool)_isTransitioning;	// IMP=0x0000000000b99fb6
- (void)_endSplitTransitionIfNeeded:(_Bool)arg1;	// IMP=0x0000000000b99e4a
- (void)_beginSplitTransitionIfNeeded:(double)arg1 gapWidth:(double)arg2;	// IMP=0x0000000000b99e05
- (void)_setInitialProgressWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000b99d55
- (void)setGestureProgressForSplit:(double)arg1;	// IMP=0x0000000000b99938
- (void)_updateForLeftOffset:(double)arg1 rightOffset:(double)arg2;	// IMP=0x0000000000b9986c
- (void)_prepareWithLeftOffset:(double)arg1 gapWidth:(double)arg2;	// IMP=0x0000000000b997f0
- (void)setProgress:(double)arg1 withFrame:(struct CGRect)arg2 innerCorners:(unsigned long long)arg3;	// IMP=0x0000000000b995e4
- (void)_setProgress:(double)arg1 withFrame:(struct CGRect)arg2;	// IMP=0x0000000000b995cb
- (void)layoutInputBackdropToFullWithRect:(struct CGRect)arg1;	// IMP=0x0000000000b98ea6
- (void)layoutInputBackdropToSplitWithHeight:(double)arg1 innerCorners:(unsigned long long)arg2;	// IMP=0x0000000000b98dc5
- (void)layoutInputBackdropToSplitWithLeftViewRect:(struct CGRect)arg1 andRightViewRect:(struct CGRect)arg2 innerCorners:(unsigned long long)arg3;	// IMP=0x0000000000b98b82
- (void)createSplitBackdropIfNeeded;	// IMP=0x0000000000b98284
- (void)restoreFromSnapshotting;	// IMP=0x0000000000b9820c
- (void)prepareForSnapshotting;	// IMP=0x0000000000b98191
- (void)transitionToStyle:(long long)arg1 isSplit:(_Bool)arg2;	// IMP=0x0000000000b98116
- (void)_setRenderConfig:(id)arg1;	// IMP=0x0000000000b9808c
- (int)textEffectsVisibilityLevel;	// IMP=0x0000000000b98079
- (void)dealloc;	// IMP=0x0000000000b97ff5
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000b97c78

@end

