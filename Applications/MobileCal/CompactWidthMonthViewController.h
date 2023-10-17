//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CompactMonthListViewController, CompactMonthWeekView, EKCalendarDate, NSArray, NSCalendar, NSString, TappableDayNumber, UIColor, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView;

@interface CompactWidthMonthViewController
{
    _Bool _shouldSetSelectedDate;	// 16 = 0x10
    EKCalendarDate *_pressedDay;	// 24 = 0x18
    TappableDayNumber *_pressHighlight;	// 32 = 0x20
    CompactMonthWeekView *_pressedMonthView;	// 40 = 0x28
    CompactMonthListViewController *_listViewController;	// 48 = 0x30
    UIView *_listViewContainer;	// 56 = 0x38
    UIView *_listViewContainerTopLine;	// 64 = 0x40
    CompactMonthWeekView *_selectedMonthWeekView;	// 72 = 0x48
    _Bool _loadingOccurrenceCache;	// 80 = 0x50
    _Bool _needToReloadEventsOnAppear;	// 81 = 0x51
    _Bool _eventLoadingSuspendedForScroll;	// 82 = 0x52
    _Bool _reloadAfterStoppedScrolling;	// 83 = 0x53
    _Bool _listFrameNeedsUpdate;	// 84 = 0x54
    _Bool _dividedListModeAnimationInProgress;	// 85 = 0x55
    EKCalendarDate *_currentBackButtonDate;	// 88 = 0x58
    UIView *_topLineView;	// 96 = 0x60
    NSCalendar *_weekCalculationCalendar;	// 104 = 0x68
    _Bool _inAnimationSplitState;	// 112 = 0x70
    _Bool _splitOpen;	// 113 = 0x71
    UIColor *_originalBackgroundColor;	// 120 = 0x78
    UIColor *_originalScrollViewBackgroundColor;	// 128 = 0x80
    struct CGRect _splitCutOutRect;	// 136 = 0x88
    double _topBoundaryY;	// 168 = 0xa8
    NSArray *_clipViews;	// 176 = 0xb0
    NSArray *_originalSubviewYs;	// 184 = 0xb8
    NSArray *_viewsToMove;	// 192 = 0xc0
    _Bool _editorDismissedFromDelete;	// 200 = 0xc8
    _Bool _needsUpdateOnModelUnlock;	// 201 = 0xc9
    _Bool _suspendEventLoading;	// 202 = 0xca
    _Bool _dividedListMode;	// 203 = 0xcb
    UILongPressGestureRecognizer *_dayCellsScrubbingGestureRecognizer;	// 208 = 0xd0
    UITapGestureRecognizer *_dayCellsTapGestureRecognizer;	// 216 = 0xd8
}

