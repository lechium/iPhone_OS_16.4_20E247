//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DayNavigationViewController, DayTwoPartLabel, EKCalendarDate, EKDayViewController, EKEventCreationGestureController, NSArray, NSMutableArray, NSString, UILabel, UIView;

@interface DayViewController
{
    NSString *_scrollToEventIdentifier;	// 16 = 0x10
    EKCalendarDate *_day;	// 24 = 0x18
    DayNavigationViewController *_scrubberControllerNeue;	// 32 = 0x20
    EKDayViewController *_dayViewController;	// 40 = 0x28
    _Bool _viewHasDoneFirstAppearance;	// 48 = 0x30
    _Bool _hasSetUpDayViewInitialLayout;	// 49 = 0x31
    NSString *_previousNavigationTitle;	// 56 = 0x38
    _Bool _editorDismissedFromDelete;	// 64 = 0x40
    _Bool _hasReloadedWithData;	// 65 = 0x41
    _Bool _hasEndedExtendedLaunch;	// 66 = 0x42
    NSMutableArray *_selectedOccurrenceViews;	// 72 = 0x48
    EKEventCreationGestureController *_eventCreationGestureController;	// 80 = 0x50
    _Bool _visible;	// 88 = 0x58
    _Bool _shouldRespondToApplicationDidBecomeActiveStateChange;	// 89 = 0x59
}

