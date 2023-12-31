//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

@class NSArray, NSObject, NSTimer, PSSpecifier, STDeviceBedtime, STUIUser;
@protocol STDeviceBedtimeListControllerDelegate, STRootViewModelCoordinator;

__attribute__((visibility("hidden")))
@interface STDeviceBedtimeListController : PSListController
{
    _Bool _canAskForMoreTime;	// 192 = 0xc0
    _Bool _isEditingSimple;	// 193 = 0xc1
    id <STDeviceBedtimeListControllerDelegate> _delegate;	// 200 = 0xc8
    NSObject<STRootViewModelCoordinator> *_coordinator;	// 208 = 0xd0
    STDeviceBedtime *_bedtime;	// 216 = 0xd8
    STUIUser *_affectedUser;	// 224 = 0xe0
    NSArray *_orderedWeekdayIndexes;	// 232 = 0xe8
    NSArray *_orderedLocalizedWeekdayNames;	// 240 = 0xf0
    PSSpecifier *_deviceBedtimeSpecifier;	// 248 = 0xf8
    PSSpecifier *_downTimeGroupSpecifier;	// 256 = 0x100
    PSSpecifier *_scheduledSwitchSpecifier;	// 264 = 0x108
    PSSpecifier *_scheduleSwitchGroupSpecifier;	// 272 = 0x110
    PSSpecifier *_scheduleTypeGroupSpecifier;	// 280 = 0x118
    PSSpecifier *_informativeTextGroupSpecifier;	// 288 = 0x120
    PSSpecifier *_everyDaySpecifier;	// 296 = 0x128
    PSSpecifier *_customizeDaysSpecifier;	// 304 = 0x130
    PSSpecifier *_timeGroupSpecifier;	// 312 = 0x138
    PSSpecifier *_startTimeSpecifier;	// 320 = 0x140
    PSSpecifier *_endTimeSpecifier;	// 328 = 0x148
    PSSpecifier *_startTimePickerSpecifier;	// 336 = 0x150
    PSSpecifier *_endTimePickerSpecifier;	// 344 = 0x158
    NSArray *_weekdaySpecifiers;	// 352 = 0x160
    PSSpecifier *_selectedTimeSpecifier;	// 360 = 0x168
    PSSpecifier *_atBedtimeGroupSpecifier;	// 368 = 0x170
    PSSpecifier *_atBedtimeSpecifier;	// 376 = 0x178
    NSTimer *_downtimeScheduleRefreshTimer;	// 384 = 0x180
}

