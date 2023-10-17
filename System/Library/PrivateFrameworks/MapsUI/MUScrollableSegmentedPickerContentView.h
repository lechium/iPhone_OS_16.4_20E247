//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MUGradientView, MUScrollableStackView, NSArray, NSString, UIVisualEffectView;
@protocol MUScrollableSegmentedPickerContentViewDelegate;

__attribute__((visibility("hidden")))
@interface MUScrollableSegmentedPickerContentView : UIView
{
    MUScrollableStackView *_contentStackView;	// 8 = 0x8
    UIVisualEffectView *_backgroundBlurView;	// 16 = 0x10
    UIVisualEffectView *_selectedPillView;	// 24 = 0x18
    MUGradientView *_leadingGradientOverlayView;	// 32 = 0x20
    MUGradientView *_trailingGradientOverlayView;	// 40 = 0x28
    NSArray *_viewModels;	// 48 = 0x30
    unsigned long long _selectedIndex;	// 56 = 0x38
    id <MUScrollableSegmentedPickerContentViewDelegate> _delegate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000097e61
@property(nonatomic) __weak id <MUScrollableSegmentedPickerContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(copy, nonatomic) NSArray *viewModels; // @synthesize viewModels=_viewModels;
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000000097dfc
- (void)_updateGradientColors;	// IMP=0x0000000000097be2
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000097a51
- (void)_handleTapWithSegmentView:(id)arg1;	// IMP=0x00000000000979b0
- (void)_updateGradientVisibility;	// IMP=0x00000000000977d5
- (void)_updateAppearance;	// IMP=0x000000000009756c
- (void)_updateSelectedIndexAnimated:(_Bool)arg1 invokeDelegate:(_Bool)arg2;	// IMP=0x000000000009706b
- (void)_setSelectedIndex:(unsigned long long)arg1 animated:(_Bool)arg2 invokeDelegate:(_Bool)arg3;	// IMP=0x000000000009703f
- (void)setSelectedIndex:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000000009702a
- (double)idealWidthForProposedSize:(struct CGSize)arg1;	// IMP=0x0000000000096fde
- (void)layoutSubviews;	// IMP=0x0000000000096dba
- (void)_setupSubviews;	// IMP=0x0000000000096729
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000966cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
