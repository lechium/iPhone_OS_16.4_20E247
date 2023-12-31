//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSTimeZone.h"

__attribute__((visibility("hidden")))
@interface __NSTimeZone : NSTimeZone
{
    struct __CFString *_name;	// 8 = 0x8
    struct __CFData *_data;	// 16 = 0x10
    void **_ucal;	// 24 = 0x18
    struct os_unfair_lock_s _lock;	// 32 = 0x20
    int _secondsFromGMT;	// 36 = 0x24
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00600000001460df
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x00600000001460dc
+ (void)initialize;	// IMP=0x006000000014600c
- (void)dealloc;	// IMP=0x0000000000146049
- (id)localizedName:(long long)arg1 locale:(id)arg2;	// IMP=0x0000000000145d0b
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1;	// IMP=0x0000000000145b2d
- (double)daylightSavingTimeOffsetForDate:(id)arg1;	// IMP=0x00000000001458a2
- (_Bool)isDaylightSavingTimeForDate:(id)arg1;	// IMP=0x000000000014587e
- (id)abbreviationForDate:(id)arg1;	// IMP=0x00000000001454a0
- (long long)secondsFromGMTForDate:(id)arg1;	// IMP=0x0000000000145296
- (id)data;	// IMP=0x00000000001450c6
- (id)name;	// IMP=0x00000000001450a8

@end

