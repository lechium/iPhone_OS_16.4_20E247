//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, Route;
@protocol RouteOverviewCellDelegate;

@interface RoutePlanningRouteOverviewOutlineSection
{
    unsigned long long _suppressReloads;	// 16 = 0x10
    double _cachedRowHeight;	// 24 = 0x18
    double _lastCachedWidthForRowHeight;	// 32 = 0x20
    _Bool _currentRoute;	// 40 = 0x28
    _Bool _expanded;	// 41 = 0x29
    _Bool _allowPersistentHighlight;	// 42 = 0x2a
    _Bool _showDetailButton;	// 43 = 0x2b
    _Bool _firstRoute;	// 44 = 0x2c
    _Bool _lastRoute;	// 45 = 0x2d
    _Bool _hasSelectedStep;	// 46 = 0x2e
    Route *_route;	// 48 = 0x30
    double _longestRouteLength;	// 56 = 0x38
    NSArray *_automaticSharingContacts;	// 64 = 0x40
    id <RouteOverviewCellDelegate> _routeCellDelegate;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000057991e
@property(nonatomic) __weak id <RouteOverviewCellDelegate> routeCellDelegate; // @synthesize routeCellDelegate=_routeCellDelegate;
@property(retain, nonatomic) NSArray *automaticSharingContacts; // @synthesize automaticSharingContacts=_automaticSharingContacts;
@property(nonatomic) _Bool hasSelectedStep; // @synthesize hasSelectedStep=_hasSelectedStep;
@property(nonatomic, getter=isLastRoute) _Bool lastRoute; // @synthesize lastRoute=_lastRoute;
@property(nonatomic, getter=isFirstRoute) _Bool firstRoute; // @synthesize firstRoute=_firstRoute;
@property(nonatomic, getter=showsDetailButton) _Bool showDetailButton; // @synthesize showDetailButton=_showDetailButton;
@property(nonatomic, getter=allowsPersistentHighlight) _Bool allowPersistentHighlight; // @synthesize allowPersistentHighlight=_allowPersistentHighlight;
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(nonatomic, getter=isCurrentRoute) _Bool currentRoute; // @synthesize currentRoute=_currentRoute;
@property(readonly, nonatomic) double longestRouteLength; // @synthesize longestRouteLength=_longestRouteLength;
@property(retain, nonatomic) Route *route; // @synthesize route=_route;
- (id)_existingCell;	// IMP=0x001000000057974f
- (void)_configureCell:(id)arg1;	// IMP=0x00100000005794da
- (void)reloadExistingCell;	// IMP=0x0010000000579480
- (_Bool)selectionFollowsFocusForItemAtIndexPath:(id)arg1;	// IMP=0x001000000057931e
- (id)cellForItemAtIndexPath:(id)arg1;	// IMP=0x0010000000579284
- (long long)numberOfItemsInSection:(long long)arg1;	// IMP=0x001000000057924e
- (long long)numberOfSections;	// IMP=0x0010000000579243
- (void)setExpanded:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00100000005791d3
- (void)_resetCachedRowHeight;	// IMP=0x00100000005790f7
- (double)estimatedItemHeight;	// IMP=0x0010000000578f39
- (void)performWhileSuppressingCellReloads:(CDUnknownBlockType)arg1;	// IMP=0x0010000000578f10
- (id)listLayoutSectionConfigurationAtIndex:(long long)arg1 layoutEnvironment:(id)arg2;	// IMP=0x0010000000578cc4
- (id)initWithCollectionView:(id)arg1 sectionIdentifier:(id)arg2;	// IMP=0x0010000000578bf1

@end