- (void).cxx_destruct;	// IMP=0x00000000000530e8
@property(retain, nonatomic) NSTimer *downtimeScheduleRefreshTimer; // @synthesize downtimeScheduleRefreshTimer=_downtimeScheduleRefreshTimer;
@property(retain, nonatomic) PSSpecifier *atBedtimeSpecifier; // @synthesize atBedtimeSpecifier=_atBedtimeSpecifier;
@property(retain, nonatomic) PSSpecifier *atBedtimeGroupSpecifier; // @synthesize atBedtimeGroupSpecifier=_atBedtimeGroupSpecifier;
@property(retain, nonatomic) PSSpecifier *selectedTimeSpecifier; // @synthesize selectedTimeSpecifier=_selectedTimeSpecifier;
@property(retain) NSArray *weekdaySpecifiers; // @synthesize weekdaySpecifiers=_weekdaySpecifiers;
@property(retain, nonatomic) PSSpecifier *endTimePickerSpecifier; // @synthesize endTimePickerSpecifier=_endTimePickerSpecifier;
@property(retain, nonatomic) PSSpecifier *startTimePickerSpecifier; // @synthesize startTimePickerSpecifier=_startTimePickerSpecifier;
@property(retain, nonatomic) PSSpecifier *endTimeSpecifier; // @synthesize endTimeSpecifier=_endTimeSpecifier;
@property(retain, nonatomic) PSSpecifier *startTimeSpecifier; // @synthesize startTimeSpecifier=_startTimeSpecifier;
@property(retain, nonatomic) PSSpecifier *timeGroupSpecifier; // @synthesize timeGroupSpecifier=_timeGroupSpecifier;
@property(nonatomic) _Bool isEditingSimple; // @synthesize isEditingSimple=_isEditingSimple;
@property(retain) PSSpecifier *customizeDaysSpecifier; // @synthesize customizeDaysSpecifier=_customizeDaysSpecifier;
@property(retain) PSSpecifier *everyDaySpecifier; // @synthesize everyDaySpecifier=_everyDaySpecifier;
@property(retain, nonatomic) PSSpecifier *informativeTextGroupSpecifier; // @synthesize informativeTextGroupSpecifier=_informativeTextGroupSpecifier;
@property(retain, nonatomic) PSSpecifier *scheduleTypeGroupSpecifier; // @synthesize scheduleTypeGroupSpecifier=_scheduleTypeGroupSpecifier;
@property(retain, nonatomic) PSSpecifier *scheduleSwitchGroupSpecifier; // @synthesize scheduleSwitchGroupSpecifier=_scheduleSwitchGroupSpecifier;
@property(retain, nonatomic) PSSpecifier *scheduledSwitchSpecifier; // @synthesize scheduledSwitchSpecifier=_scheduledSwitchSpecifier;
@property(retain, nonatomic) PSSpecifier *downTimeGroupSpecifier; // @synthesize downTimeGroupSpecifier=_downTimeGroupSpecifier;
@property(retain, nonatomic) PSSpecifier *deviceBedtimeSpecifier; // @synthesize deviceBedtimeSpecifier=_deviceBedtimeSpecifier;
@property(readonly) NSArray *orderedLocalizedWeekdayNames; // @synthesize orderedLocalizedWeekdayNames=_orderedLocalizedWeekdayNames;
@property(readonly) NSArray *orderedWeekdayIndexes; // @synthesize orderedWeekdayIndexes=_orderedWeekdayIndexes;
@property(nonatomic) _Bool canAskForMoreTime; // @synthesize canAskForMoreTime=_canAskForMoreTime;
@property(retain, nonatomic) STUIUser *affectedUser; // @synthesize affectedUser=_affectedUser;
@property(copy, nonatomic) STDeviceBedtime *bedtime; // @synthesize bedtime=_bedtime;
@property(retain, nonatomic) NSObject<STRootViewModelCoordinator> *coordinator; // @synthesize coordinator=_coordinator;
@property(nonatomic) __weak id <STDeviceBedtimeListControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)datePickerForSpecifier:(id)arg1;	// IMP=0x0000000000052afd
- (void)datePickerChanged:(id)arg1;	// IMP=0x0000000000052775
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000000052581
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000051ffe
- (id)atDowntimeFooterText;	// IMP=0x0000000000051dab
- (id)askForMoreTime:(id)arg1;	// IMP=0x0000000000051d3b
- (void)setAskForMoreTime:(id)arg1 specifier:(id)arg2;	// IMP=0x0000000000051b99
- (id)timeFooterText;	// IMP=0x00000000000519b0
- (void)_showCustomizeDailyScheduleListController:(id)arg1;	// IMP=0x0000000000051622
- (id)_customScheduleTime:(id)arg1;	// IMP=0x00000000000513e1
- (id)_simpleEndTime:(id)arg1;	// IMP=0x0000000000051296
- (id)_simpleStartTime:(id)arg1;	// IMP=0x000000000005114b
- (void)_showOrHidePickerSpecifierForSpecifier:(id)arg1;	// IMP=0x0000000000050c9e
- (void)_actuallyToggleDowntimeEnabled;	// IMP=0x0000000000050b63
- (void)_toggleDowntimeEnabled;	// IMP=0x00000000000508cf
- (id)_createDefaultCustomScheduleFromSimpleSchedule:(id)arg1;	// IMP=0x0000000000050617
- (id)deviceBedtimeEnabled:(id)arg1;	// IMP=0x00000000000505a7
- (void)setDeviceBedtimeEnabled:(id)arg1 specifier:(id)arg2;	// IMP=0x0000000000050382
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000500b4
- (void)dealloc;	// IMP=0x000000000004ff5f
- (void)_didEndEditingDailySchedule:(id)arg1;	// IMP=0x000000000004f99c
- (void)_renderDeviceBedtimeSpecifierWithBedtime:(id)arg1;	// IMP=0x000000000004f674
- (id)_deviceBedtimeSpecifierWithBedtime:(id)arg1 downtimeGroupSpecifier:(id)arg2;	// IMP=0x000000000004f24d
- (id)specifiers;	// IMP=0x000000000004dfee
- (void)_didFinishEditingBedtime;	// IMP=0x000000000004dee0
- (void)willResignActive;	// IMP=0x000000000004de49
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000004ddec
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000004dda4
- (_Bool)canBeShownFromSuspendedState;	// IMP=0x000000000004dd9c
- (void)scheduleDowntimeRefreshIfNeeded;	// IMP=0x000000000004dbb6
- (void)scheduleDowntimeRefreshAndReloadSpecifiers;	// IMP=0x000000000004db88
- (id)init;	// IMP=0x000000000004d7fd

@end

