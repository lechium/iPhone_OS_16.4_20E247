//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNDatePickerContainerView, NSString, UIDatePicker, UIViewController;

__attribute__((visibility("hidden")))
@interface CNPropertyDateEditingCell
{
    _Bool _shouldEditDatesTextually;	// 8 = 0x8
    UIDatePicker *_datePicker;	// 16 = 0x10
    CNDatePickerContainerView *_datePickerContainerView;	// 24 = 0x18
    UIViewController *_contentViewController;	// 32 = 0x20
    NSString *_currentCalendarIdentifier;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000150c43
@property(retain, nonatomic) NSString *currentCalendarIdentifier; // @synthesize currentCalendarIdentifier=_currentCalendarIdentifier;
@property(readonly, nonatomic) _Bool shouldEditDatesTextually; // @synthesize shouldEditDatesTextually=_shouldEditDatesTextually;
@property(retain, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(retain, nonatomic) CNDatePickerContainerView *datePickerContainerView; // @synthesize datePickerContainerView=_datePickerContainerView;
@property(retain, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
- (void)regainFocus;	// IMP=0x0000000000150b73
- (void)picker:(id)arg1 didPickItem:(id)arg2;	// IMP=0x0000000000150a47
- (void)pickerDidCancel:(id)arg1;	// IMP=0x00000000001509a5
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x0000000000150993
- (void)textFieldDidEndEditing:(id)arg1 reason:(long long)arg2;	// IMP=0x000000000015087b
- (_Bool)textFieldShouldBeginEditing:(id)arg1;	// IMP=0x0000000000150467
- (void)applyCalendarAndDate;	// IMP=0x00000000001501d1
- (void)updateValueWithPropertyItem:(id)arg1;	// IMP=0x000000000014fd41
- (_Bool)_shouldUseYearlessPickerForDateComponents:(id)arg1;	// IMP=0x000000000014fd39
- (void)dateChanged:(id)arg1;	// IMP=0x000000000014fa18
- (void)labelButtonClicked:(id)arg1;	// IMP=0x000000000014f734
- (void)localeUpdated:(id)arg1;	// IMP=0x000000000014f638
- (void)prepareForReuse;	// IMP=0x000000000014f5ad
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000014f41d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

