//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCalendar.h>

@interface NSCalendar (CalClassAdditions)
+ (id)CalDateFromBirthdayComponents:(id)arg1;	// IMP=0x0080000000019de2
+ (id)CalCalendarWithUnsanitizedCalendarIdentifier:(id)arg1;	// IMP=0x0080000000019d3e
+ (id)sharedAutoupdatingCurrentCalendar;	// IMP=0x008000000000b06e
+ (id)CalGregorianCalendarForTimeZone:(id)arg1;	// IMP=0x0080000000007ade
+ (id)CalGregorianGMTCalendar;	// IMP=0x00800000000075c5
+ (id)CalYearlessDateThreshold;	// IMP=0x008000000001979c
- (id)mapDatesFromDate:(id)arg1 stepSize:(unsigned long long)arg2 range:(unsigned long long)arg3 mapBlock:(CDUnknownBlockType)arg4;	// IMP=0x001000000001a339
- (id)CalOccurrencesForBirthday:(id)arg1 inDateRange:(id)arg2;	// IMP=0x0010000000007f52
- (id)CalDateBySubtractingComponents:(id)arg1 fromDate:(id)arg2;	// IMP=0x0010000000019b28
- (id)CalDateFromComponents:(id)arg1 inTimeZone:(id)arg2;	// IMP=0x0010000000019a69
- (_Bool)dateIsFirstOfYear:(id)arg1;	// IMP=0x001000000001995b
- (_Bool)dateIsFirstOfMonth:(id)arg1;	// IMP=0x001000000000d189
- (long long)CalWeeksInYearContainingDate:(id)arg1;	// IMP=0x0010000000019938
- (long long)CalDaysInYearContainingDate:(id)arg1;	// IMP=0x0010000000019915
- (long long)daysInMonthContainingDate:(id)arg1;	// IMP=0x00100000000198f2
- (long long)calendarDaysFromDate:(id)arg1 toDate:(id)arg2;	// IMP=0x001000000000835c
- (id)dateBySanityCheckingDateRoundedToDay:(id)arg1;	// IMP=0x0010000000006a19
- (long long)secondsInDay;	// IMP=0x00100000000198a2
- (long long)secondsInMinute;	// IMP=0x001000000000a166
- (long long)minutesInHour;	// IMP=0x001000000001027e
- (long long)hoursInDay;	// IMP=0x00100000000102a2
- (long long)daysInWeek;	// IMP=0x00100000000074df
- (long long)monthsInYearForDate:(id)arg1;	// IMP=0x001000000000d516
@end
