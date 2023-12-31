//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CALayer, EKCalendarDate, EKEvent, LargeMonthWeekOccurrencesView, MISSING_TYPE, NSArray, NSMutableDictionary, NSString, UIImageView, UILabel, UIScrollView, _CircleView;
@protocol LargeMonthWeekViewDataSource, LargeMonthWeekViewDelegate;

@interface LargeMonthWeekView : UIView
{
    CALayer *_topBorderLine;	// 8 = 0x8
    CALayer *_paddingRowBorderLine;	// 16 = 0x10
    _CircleView *_todayCircle;	// 24 = 0x18
    NSArray *_dayNumberLabels;	// 32 = 0x20
    NSArray *_overlayLabels;	// 40 = 0x28
    NSArray *_dayBadgeViews;	// 48 = 0x30
    UIImageView *_dayBadgeViewBesideFirstOfMonthLabel;	// 56 = 0x38
    UIView *_overlayUnderline;	// 64 = 0x40
    long long _firstOfOverlayMonthIndex;	// 72 = 0x48
    _Bool _isFirstOfOverlayYear;	// 80 = 0x50
    NSMutableDictionary *_highlightedDays;	// 88 = 0x58
    UIScrollView *_occurrencesScrollView;	// 96 = 0x60
    _Bool _occurrencesHidden;	// 104 = 0x68
    long long _firstDayIndex;	// 112 = 0x70
    long long _lastDayIndex;	// 120 = 0x78
    struct CGRect _dayFrames[7];	// 128 = 0x80
    double _gridlineThickness;	// 352 = 0x160
    _Bool _showingFirstDayOfMonthLabel;	// 360 = 0x168
    UILabel *_firstOfMonthLabel;	// 368 = 0x170
    UILabel *_firstOfMonthNoDayLabel;	// 376 = 0x178
    long long _firstOfMonthIndex;	// 384 = 0x180
    UILabel *_weekNumberLabel;	// 392 = 0x188
    EKCalendarDate *_startDate;	// 400 = 0x190
    EKCalendarDate *_endDate;	// 408 = 0x198
    long long _dayCount;	// 416 = 0x1a0
    _Bool _isLastWeekOfMonth;	// 424 = 0x1a8
    NSArray *_specialDayTypes;	// 432 = 0x1b0
    NSArray *_dayBadgeColors;	// 440 = 0x1b8
    NSArray *_dayBadgeLocales;	// 448 = 0x1c0
    LargeMonthWeekOccurrencesView *_occurrencesView;	// 456 = 0x1c8
    _Bool _showsTopBorder;	// 464 = 0x1d0
    _Bool _showsWeekNumber;	// 465 = 0x1d1
    long long _todayDay;	// 472 = 0x1d8
    id <LargeMonthWeekViewDataSource> _dataSource;	// 480 = 0x1e0
    id <LargeMonthWeekViewDelegate> _delegate;	// 488 = 0x1e8
    struct _NSRange _highlightedDayRange;	// 496 = 0x1f0
}

