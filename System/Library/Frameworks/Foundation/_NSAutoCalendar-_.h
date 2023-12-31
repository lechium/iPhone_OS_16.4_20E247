//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreFoundation/_NSAutoCalendar.h>

@interface _NSAutoCalendar (_)
+ (_Bool)supportsSecureCoding;	// IMP=0x00800000003d9e68
- (void)enumerateDatesStartingAfterDate:(id)arg1 matchingComponents:(id)arg2 options:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x00100000003da50c
- (_Bool)isDateInWeekend:(id)arg1;	// IMP=0x00100000003da469
- (_Bool)nextWeekendStartDate:(out id *)arg1 interval:(out double *)arg2 options:(unsigned long long)arg3 afterDate:(id)arg4;	// IMP=0x00100000003da3a2
- (Class)classForCoder;	// IMP=0x00100000003da391
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000003d9fa2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000003d9e70
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000003d9d7d
- (id)description;	// IMP=0x00100000003d9c77
- (id)components:(unsigned long long)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned long long)arg4;	// IMP=0x00100000003d9bb0
- (id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x00100000003d9af1
- (id)components:(unsigned long long)arg1 fromDate:(id)arg2;	// IMP=0x00100000003d9a3d
- (id)dateFromComponents:(id)arg1;	// IMP=0x00100000003d999a
- (_Bool)rangeOfUnit:(unsigned long long)arg1 startDate:(id *)arg2 interval:(double *)arg3 forDate:(id)arg4;	// IMP=0x00100000003d98d3
- (unsigned long long)ordinalityOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3;	// IMP=0x00100000003d9814
- (struct _NSRange)rangeOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3;	// IMP=0x00100000003d9755
- (struct _NSRange)maximumRangeOfUnit:(unsigned long long)arg1;	// IMP=0x00100000003d96b2
- (struct _NSRange)minimumRangeOfUnit:(unsigned long long)arg1;	// IMP=0x00100000003d960f
- (id)gregorianStartDate;	// IMP=0x00100000003d9571
- (void)setGregorianStartDate:(id)arg1;	// IMP=0x00100000003d9483
- (unsigned long long)minimumDaysInFirstWeek;	// IMP=0x00100000003d93e5
- (void)setMinimumDaysInFirstWeek:(unsigned long long)arg1;	// IMP=0x00100000003d9382
- (unsigned long long)firstWeekday;	// IMP=0x00100000003d92e4
- (void)setFirstWeekday:(unsigned long long)arg1;	// IMP=0x00100000003d9281
- (id)timeZone;	// IMP=0x00100000003d91e3
- (void)setTimeZone:(id)arg1;	// IMP=0x00100000003d90f5
- (id)locale;	// IMP=0x00100000003d9057
- (void)setLocale:(id)arg1;	// IMP=0x00100000003d8f69
- (id)calendarIdentifier;	// IMP=0x00100000003d8ecb
- (void)dealloc;	// IMP=0x00100000003d8e28
- (id)initWithCalendarIdentifier:(id)arg1;	// IMP=0x00100000003d8e16
- (id)_init;	// IMP=0x00100000003d8d73
- (id)init;	// IMP=0x00100000003d8d61
- (void)_update;	// IMP=0x00100000003d8c11
@end

