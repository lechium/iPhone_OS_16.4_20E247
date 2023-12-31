//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, NSMutableDictionary, NSString, NSTimer, UICollectionView, UILabel, UIPageControl, UITapGestureRecognizer, UIView;
@protocol SteppingPageViewControllerDelegate, SteppingSignGenerator;

@interface SteppingPageViewController : UIViewController
{
    UIPageControl *_pageControl;	// 8 = 0x8
    UILabel *_pageMarkerLabel;	// 16 = 0x10
    NSLayoutConstraint *_collectionViewHeightConstraint;	// 24 = 0x18
    NSLayoutConstraint *_auxViewHeightConstraint;	// 32 = 0x20
    NSLayoutConstraint *_pageControlHeightConstraint;	// 40 = 0x28
    NSLayoutConstraint *_topAuxViewToPageControlBottomConstraint;	// 48 = 0x30
    NSLayoutConstraint *_topAuxViewToPageMarkerBaselineConstraint;	// 56 = 0x38
    NSMutableDictionary *_auxViewHeightCache;	// 64 = 0x40
    UIView *_fromAuxView;	// 72 = 0x48
    UIView *_toAuxView;	// 80 = 0x50
    UIView *_resizeSnapshot;	// 88 = 0x58
    NSTimer *_scrollTimer;	// 96 = 0x60
    long long _rightBuffer;	// 104 = 0x68
    long long _leftBuffer;	// 112 = 0x70
    long long _startSign;	// 120 = 0x78
    long long _currentSign;	// 128 = 0x80
    unsigned long long _lastUserGesture;	// 136 = 0x88
    double _widthAsOfLastSignRefresh;	// 144 = 0x90
    _Bool _pageIndicatorHidden;	// 152 = 0x98
    id <SteppingSignGenerator> _signGenerator;	// 160 = 0xa0
    id <SteppingPageViewControllerDelegate> _delegate;	// 168 = 0xa8
    UICollectionView *_collectionView;	// 176 = 0xb0
    UIView *_auxViewContainer;	// 184 = 0xb8
    NSLayoutConstraint *_signHeightConstraint;	// 192 = 0xc0
    UITapGestureRecognizer *_singleTapGestureRecognizer;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x002000000021f58e
@property(readonly, nonatomic) UITapGestureRecognizer *singleTapGestureRecognizer; // @synthesize singleTapGestureRecognizer=_singleTapGestureRecognizer;
@property(nonatomic, getter=isPageIndicatorHidden) _Bool pageIndicatorHidden; // @synthesize pageIndicatorHidden=_pageIndicatorHidden;
@property(retain, nonatomic) NSLayoutConstraint *signHeightConstraint; // @synthesize signHeightConstraint=_signHeightConstraint;
@property(retain, nonatomic) UIView *auxViewContainer; // @synthesize auxViewContainer=_auxViewContainer;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)setDelegate:(id)arg1;	// IMP=0x001000000021f4fb
- (id)delegate;	// IMP=0x001000000021f4e2
@property(readonly, nonatomic) __weak id <SteppingSignGenerator> signGenerator; // @synthesize signGenerator=_signGenerator;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x001000000021f44e
- (void)registerClass:(Class)arg1 forSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3;	// IMP=0x001000000021f3c0
- (void)registerClass:(Class)arg1 forCellWithReuseIdentifier:(id)arg2;	// IMP=0x001000000021f348
- (id)dequeueReusableSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2 forIndexPath:(id)arg3;	// IMP=0x001000000021f296
- (id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2;	// IMP=0x001000000021f1ff
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x001000000021f15b
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x001000000021f117
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x001000000021f084
- (void)_getCurrentSignIndexesAdjustedForRTL:(_Bool)arg1 from:(long long *)arg2 to:(long long *)arg3 closest:(long long *)arg4 progressBetweenSigns:(double *)arg5;	// IMP=0x001000000021ee36
- (long long)_adjustedSignIndex:(long long)arg1 adjustForRTL:(_Bool)arg2;	// IMP=0x001000000021edc2
- (double)_collectionViewContentOffsetIndex;	// IMP=0x001000000021ec54
- (double)_calculatedAuxViewHeightFrom:(long long)arg1 to:(long long)arg2 progress:(double)arg3;	// IMP=0x001000000021ebef
- (void)_updateAuxViewsFrom:(long long)arg1 to:(long long)arg2 progress:(double)arg3;	// IMP=0x001000000021e9a2
- (void)_initAuxView:(id)arg1 forIndex:(long long)arg2;	// IMP=0x001000000021e825
- (double)_signToPageControlBottomMarginAtIndex:(long long)arg1 fittingSize:(struct CGSize)arg2;	// IMP=0x001000000021e761
- (double)_calculatedSignToPageControlBaselineHeightFrom:(long long)arg1 to:(long long)arg2 progress:(double)arg3;	// IMP=0x001000000021e561
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x001000000021e506
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x001000000021e495
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x001000000021e469
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x001000000021e42c
- (void)_forcedScrollDidEnd;	// IMP=0x001000000021e3d2
- (void)_updateCurrentPageAndNotifyDelegate;	// IMP=0x001000000021e2da
- (void)reloadWithSignGenerator:(id)arg1;	// IMP=0x001000000021e293
@property long long signIndex;
- (void)setSignIndex:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x001000000021e05d
- (id)auxViewIfVisibleAtIndex:(long long)arg1;	// IMP=0x001000000021df2c
- (id)signCellIfVisibleAtIndex:(long long)arg1;	// IMP=0x001000000021dea3
- (long long)numberOfSigns;	// IMP=0x001000000021de69
- (double)_heightForAuxViewAtIndex:(long long)arg1;	// IMP=0x001000000021dbc3
- (double)heightForSignAtIndex:(long long)arg1;	// IMP=0x001000000021db03
- (void)_sizeClassDidChange;	// IMP=0x001000000021dacb
- (void)_animateSizeClassChange;	// IMP=0x001000000021d959
- (void)updateSignForClusteredVehicleChangeInSegment:(id)arg1;	// IMP=0x001000000021d868
- (void)sizeClassWillChangeWithTransitionCoordinator:(id)arg1;	// IMP=0x001000000021d6f6
- (long long)resetCurrentSignAnimated:(_Bool)arg1;	// IMP=0x001000000021d69a
- (void)setPageIndicatorHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x001000000021d59c
- (void)refreshSigns;	// IMP=0x001000000021d3b4
- (void)refreshCurrentSign;	// IMP=0x001000000021d30a
- (void)_updateSignHeightConstraintsFrom:(long long)arg1 to:(long long)arg2 progress:(double)arg3;	// IMP=0x001000000021d1b4
- (void)_updateSignHeightAnimated:(_Bool)arg1;	// IMP=0x001000000021cea5
- (void)_updateSignHeight;	// IMP=0x001000000021ce91
- (void)_localeDidChange;	// IMP=0x001000000021ce7f
- (void)_contentSizeDidChange;	// IMP=0x001000000021ce6d
- (void)_handleTap:(id)arg1;	// IMP=0x001000000021cc7e
- (_Bool)_isPointNearRightEdge:(struct CGPoint)arg1;	// IMP=0x001000000021cb92
- (_Bool)_isPointNearLeftEdge:(struct CGPoint)arg1;	// IMP=0x001000000021cb16
- (_Bool)_isRTL;	// IMP=0x001000000021cac6
- (void)viewDidLayoutSubviews;	// IMP=0x001000000021c989
- (void)dealloc;	// IMP=0x001000000021c914
- (void)_setupConstraints;	// IMP=0x001000000021bea6
- (void)_initPageMarkerLabel;	// IMP=0x001000000021bdb3
- (void)_initPageControl;	// IMP=0x001000000021bc89
- (void)_setupViews;	// IMP=0x001000000021b7c7
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000021b74b
- (void)viewDidLoad;	// IMP=0x001000000021b648
- (id)initWithSignGenerator:(id)arg1;	// IMP=0x001000000021b5bc
- (void)_updatePageIndicatorVisibility;	// IMP=0x001000000021b483
- (void)_updatePageMarkerText;	// IMP=0x001000000021b2be
- (_Bool)_canShowWhileLocked;	// IMP=0x001000000021b2b6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

