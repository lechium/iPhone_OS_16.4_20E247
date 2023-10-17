//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CitySelectorAPIController, CitySelectorAnalyticsManager, CitySelectorDataSource, ContainerHeaderView, ErrorModeView, GEOGuideLocation, GEOMapServiceTraits, LoadingModeView, NSArray, NSString, UICollectionView, UICollectionViewCompositionalLayout, UIScrollView;

@interface CitySelectorViewController
{
    GEOMapServiceTraits *_traits;	// 8 = 0x8
    UICollectionView *_collectionView;	// 16 = 0x10
    CitySelectorDataSource *_dataSource;	// 24 = 0x18
    LoadingModeView *_loadingView;	// 32 = 0x20
    ErrorModeView *_errorView;	// 40 = 0x28
    ContainerHeaderView *_titleHeaderView;	// 48 = 0x30
    UICollectionViewCompositionalLayout *_layout;	// 56 = 0x38
    NSArray *_sections;	// 64 = 0x40
    CitySelectorAPIController *_apiController;	// 72 = 0x48
    CitySelectorAnalyticsManager *_analyticsManager;	// 80 = 0x50
    GEOGuideLocation *_sourceGuideLocation;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x002000000041fa4e
@property(retain, nonatomic) GEOGuideLocation *sourceGuideLocation; // @synthesize sourceGuideLocation=_sourceGuideLocation;
@property(retain, nonatomic) CitySelectorAnalyticsManager *analyticsManager; // @synthesize analyticsManager=_analyticsManager;
@property(retain, nonatomic) CitySelectorAPIController *apiController; // @synthesize apiController=_apiController;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) UICollectionViewCompositionalLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) ContainerHeaderView *titleHeaderView; // @synthesize titleHeaderView=_titleHeaderView;
@property(retain, nonatomic) ErrorModeView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) LoadingModeView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) CitySelectorDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) GEOMapServiceTraits *traits; // @synthesize traits=_traits;
@property(readonly, nonatomic) UIScrollView *pptTestScrollView;
- (void)dataSource:(id)arg1 itemTapped:(id)arg2;	// IMP=0x001000000041f89f
- (void)dataSource:(id)arg1 itemFocused:(id)arg2;	// IMP=0x001000000041f899
- (void)dataSourceUpdated:(id)arg1;	// IMP=0x001000000041f893
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x001000000041f75e
- (void)removeErrorView;	// IMP=0x001000000041f6d4
- (void)addErrorView;	// IMP=0x001000000041f2a9
- (void)removeLoadingView;	// IMP=0x001000000041f21f
- (void)addLoadingView;	// IMP=0x001000000041ef8f
- (void)resetCollectionViewLayout;	// IMP=0x001000000041ee7a
- (void)activateConstraintsForViewPinnedBelowHeader:(id)arg1;	// IMP=0x001000000041eb65
- (id)createLayoutUsingWidth:(double)arg1;	// IMP=0x001000000041ea18
- (void)removeCollectionView;	// IMP=0x001000000041e97f
- (void)addAllCollectionsView;	// IMP=0x001000000041e650
- (void)activateHeaderConstraints;	// IMP=0x001000000041e2d6
- (void)addHeaderView;	// IMP=0x001000000041dfb7
- (void)initializeDataSource;	// IMP=0x001000000041ddb2
- (void)initializeSections;	// IMP=0x001000000041da92
- (void)onTransitionFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x001000000041d8c5
- (void)routeToGuideLocation:(id)arg1;	// IMP=0x001000000041d850
- (void)headerViewButtonTapped:(id)arg1;	// IMP=0x001000000041d83e
- (double)heightForLayout:(unsigned long long)arg1;	// IMP=0x001000000041d7e8
- (void)handleDismissAction:(id)arg1;	// IMP=0x001000000041d72b
- (void)didChangeLayout:(unsigned long long)arg1;	// IMP=0x001000000041d674
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x001000000041d5a1
- (void)viewDidLoad;	// IMP=0x001000000041d3cf
- (id)initWithSourceGuideLocation:(id)arg1;	// IMP=0x001000000041d25a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
