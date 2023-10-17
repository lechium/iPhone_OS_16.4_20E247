//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, UIColor, UIView;

@interface CarFocusableProgressButton
{
    double _progress;	// 8 = 0x8
    UIView *_fillView;	// 16 = 0x10
    UIView *_barView;	// 24 = 0x18
    NSLayoutConstraint *_horizontalConstraint;	// 32 = 0x20
    _Bool _progressBarHidden;	// 40 = 0x28
    UIColor *_progressFillColor;	// 48 = 0x30
    UIColor *_progressFillFocusedColor;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000297b99
@property(nonatomic) _Bool progressBarHidden; // @synthesize progressBarHidden=_progressBarHidden;
@property(retain, nonatomic) UIColor *progressFillFocusedColor; // @synthesize progressFillFocusedColor=_progressFillFocusedColor;
@property(retain, nonatomic) UIColor *progressFillColor; // @synthesize progressFillColor=_progressFillColor;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void)_updateProgressConstraint;	// IMP=0x0010000000297942
- (void)_updateColors;	// IMP=0x0010000000297856
- (void)focusDidChange:(_Bool)arg1;	// IMP=0x0010000000297800
- (void)setProgessFillColor:(id)arg1;	// IMP=0x00100000002976f9
- (void)_insertFillViewIfNecessary;	// IMP=0x0010000000296f6e
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;	// IMP=0x0010000000296ef6
- (void)didMoveToWindow;	// IMP=0x0010000000296eb5

@end
