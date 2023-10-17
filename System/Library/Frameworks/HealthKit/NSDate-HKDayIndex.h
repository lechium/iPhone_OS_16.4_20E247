//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (HKDayIndex)
+ (id)hk_latestPossibleDateWithDayIndex:(long long)arg1;	// IMP=0x008000000003143b
+ (id)hk_earliestPossibleDateWithDayIndex:(long long)arg1;	// IMP=0x00800000000313aa
+ (id)hk_noonWithDayIndex:(long long)arg1 calendar:(id)arg2;	// IMP=0x0080000000031390
+ (id)hk_dateOnDayIndex:(long long)arg1 atHour:(long long)arg2 calendar:(id)arg3;	// IMP=0x00800000000312eb
+ (id)hk_sleepWeekStartForMorningIndex:(long long)arg1 calendar:(id)arg2;	// IMP=0x008000000003195c
+ (id)hk_sleepDayStartForMorningIndex:(long long)arg1 calendar:(id)arg2;	// IMP=0x00800000000316d7
+ (id)hk_dateWithNanosecondsSince1970:(long long)arg1;	// IMP=0x00800000000d51f8
+ (id)hk_mostRecentDate:(id)arg1;	// IMP=0x00800000000d516c
- (long long)hk_latestPossibleDayIndex;	// IMP=0x001000000003167d
- (long long)hk_earliestPossibleDayIndex;	// IMP=0x0010000000031623
- (long long)hk_dayIndexWithCalendar:(id)arg1;	// IMP=0x0010000000031503
- (id)hk_sleepDayStartWithCalendar:(id)arg1;	// IMP=0x001000000003183d
- (long long)hk_morningIndexWithCalendar:(id)arg1;	// IMP=0x0010000000031700
- (id)hk_utcDateAdjustedToCalendar:(id)arg1;	// IMP=0x00100000000d5246
- (long long)hk_nanosecondsSince1970;	// IMP=0x00100000000d5227
- (id)hk_truncateToDay;	// IMP=0x00100000000d519d
- (id)hk_nearestDate:(id)arg1;	// IMP=0x00100000000d50e7
- (id)hk_rfc3339String;	// IMP=0x00100000000d5011
- (_Bool)hk_isAfterOrEqualToDate:(id)arg1;	// IMP=0x00100000000d4ffc
- (_Bool)hk_isBeforeOrEqualToDate:(id)arg1;	// IMP=0x001000000000f0c2
- (_Bool)hk_isAfterDate:(id)arg1;	// IMP=0x001000000000f0d7
- (_Bool)hk_isBeforeDate:(id)arg1;	// IMP=0x0010000000011c55
@end
