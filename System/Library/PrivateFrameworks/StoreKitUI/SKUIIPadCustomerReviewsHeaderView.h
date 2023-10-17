//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class NSArray, NSString, SKUIClientContext, SKUIColorScheme, UIButton, UILabel, UIPopoverController, UIView;

__attribute__((visibility("hidden")))
@interface SKUIIPadCustomerReviewsHeaderView : UIControl
{
    UIButton *_appSupportButton;	// 8 = 0x8
    SKUIClientContext *_clientContext;	// 16 = 0x10
    SKUIColorScheme *_colorScheme;	// 24 = 0x18
    UIPopoverController *_sortPopoverController;	// 32 = 0x20
    long long _selectedSortIndex;	// 40 = 0x28
    UIView *_separatorView;	// 48 = 0x30
    UIButton *_sortButton;	// 56 = 0x38
    UILabel *_sortLabel;	// 64 = 0x40
    NSArray *_sortTitles;	// 72 = 0x48
    UILabel *_titleLabel;	// 80 = 0x50
    UIButton *_writeAReviewButton;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000245e61
@property(readonly, nonatomic) UIControl *writeAReviewButton; // @synthesize writeAReviewButton=_writeAReviewButton;
@property(readonly, nonatomic) UIControl *appSupportButton; // @synthesize appSupportButton=_appSupportButton;
@property(copy, nonatomic) NSArray *sortTitles; // @synthesize sortTitles=_sortTitles;
@property(nonatomic) long long selectedSortIndex; // @synthesize selectedSortIndex=_selectedSortIndex;
@property(retain, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
- (void)_reloadSortButton;	// IMP=0x000000000024592c
- (void)_destroySortPopoverController;	// IMP=0x00000000002458ab
- (void)_sortButtonAction:(id)arg1;	// IMP=0x00000000002456fc
- (void)popoverControllerDidDismissPopover:(id)arg1;	// IMP=0x00000000002456ea
- (void)menuViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2;	// IMP=0x0000000000245675
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000245599
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000000002454cf
- (void)layoutSubviews;	// IMP=0x00000000002450af
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000244fa3
- (void)dealloc;	// IMP=0x0000000000244b7a
- (id)initWithClientContext:(id)arg1;	// IMP=0x00000000002445c3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
