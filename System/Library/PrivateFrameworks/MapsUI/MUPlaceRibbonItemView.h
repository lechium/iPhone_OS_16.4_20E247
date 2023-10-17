//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MUHairlineView, MUPlaceRibbonItemViewModel, NSString, UITapGestureRecognizer;
@protocol MULabelViewProtocol;

__attribute__((visibility("hidden")))
@interface MUPlaceRibbonItemView : UIView
{
    UIView<MULabelViewProtocol> *_titleLabel;	// 8 = 0x8
    UIView<MULabelViewProtocol> *_valueLabel;	// 16 = 0x10
    MUHairlineView *_trailingHairlineView;	// 24 = 0x18
    UITapGestureRecognizer *_tapRecognizer;	// 32 = 0x20
    UITapGestureRecognizer *_selectRecognizer;	// 40 = 0x28
    CDUnknownBlockType _actionHandler;	// 48 = 0x30
    MUPlaceRibbonItemViewModel *_viewModel;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000006bd41
@property(retain, nonatomic) MUPlaceRibbonItemViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
- (void)ribbonItemViewModelDidUpdate:(id)arg1;	// IMP=0x000000000006bbf2
- (void)endAnimatingActivityIndicatorWithError:(id)arg1;	// IMP=0x000000000006bbd8
- (void)beginAnimatingActivityIndicator;	// IMP=0x000000000006bbbe
- (void)_setAXIdentifierWithItemType:(id)arg1;	// IMP=0x000000000006bb3c
- (void)_updateLabelWithAlpha:(double)arg1;	// IMP=0x000000000006bb1f
- (void)_handleTap;	// IMP=0x000000000006baab
@property(nonatomic) _Bool showTrailingHairline;
- (void)_updateValueText;	// IMP=0x000000000006b7f9
- (void)_updateGestureRecognizers;	// IMP=0x000000000006b6c7
- (void)_updateAppearance;	// IMP=0x000000000006b551
- (void)_setupConstraints;	// IMP=0x000000000006af26
- (void)_setupSubviews;	// IMP=0x000000000006ad75
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000006acb0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
