//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, NSCalendar, NSLocale, NSString, UILabel, _UIDatePickerCalendarTime, _UIDatePickerCompactTimeLabel, _UIDatePickerOverlayPresentation;
@protocol _UIDatePickerCalendarTimeViewDelegate;

__attribute__((visibility("hidden")))
@interface _UIDatePickerCalendarTimeView : UIView
{
    struct {
        unsigned int showsTimeLabel:1;
    } _flags;	// 8 = 0x8
    NSArray *_clockLayoutConstraints;	// 16 = 0x10
    _UIDatePickerOverlayPresentation *_presentation;	// 24 = 0x18
    _Bool _roundsToMinuteInterval;	// 32 = 0x20
    _Bool _shouldShowTimeLabel;	// 33 = 0x21
    id <_UIDatePickerCalendarTimeViewDelegate> _delegate;	// 40 = 0x28
    NSCalendar *_calendar;	// 48 = 0x30
    NSLocale *_locale;	// 56 = 0x38
    NSString *_customFontDesign;	// 64 = 0x40
    long long _minuteInterval;	// 72 = 0x48
    _UIDatePickerCalendarTime *_selectedTime;	// 80 = 0x50
    UILabel *_timeLabel;	// 88 = 0x58
    _UIDatePickerCompactTimeLabel *_timeTextField;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000005894b6
@property(readonly, nonatomic) _UIDatePickerCompactTimeLabel *timeTextField; // @synthesize timeTextField=_timeTextField;
@property(readonly, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic) _Bool shouldShowTimeLabel; // @synthesize shouldShowTimeLabel=_shouldShowTimeLabel;
@property(readonly, nonatomic) _UIDatePickerCalendarTime *selectedTime; // @synthesize selectedTime=_selectedTime;
@property(nonatomic) _Bool roundsToMinuteInterval; // @synthesize roundsToMinuteInterval=_roundsToMinuteInterval;
@property(nonatomic) long long minuteInterval; // @synthesize minuteInterval=_minuteInterval;
@property(retain, nonatomic) NSString *customFontDesign; // @synthesize customFontDesign=_customFontDesign;
@property(readonly, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(readonly, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(nonatomic) __weak id <_UIDatePickerCalendarTimeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)createDatePickerForCompactTimeLabel:(id)arg1;	// IMP=0x0000000000589393
- (_Bool)compactTimeLabel:(id)arg1 shouldDismissForInteractionAtLocation:(struct CGPoint)arg2;	// IMP=0x000000000058938b
- (void)compactTimeLabelDidEndEditing:(id)arg1;	// IMP=0x000000000058933f
- (void)compactTimeLabelDidBeginEditing:(id)arg1;	// IMP=0x00000000005892f3
- (void)compactTimeLabelWillBecomeFirstResponder:(id)arg1;	// IMP=0x00000000005892a7
- (void)compactTimeLabel:(id)arg1 didSelectTime:(id)arg2;	// IMP=0x0000000000589204
- (void)_updateFonts;	// IMP=0x0000000000588e99
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000588da6
- (void)setSelectedDate:(id)arg1;	// IMP=0x0000000000588bef
- (void)_updateTextFieldsFromSelectedDateComponents;	// IMP=0x0000000000588b62
- (void)reloadWithCalendar:(id)arg1 locale:(id)arg2 selectedDate:(id)arg3;	// IMP=0x00000000005889a2
- (void)_reload;	// IMP=0x0000000000588920
- (void)_reloadDateFormatters;	// IMP=0x0000000000588865
- (void)tintColorDidChange;	// IMP=0x00000000005886da
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000005885ed
- (id)primaryFirstResponder;	// IMP=0x00000000005885db
- (void)_updateClockLayout;	// IMP=0x000000000058805f
- (void)_setupViewHierarchy;	// IMP=0x0000000000587913
- (void)willMoveToSuperview:(id)arg1;	// IMP=0x0000000000587886
- (void)willMoveToWindow:(id)arg1;	// IMP=0x00000000005877f9
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000005876ad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

