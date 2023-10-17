//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class UIColor, UIView, UIVisualEffectView, _UIFloatingContentView;
@protocol VUIBaseListViewCellDelegate;

__attribute__((visibility("hidden")))
@interface VUIBaseListViewCell : UICollectionViewCell
{
    UIColor *_backgroundColor;	// 8 = 0x8
    UIColor *_highlightedBackgroundColor;	// 16 = 0x10
    UIVisualEffectView *_backgroundVisualEffectView;	// 24 = 0x18
    _Bool _visualEffectViewBackgroundEnabled;	// 32 = 0x20
    _Bool _disabled;	// 33 = 0x21
    _Bool _shouldAppearSelected;	// 34 = 0x22
    _UIFloatingContentView *_floatingView;	// 40 = 0x28
    id <VUIBaseListViewCellDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001b7a74
@property(nonatomic) _Bool shouldAppearSelected; // @synthesize shouldAppearSelected=_shouldAppearSelected;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) __weak id <VUIBaseListViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) _UIFloatingContentView *floatingView; // @synthesize floatingView=_floatingView;
@property(nonatomic) _Bool visualEffectViewBackgroundEnabled; // @synthesize visualEffectViewBackgroundEnabled=_visualEffectViewBackgroundEnabled;
- (void)_updateSelectedBackgroundColor;	// IMP=0x00000000001b78af
- (unsigned long long)_floatingViewControlState;	// IMP=0x00000000001b7870
- (void)prepareForReuse;	// IMP=0x00000000001b7818
- (void)layoutSubviews;	// IMP=0x00000000001b770e
- (id)contentView;	// IMP=0x00000000001b76c0
@property(readonly, nonatomic) UIView *vuiContentView;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000001b75a9
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000001b74a4
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000001b738a
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001b71df
- (void)setSelected:(_Bool)arg1;	// IMP=0x00000000001b71cb
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000001b7021
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000001b6e22
- (void)updateFloatingViewControlStateForPreviouslyFocusedView:(id)arg1;	// IMP=0x00000000001b6d4a
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;	// IMP=0x00000000001b6ce2
- (_Bool)canBecomeFocused;	// IMP=0x00000000001b6ccd
- (void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000001b6b97
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000000001b6b83
- (_Bool)_descendantsShouldHighlight;	// IMP=0x00000000001b6afa
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001b6931

@end