+ (id)_opaqueWeekendBackgroundColor;	// IMP=0x0020000000005c49
+ (double)topInset;	// IMP=0x0010000000002905
+ (void)clearCachedFonts;	// IMP=0x001000000000228f
+ (id)weekendColor;	// IMP=0x001000000000227e
+ (id)gridlineColor;	// IMP=0x001000000000226d
+ (void)initialize;	// IMP=0x0010000000002145
- (void).cxx_destruct;	// IMP=0x00200000000082b9
@property(nonatomic) __weak id <LargeMonthWeekViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <LargeMonthWeekViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) struct _NSRange highlightedDayRange; // @synthesize highlightedDayRange=_highlightedDayRange;
@property(nonatomic) _Bool showsWeekNumber; // @synthesize showsWeekNumber=_showsWeekNumber;
@property(nonatomic) _Bool showsTopBorder; // @synthesize showsTopBorder=_showsTopBorder;
@property(nonatomic) long long todayDay; // @synthesize todayDay=_todayDay;
- (long long)dayIndexForToday;	// IMP=0x00100000000081b6
- (MISSING_TYPE *)occurrencesView;	// IMP=0x00100000000081a1
- (struct CGRect)circleFrame;	// IMP=0x0010000000008158
- (id)todayCircle;	// IMP=0x0010000000008143
- (id)weekdayLabels;	// IMP=0x001000000000812e
- (void)attemptDisplayReviewPrompt;	// IMP=0x00100000000080b9
- (id)selectedEventsForEditMenu;	// IMP=0x0010000000008073
- (id)presentationControllerForEditMenu;	// IMP=0x001000000000802d
- (void)largeMonthWeekOccurrencesView:(id)arg1 selectedEvent:(id)arg2 userInitiated:(_Bool)arg3;	// IMP=0x0010000000007fb6
- (id)containerViewForOccurrencePreview;	// IMP=0x0010000000007fad
- (_Bool)isBackgroundScene;	// IMP=0x0010000000007f36
- (void)didCompleteLargeMonthWeekViewBackgroundRendering;	// IMP=0x0010000000007eac
- (_Bool)containsCalendarDate:(id)arg1;	// IMP=0x0010000000007df8
- (id)dayFrames;	// IMP=0x0010000000007d30
- (void)layoutSubviews;	// IMP=0x001000000000654e
- (void)_updateDayFrames;	// IMP=0x00100000000062f2
- (_Bool)_hasPaddingRow;	// IMP=0x00100000000062cc
- (double)topInset;	// IMP=0x00100000000062b2
- (id)endCalendarDate;	// IMP=0x001000000000629d
- (id)calendarDate;	// IMP=0x0010000000006288
- (void)_viewDoubleTapped:(id)arg1;	// IMP=0x0010000000006026
- (void)_viewTapped:(id)arg1;	// IMP=0x0010000000005dae
- (void)_updateBadgeBackgroundColors;	// IMP=0x0010000000005a48
- (void)_updateBadgeAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000005757
- (void)_updateBadges;	// IMP=0x00100000000056e2
- (void)setShowsFirstDayOfMonthLabel:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x001000000000526f
- (void)_rebuildDayNumberLabels;	// IMP=0x001000000000481a
- (void)_rebuildOverlayLabels;	// IMP=0x0010000000004246
- (void)setStartDate:(id)arg1 endDate:(id)arg2 dayCount:(long long)arg3 todayDay:(long long)arg4 reload:(_Bool)arg5;	// IMP=0x0010000000003ff5
@property(nonatomic) long long dayCount;
@property(copy, nonatomic) EKCalendarDate *endDate;
@property(copy, nonatomic) EKCalendarDate *startDate;
- (void)_updateWeekNumber;	// IMP=0x0010000000003dc1
- (void)_updateWeekNumberFont;	// IMP=0x0010000000003d48
- (void)deselectOccurrence:(id)arg1;	// IMP=0x00100000000034e8
- (void)selectOccurrence:(id)arg1;	// IMP=0x00100000000034cb
@property(retain, nonatomic) NSArray *selectedOccurrences;
@property(retain, nonatomic) EKEvent *selectedOccurrence;
- (id)newFeedbackViewForDraggingOccurrence:(id)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x00100000000031ae
- (struct CGRect)frameForDate:(id)arg1;	// IMP=0x001000000000312c
- (struct CGRect)frameForTodayHighlight;	// IMP=0x00100000000030ee
- (struct CGRect)frameForOccurrenceAfterLastOnDay:(id)arg1;	// IMP=0x0010000000002fc0
- (struct CGRect)frameForOccurrence:(id)arg1 onDay:(id)arg2;	// IMP=0x0010000000002ecb
- (id)occurrenceAtPoint:(struct CGPoint)arg1;	// IMP=0x0010000000002e03
- (id)dateAtPoint:(struct CGPoint)arg1;	// IMP=0x0010000000002d21
- (id)dateForIndex:(long long)arg1;	// IMP=0x0010000000002d04
@property(readonly, copy) NSString *description;
- (void)updateToday;	// IMP=0x0010000000002b03
- (void)contentSizeCategoryChanged;	// IMP=0x0010000000002aae
- (void)reloadData;	// IMP=0x001000000000290e
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0010000000002829
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x001000000000274d
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0010000000002671
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0010000000002595
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x001000000000250c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000000022c7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

