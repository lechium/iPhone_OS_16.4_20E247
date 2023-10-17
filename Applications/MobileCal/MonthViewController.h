//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EKCalendarDate, MonthTitleView, NSString, UIFont;

@interface MonthViewController
{
    EKCalendarDate *_backButtonDate;	// 16 = 0x10
    _Bool _backButtonShowingInterval;	// 24 = 0x18
    double _decelerationTargetY;	// 32 = 0x20
    EKCalendarDate *_decelerationTargetDate;	// 40 = 0x28
    MonthTitleView *_monthTitleView;	// 48 = 0x30
    _Bool _monthTitleViewIsVisible;	// 56 = 0x38
    _Bool _shouldShowMonthTitleHUDWhenScrolling;	// 57 = 0x39
    UIFont *_headerFont;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000015100
@property(nonatomic) _Bool shouldShowMonthTitleHUDWhenScrolling; // @synthesize shouldShowMonthTitleHUDWhenScrolling=_shouldShowMonthTitleHUDWhenScrolling;
@property(readonly, nonatomic) UIFont *headerFont; // @synthesize headerFont=_headerFont;
- (void)eventViewController:(id)arg1 didCompleteWithAction:(long long)arg2;	// IMP=0x00100000000150c9
- (id)pasteboardManager;	// IMP=0x0010000000015079
- (id)adjustSelectedDateForNewMonth:(id)arg1;	// IMP=0x0010000000014f2d
- (void)_updateMonthTitle;	// IMP=0x0010000000014afb
- (struct CGPoint)nearestMajorBoundaryForPoint:(struct CGPoint)arg1;	// IMP=0x0010000000014a86
- (id)cellFramesForWeekContainingDate:(id)arg1;	// IMP=0x001000000015b463
- (struct CGRect)frameForTodayHighlight;	// IMP=0x001000000015b417
- (struct CGRect)frameForWeekContainingDate:(id)arg1;	// IMP=0x001000000015b3cb
- (id)monthTitleView;	// IMP=0x0010000000014a71
- (void)updateBackButtonToDate:(id)arg1;	// IMP=0x00100000000148b6
- (void)_updateBackButtonOnBackViewControllerToDate:(id)arg1;	// IMP=0x001000000001483e
- (void)_reloadAllViews;	// IMP=0x0010000000014705
- (void)weekNumbersPrefChanged;	// IMP=0x00100000000146ff
- (void)contentSizeCategoryChanged;	// IMP=0x00100000000146ed
- (void)calendarModelTimeZoneChanged;	// IMP=0x00100000000146db
- (void)localeChanged;	// IMP=0x00100000000146c9
- (void)_calendarModelTimeZoneChanged:(id)arg1;	// IMP=0x00100000000146b7
- (void)_localeChanged:(id)arg1;	// IMP=0x00100000000146a5
- (void)significantTimeChangeOccurred;	// IMP=0x001000000001469f
- (void)_significantTimeChangeOccurred:(id)arg1;	// IMP=0x001000000001468d
- (void)_selectedDateChanged:(id)arg1;	// IMP=0x0010000000014608
- (void)didEndScrolling;	// IMP=0x001000000001457c
- (void)didScroll;	// IMP=0x001000000001453b
- (void)willEndDraggingWithVelocity:(struct CGPoint)arg1 targetContentOffset:(inout struct CGPoint *)arg2;	// IMP=0x0010000000014118
- (double)decelerationDistanceThresholdToStopShowingMonthBanner;	// IMP=0x001000000001410f
- (double)decelerationDistanceThresholdForDisplayingMonthBanner;	// IMP=0x0010000000014101
- (double)decelerationDistanceThresholdForPreferringMonthBoundary;	// IMP=0x00100000000140f3
- (void)willBeginDragging;	// IMP=0x00100000000140b2
- (id)sceneTitle;	// IMP=0x0010000000013fe1
- (id)preferredPreSizeClassTransitionSelectedDate;	// IMP=0x0010000000013fcf
- (id)testingRotationDidEndNotificationName;	// IMP=0x0010000000013fc2
- (id)testingRotationWillStartNotificationName;	// IMP=0x0010000000013fb5
- (long long)intendedSizeClass;	// IMP=0x001000000015b3a4
- (id)bestDateForNewEvent;	// IMP=0x0010000000013cef
- (void)showDate:(id)arg1 animated:(_Bool)arg2 toMonthStart:(_Bool)arg3;	// IMP=0x0010000000013808
- (void)showDate:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000137f0
- (_Bool)_isTodayCircleFrameFullyUnobstructed;	// IMP=0x00100000000136c1
- (_Bool)isTodayVisible;	// IMP=0x00100000000136af
- (_Bool)shouldPushNextLevelViewControllerWhenTodayIsVisible;	// IMP=0x001000000001366c
- (void)selectDate:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000135c0
- (_Bool)allowsOverriddenToolbarItems;	// IMP=0x00100000000135b8
- (_Bool)allowsOverriddenRightNavigationBarItems;	// IMP=0x00100000000135b0
- (id)_slowComputeCalendarDateForWeekFromStartDate:(id)arg1 weekOffset:(long long)arg2;	// IMP=0x001000000001339f
- (id)calendarDateForSubviewBelowSubviewWithCalendarDate:(id)arg1;	// IMP=0x001000000001324b
- (id)calendarDateForSubviewAboveSubviewWithCalendarDate:(id)arg1;	// IMP=0x00100000000130e6
- (id)futureMajorBoundaryCalendarDateForCalendarDate:(id)arg1;	// IMP=0x0010000000013091
- (id)pastMajorBoundaryCalendarDateForCalendarDate:(id)arg1;	// IMP=0x001000000001307c
- (_Bool)shouldAnimateScrollToDate:(id)arg1 fromClosestDate:(id)arg2;	// IMP=0x0010000000013052
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000012fc5
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000012e50
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000012db2
- (void)loadView;	// IMP=0x0010000000012d60
- (id)initWithCalendarDate:(id)arg1 model:(id)arg2 window:(id)arg3;	// IMP=0x0010000000012c01

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
