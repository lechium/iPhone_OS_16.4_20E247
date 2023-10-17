//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIView, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _UIPopoverLegacyChromeView
{
    UIView *_arrowBackgroundView;	// 144 = 0x90
    UIVisualEffectView *_blurView;	// 152 = 0x98
    UIView *_maskView;	// 160 = 0xa0
    long long _requestedBackgroundStyle;	// 168 = 0xa8
    long long _backgroundStyle;	// 176 = 0xb0
    _Bool _popoverBackgroundColorIsOpaque;	// 184 = 0xb8
    _Bool _arrowVisible;	// 185 = 0xb9
    _Bool _wasPinned;	// 186 = 0xba
    UIView *_arrowView;	// 192 = 0xc0
    UIView *_leftCapView;	// 200 = 0xc8
    UIView *_rightCapView;	// 208 = 0xd0
}

+ (double)arrowBase;	// IMP=0x006000000109190e
+ (double)arrowHeight;	// IMP=0x0060000001091900
- (void).cxx_destruct;	// IMP=0x000000000109425b
@property(readonly, nonatomic) UIView *rightCapView; // @synthesize rightCapView=_rightCapView;
@property(readonly, nonatomic) UIView *leftCapView; // @synthesize leftCapView=_leftCapView;
@property(readonly, nonatomic) UIView *arrowView; // @synthesize arrowView=_arrowView;
- (void)setArrowBackgroundColor:(id)arg1;	// IMP=0x00000000010941bb
- (void)setPopoverBackgroundColor:(id)arg1;	// IMP=0x00000000010940be
- (_Bool)isPinned;	// IMP=0x000000000109404b
@property(readonly, nonatomic) _Bool hasComponentViews;
- (void)_loadNecessaryViews;	// IMP=0x000000000109369e
- (void)_resetComponentViews;	// IMP=0x000000000109360f
- (void)_updateBackgroundStyle;	// IMP=0x0000000001093256
- (long long)_resolvedBackgroundStyle;	// IMP=0x00000000010931d0
- (void)setBackgroundStyle:(long long)arg1;	// IMP=0x00000000010931b3
- (long long)backgroundStyle;	// IMP=0x00000000010931a2
- (id)backgroundEffect;	// IMP=0x00000000010930b3
- (void)_removeEffectView;	// IMP=0x000000000109307b
- (void)_configureEffectView;	// IMP=0x0000000001092f3c
- (_Bool)useShortMode;	// IMP=0x0000000001092edb
- (void)_updateChrome;	// IMP=0x0000000001092e5e
- (id)_shadowPath;	// IMP=0x0000000001092e56
- (struct CGSize)_shadowOffset;	// IMP=0x0000000001092e40
- (double)_shadowRadius;	// IMP=0x0000000001092e37
- (double)_shadowOpacity;	// IMP=0x0000000001092e2e
- (struct UIEdgeInsets)_shadowInsets;	// IMP=0x0000000001092e1b
- (void)setArrowOffset:(double)arg1;	// IMP=0x0000000001092dbf
- (double)arrowOffset;	// IMP=0x0000000001092d7a
- (void)motionCancelled:(long long)arg1 withEvent:(id)arg2;	// IMP=0x0000000001092d74
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;	// IMP=0x0000000001092d6e
- (void)motionBegan:(long long)arg1 withEvent:(id)arg2;	// IMP=0x0000000001092d68
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000001092d62
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000001092d5c
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000001092d56
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000001092d50
- (void)layoutSubviews;	// IMP=0x0000000001092a61
- (void)_layoutArrowViewsNone;	// IMP=0x0000000001092918
- (void)_layoutArrowViewsLeftOrRight;	// IMP=0x00000000010921f4
- (void)_layoutArrowViewsUpOrDown;	// IMP=0x0000000001091bc4
- (void)didMoveToWindow;	// IMP=0x0000000001091ae1
- (double)maxNonPinnedOffset;	// IMP=0x0000000001091a0f
- (double)minNonPinnedOffset;	// IMP=0x000000000109191c

@end
