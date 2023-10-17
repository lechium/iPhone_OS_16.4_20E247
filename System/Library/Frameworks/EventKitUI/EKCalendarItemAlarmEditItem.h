//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EKAlarmsViewModel, NSArray;

__attribute__((visibility("hidden")))
@interface EKCalendarItemAlarmEditItem
{
    unsigned long long _disclosedSubitem;	// 32 = 0x20
    NSArray *_alarms;	// 40 = 0x28
    _Bool _hasLeaveNowAlarm;	// 48 = 0x30
    _Bool _canHaveLeaveNowAlarm;	// 49 = 0x31
    EKAlarmsViewModel *_alarmsViewModel;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000001274a6
@property(retain, nonatomic) EKAlarmsViewModel *alarmsViewModel; // @synthesize alarmsViewModel=_alarmsViewModel;
- (_Bool)saveAndDismissWithForce:(_Bool)arg1;	// IMP=0x000000000012744a
- (_Bool)_alarmsMatchCalendarItem;	// IMP=0x00000000001271c4
- (void)ttlLocationStatusChanged:(id)arg1;	// IMP=0x000000000012705b
- (void)refreshFromCalendarItemAndStore;	// IMP=0x000000000012701a
- (void)_updateAlarms;	// IMP=0x0000000000126f7c
- (_Bool)_calendarItemHasLeaveNowAlarm;	// IMP=0x0000000000126ed2
- (_Bool)configureForCalendarConstraints:(id)arg1;	// IMP=0x0000000000126b2f
- (id)footerTitle;	// IMP=0x0000000000126956
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;	// IMP=0x000000000012658a
- (unsigned long long)numberOfSubitems;	// IMP=0x0000000000126486
- (void)setCalendarItem:(id)arg1 store:(id)arg2;	// IMP=0x00000000001262d4

@end
