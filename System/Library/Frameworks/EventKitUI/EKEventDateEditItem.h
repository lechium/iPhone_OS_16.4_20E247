//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "EKEventEditItem.h"

@class EKDateTimeCell, NSArray, NSDate, NSDateComponents, NSString, NSTimeZone, PreferencesTwoPartValueCell, UIDatePicker, UITableViewCell;
@protocol EKEventDateEditItemDelegate;

__attribute__((visibility("hidden")))
@interface EKEventDateEditItem : EKEventEditItem
{
    NSDateComponents *_startComponents;	// 32 = 0x20
    NSDateComponents *_endComponents;	// 40 = 0x28
    _Bool _timedEventEndedAtMidnight;	// 48 = 0x30
    _Bool _allDay;	// 49 = 0x31
    NSTimeZone *_startTimeZone;	// 56 = 0x38
    NSTimeZone *_endTimeZone;	// 64 = 0x40
    _Bool _showTimeZones;	// 72 = 0x48
    _Bool _canPerformTargettedReload;	// 73 = 0x49
    EKDateTimeCell *_modernStartDateCell;	// 80 = 0x50
    EKDateTimeCell *_modernEndDateCell;	// 88 = 0x58
    PreferencesTwoPartValueCell *_classicStartDateCell;	// 96 = 0x60
    PreferencesTwoPartValueCell *_classicEndDateCell;	// 104 = 0x68
    int _shorteningStatus;	// 112 = 0x70
    UITableViewCell *_allDayCell;	// 120 = 0x78
    UITableViewCell *_startTimeZoneCell;	// 128 = 0x80
    UITableViewCell *_endTimeZoneCell;	// 136 = 0x88
    UITableViewCell *_startDatePickerCell;	// 144 = 0x90
    UITableViewCell *_endDatePickerCell;	// 152 = 0x98
    long long _selectedSubitem;	// 160 = 0xa0
    long long _currentPickerMode;	// 168 = 0xa8
    UIDatePicker *_startDatePicker;	// 176 = 0xb0
    UIDatePicker *_endDatePicker;	// 184 = 0xb8
    _Bool _endTimeWasMessedUp;	// 192 = 0xc0
    _Bool _changingDate;	// 193 = 0xc1
    _Bool _showingInlineDatePicker;	// 194 = 0xc2
    _Bool _modifyingVisibleControls;	// 195 = 0xc3
    _Bool _pushingTZController;	// 196 = 0xc4
    long long _targetedSubitemForTimezone;	// 200 = 0xc8
    NSArray *_startPickerConstraints;	// 208 = 0xd0
    NSArray *_endPickerConstraints;	// 216 = 0xd8
    _Bool _showsAllDay;	// 224 = 0xe0
    _Bool _proposedTime;	// 225 = 0xe1
    NSDate *_pendingProposedTime;	// 232 = 0xe8
    id <EKEventDateEditItemDelegate> _eventDateEditItemDelegate;	// 240 = 0xf0
}

