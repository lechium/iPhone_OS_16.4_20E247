//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class FRCollectionViewPagedLayout, FRExploreCollectionView, FRFeedBasedDataSource, FRPageControl, NSArray, NSString, UIButton, UILabel;
@protocol FRFeldsparContext;

@interface FRSubscriptionsFoundViewController : UIViewController
{
    _Bool _subscriptionDetectionViewControllerIsVisible;	// 8 = 0x8
    NSArray *_tagIDs;	// 16 = 0x10
    id <FRFeldsparContext> _feldsparContext;	// 24 = 0x18
    FRFeedBasedDataSource *_subscriptionTagsDataSource;	// 32 = 0x20
    FRExploreCollectionView *_subscriptionsCollectionView;	// 40 = 0x28
    FRCollectionViewPagedLayout *_subscriptionsCollectionViewLayout;	// 48 = 0x30
    FRPageControl *_subscriptionsPageControl;	// 56 = 0x38
    UILabel *_subscriptionTitle;	// 64 = 0x40
    UILabel *_subscriptionSubtitle;	// 72 = 0x48
    UIButton *_okButton;	// 80 = 0x50
    struct CGSize _subscriptionsGridSize;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00200000000cc951
@property(nonatomic) _Bool subscriptionDetectionViewControllerIsVisible; // @synthesize subscriptionDetectionViewControllerIsVisible=_subscriptionDetectionViewControllerIsVisible;
@property(nonatomic) struct CGSize subscriptionsGridSize; // @synthesize subscriptionsGridSize=_subscriptionsGridSize;
@property(retain, nonatomic) UIButton *okButton; // @synthesize okButton=_okButton;
@property(retain, nonatomic) UILabel *subscriptionSubtitle; // @synthesize subscriptionSubtitle=_subscriptionSubtitle;
@property(retain, nonatomic) UILabel *subscriptionTitle; // @synthesize subscriptionTitle=_subscriptionTitle;
@property(retain, nonatomic) FRPageControl *subscriptionsPageControl; // @synthesize subscriptionsPageControl=_subscriptionsPageControl;
@property(retain, nonatomic) FRCollectionViewPagedLayout *subscriptionsCollectionViewLayout; // @synthesize subscriptionsCollectionViewLayout=_subscriptionsCollectionViewLayout;
@property(retain, nonatomic) FRExploreCollectionView *subscriptionsCollectionView; // @synthesize subscriptionsCollectionView=_subscriptionsCollectionView;
@property(retain, nonatomic) FRFeedBasedDataSource *subscriptionTagsDataSource; // @synthesize subscriptionTagsDataSource=_subscriptionTagsDataSource;
@property(retain, nonatomic) id <FRFeldsparContext> feldsparContext; // @synthesize feldsparContext=_feldsparContext;
@property(retain, nonatomic) NSArray *tagIDs; // @synthesize tagIDs=_tagIDs;
- (void)feedDataSourceDidReloadData:(id)arg1;	// IMP=0x00100000000cc7a2
- (void)feedDataSource:(id)arg1 wantsToPerformUpdate:(CDUnknownBlockType)arg2;	// IMP=0x00100000000cc772
- (double)pageControlHeight;	// IMP=0x00100000000cc749
- (void)pageSubscription:(id)arg1;	// IMP=0x00100000000cc55a
- (void)okTapped:(id)arg1;	// IMP=0x00100000000cc516
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00100000000cc3b5
- (void)viewWillLayoutSubviews;	// IMP=0x00100000000cc374
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x00100000000cc27d
- (void)updatePageControl;	// IMP=0x00100000000cc009
- (_Bool)isLandscape;	// IMP=0x00100000000cbf25
- (_Bool)isPad;	// IMP=0x00100000000cbed5
- (_Bool)isCompactWidth;	// IMP=0x00100000000cbd7f
- (_Bool)isViewVisible;	// IMP=0x00100000000cbd03
- (void)startReload;	// IMP=0x00100000000cbb9c
- (void)updateLayout;	// IMP=0x00100000000ca44e
- (void)reloadData;	// IMP=0x00100000000ca3f6
- (void)setupDataSource;	// IMP=0x00100000000ca28a
- (void)dealloc;	// IMP=0x00100000000ca1b3
- (void)viewDidLoad;	// IMP=0x00100000000c9771
- (void)recordExposureEventWithStartDate:(id)arg1;	// IMP=0x00100000000c966f
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00100000000c9627
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000000c95df
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000000c9506
- (_Bool)prefersStatusBarHidden;	// IMP=0x00100000000c94fe
- (id)initWithTagIDs:(id)arg1 feldsparContext:(id)arg2;	// IMP=0x00100000000c93db
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00100000000c9280
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000c9132

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
