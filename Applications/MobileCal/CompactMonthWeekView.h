//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CompactMonthWeekDayNumber, EKCalendarDate, EKUITodayCirclePulseView, NSArray, NSCalendar, NSString, UIColor, UIFont, UILabel;

@interface CompactMonthWeekView : UIView
{
    EKCalendarDate *_startCalendarDate;	// 8 = 0x8
    EKCalendarDate *_endCalendarDate;	// 16 = 0x10
    NSCalendar *_calendar;	// 24 = 0x18
    long long _cellToStartDrawingIn;	// 32 = 0x20
    _Bool _containsFirstDayOfMonth;	// 40 = 0x28
    UIView *_grayLine;	// 48 = 0x30
    UILabel *_monthNameLabel;	// 56 = 0x38
    struct CGSize _monthNameLabelFittingSize;	// 64 = 0x40
    EKUITodayCirclePulseView *_todayPulse;	// 80 = 0x50
    _Bool _containsToday;	// 88 = 0x58
    UILabel *_weekNumberLabel;	// 96 = 0x60
    NSArray *_days;	// 104 = 0x68
    CompactMonthWeekDayNumber *_today;	// 112 = 0x70
    CompactMonthWeekDayNumber *_selected;	// 120 = 0x78
    _Bool _needToForceLayout;	// 128 = 0x80
    _Bool _darkBackgroundMode;	// 129 = 0x81
    _Bool _compressedVerticalMode;	// 130 = 0x82
    _Bool _compressedHorizontalMode;	// 131 = 0x83
    _Bool _enableLayerAnimationsDuringLayout;	// 132 = 0x84
    _Bool _disableTodayPulse;	// 133 = 0x85
    _Bool _showWeekNumber;	// 134 = 0x86
    _Bool _temporarilyHideWeekNumber;	// 135 = 0x87
    _Bool _useLayoutMargins;	// 136 = 0x88
    NSArray *_eventData;	// 144 = 0x90
    UIFont *_monthNameFont;	// 152 = 0x98
    UIColor *_dayBadgeColor;	// 160 = 0xa0
}

