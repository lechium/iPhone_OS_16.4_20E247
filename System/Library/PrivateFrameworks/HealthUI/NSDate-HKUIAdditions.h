//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (HKUIAdditions)
+ (id)hk_minimumDateForBirthDateWithCalendar:(id)arg1;	// IMP=0x006000000008cd15
- (id)hkui_dateNormalizedFromDateInterval:(id)arg1 toDateInterval:(id)arg2;	// IMP=0x001000000008ce9f
- (id)hk_dateFromSourceTimeZone:(id)arg1;	// IMP=0x001000000008cdbd
- (double)doubleValue;	// IMP=0x001000000008cdab
- (id)hk_dateWithTruncatedSecond;	// IMP=0x001000000008ccd1
- (id)hk_dateBeforeDateForCalendar:(id)arg1 rangeUnit:(unsigned long long)arg2;	// IMP=0x00100000001286d2
- (id)hk_midPointToValue:(id)arg1 percentage:(double)arg2;	// IMP=0x0010000000145864
- (_Bool)hk_animatable;	// IMP=0x001000000014585c
@end