+ (_Bool)shouldAnimateTransitionToDay;	// IMP=0x002000000008ab40
+ (Class)monthWeekViewClass;	// IMP=0x001000000008ab2f
+ (_Bool)_shouldForwardViewWillTransitionToSize;	// IMP=0x00100000000868f4
- (void).cxx_destruct;	// IMP=0x0020000000092ae6
@property(retain, nonatomic) UITapGestureRecognizer *dayCellsTapGestureRecognizer; // @synthesize dayCellsTapGestureRecognizer=_dayCellsTapGestureRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *dayCellsScrubbingGestureRecognizer; // @synthesize dayCellsScrubbingGestureRecognizer=_dayCellsScrubbingGestureRecognizer;
@property(nonatomic) _Bool dividedListMode; // @synthesize dividedListMode=_dividedListMode;
@property(nonatomic) _Bool suspendEventLoading; // @synthesize suspendEventLoading=_suspendEventLoading;
- (void)eventViewControllerWillDisappear:(id)arg1;	// IMP=0x0010000000092a3a
- (void)eventViewController:(id)arg1 willDismissEditViewController:(id)arg2 deleted:(_Bool)arg3;	// IMP=0x0010000000092a29
- (void)eventViewController:(id)arg1 didCompleteWithAction:(long long)arg2;	// IMP=0x0010000000092966
- (void)_showDetailsForEvent:(id)arg1 animated:(_Bool)arg2 showMode:(unsigned long long)arg3 context:(id)arg4;	// IMP=0x00100000000927b3
- (id)_snapshotViewForDividedListTransition:(id)arg1 useFastPath:(_Bool)arg2;	// IMP=0x0010000000092198
- (struct CGPoint)_originForSelectedMonthViewInScrollViewWithState:(_Bool)arg1;	// IMP=0x0010000000091ee9
- (struct CGRect)_rectBoundingVisibleWeekSubviews;	// IMP=0x0010000000091bb1
- (unsigned long long)_offsetNumberOfWeeksFromSelectedMonthForTopVisibleMonth;	// IMP=0x0010000000091aee
- (unsigned long long)_numberOfWeeksInSelectedMonth;	// IMP=0x00100000000919b0
- (unsigned long long)_offsetNumberOfWeeksFromSelectedMonthForBottomVisibleMonth;	// IMP=0x00100000000918c1
- (id)_monthForLastVisibleMonth;	// IMP=0x00100000000917fe
- (void)_updateListViewFrame;	// IMP=0x001000000009136e
- (void)_setToCompressedState:(_Bool)arg1 darkBackgroundState:(_Bool)arg2;	// IMP=0x0010000000090a4c
- (void)_completeDividedListViewAnimation:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x001000000008fcff
- (_Bool)_isShowingSingleMonthInDividedMode;	// IMP=0x001000000008fcc6
- (_Bool)_showSingleMonthOnlyInDividedMode;	// IMP=0x001000000008fcad
- (void)_updateDividedListTopLineForDividedMode:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x001000000008f8e0
- (void)_setDividedListView:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x001000000008f381
- (void)_setDividedListView:(_Bool)arg1;	// IMP=0x001000000008f36a
- (void)toggleDividedListView;	// IMP=0x001000000008f337
- (void)setSplitStateOpen:(_Bool)arg1;	// IMP=0x001000000008ef4f
- (void)endAnimationSplitState;	// IMP=0x001000000008eaee
- (void)enterAnimationSplitStateWithCutOutArea:(struct CGRect)arg1 topBoundary:(double)arg2;	// IMP=0x001000000008e27f
- (_Bool)eventViewControllerShouldHideInlineEditButton;	// IMP=0x001000000008e277
- (double)_scrollViewVerticalVelocity;	// IMP=0x001000000008e12e
- (void)_showEventsPreferenceChanged;	// IMP=0x001000000008e08e
- (_Bool)_shouldAnimateDots;	// IMP=0x001000000008e05c
- (id)_loadEventsForStartDate:(id)arg1 endDate:(id)arg2;	// IMP=0x001000000008d248
- (void)_dayIndexesForRangeStart:(id)arg1 rangeEnd:(id)arg2 outFirstDayIndex:(long long *)arg3 outLastDayIndex:(long long *)arg4;	// IMP=0x001000000008d0c9
- (void)_loadEventsForAllSubviews;	// IMP=0x001000000008ceac
- (void)_loadEventsForViewsInRangeStartingAt:(id)arg1 endingAt:(id)arg2;	// IMP=0x001000000008cb77
- (void)_occurrencesChanged:(id)arg1;	// IMP=0x001000000008ca5f
- (void)_cachedOccurrencesChanged:(id)arg1;	// IMP=0x001000000008ca1d
- (void)_resetSelectionForDividedListState:(_Bool)arg1;	// IMP=0x001000000008c730
- (void)_setSelectedDay:(id)arg1 onMonthWeekView:(id)arg2 animated:(_Bool)arg3;	// IMP=0x001000000008c65f
- (void)_setSelectedDay:(id)arg1;	// IMP=0x001000000008c5ae
- (void)_removeMonthHighlight;	// IMP=0x001000000008c40d
- (void)_createMonthHighlightForMonthView:(id)arg1 day:(id)arg2;	// IMP=0x001000000008c1c5
- (id)_dayInMonth:(id)arg1 fromGesture:(id)arg2;	// IMP=0x001000000008c154
- (void)monthView:(id)arg1 gestureCancelled:(id)arg2;	// IMP=0x001000000008c0e2
- (void)monthView:(id)arg1 gestureEnded:(id)arg2;	// IMP=0x001000000008bd7a
- (void)monthView:(id)arg1 gestureChanged:(id)arg2;	// IMP=0x001000000008bb89
- (void)monthView:(id)arg1 gestureBegan:(id)arg2;	// IMP=0x001000000008b8f2
- (id)_viewFromGesture:(id)arg1;	// IMP=0x001000000008b3b1
- (void)compactMonthListViewController:(id)arg1 didSelectEvent:(id)arg2 showMode:(unsigned long long)arg3;	// IMP=0x001000000008b394
- (void)compactMonthListViewController:(id)arg1 wantsToCommitViewControllerFromPreview:(id)arg2;	// IMP=0x001000000008b376
- (void)_scrubGestureCallback:(id)arg1;	// IMP=0x001000000008b103
- (void)_tapGestureCallback:(id)arg1;	// IMP=0x001000000008ae74
- (void)_unregisterGestureRecognizers;	// IMP=0x001000000008ad8f
- (void)_registerGestureRecognizers;	// IMP=0x001000000008ab48
- (void)_updateViewsForTimeZoneChange;	// IMP=0x000000000008a9d9
- (void)_weekStartChanged:(id)arg1;	// IMP=0x001000000008a91a
- (void)calendarModelTimeZoneChanged;	// IMP=0x001000000008a8b9
- (void)localeChanged;	// IMP=0x001000000008a878
- (void)_modelUnlocked;	// IMP=0x001000000008a853
- (void)significantTimeChangeOccurred;	// IMP=0x001000000008a7c3
- (void)_updateDateForDividedList;	// IMP=0x001000000008a538
- (void)_updateMonthTitleViewFont;	// IMP=0x001000000008a485
- (_Bool)showsSingleMonthOnlyInDividedMode;	// IMP=0x001000000008a473
- (void)forceUpdateListView;	// IMP=0x001000000008a434
- (id)dateForCurrentMonthOnScreen;	// IMP=0x001000000008a3e8
- (id)dateForTopVisibleMonthOnScreen;	// IMP=0x001000000008a355
@property(readonly, nonatomic) struct CGRect frameOfListView;
- (long long)eventCountDisplayedForDate:(id)arg1;	// IMP=0x001000000008a12f
- (id)pushedListViewControllerWithDate:(id)arg1 animated:(_Bool)arg2;	// IMP=0x001000000008a066
- (id)pushedDayViewControllerWithDate:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000089f9d
- (id)monthWeekViewForCalendarDate:(id)arg1;	// IMP=0x0010000000089f8b
- (double)_showDateVerticalOffsetForMode:(_Bool)arg1;	// IMP=0x0010000000089e76
- (double)showDateVerticalOffsetForDate:(id)arg1;	// IMP=0x0010000000089e45
- (double)decelerationDistanceThresholdToStopShowingMonthBanner;	// IMP=0x0010000000089dec
- (double)decelerationDistanceThresholdForDisplayingMonthBanner;	// IMP=0x0010000000089d93
- (double)decelerationDistanceThresholdForPreferringMonthBoundary;	// IMP=0x0010000000089d3a
- (double)topInsetForSubviewWithCalendarDate:(id)arg1;	// IMP=0x0010000000089c9b
- (double)heightForSubviewWithCalendarDate:(id)arg1;	// IMP=0x0010000000089bef
- (_Bool)_isTodayCircleFrameFullyUnobstructed;	// IMP=0x00100000000899f9
- (_Bool)isTodayVisible;	// IMP=0x00100000000899c0
- (_Bool)_isTodayHighlightVisible;	// IMP=0x00100000000898be
- (struct CGRect)frameForTodayHighlight;	// IMP=0x001000000008970d
- (struct CGRect)frameForWeekContainingDate:(id)arg1;	// IMP=0x0010000000089560
- (id)sceneTitle;	// IMP=0x001000000008946b
- (id)preferredPreSizeClassTransitionSelectedDate;	// IMP=0x00100000000893c0
- (long long)intendedSizeClass;	// IMP=0x00100000000893b5
- (id)bestDateForNewEvent;	// IMP=0x001000000008933f
- (int)supportedToggleMode;	// IMP=0x0010000000089334
- (id)updateBackButtonWhileTopViewControllerToDate:(id)arg1;	// IMP=0x001000000008921a
- (void)_updateNavigationControllerBackButton;	// IMP=0x00100000000891c0
- (void)_updateNavigationControllerBackButtonToDate:(id)arg1;	// IMP=0x0010000000089148
- (_Bool)shouldUpdateOwnBackButtonWhenTopViewController;	// IMP=0x0010000000089136
- (void)updatePalette:(id)arg1;	// IMP=0x00100000000890d0
- (void)showEvent:(id)arg1 animated:(_Bool)arg2 showMode:(unsigned long long)arg3 context:(id)arg4;	// IMP=0x0010000000088efd
- (void)contentSizeCategoryChanged;	// IMP=0x0010000000088ebc
- (id)cellFramesForWeekContainingDate:(id)arg1;	// IMP=0x0010000000088db8
- (_Bool)shouldUpdateSelectedDateWithCentralView;	// IMP=0x0010000000088da3
- (void)showDate:(id)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000088cb1
- (void)didLoadInitialViews;	// IMP=0x0010000000088c7a
- (id)targetCalendarDate;	// IMP=0x00100000000889ea
- (void)didScroll;	// IMP=0x001000000008896d
- (void)willEndDraggingWithVelocity:(struct CGPoint)arg1 targetContentOffset:(inout struct CGPoint *)arg2;	// IMP=0x0010000000087e0d
- (void)didEndScrolling;	// IMP=0x0010000000087baf
- (id)newBottomViewBelowViewWithCalendarDate:(id)arg1;	// IMP=0x00100000000877f0
- (id)newTopViewAboveViewWithCalendarDate:(id)arg1;	// IMP=0x0010000000087435
- (id)createInitialViewForDate:(id)arg1;	// IMP=0x0010000000087044
- (unsigned long long)maximumCachedReusableViews;	// IMP=0x0010000000087039
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000086f14
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0010000000086dce
- (void)_setupListViewController;	// IMP=0x00100000000868fc
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0010000000086893
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000086852
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000086588
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000008654c
- (void)viewDidLayoutSubviews;	// IMP=0x00100000000864f7
- (void)viewDidLoad;	// IMP=0x00100000000862d0
- (void)loadView;	// IMP=0x00100000000861b0
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x00100000000861a5
- (void)dealloc;	// IMP=0x00100000000860a7
- (id)initWithCalendarDate:(id)arg1 model:(id)arg2 window:(id)arg3;	// IMP=0x0010000000085fd2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
