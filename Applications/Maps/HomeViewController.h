//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class HomeCellProvider, HomeOutlineRootController, MapsRightImageButton, NSLayoutConstraint, NSString, SearchResultQuickActionMenuPresenter, SuggestionsItemSource, UICollectionView, UIScrollView, UITableView, UIView;
@protocol HomeActionDelegate;

@interface HomeViewController : UIViewController
{
    HomeCellProvider *_homeCellProvider;	// 8 = 0x8
    UITableView *_tableView;	// 16 = 0x10
    SearchResultQuickActionMenuPresenter *_quickActionMenuPresenter;	// 24 = 0x18
    HomeOutlineRootController *_outlineController;	// 32 = 0x20
    UICollectionView *_collectionView;	// 40 = 0x28
    UIView *_footerView;	// 48 = 0x30
    NSLayoutConstraint *_footerBottomConstraint;	// 56 = 0x38
    MapsRightImageButton *_termsAndConditionsButton;	// 64 = 0x40
    _Bool _active;	// 72 = 0x48
    id <HomeActionDelegate> _homeActionDelegate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0020000000af2b73
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) __weak id <HomeActionDelegate> homeActionDelegate; // @synthesize homeActionDelegate=_homeActionDelegate;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x0010000000af2aa6
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x0010000000af2a28
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0010000000af2989
- (id)newTraits;	// IMP=0x0010000000af2945
- (void)dataSource:(id)arg1 sectionHeaderTapped:(id)arg2;	// IMP=0x0010000000af27f8
- (void)dataSource:(id)arg1 itemTapped:(id)arg2;	// IMP=0x0010000000af279b
- (void)dataSource:(id)arg1 itemFocused:(id)arg2;	// IMP=0x0010000000af2795
- (void)dataSourceUpdated:(id)arg1;	// IMP=0x0010000000af278f
- (int)listForDataSource:(id)arg1;	// IMP=0x0010000000af2784
- (void)homeDidUpdateAnimated:(_Bool)arg1;	// IMP=0x0010000000af2772
- (void)homeSetNeedsUpdate;	// IMP=0x0010000000af2735
- (double)_footerHeight;	// IMP=0x0010000000af2704
- (void)_updateFooterAnimated:(_Bool)arg1;	// IMP=0x0010000000af2441
- (void)_openTermsAndConditions:(id)arg1;	// IMP=0x0010000000af2404
- (id)_linkButtonWithTitle:(id)arg1;	// IMP=0x0010000000af223c
- (id)sourceViewForProfileTipPopoverWithViewController:(id)arg1;	// IMP=0x0010000000af2200
- (void)keyboardProxyViewCreated:(id)arg1;	// IMP=0x0010000000af21e3
- (void)_configureForceTouchIfNeeded;	// IMP=0x0010000000af2134
- (void)clearSelectionWithReason:(id)arg1;	// IMP=0x0010000000af2117
- (void)editCollection:(id)arg1;	// IMP=0x0010000000af20fa
- (void)showCollection:(id)arg1;	// IMP=0x0010000000af20dd
- (void)handleVenueSearchResultsWithSelectedSearchResult:(id)arg1 searchFieldItem:(id)arg2 browseCategories:(id)arg3;	// IMP=0x0010000000af20c0
- (void)presentVenueWithVenueCardItem:(id)arg1;	// IMP=0x0010000000af20a3
- (void)scrollContentToOriginalPosition;	// IMP=0x0010000000af1fc9
@property(readonly, nonatomic) double mediumContentHeight;
@property(readonly, nonatomic) _Bool shouldShowTopHairline;
@property(readonly, nonatomic) UIScrollView *scrollView;
@property(readonly, nonatomic) SuggestionsItemSource *suggestionsItemSource;
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0010000000af1d5e
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0010000000af1c97
- (id)keyCommands;	// IMP=0x0010000000af1c7a
- (id)preferredFocusEnvironments;	// IMP=0x0010000000af1bef
- (void)viewDidLayoutSubviews;	// IMP=0x0010000000af1b67
- (void)viewDidLoad;	// IMP=0x0010000000af0746
- (id)initWithDelegate:(id)arg1;	// IMP=0x0010000000af06db

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

