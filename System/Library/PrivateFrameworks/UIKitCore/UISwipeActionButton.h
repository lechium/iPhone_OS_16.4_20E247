//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIButton.h"

@class UIColor, UIView;
@protocol UISwipeActionVisualStyle, _UISwipeActionButtonDelegate;

__attribute__((visibility("hidden")))
@interface UISwipeActionButton : UIButton
{
    _Bool _autosizes;	// 8 = 0x8
    UIColor *_defaultBackgroundColor;	// 16 = 0x10
    UIColor *_highlightedBackgroundColor;	// 24 = 0x18
    id <UISwipeActionVisualStyle> _visualStyle;	// 32 = 0x20
    id <_UISwipeActionButtonDelegate> _swipeActionButtonDelegate;	// 40 = 0x28
    UIView *_backgroundView;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000102dc63
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak id <_UISwipeActionButtonDelegate> swipeActionButtonDelegate; // @synthesize swipeActionButtonDelegate=_swipeActionButtonDelegate;
@property(nonatomic) _Bool autosizes; // @synthesize autosizes=_autosizes;
@property(retain, nonatomic) id <UISwipeActionVisualStyle> visualStyle; // @synthesize visualStyle=_visualStyle;
@property(retain, nonatomic) UIColor *highlightedBackgroundColor; // @synthesize highlightedBackgroundColor=_highlightedBackgroundColor;
@property(retain, nonatomic) UIColor *defaultBackgroundColor; // @synthesize defaultBackgroundColor=_defaultBackgroundColor;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x000000000102daf1
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x000000000102da4c
- (double)_titleFontWeightForCurrentIdiom;	// IMP=0x000000000102d9fc
- (double)_horizontalPaddingForCurrentIdiom;	// IMP=0x000000000102d9ac
- (double)_maxFontSizeForCurrentIdiom;	// IMP=0x000000000102d95c
- (double)_minFontSizeForCurrentIdiom;	// IMP=0x000000000102d90c
- (double)_minScaleFactorForFont:(id)arg1;	// IMP=0x000000000102d89a
- (id)titleFont;	// IMP=0x000000000102d719
- (id)titleFontOfSize:(double)arg1;	// IMP=0x000000000102d6dd
@property(readonly, nonatomic) double buttonWidth;
- (double)defaultButtonWidth;	// IMP=0x000000000102d67b
@property(readonly, nonatomic) UIView *sourceView;
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000000102d60e
- (void)setBackgroundColor:(id)arg1;	// IMP=0x000000000102d510
- (long long)_numberOfLinesForTitle:(id)arg1;	// IMP=0x000000000102d34f
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x000000000102d214
- (unsigned long long)_defaultLayoutForHeight:(double)arg1;	// IMP=0x000000000102d1e8
- (_Bool)_heightDemandsCompactLayout;	// IMP=0x000000000102d1a3
- (struct CGRect)_allowableContentRectForContentRect:(struct CGRect)arg1;	// IMP=0x000000000102d03b
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000102ce90
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000102cbc4

@end
