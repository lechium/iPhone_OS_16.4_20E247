//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EKCalendarDate, EKUIOverlayCalendarSignificantDatesProvider, MISSING_TYPE, NSObject, NSString, UILongPressGestureRecognizer, UITapGestureRecognizer, UITraitCollection, UIView;
@protocol NextLevelMainViewControllerContainerPushDelegate;

@interface YearViewController
{
    UIView *_pressHighlight;	// 16 = 0x10
    EKCalendarDate *_backButtonDate;	// 24 = 0x18
    UITapGestureRecognizer *_tapRecognizer;	// 32 = 0x20
    UILongPressGestureRecognizer *_longPressRecognizer;	// 40 = 0x28
    EKUIOverlayCalendarSignificantDatesProvider *_overlaySignificantDatesProvider;	// 48 = 0x30
    _Bool _requiresReload;	// 56 = 0x38
    NSObject<NextLevelMainViewControllerContainerPushDelegate> *_pushDelegate;	// 64 = 0x40
    Class _monthViewControllerClass;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000010f76a
@property(readonly, nonatomic) Class monthViewControllerClass; // @synthesize monthViewControllerClass=_monthViewControllerClass;
@property(nonatomic) __weak NSObject<NextLevelMainViewControllerContainerPushDelegate> *pushDelegate; // @synthesize pushDelegate=_pushDelegate;
- (void)timeZoneDidChange;	// IMP=0x001000000010f726
- (void)localeDidChange;	// IMP=0x001000000010f720
- (id)_viewForCalendarDate:(id)arg1;	// IMP=0x001000000010f5ce
- (id)_flooredCalendarDateForCalendarDate:(id)arg1;	// IMP=0x001000000010f4b4
- (void)updateBackButtonToDate:(id)arg1;	// IMP=0x001000000010f3d5
- (void)invalidateBackButtonDate;	// IMP=0x001000000010f3b4
- (void)_updateBackButtonToSelectedDate;	// IMP=0x001000000010f2f6
@property(readonly, nonatomic) unsigned long long monthsPerRow;
@property(readonly, nonatomic) Class multipleMonthViewClass;
- (id)monthViewForCalendarDate:(id)arg1;	// IMP=0x001000000010f263
- (struct CGPoint)monthHeaderLocationForCalendarDate:(id)arg1;	// IMP=0x001000000010f1b8
- (struct CGRect)monthFrameForCalendarDate:(id)arg1 adjustHeightUp:(_Bool)arg2;	// IMP=0x001000000010f0e4
- (struct CGRect)frameForTodayHighlight;	// IMP=0x001000000010ef43
- (void)pushContentViewOfType:(long long)arg1 date:(id)arg2 animated:(_Bool)arg3;	// IMP=0x001000000010eedb
- (id)pushedMonthViewControllerWithDate:(id)arg1 animated:(_Bool)arg2;	// IMP=0x001000000010ee68
- (void)_viewLongPressed:(id)arg1;	// IMP=0x001000000010e5d0
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x001000000010e55e
- (_Bool)shouldAnimateTransitionsToMonthView;	// IMP=0x001000000010e556
- (void)_hidePressHighlightWithFadeDuration:(double)arg1;	// IMP=0x001000000010e53c
- (void)_showPressHighlightWithFadeDuration:(double)arg1;	// IMP=0x001000000010e51d
- (void)_fadePressHighlightViewToAlpha:(double)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000010e48b
- (void)_pushMonthViewControllerWithDate:(id)arg1 animated:(_Bool)arg2;	// IMP=0x001000000010e42e
- (void)receivedTapAtLocation:(struct CGPoint)arg1 usingDate:(id)arg2 precise:(_Bool)arg3;	// IMP=0x001000000010e3d9
- (_Bool)_containsPreciseTouch:(id)arg1;	// IMP=0x001000000010e289
- (void)_viewTapped:(id)arg1;	// IMP=0x001000000010e0be
- (void)_reloadAllViewsWithDate:(id)arg1;	// IMP=0x001000000010dfd2
- (void)_reloadAllViews;	// IMP=0x001000000010df86
- (void)_reloadAllViewsForContentSizeCategoryChange;	// IMP=0x001000000010deff
- (void)_contentSizeCategoryChanged:(id)arg1;	// IMP=0x001000000010de31
- (void)_localeChanged:(id)arg1;	// IMP=0x001000000010dda2
- (void)_timeZoneChanged:(id)arg1;	// IMP=0x001000000010dd13
- (void)_significantTimeChanged:(id)arg1;	// IMP=0x001000000010dce5
- (void)_selectedDateChanged;	// IMP=0x001000000010dc36
- (void)transitionToSizeDidEnd;	// IMP=0x001000000010db0e
- (id)sceneTitle;	// IMP=0x001000000010da6e
- (id)testingRotationDidEndNotificationName;	// IMP=0x001000000010da61
- (MISSING_TYPE *)testingRotationWillStartNotificationName;	// IMP=0x001000000010da54
- (long long)intendedSizeClass;	// IMP=0x001000000015bab8
- (_Bool)handlesNotifyOnExtendedLaunchCompletion;	// IMP=0x001000000010da4c
- (id)bestDateForNewEvent;	// IMP=0x001000000010d73b
- (void)showEvent:(id)arg1 animated:(_Bool)arg2 showMode:(unsigned long long)arg3 context:(id)arg4;	// IMP=0x001000000010d61f
- (_Bool)_isTodayCircleFrameFullyUnobstructed;	// IMP=0x001000000010d4cc
- (_Bool)isTodayVisible;	// IMP=0x001000000010d4ba
- (_Bool)shouldPushNextLevelViewControllerWhenTodayIsVisible;	// IMP=0x001000000010d4b2
- (void)selectDate:(id)arg1 animated:(_Bool)arg2;	// IMP=0x001000000010d40c
- (_Bool)allowsOverriddenToolbarItems;	// IMP=0x001000000010d404
- (_Bool)allowsOverriddenRightNavigationBarItems;	// IMP=0x001000000010d3fc
- (void)disableGestureRecognizers;	// IMP=0x001000000010d365
- (void)enableGestureRecognizers;	// IMP=0x001000000010d2ce
- (void)didEndScrolling;	// IMP=0x001000000010d28d
- (id)futureMajorBoundaryCalendarDateForCalendarDate:(id)arg1;	// IMP=0x001000000010d238
- (id)pastMajorBoundaryCalendarDateForCalendarDate:(id)arg1;	// IMP=0x001000000010d223
- (void)willEndDraggingWithVelocity:(struct CGPoint)arg1 targetContentOffset:(inout struct CGPoint *)arg2;	// IMP=0x001000000010cfcf
- (void)showDate:(id)arg1 animated:(_Bool)arg2;	// IMP=0x001000000010ce1c
- (double)topInsetForSubviewWithCalendarDate:(id)arg1;	// IMP=0x001000000010cdf1
- (double)heightForSubviewWithCalendarDate:(id)arg1;	// IMP=0x001000000010cc80
- (id)calendarDateForSubviewBelowSubviewWithCalendarDate:(id)arg1;	// IMP=0x001000000010cc14
- (id)calendarDateForSubviewAboveSubviewWithCalendarDate:(id)arg1;	// IMP=0x001000000010cb9d
- (id)newBottomViewBelowViewWithCalendarDate:(id)arg1;	// IMP=0x001000000010cb42
- (id)newTopViewAboveViewWithCalendarDate:(id)arg1;	// IMP=0x001000000010cae7
- (id)createInitialViewForDate:(id)arg1;	// IMP=0x001000000010ca86
- (_Bool)shouldAnimateScrollToDate:(id)arg1 fromClosestDate:(id)arg2;	// IMP=0x001000000010ca5c
- (unsigned long long)maximumCachedReusableViews;	// IMP=0x001000000010ca51
- (id)title;	// IMP=0x001000000010ca44
- (void)viewDidLoad;	// IMP=0x001000000010c8e9
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x001000000010c8a5
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000010c7d5
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000010c6f8
- (id)initWithCalendarDate:(id)arg1 model:(id)arg2 window:(id)arg3;	// IMP=0x001000000010c3e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) UITraitCollection *futureTraitCollection;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isTransitioningTraitCollection;
@property(nonatomic) _Bool isWaitingForBackgroundLoadingOfSelectedEventOccurrenceView;
@property(readonly, nonatomic) _Bool shouldAdaptEventViewControllers;
@property(readonly, nonatomic) _Bool shouldJournalMainViewControllerParent;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UITraitCollection *traitCollection;

@end

