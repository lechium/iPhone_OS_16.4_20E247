//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ContainerHeaderView, MUScrollViewImpressionsCalculator, NSLayoutConstraint, NSString, ResultsTitleView, SearchInfo, SearchResultQuickActionMenuPresenter, SearchResultsDataSource, SimpleResultTitleView, UITableView, VKLabelMarker;
@protocol ActionCoordination, SARSearchResultTableViewCellDelegate, ShareDelegate, SimpleResultsViewControllerDelegate;

@interface SimpleResultsViewController
{
    id <ShareDelegate> _shareDelegate;	// 8 = 0x8
    ResultsTitleView *_resultsTitleView;	// 16 = 0x10
    SimpleResultTitleView *_macResultsTitleView;	// 24 = 0x18
    SearchInfo *_originalSearchInfo;	// 32 = 0x20
    UITableView *_tableView;	// 40 = 0x28
    SearchResultsDataSource *_resultsDataSource;	// 48 = 0x30
    SearchResultQuickActionMenuPresenter *_quickActionMenuPresenter;	// 56 = 0x38
    VKLabelMarker *_cluster;	// 64 = 0x40
    _Bool _displayDistance;	// 72 = 0x48
    NSLayoutConstraint *_titleHeaderViewHeightConstraint;	// 80 = 0x50
    NSString *_title;	// 88 = 0x58
    id _lastItemTapped;	// 96 = 0x60
    MUScrollViewImpressionsCalculator *_impressionsCalculator;	// 104 = 0x68
    _Bool _enableQuickActionMenu;	// 112 = 0x70
    _Bool _isPresentingSearchAlongTheRouteResults;	// 113 = 0x71
    _Bool _isPresentingVenueClusterResults;	// 114 = 0x72
    id <ActionCoordination> _coordinator;	// 120 = 0x78
    id <SimpleResultsViewControllerDelegate> _resultsDelegate;	// 128 = 0x80
    id <SARSearchResultTableViewCellDelegate> _searchAlongTheRouteCellDelegate;	// 136 = 0x88
    ContainerHeaderView *_titleHeaderView;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x00200000005d9933
@property(readonly, nonatomic) ContainerHeaderView *titleHeaderView; // @synthesize titleHeaderView=_titleHeaderView;
@property(nonatomic) _Bool isPresentingVenueClusterResults; // @synthesize isPresentingVenueClusterResults=_isPresentingVenueClusterResults;
@property(nonatomic) __weak id <SARSearchResultTableViewCellDelegate> searchAlongTheRouteCellDelegate; // @synthesize searchAlongTheRouteCellDelegate=_searchAlongTheRouteCellDelegate;
@property(nonatomic) _Bool isPresentingSearchAlongTheRouteResults; // @synthesize isPresentingSearchAlongTheRouteResults=_isPresentingSearchAlongTheRouteResults;
@property(nonatomic) _Bool enableQuickActionMenu; // @synthesize enableQuickActionMenu=_enableQuickActionMenu;
@property(nonatomic) __weak id <SimpleResultsViewControllerDelegate> resultsDelegate; // @synthesize resultsDelegate=_resultsDelegate;
@property(nonatomic) __weak id <ActionCoordination> coordinator; // @synthesize coordinator=_coordinator;
@property(readonly, nonatomic) VKLabelMarker *cluster; // @synthesize cluster=_cluster;
- (void)_captureCloseAction;	// IMP=0x00100000005d9858
- (void)_captureTapActionWithSearchResult:(id)arg1;	// IMP=0x00100000005d9852
- (int)currentMapViewTargetForAnalytics;	// IMP=0x00100000005d9847
- (int)currentUITargetForAnalytics;	// IMP=0x00100000005d983c
@property(readonly, nonatomic) MUScrollViewImpressionsCalculator *impressionsCalculator;
- (_Bool)shouldQuickActionMenuPresenter:(id)arg1 showDirectionsToPlace:(id)arg2;	// IMP=0x00100000005d95c6
- (void)quickActionMenuPresenter:(id)arg1 selectedRemoveDroppedPinOf:(id)arg2;	// IMP=0x00100000005d9552
- (id)mapServiceTraitsForQuickActionPresenter:(id)arg1;	// IMP=0x00100000005d950a
@property(readonly, nonatomic) int uiTargetForQuickActionMenu;
- (_Bool)quickActionMenuPresenter:(id)arg1 isPopularNearbyAtIndexPath:(id)arg2;	// IMP=0x00100000005d94f7
- (_Bool)shouldQuickActionMenuPresenter:(id)arg1 presentAtLocation:(struct CGPoint)arg2 inView:(id)arg3;	// IMP=0x00100000005d94e5
- (void)quickActionMenuPresenter:(id)arg1 selectedViewTransitLinesOnMap:(id)arg2;	// IMP=0x00100000005d94df
- (void)quickActionMenuPresenter:(id)arg1 selectedShowPlaceCard:(id)arg2;	// IMP=0x00100000005d9465
- (void)quickActionMenuPresenter:(id)arg1 selectedShareLocationOf:(id)arg2;	// IMP=0x00100000005d9382
- (void)quickActionMenuPresenter:(id)arg1 selectedViewWebsiteFor:(id)arg2;	// IMP=0x00100000005d9308
- (void)quickActionMenuPresenter:(id)arg1 selectedCall:(id)arg2;	// IMP=0x00100000005d928e
- (void)quickActionMenuPresenter:(id)arg1 selectedDirectionsTo:(id)arg2;	// IMP=0x00100000005d90b8
- (void)handleDismissAction:(id)arg1;	// IMP=0x00100000005d905e
- (double)heightForLayout:(unsigned long long)arg1;	// IMP=0x00100000005d8e85
- (void)willChangeContainerStyle:(unsigned long long)arg1;	// IMP=0x00100000005d8e0a
- (void)willBecomeCurrent:(_Bool)arg1;	// IMP=0x00100000005d8d83
- (id)contentView;	// IMP=0x00100000005d8d6e
- (void)applyAlphaToContent:(double)arg1;	// IMP=0x00100000005d8d0d
- (id)headerView;	// IMP=0x00100000005d8cf8
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00100000005d8c48
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000005d8b49
- (void)viewDidLoad;	// IMP=0x00100000005d80e4
- (void)headerViewButtonTapped:(id)arg1;	// IMP=0x00100000005d80d2
- (void)didTapOnAddStopWithSearchResult:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00100000005d8028
- (void)didTapOnTappableEntry:(id)arg1;	// IMP=0x00100000005d7f4f
- (void)didTapOnContainmentParentMapItem:(id)arg1;	// IMP=0x00100000005d7e76
- (void)didTapOnFlyoverWithSearchResult:(id)arg1;	// IMP=0x00100000005d7dcc
- (void)didTapOnWebsiteWithSearchResult:(id)arg1;	// IMP=0x00100000005d7d22
- (void)didTapOnCallWithSearchResult:(id)arg1;	// IMP=0x00100000005d7c78
- (void)didTapOnLookAroundWithSearchResult:(id)arg1;	// IMP=0x00100000005d7bce
- (void)didTapOnDirectionsWithSearchResult:(id)arg1;	// IMP=0x00100000005d7a0c
- (void)didTapOnCuratedGuides:(id)arg1;	// IMP=0x00100000005d795f
- (void)didTapOnCuratedGuide:(id)arg1;	// IMP=0x00100000005d78b5
- (void)didTapOnUserGeneratedGuide:(id)arg1;	// IMP=0x00100000005d780b
- (void)searchDataSource:(id)arg1 didTapOnPlaceContextWithViewModel:(id)arg2;	// IMP=0x00100000005d768c
- (void)dataSource:(id)arg1 itemTapped:(id)arg2;	// IMP=0x00100000005d75dd
- (void)dataSource:(id)arg1 itemFocused:(id)arg2;	// IMP=0x00100000005d74ef
- (void)dataSourceUpdated:(id)arg1;	// IMP=0x00100000005d7490
- (double)_searchAlongRouteHeaderHeightForStyle:(unsigned long long)arg1 traitCollection:(id)arg2;	// IMP=0x00100000005d73e0
- (void)_updateHeaderWithContainerStyle:(unsigned long long)arg1 traitCollection:(id)arg2;	// IMP=0x00100000005d7320
- (void)setSearchResults:(id)arg1;	// IMP=0x00100000005d7201
- (void)setDisplayDistance:(_Bool)arg1;	// IMP=0x00100000005d71d0
- (void)setCluster:(id)arg1 sortAlphabetically:(_Bool)arg2 originalSearchInfo:(id)arg3 searchResults:(id)arg4;	// IMP=0x00100000005d70cd
- (void)setCluster:(id)arg1 sortAlphabetically:(_Bool)arg2 originalSearchInfo:(id)arg3;	// IMP=0x00100000005d6df3
- (void)_updatePopoverCoordinate;	// IMP=0x00100000005d6d1a
- (void)clearCluster;	// IMP=0x00100000005d6d01
- (void)setSearchResults:(id)arg1 sortAlphabetically:(_Bool)arg2 originalSearchInfo:(id)arg3;	// IMP=0x00100000005d6acc
- (_Bool)containsMapItem:(id)arg1;	// IMP=0x00100000005d68dc
- (void)updatePreferredContentSize;	// IMP=0x00100000005d6818
- (void)updateTitle:(_Bool)arg1;	// IMP=0x00100000005d642c
- (void)setHeaderTitle:(id)arg1;	// IMP=0x00100000005d6418
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00100000005d63ae
- (void)didBecomeCurrent;	// IMP=0x00100000005d62cf
- (void)didResignCurrent;	// IMP=0x00100000005d6263
- (void)didChangeLayout:(unsigned long long)arg1;	// IMP=0x00100000005d61f9
- (void)viewDidLayoutSubviews;	// IMP=0x00100000005d618f
- (id)initWithShareDelegate:(id)arg1 visualEffectDisabled:(_Bool)arg2;	// IMP=0x00100000005d6119
- (id)initWithShareDelegate:(id)arg1;	// IMP=0x00100000005d6105
- (_Bool)_canShowWhileLocked;	// IMP=0x00100000005d60fd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