+ (id)_timeZoneLocalizedString;	// IMP=0x0010000000008a3b
- (void).cxx_destruct;	// IMP=0x000000000000ccb1
@property(nonatomic) __weak id <EKEventDateEditItemDelegate> eventDateEditItemDelegate; // @synthesize eventDateEditItemDelegate=_eventDateEditItemDelegate;
@property(retain, nonatomic) NSDate *pendingProposedTime; // @synthesize pendingProposedTime=_pendingProposedTime;
@property(nonatomic) _Bool proposedTime; // @synthesize proposedTime=_proposedTime;
@property(nonatomic) _Bool showsAllDay; // @synthesize showsAllDay=_showsAllDay;
- (_Bool)_shouldShowTimeZone;	// IMP=0x000000000000cbd8
- (id)_dateComponentsInSystemCalendarFromDate:(id)arg1;	// IMP=0x000000000000cb4c
- (id)_dateFromComponents:(id)arg1 timeZone:(id)arg2;	// IMP=0x000000000000ca84
- (id)_dateInSystemCalendarFromComponents:(id)arg1;	// IMP=0x000000000000c9fd
- (id)_timeZoneDescription:(id)arg1;	// IMP=0x000000000000c983
- (void)_allDayChanged:(id)arg1;	// IMP=0x000000000000c91b
- (void)dateChanged:(id)arg1 forSubitem:(long long)arg2;	// IMP=0x000000000000c677
- (void)_datePickerEndedEditing:(id)arg1;	// IMP=0x000000000000c665
- (void)_datePickerChanged:(id)arg1;	// IMP=0x000000000000c5d9
- (void)_updateDatePicker:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000000c3dd
- (_Bool)_endDateIsBeforeStartDate;	// IMP=0x000000000000c209
- (void)_resetStartString:(_Bool)arg1 endString:(_Bool)arg2;	// IMP=0x000000000000c039
- (void)_resetClassicStartString:(_Bool)arg1 endString:(_Bool)arg2;	// IMP=0x000000000000bc5d
- (void)_pickNextReasonableTime;	// IMP=0x000000000000ba49
- (void)_hideInlineDateControls;	// IMP=0x000000000000b895
- (void)_showInlineControls:(long long)arg1 forSubitem:(long long)arg2 includingInlineDatePicker:(_Bool)arg3;	// IMP=0x000000000000b0a3
- (void)dateTimeCellEndedEditing:(id)arg1;	// IMP=0x000000000000b057
- (void)dateTimeCellBeganEditing:(id)arg1;	// IMP=0x000000000000b027
- (void)dateTimeCell:(id)arg1 dateChanged:(id)arg2;	// IMP=0x000000000000aff6
- (void)dateTimeCellTimeTapped:(id)arg1;	// IMP=0x000000000000afc3
- (void)dateTimeCellDateTapped:(id)arg1;	// IMP=0x000000000000af8d
- (void)_setEndTimeZone:(id)arg1;	// IMP=0x000000000000af09
- (void)_setStartTimeZone:(id)arg1;	// IMP=0x000000000000ae85
- (void)_validateTimezones;	// IMP=0x000000000000ad56
- (void)_adjustEndDateIfNeededAfterTogglingAllDay;	// IMP=0x000000000000ace3
- (void)_setAllDay:(_Bool)arg1;	// IMP=0x000000000000aa8d
- (void)_setEndDate:(id)arg1;	// IMP=0x000000000000a94c
- (void)_setStartDate:(id)arg1;	// IMP=0x000000000000a866
- (void)timeZoneViewControllerDidCancel:(id)arg1;	// IMP=0x000000000000a80f
- (void)timeZoneViewController:(id)arg1 didSelectTimeZone:(id)arg2;	// IMP=0x000000000000a65c
- (void)shortenCell:(id)arg1;	// IMP=0x000000000000a49b
- (void)_updateClassicDateCellColors;	// IMP=0x000000000000a145
- (void)_updateClassicDateCellTimeWidths;	// IMP=0x0000000000009fd7
- (void)_contentSizeCategoryDidChange:(id)arg1;	// IMP=0x0000000000009f1e
- (_Bool)saveAndDismissWithForce:(_Bool)arg1;	// IMP=0x0000000000009adb
- (id)_calendarForEventComponents:(_Bool)arg1;	// IMP=0x00000000000099e5
- (void)endInlineEditing;	// IMP=0x00000000000099c4
- (void)editor:(id)arg1 didStartEditingItem:(id)arg2;	// IMP=0x0000000000009944
- (_Bool)usesDetailViewControllerForSubitem:(unsigned long long)arg1;	// IMP=0x000000000000992a
- (_Bool)handleClassicSubitemSelection:(long long)arg1;	// IMP=0x0000000000009651
- (void)editor:(id)arg1 didSelectSubitem:(unsigned long long)arg2;	// IMP=0x00000000000094a1
- (_Bool)editor:(id)arg1 canSelectSubitem:(unsigned long long)arg2;	// IMP=0x0000000000009455
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;	// IMP=0x0000000000009394
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000090e1
- (void)setupPickerConstraintsForCell:(id)arg1 datePicker:(id)arg2;	// IMP=0x0000000000008e79
- (id)_endDatePickerCell;	// IMP=0x0000000000008d79
- (id)_startDatePickerCell;	// IMP=0x0000000000008c79
- (void)adjustDatePickerInterval:(id)arg1;	// IMP=0x0000000000008b9b
- (id)_newDatePicker;	// IMP=0x0000000000008a93
- (id)_endTimeZoneCell;	// IMP=0x000000000000895b
- (id)_startTimeZoneCell;	// IMP=0x000000000000887b
- (id)_allDayCell;	// IMP=0x0000000000008740
- (id)_classicEndDateCell;	// IMP=0x0000000000008420
- (id)_classicStartDateCell;	// IMP=0x0000000000008100
- (id)_modernEndDateCell;	// IMP=0x0000000000008019
- (id)_modernStartDateCell;	// IMP=0x0000000000007f32
- (unsigned long long)numberOfSubitems;	// IMP=0x0000000000007ec2
- (long long)_subitemForRow:(long long)arg1;	// IMP=0x0000000000007df4
- (long long)_rowForSubitem:(long long)arg1;	// IMP=0x0000000000007d7d
- (_Bool)isInline;	// IMP=0x0000000000007d75
- (_Bool)forceRefreshLocationItemOnSave;	// IMP=0x0000000000007c84
- (_Bool)forceRefreshInviteesItemOnSave;	// IMP=0x0000000000007c7c
- (_Bool)requiresReconfigurationOnSave;	// IMP=0x0000000000007c74
- (_Bool)prefersTargettedTableReloadOnSave;	// IMP=0x0000000000007c64
- (_Bool)configureForCalendarConstraints:(id)arg1;	// IMP=0x0000000000007ad7
- (_Bool)canBeConfiguredForCalendarConstraints:(id)arg1;	// IMP=0x0000000000007acf
- (void)_adjustStartAndEndComponentsForEventIfNeeded:(id)arg1;	// IMP=0x0000000000007a0b
- (void)_refreshDatePicker;	// IMP=0x00000000000079ad
- (void)refreshFromCalendarItemAndStore;	// IMP=0x00000000000075d6
- (_Bool)usesClassicUI;	// IMP=0x00000000000075bf
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000007485
- (id)init;	// IMP=0x00000000000073d6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