+ (_Bool)_useTallCompressedHeight;	// IMP=0x00200000000cd5c6
+ (double)heightForViewThatContainsFirstDayOfMonth:(_Bool)arg1 compressed:(_Bool)arg2 windowSize:(struct CGSize)arg3;	// IMP=0x00100000000cd4fe
+ (_Bool)_viewForCalendarDateContainsFirstDayOfMonth:(id)arg1;	// IMP=0x00100000000cd459
+ (double)_topInsetForViewThatContainsFirstDayOfMonth:(_Bool)arg1 cellToStartDrawingIn:(long long)arg2;	// IMP=0x00100000000cd450
+ (long long)_cellToStartDrawingInForViewWithCalendarDate:(id)arg1 calendar:(id)arg2;	// IMP=0x00100000000cd37a
+ (struct CGRect)dayTypeBadgeFrameFromDayNumberFrame:(struct CGRect)arg1 compressed:(_Bool)arg2;	// IMP=0x00100000000cb6e6
+ (id)dayTypeBadgeBackgroundColorForVerticallyCompressedMode:(_Bool)arg1;	// IMP=0x00100000000cab55
+ (double)grayLineHeight;	// IMP=0x00100000000ca737
+ (_Bool)usesRoundedRectInsteadOfCircle;	// IMP=0x00100000000ca72b
+ (double)spaceBelowGrayLineHeight:(_Bool)arg1;	// IMP=0x00100000000ca655
+ (double)dayNumberBaselineToGrayLineDistance:(_Bool)arg1;	// IMP=0x00100000000ca4b1
+ (double)dayNumberOverlayFontSize:(_Bool)arg1;	// IMP=0x00100000000ca478
+ (double)dayNumberFontSize:(_Bool)arg1;	// IMP=0x00100000000ca3de
+ (_Bool)canShowEventMarkersCompressed:(_Bool)arg1;	// IMP=0x00100000000c76fd
+ (double)dayTypeBadgeDiameter:(_Bool)arg1;	// IMP=0x00100000000c76e1
+ (double)eventMarkerDiameter:(_Bool)arg1;	// IMP=0x00100000000c76b0
+ (id)eventMarkerColor;	// IMP=0x00100000000c7628
+ (struct CGPoint)eventMarkerPositionForColumnWidth:(double)arg1 rowHeight:(double)arg2 compressed:(_Bool)arg3 showingOverlay:(_Bool)arg4;	// IMP=0x00100000000c758d
+ (double)_eventMarkerYPositionCompressed:(_Bool)arg1 showingOverlay:(_Bool)arg2;	// IMP=0x00100000000c74d5
+ (double)headerHeightForWindowSize:(struct CGSize)arg1;	// IMP=0x00100000000c74bc
+ (double)cellHeightWithVerticalCompression:(_Bool)arg1;	// IMP=0x00100000000c7476
+ (double)circleDiameterWithOverlayLarge;	// IMP=0x00100000000c6c73
+ (double)circleDiameterWithOverlay;	// IMP=0x00100000000c6c5a
+ (double)circleDiameterCompressed;	// IMP=0x00100000000c6c41
+ (double)circleDiameter;	// IMP=0x00100000000c6c28
+ (double)heightForViewWithCalendarDate:(id)arg1 compressed:(_Bool)arg2 windowSize:(struct CGSize)arg3;	// IMP=0x00100000000c6b9a
+ (double)topInsetForViewWithCalendarDate:(id)arg1 calendar:(id)arg2;	// IMP=0x00100000000c6aeb
+ (double)dayNumberLayerYOffsetCompressed:(_Bool)arg1;	// IMP=0x00100000000c4ef8
+ (double)roundedRectYOffset;	// IMP=0x00100000000c4e10
+ (double)weekNumberDistanceFromGrayLine;	// IMP=0x00100000000c4e02
+ (double)twoDigitWeekNumberWidth;	// IMP=0x00100000000c4ca1
+ (struct UIEdgeInsets)layoutMarginsForBounds:(struct CGRect)arg1;	// IMP=0x00100000000c47d2
+ (id)weekNumberColorForThisWeek:(_Bool)arg1;	// IMP=0x00100000000c3e4d
+ (id)weekNumberFont;	// IMP=0x00100000000c3e02
- (void).cxx_destruct;	// IMP=0x00200000000cdbf9
@property(retain, nonatomic) UIColor *dayBadgeColor; // @synthesize dayBadgeColor=_dayBadgeColor;
@property(nonatomic) _Bool useLayoutMargins; // @synthesize useLayoutMargins=_useLayoutMargins;
@property(retain, nonatomic) UIFont *monthNameFont; // @synthesize monthNameFont=_monthNameFont;
@property(nonatomic) _Bool temporarilyHideWeekNumber; // @synthesize temporarilyHideWeekNumber=_temporarilyHideWeekNumber;
@property(nonatomic) _Bool showWeekNumber; // @synthesize showWeekNumber=_showWeekNumber;
@property(nonatomic) _Bool disableTodayPulse; // @synthesize disableTodayPulse=_disableTodayPulse;
@property(nonatomic) _Bool enableLayerAnimationsDuringLayout; // @synthesize enableLayerAnimationsDuringLayout=_enableLayerAnimationsDuringLayout;
@property(nonatomic) _Bool compressedHorizontalMode; // @synthesize compressedHorizontalMode=_compressedHorizontalMode;
@property(nonatomic) _Bool compressedVerticalMode; // @synthesize compressedVerticalMode=_compressedVerticalMode;
@property(nonatomic) _Bool darkBackgroundMode; // @synthesize darkBackgroundMode=_darkBackgroundMode;
@property(retain, nonatomic) NSArray *eventData; // @synthesize eventData=_eventData;
- (unsigned long long)_monthLabelColumnIndex;	// IMP=0x00100000000cd9bf
- (id)monthNameLabel;	// IMP=0x00100000000cd988
- (unsigned long long)_daysInAWeek;	// IMP=0x00100000000cd97d
- (void)_reloadMonthNameLabel;	// IMP=0x00100000000cd5d2
- (void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3;	// IMP=0x00100000000cced0
- (void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3;	// IMP=0x00100000000ccb64
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;	// IMP=0x00100000000cc056
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;	// IMP=0x00100000000cbc8d
- (void)_setUpInteraction;	// IMP=0x00100000000cbc37
- (struct CGRect)frameForHighlightWithDayFrame:(struct CGRect)arg1 dayLayerFrame:(struct CGRect)arg2 numberString:(id)arg3 overlayString:(id)arg4;	// IMP=0x00100000000cbb5b
- (struct CGPoint)_roundedRectOriginForDayLayerFrame:(struct CGRect)arg1 roundedRectSize:(struct CGSize)arg2 withOverlay:(_Bool)arg3;	// IMP=0x00100000000cba29
- (struct CGRect)_roundedRectFrameForHighlightWithDayFrame:(struct CGRect)arg1 dayLayerFrame:(struct CGRect)arg2 numberString:(id)arg3 overlayString:(id)arg4;	// IMP=0x00100000000cb8e4
- (struct CGRect)_circleFrameForHighlightWithDayFrame:(struct CGRect)arg1 dayLayerFrame:(struct CGRect)arg2 numberString:(id)arg3 overlayString:(id)arg4;	// IMP=0x00100000000cb78e
- (void)_layoutDayTypeBadgeForDayNumber:(id)arg1 yOffset:(double)arg2;	// IMP=0x00100000000cb4c5
- (void)_updateDayTypeBadgesWithBackgroundColor;	// IMP=0x00100000000cb35b
- (void)_forceReloadImagesForDayTypeBadges;	// IMP=0x00100000000cb0a6
- (void)_updateDayTypeBadgeForDayNumber:(id)arg1 withDayType:(long long)arg2 color:(id)arg3 locale:(id)arg4 forceImageUpdate:(_Bool)arg5;	// IMP=0x00100000000cace3
- (void)updateEventMarkerVisibilityForDayNumber:(id)arg1 withEventCount:(unsigned long long)arg2;	// IMP=0x00100000000ca996
- (void)updateEventMarkerLayoutForDayNumber:(id)arg1 yOffset:(double)arg2;	// IMP=0x00100000000ca767
- (void)setGrayLineAlpha:(double)arg1;	// IMP=0x00100000000ca3c1
- (void)setSelectedDay:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000c98dd
- (void)_updateEventMarkerVisibility;	// IMP=0x00100000000c9540
- (void)setEventData:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000c94a8
- (void)_clearTodayHighlight;	// IMP=0x00100000000c93ad
- (void)resetTodayBits;	// IMP=0x00100000000c8d20
- (void)resetTimeZone:(id)arg1;	// IMP=0x00100000000c8af4
- (void)_updateWeekNumberAnimated:(_Bool)arg1;	// IMP=0x00100000000c88ea
- (void)setCalendarDate:(id)arg1;	// IMP=0x00100000000c84d8
- (double)_circleYOffsetFromTopForDiameter:(double)arg1;	// IMP=0x00100000000c83ae
- (struct CGPoint)positionOfCircleInCellWithWidth:(double)arg1 circleSize:(struct CGSize)arg2;	// IMP=0x00100000000c835b
- (void)adjustHighlight:(id)arg1 forDay:(id)arg2;	// IMP=0x00100000000c7cdb
- (long long)indexForPoint:(struct CGPoint)arg1;	// IMP=0x00100000000c7b6f
- (id)dayForPoint:(struct CGPoint)arg1;	// IMP=0x00100000000c799e
- (id)days;	// IMP=0x00100000000c7989
- (id)dayNumberCellFrames;	// IMP=0x00100000000c7868
- (struct CGRect)frameForTodayHighlight;	// IMP=0x00100000000c77d4
- (_Bool)isTodayHighlightVisible;	// IMP=0x00100000000c7785
- (struct CGRect)rectForCells;	// IMP=0x00100000000c7705
- (long long)daysInMonth;	// IMP=0x00100000000c7459
@property(readonly, nonatomic) _Bool containsFirstDayOfMonth;
- (void)prepareForReuse;	// IMP=0x00100000000c6ab6
- (void)haltTodayPulse;	// IMP=0x00100000000c6a7e
- (void)pulseTodayCircle;	// IMP=0x00100000000c6650
- (double)topInset;	// IMP=0x00100000000c6616
- (id)endCalendarDate;	// IMP=0x00100000000c6601
- (id)calendarDate;	// IMP=0x00100000000c65ec
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000000c61ed
- (void)safeAreaInsetsDidChange;	// IMP=0x00100000000c61dc
- (struct CGRect)frameForDayCircleWithSize:(struct CGSize)arg1 dayNumberLayerFrame:(struct CGRect)arg2 dayNumberFrame:(struct CGRect)arg3 withOverlay:(_Bool)arg4;	// IMP=0x00100000000c6102
- (void)layoutSubviews;	// IMP=0x00100000000c5038
- (void)layoutIfNeeded;	// IMP=0x00100000000c4c53
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00100000000c4bb4
- (double)columnWidthForViewWithBounds:(struct CGRect)arg1 onWeekend:(_Bool)arg2 weekNumbersInset:(double)arg3;	// IMP=0x00100000000c4b3b
- (double)weekNumbersInset;	// IMP=0x00100000000c4b1d
- (struct CGRect)_boundsInsetWithMarginsForBounds:(struct CGRect)arg1;	// IMP=0x00100000000c4a04
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00100000000c475e
- (void)_initializeMonthNameLabel;	// IMP=0x00100000000c4616
- (void)_updateDayFrames;	// IMP=0x00100000000c42d4
- (void)_initializeDays;	// IMP=0x00100000000c4141
- (void)_initializeGrayLine;	// IMP=0x00100000000c4099
// Error: Property attributes should begin with the type ('T') attribute, property name: description
// Property attributes: (null)

- (id)initWithCalendarDate:(id)arg1 calendar:(id)arg2 compressed:(_Bool)arg3 darkBackgroundMode:(_Bool)arg4;	// IMP=0x00100000000c3cd7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

