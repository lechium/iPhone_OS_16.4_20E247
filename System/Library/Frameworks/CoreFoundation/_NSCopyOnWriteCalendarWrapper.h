//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSCalendar.h"

@class _NSRefcountedPthreadMutex;

__attribute__((visibility("hidden")))
@interface _NSCopyOnWriteCalendarWrapper : NSCalendar
{
    NSCalendar *cal;	// 8 = 0x8
    _NSRefcountedPthreadMutex *_lock;	// 16 = 0x10
    _Bool needsToCopy;	// 24 = 0x18
}

+ (id)currentCalendar;	// IMP=0x006000000013e265
- (void)enumerateDatesStartingAfterDate:(id)arg1 matchingComponents:(id)arg2 options:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000013f446
- (_Bool)isDateInWeekend:(id)arg1;	// IMP=0x000000000013f3a1
- (_Bool)nextWeekendStartDate:(out id *)arg1 interval:(out double *)arg2 options:(unsigned long long)arg3 afterDate:(id)arg4;	// IMP=0x000000000013f2da
- (unsigned long long)hash;	// IMP=0x000000000013f237
- (id)components:(unsigned long long)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned long long)arg4;	// IMP=0x000000000013f170
- (id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x000000000013f0b6
- (id)components:(unsigned long long)arg1 fromDate:(id)arg2;	// IMP=0x000000000013f00b
- (id)dateFromComponents:(id)arg1;	// IMP=0x000000000013ef66
- (_Bool)rangeOfUnit:(unsigned long long)arg1 startDate:(id *)arg2 interval:(double *)arg3 forDate:(id)arg4;	// IMP=0x000000000013ee9f
- (unsigned long long)ordinalityOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3;	// IMP=0x000000000013ede5
- (struct _NSRange)rangeOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3;	// IMP=0x000000000013ed22
- (struct _NSRange)maximumRangeOfUnit:(unsigned long long)arg1;	// IMP=0x000000000013ec6b
- (struct _NSRange)minimumRangeOfUnit:(unsigned long long)arg1;	// IMP=0x000000000013ebb4
- (void)setGregorianStartDate:(id)arg1;	// IMP=0x000000000013eafe
- (id)gregorianStartDate;	// IMP=0x000000000013ea5b
- (unsigned long long)minimumDaysInFirstWeek;	// IMP=0x000000000013e9b8
- (void)setMinimumDaysInFirstWeek:(unsigned long long)arg1;	// IMP=0x000000000013e902
- (unsigned long long)firstWeekday;	// IMP=0x000000000013e85f
- (void)setFirstWeekday:(unsigned long long)arg1;	// IMP=0x000000000013e7a9
- (id)timeZone;	// IMP=0x000000000013e706
- (void)setTimeZone:(id)arg1;	// IMP=0x000000000013e650
- (id)locale;	// IMP=0x000000000013e5ad
- (void)setLocale:(id)arg1;	// IMP=0x000000000013e4f7
- (id)calendarIdentifier;	// IMP=0x000000000013e454
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013e378
- (void)dealloc;	// IMP=0x000000000013e1ea

@end
