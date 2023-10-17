//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDateComponents.h>

@interface NSDateComponents (HKSleepSchedule)
+ (id)hk_componentsWithHour:(long long)arg1 minute:(long long)arg2;	// IMP=0x0060000000065c3f
+ (id)hk_componentsWithDayIndex:(long long)arg1 calendar:(id)arg2;	// IMP=0x006000000009a067
+ (id)hk_dateComponentsForCalendarUnit:(unsigned long long)arg1;	// IMP=0x00600000000dfb74
+ (id)hk_componentsWithDays:(long long)arg1;	// IMP=0x00600000000dfb43
+ (id)hk_oneWeek;	// IMP=0x00600000000dfb0b
+ (id)hk_oneDay;	// IMP=0x00600000000dfaf4
- (id)hk_dateOptionalDescription;	// IMP=0x0010000000065d71
- (id)hk_minuteNumber;	// IMP=0x0010000000065d00
- (id)hk_hourNumber;	// IMP=0x0010000000065c8f
- (id)hk_dayIndexDateDescription;	// IMP=0x001000000009a3d4
- (long long)hk_dayIndex;	// IMP=0x001000000009a2bf
- (long long)hk_indexForDate:(id)arg1 anchorDate:(id)arg2;	// IMP=0x00100000000e0909
- (id)hk_dateIntervalForDate:(id)arg1 anchorDate:(id)arg2 outIndex:(long long *)arg3;	// IMP=0x00100000000e0549
- (long long)hk_ageWithCurrentDate:(id)arg1;	// IMP=0x00100000000e047f
- (id)hk_negativeComponents;	// IMP=0x00100000000e0466
- (id)hk_translateDateComponentsToCalendar:(id)arg1 calendarUnits:(unsigned long long)arg2;	// IMP=0x00100000000e0321
- (id)hk_populatedCalendarGregorianCalendarDefault;	// IMP=0x001000000000ad71
- (long long)hk_maxComponentValue;	// IMP=0x00100000000e00f7
- (id)_hk_dateComponentsMultipliedByCount:(long long)arg1;	// IMP=0x00100000000dfe43
- (id)_hk_dateByAddingFilteredInterval:(long long)arg1 toDate:(id)arg2;	// IMP=0x00100000000dfd6f
- (id)hk_dateByAddingInterval:(long long)arg1 toDate:(id)arg2;	// IMP=0x00100000000dfc3c
- (double)hk_approximateDuration;	// IMP=0x00100000000dfbaa
@end
