//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UIStatusBarForegroundStyleAttributes, UIStatusBarItem, UIStatusBarLayoutManager, _UILegibilityImageSet, _UILegibilityView;

__attribute__((visibility("hidden")))
@interface UIStatusBarItemView : UIView
{
    double _currentOverlap;	// 144 = 0x90
    struct CGContext *_imageContext;	// 152 = 0x98
    double _imageContextScale;	// 160 = 0xa0
    _UILegibilityView *_legibilityView;	// 168 = 0xa8
    _UILegibilityImageSet *_lastGeneratedTextImage;	// 176 = 0xb0
    double _lastGeneratedTextImageLetterSpacing;	// 184 = 0xb8
    NSString *_lastGeneratedTextImageText;	// 192 = 0xc0
    _Bool _visible;	// 200 = 0xc8
    _Bool _allowsUpdates;	// 201 = 0xc9
    _Bool _shouldTintContentImage;	// 202 = 0xca
    UIStatusBarItem *_item;	// 208 = 0xd0
    UIStatusBarLayoutManager *_layoutManager;	// 216 = 0xd8
    UIStatusBarForegroundStyleAttributes *_foregroundStyle;	// 224 = 0xe0
}

+ (id)createViewForItem:(id)arg1 withData:(id)arg2 actions:(int)arg3 foregroundStyle:(id)arg4;	// IMP=0x0060000000f49650
- (void).cxx_destruct;	// IMP=0x0000000000f4b337
@property(readonly, nonatomic) _Bool shouldTintContentImage; // @synthesize shouldTintContentImage=_shouldTintContentImage;
@property(nonatomic) _Bool allowsUpdates; // @synthesize allowsUpdates=_allowsUpdates;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(readonly, nonatomic) UIStatusBarForegroundStyleAttributes *foregroundStyle; // @synthesize foregroundStyle=_foregroundStyle;
@property(nonatomic) __weak UIStatusBarLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
@property(readonly, nonatomic) UIStatusBarItem *item; // @synthesize item=_item;
- (id)accessibilityHUDRepresentation;	// IMP=0x0000000000f4b2a0
- (_Bool)_shouldReverseLayoutDirection;	// IMP=0x0000000000f4b27f
- (id)description;	// IMP=0x0000000000f4b1b9
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000000f4b157
- (void)endDisablingRasterization;	// IMP=0x0000000000f4b0fd
- (void)beginDisablingRasterization;	// IMP=0x0000000000f4b0a3
- (id)imageWithShadowNamed:(id)arg1;	// IMP=0x0000000000f4b000
- (void)clearCachedTextImage;	// IMP=0x0000000000f4afaf
- (id)cachedImageWithText:(id)arg1 truncatedWithEllipsesAtMaxWidth:(double)arg2 letterSpacing:(double)arg3;	// IMP=0x0000000000f4ad85
- (id)imageWithText:(id)arg1 shouldCache:(_Bool)arg2;	// IMP=0x0000000000f4ac41
- (id)imageWithText:(id)arg1;	// IMP=0x0000000000f4ac2a
- (void)endImageContext;	// IMP=0x0000000000f4abe1
- (id)imageFromImageContextClippedToWidth:(double)arg1;	// IMP=0x0000000000f4aa59
- (void)beginImageContextWithMinimumWidth:(double)arg1;	// IMP=0x0000000000f4a829
- (void)updateForNewStyle:(id)arg1;	// IMP=0x0000000000f4a823
- (void)setPersistentAnimationsEnabled:(_Bool)arg1;	// IMP=0x0000000000f4a81d
- (void)performPendedActions;	// IMP=0x0000000000f4a817
- (id)contentsIOSurface;	// IMP=0x0000000000f4a80f
- (id)contentsImage;	// IMP=0x0000000000f4a807
- (_Bool)animatesDataChange;	// IMP=0x0000000000f4a7ff
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;	// IMP=0x0000000000f4a7f7
- (double)maximumOverlap;	// IMP=0x0000000000f4a7ee
- (double)addContentOverlap:(double)arg1;	// IMP=0x0000000000f4a7e5
- (double)resetContentOverlap;	// IMP=0x0000000000f4a7dc
- (double)extraRightPadding;	// IMP=0x0000000000f4a7d3
- (double)extraLeftPadding;	// IMP=0x0000000000f4a7ca
- (double)shadowPadding;	// IMP=0x0000000000f4a77a
- (double)standardPadding;	// IMP=0x0000000000f4a72a
- (long long)textAlignment;	// IMP=0x0000000000f4a6e5
- (id)textFont;	// IMP=0x0000000000f4a679
- (long long)textStyle;	// IMP=0x0000000000f4a66e
- (void)setContentMode:(long long)arg1;	// IMP=0x0000000000f4a618
- (double)updateContentsAndWidth;	// IMP=0x0000000000f4a43c
- (void)_tintContentLayerIfNeeded;	// IMP=0x0000000000f4a345
- (double)neededSizeForImageSet:(id)arg1;	// IMP=0x0000000000f4a253
- (double)adjustFrameToNewSize:(double)arg1;	// IMP=0x0000000000f4a175
- (void)setLayerContentsImage:(id)arg1;	// IMP=0x0000000000f49cd5
- (double)legibilityStrength;	// IMP=0x0000000000f49cc7
- (long long)legibilityStyle;	// IMP=0x0000000000f49c83
- (double)setStatusBarData:(id)arg1 actions:(int)arg2;	// IMP=0x0000000000f49c03
- (double)currentRightOverlap;	// IMP=0x0000000000f49be5
- (double)currentLeftOverlap;	// IMP=0x0000000000f49bc7
- (double)currentOverlap;	// IMP=0x0000000000f49bb5
- (void)setCurrentOverlap:(double)arg1;	// IMP=0x0000000000f49ba3
- (void)setVisible:(_Bool)arg1 frame:(struct CGRect)arg2 duration:(double)arg3;	// IMP=0x0000000000f49a40
- (void)setVisible:(_Bool)arg1 settingAlpha:(_Bool)arg2;	// IMP=0x0000000000f49a0d
- (id)foregroundView;	// IMP=0x0000000000f4997c
- (void)dealloc;	// IMP=0x0000000000f49936
- (_Bool)allowsUserInteraction;	// IMP=0x0000000000f4992e
- (id)initWithItem:(id)arg1 data:(id)arg2 actions:(int)arg3 style:(id)arg4;	// IMP=0x0000000000f49766
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;	// IMP=0x0000000000f496f8

@end