- (void).cxx_destruct;	// IMP=0x002000000015a127
@property(nonatomic) _Bool shouldRespondToApplicationDidBecomeActiveStateChange; // @synthesize shouldRespondToApplicationDidBecomeActiveStateChange=_shouldRespondToApplicationDidBecomeActiveStateChange;
@property(readonly, nonatomic) EKCalendarDate *day; // @synthesize day=_day;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
- (void)_selectedOccurrencesChanged:(id)arg1;	// IMP=0x0010000000159d26
- (void)_recursiveRemoveSelectedClonedViewsFromViewTree:(id)arg1 skipSet:(id)arg2;	// IMP=0x0010000000159a77
- (void)_cleanupSelectedOccurrenceCloneViewsSkipSet:(id)arg1;	// IMP=0x00100000001598f5
- (void)_cleanupSelectedOccurrenceCloneViewsRespectingModelSelected;	// IMP=0x0010000000159855
- (void)_cleanupSelectedOccurrenceCloneViews;	// IMP=0x0010000000159802
- (id)_selectedOccurrenceFrontmostClonedViews;	// IMP=0x00100000001595a4
- (void)_setUpSelectedOccurrenceViewsWithEvents:(id)arg1 animated:(_Bool)arg2 autoScroll:(_Bool)arg3 resetSelection:(_Bool)arg4;	// IMP=0x0010000000158dd1
- (id)_selectedOccurrenceViews;	// IMP=0x0010000000158dbc
- (void)creationGestureControllerDidCancel:(id)arg1;	// IMP=0x0010000000158d7f
- (void)creationGestureController:(id)arg1 didCreateNewEvent:(id)arg2;	// IMP=0x0010000000158c22
- (id)creationGestureControllerRequestsNewEvent:(id)arg1;	// IMP=0x0010000000158b13
- (id)creationGestureController:(id)arg1 dateForPoint:(struct CGPoint)arg2;	// IMP=0x0010000000158a71
- (void)creationGestureController:(id)arg1 didResizeToDate:(id)arg2;	// IMP=0x00100000001589ff
- (struct CGPoint)creationGestureController:(id)arg1 requestsPointForDate:(id)arg2;	// IMP=0x0010000000158965
- (double)creationGestureController:(id)arg1 requestedXCoordinateForEventPreviewAtPoint:(struct CGPoint)arg2;	// IMP=0x001000000015887b
- (double)creationGestureController:(id)arg1 requestedWidthForEventPreview:(id)arg2 atPoint:(struct CGPoint)arg3;	// IMP=0x0010000000158776
- (id)creationGestureController:(id)arg1 requestedPreviewForEvent:(id)arg2;	// IMP=0x00100000001586d8
- (id)creationGestureControllerRequestedContainerView:(id)arg1;	// IMP=0x00100000001586c6
- (id)_parentViewForCreationGesture;	// IMP=0x0010000000158676
- (_Bool)creationGestureController:(id)arg1 canActivateAtPoint:(struct CGPoint)arg2;	// IMP=0x00100000001584c1
- (void)saveFirstVisibleSecond:(int)arg1;	// IMP=0x00100000001583f2
- (void)dayViewController:(id)arg1 requestsSaveFirstVisibleSecondPreference:(int)arg2;	// IMP=0x0010000000158352
- (int)savedFirstVisibleSecond;	// IMP=0x00100000001581dd
- (void)_sceneEnteredForeground:(id)arg1;	// IMP=0x0010000000158092
- (id)cellFactory;	// IMP=0x001000000015bb55
- (id)selectedCopyViewForOccurrenceView:(id)arg1;	// IMP=0x001000000015808a
- (_Bool)shouldAllowLongPress;	// IMP=0x001000000015806a
- (void)endedHorizontalDeceleration;	// IMP=0x0010000000158064
- (void)beganHorizontalDeceleration;	// IMP=0x001000000015805e
- (void)finishedPinchingDayView;	// IMP=0x0010000000157fe1
- (void)isPinchingDayView;	// IMP=0x0010000000157fdb
- (void)didBeginMovingOccurrenceWithGesture;	// IMP=0x0010000000157fd5
- (_Bool)showDetachAlertOnDraggingGestureEnd;	// IMP=0x0010000000157fcd
- (int);	// IMP=0x0010000000157fc2
- (int)editorShowTransition;	// IMP=0x0010000000157fb7
- (void)dayNavigationViewCellWidthDidChange;	// IMP=0x0010000000157fb1
- (void)wasBlockedFromChangingDate:(CDUnknownBlockType)arg1;	// IMP=0x0010000000157fab
- (void)wasAllowedToChangeDate;	// IMP=0x0010000000157fa5
- (_Bool)allowChangingDate;	// IMP=0x0010000000157f9d
- (_Bool)showWeekdayLabel;	// IMP=0x0010000000157f95
- (void)handleGestureCommittingOccurrence:(id)arg1;	// IMP=0x0010000000157f8f
- (_Bool)shouldHandleGestureCommits;	// IMP=0x0010000000157f87
- (void)asyncLoadAndLayoutCompleted;	// IMP=0x0010000000157f81
- (void)displayedOccurrencesChangedWithTrigger:(int)arg1;	// IMP=0x0010000000157f7b
- (void)dataReloadedWithTrigger:(int)arg1;	// IMP=0x0010000000157e92
- (void)showEditViewController:(id)arg1;	// IMP=0x0010000000157e1b
- (id)showDetailViewControllerForEvent:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0010000000157cb6
- (void)dayViewDidChangeSelectedDate:(id)arg1;	// IMP=0x0010000000157be7
- (void)scrubberDidChangeSelectedDate:(id)arg1;	// IMP=0x0010000000157b18
- (void)didShowEventWithoutShowingDetails:(id)arg1;	// IMP=0x0010000000157b12
- (_Bool)didSelectEvent:(id)arg1 userInitiated:(_Bool)arg2;	// IMP=0x00100000001579be
- (id)gestureController;	// IMP=0x00100000001579a1
- (id)dayView;	// IMP=0x001000000015798c
- (id)dayScrubberController;	// IMP=0x0010000000157977
- (void)_scrollToEvent:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000157855
- (id)defaultCalendarForNewEvents;	// IMP=0x0010000000157835
- (id)pasteboardManagerForDayViewController:(id)arg1;	// IMP=0x0010000000157815
- (_Bool)dayViewControllerShouldRespondToApplicationDidBecomeActiveStateChange:(id)arg1;	// IMP=0x0010000000157803
- (id)dayViewController:(id)arg1 eventsForStartDate:(id)arg2 endDate:(id)arg3;	// IMP=0x00100000001577c5
- (id)pasteboardManager;	// IMP=0x0010000000157775
- (id)pasteboardManagerForEventEditViewController:(id)arg1;	// IMP=0x0010000000157725
- (id)eventEditViewControllerDefaultCalendarForNewEvents:(id)arg1;	// IMP=0x0010000000157705
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2 dismissController:(_Bool)arg3;	// IMP=0x0010000000157413
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2;	// IMP=0x00100000001573fb
- (void)dayViewController:(id)arg1 beginEditingOccurrence:(id)arg2 creationMethod:(id)arg3;	// IMP=0x00100000001573e3
- (void)_receivedSelectedDateChangeNotification:(id)arg1;	// IMP=0x00100000001572cb
- (void)_significantTimeChanged:(id)arg1;	// IMP=0x001000000015715c
- (void)_occurrencesChanged:(id)arg1;	// IMP=0x0010000000156efc
- (void)dayOccurrenceViewSelected:(id)arg1 source:(unsigned long long)arg2;	// IMP=0x0010000000156e0e
- (id)selectedEventsForEditMenu;	// IMP=0x0010000000156dee
- (id)selectedOccurrencesForDayViewController:(id)arg1;	// IMP=0x0010000000156dce
- (_Bool)dayViewControllerShouldDrawSynchronously:(id)arg1;	// IMP=0x0010000000156dba
- (id)dayViewController:(id)arg1 selectedCopyViewForView:(id)arg2;	// IMP=0x0010000000156da5
- (void)dayViewController:(id)arg1 requestsSaveHourScalePreference:(double)arg2;	// IMP=0x0010000000156d48
- (double)dayViewControllerPersistedHourScalePreference:(id)arg1;	// IMP=0x0010000000156cac
- (void)dayViewControllerCurrentDayDidCompleteAsyncLoadAndLayout:(id)arg1;	// IMP=0x0010000000156c9a
- (void)dayViewController:(id)arg1 requestsShowEvent:(id)arg2 showDetails:(_Bool)arg3;	// IMP=0x0010000000156c7a
- (void)dayViewController:(id)arg1 requestsPresentationOfViewControllerForGestures:(id)arg2;	// IMP=0x0010000000156bc9
- (void)dayViewControllerDidRespondToApplicationDidBecomeActiveStateChange:(id)arg1;	// IMP=0x0010000000156bb5
- (void)dayViewControllerIsPinchingDayView:(id)arg1;	// IMP=0x0010000000156ba3
- (void)dayViewControllerDidFinishPinchingDayView:(id)arg1;	// IMP=0x0010000000156b91
- (void)dayViewControllerDidBeginMovingEventWithGesture:(id)arg1;	// IMP=0x0010000000156af0
- (_Bool)dayViewControllerShouldShowDetachDialogOnGestureDraggingEnd:(id)arg1;	// IMP=0x0010000000156ade
- (_Bool)dayviewControllerShouldAllowSwipeToChangeDays:(id)arg1;	// IMP=0x0010000000156acc
- (void)dayViewController:(id)arg1 handleGestureCommittingOccurrence:(id)arg2;	// IMP=0x0010000000156ab7
- (_Bool)dayViewController:(id)arg1 willDuplicateOccurrence:(id)arg2;	// IMP=0x00100000001568a3
- (_Bool)delegateWantsToHandleDayViewController:(id)arg1 gestureCommittingOccurrence:(id)arg2;	// IMP=0x0010000000156891
- (void)dayViewController:(id)arg1 didChangeDisplayedOccurrencesDueToTrigger:(int)arg2;	// IMP=0x0010000000156839
- (void)dayViewController:(id)arg1 didReloadDataDueToTrigger:(int)arg2;	// IMP=0x0010000000156825
- (void)dayViewControllerDidTapEmptySpace:(id)arg1 onDate:(id)arg2;	// IMP=0x0010000000156753
- (_Bool)dayViewControllerShouldAllowLongPress:(id)arg1;	// IMP=0x00100000001566fa
- (void)dayViewController:(id)arg1 awaitsDeletingOccurrence:(id)arg2;	// IMP=0x00100000001566d7
- (void)dayViewController:(id)arg1 awaitsRefreshingOccurrence:(id)arg2;	// IMP=0x00100000001566b4
- (id)dayViewController:(id)arg1 createEventAtDate:(id)arg2 allDay:(_Bool)arg3;	// IMP=0x001000000015652a
- (void)dayViewControllerDidEndDecelerating:(id)arg1;	// IMP=0x0010000000156518
- (void)dayViewController:(id)arg1 didStartDeceleratingTargettingDate:(id)arg2;	// IMP=0x0010000000156368
- (void)dayViewControllerDidEndScrolling:(id)arg1;	// IMP=0x0010000000156238
- (void)dayViewController:(id)arg1 didChangeDisplayDate:(id)arg2;	// IMP=0x001000000015612a
- (void)dayViewController:(id)arg1 modifySelection:(id)arg2;	// IMP=0x001000000015606b
- (void)dayViewController:(id)arg1 didSelectEvent:(id)arg2 animated:(_Bool)arg3 userInitiated:(_Bool)arg4;	// IMP=0x0010000000155f94
- (void)eventViewControllerWillDisappear:(id)arg1;	// IMP=0x0010000000155ec9
- (void)eventViewController:(id)arg1 willDismissEditViewController:(id)arg2 deleted:(_Bool)arg3;	// IMP=0x0010000000155eb8
- (void)eventViewController:(id)arg1 didCompleteWithAction:(long long)arg2;	// IMP=0x0010000000155df5
- (void)_showDetailForEvent:(id)arg1 animated:(_Bool)arg2 showComments:(_Bool)arg3 context:(id)arg4;	// IMP=0x0010000000155d08
- (void)_showDetailForEvent:(id)arg1 animated:(_Bool)arg2 context:(id)arg3;	// IMP=0x0010000000155cf0
- (void)dayNavigationViewController:(id)arg1 didChangeCellWidth:(double)arg2;	// IMP=0x0010000000155cde
- (void)dayNavigationViewControllerFailedToChangeDate:(CDUnknownBlockType)arg1;	// IMP=0x0010000000155ccc
- (_Bool)dayNavigationViewControllerAllowedToChangeSelectedDate;	// IMP=0x0010000000155cba
- (void)dayNavigationViewController:(id)arg1 didSelectDate:(id)arg2;	// IMP=0x0010000000155a97
- (void)_showDetailForEvent:(id)arg1 animated:(_Bool)arg2 userInitiated:(_Bool)arg3;	// IMP=0x00100000001559ff
- (void)beginEditingOccurrence:(id)arg1 creationMethod:(id)arg2;	// IMP=0x001000000015590c
- (void)presentDetailsForEvent:(id)arg1 animated:(_Bool)arg2 showComments:(_Bool)arg3 context:(id)arg4;	// IMP=0x001000000015589d
- (void)reloadData;	// IMP=0x0010000000155875
@property(readonly, nonatomic) UILabel *weekNumberLabel;
@property(readonly, nonatomic) DayTwoPartLabel *weekdayLabel;
@property(readonly, nonatomic) NSArray *timedDayViewContentGridSubviews;
@property(readonly, nonatomic) UIView *allDayView;
@property(readonly, nonatomic) long long scrubberFirstVisibleDayOffsetFromSelectedDay;
@property(readonly, nonatomic) struct CGRect scrubberFrame;
@property(readonly, nonatomic) struct CGSize cellSize;
@property(readonly, nonatomic) double firstCellInset;
- (id)sceneTitle;	// IMP=0x00100000001553ee
- (id)testingRotationDidEndNotificationName;	// IMP=0x00100000001553e1
- (id)testingRotationWillStartNotificationName;	// IMP=0x00100000001553d4
- (long long)intendedSizeClass;	// IMP=0x001000000015bb2e
- (void)extendedLaunchCompletedByViewType:(int)arg1;	// IMP=0x00100000001552cb
- (_Bool)handlesNotifyOnExtendedLaunchCompletion;	// IMP=0x00100000001552c3
- (_Bool)currentlyEditingEventsWithGestures;	// IMP=0x0010000000155274
- (id)bestDateForNewEvent;	// IMP=0x0010000000155254
- (void)clearSelection;	// IMP=0x0010000000155232
- (void)removeEventFromSelection:(id)arg1;	// IMP=0x0010000000154eab
- (void)addEventToSelection:(id)arg1;	// IMP=0x0010000000154ddb
- (void)showEvent:(id)arg1 animated:(_Bool)arg2 showMode:(unsigned long long)arg3 context:(id)arg4;	// IMP=0x0010000000154cc2
- (void)showNowAnimated:(_Bool)arg1;	// IMP=0x0010000000154c76
- (void)_showNowWhenSameDaySelected;	// IMP=0x0010000000154c0f
- (void)currentlyVisibleDateRangeFromStartDate:(id *)arg1 toEndDate:(id *)arg2;	// IMP=0x0010000000154a1d
- (_Bool)isDateVisible:(id)arg1;	// IMP=0x00100000001548d5
- (void)selectDate:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000154339
- (_Bool)isTodayVisible;	// IMP=0x0010000000154331
- (_Bool)shouldPushNextLevelViewControllerWhenTodayIsVisible;	// IMP=0x0010000000154329
- (void)updatePalette:(id)arg1;	// IMP=0x001000000015424a
- (_Bool)allowsOverriddenToolbarItems;	// IMP=0x0010000000154242
- (_Bool)allowsOverriddenRightNavigationBarItems;	// IMP=0x001000000015423a
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00100000001540e7
- (void)viewWillLayoutSubviews;	// IMP=0x0010000000153efa
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0010000000153e55
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000153d86
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000153982
- (void)viewDidLoad;	// IMP=0x0010000000153771
- (void)loadView;	// IMP=0x00100000001534d6
- (void)dealloc;	// IMP=0x00100000001533f0
- (id)initWithDay:(id)arg1 model:(id)arg2 window:(id)arg3;	// IMP=0x00100000001531f7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
