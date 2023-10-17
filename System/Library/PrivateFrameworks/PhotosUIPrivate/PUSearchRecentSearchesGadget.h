//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSArray, NSLayoutConstraint, NSString, PXGadgetSpec;
@protocol PXGadgetDelegate;

__attribute__((visibility("hidden")))
@interface PUSearchRecentSearchesGadget : UITableViewController
{
    PXGadgetSpec *_gadgetSpec;	// 8 = 0x8
    id <PXGadgetDelegate> _delegate;	// 16 = 0x10
    unsigned long long _accessoryButtonType;	// 24 = 0x18
    NSArray *_recentSearches;	// 32 = 0x20
    NSLayoutConstraint *_separatorRegularTrailingConstraint;	// 40 = 0x28
    NSLayoutConstraint *_separatorCompactWidthConstraint;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000045135c
@property(retain, nonatomic) NSLayoutConstraint *separatorCompactWidthConstraint; // @synthesize separatorCompactWidthConstraint=_separatorCompactWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *separatorRegularTrailingConstraint; // @synthesize separatorRegularTrailingConstraint=_separatorRegularTrailingConstraint;
@property(copy, nonatomic) NSArray *recentSearches; // @synthesize recentSearches=_recentSearches;
@property(readonly, nonatomic) unsigned long long accessoryButtonType; // @synthesize accessoryButtonType=_accessoryButtonType;
@property(nonatomic) __weak id <PXGadgetDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PXGadgetSpec *gadgetSpec; // @synthesize gadgetSpec=_gadgetSpec;
- (void)resetLineSeparatorInsets;	// IMP=0x0000000000450f74
- (void)userDidSelectAccessoryButton:(id)arg1;	// IMP=0x0000000000450be2
- (id)contentViewController;	// IMP=0x0000000000450bd9
@property(readonly, nonatomic) NSString *localizedTitle;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000450af1
@property(readonly, nonatomic) unsigned long long headerStyle;
@property(readonly, nonatomic) unsigned long long gadgetCapabilities;
@property(readonly, nonatomic) unsigned long long gadgetType;
- (struct CGSize)contentSize;	// IMP=0x0000000000450a79
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000004508a8
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000450864
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000004506d8
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000450697
- (void)viewLayoutMarginsDidChange;	// IMP=0x0000000000450656
- (void)_reloadData;	// IMP=0x000000000045059f
- (void)_updateTableViewLayoutMargins;	// IMP=0x00000000004504f7
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000450324
- (void)dealloc;	// IMP=0x0000000000450268
- (void)viewDidLoad;	// IMP=0x000000000044fcd6
- (id)init;	// IMP=0x000000000044fc93

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryButtonTitle;
@property(readonly, nonatomic) Class collectionViewItemClass;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long priority;
@property(readonly) Class superclass;
@property(nonatomic) struct CGRect visibleContentRect;
@property(readonly, nonatomic) _Bool wantsMultilineTitle;

@end
