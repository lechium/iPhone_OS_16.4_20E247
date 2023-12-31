//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UILocalNotification.h"

@class CLRegion, NSCalendar, NSData, NSDate, NSString, NSTimeZone;

__attribute__((visibility("hidden")))
@interface UIConcreteLocalNotification : UILocalNotification
{
    NSDate *fireDate;	// 8 = 0x8
    NSTimeZone *timeZone;	// 16 = 0x10
    unsigned long long repeatInterval;	// 24 = 0x18
    NSCalendar *repeatCalendar;	// 32 = 0x20
    CLRegion *region;	// 40 = 0x28
    _Bool regionTriggersOnce;	// 48 = 0x30
    NSString *alertBody;	// 56 = 0x38
    _Bool hasAction;	// 64 = 0x40
    NSString *alertAction;	// 72 = 0x48
    NSString *alertLaunchImage;	// 80 = 0x50
    NSString *alertTitle;	// 88 = 0x58
    NSString *soundName;	// 96 = 0x60
    long long applicationIconBadgeNumber;	// 104 = 0x68
    NSData *userInfoData;	// 112 = 0x70
    NSString *category;	// 120 = 0x78
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000d5e684
- (void).cxx_destruct;	// IMP=0x0000000000d60e93
- (void)setAlertTitle:(id)arg1;	// IMP=0x0000000000d60e82
- (id)alertTitle;	// IMP=0x0000000000d60e71
- (void)setRegionTriggersOnce:(_Bool)arg1;	// IMP=0x0000000000d60e61
- (_Bool)regionTriggersOnce;	// IMP=0x0000000000d60e51
- (void)setRegion:(id)arg1;	// IMP=0x0000000000d60e40
- (id)region;	// IMP=0x0000000000d60e2f
- (void)setCategory:(id)arg1;	// IMP=0x0000000000d60e1e
- (id)category;	// IMP=0x0000000000d60e0d
- (void)setApplicationIconBadgeNumber:(long long)arg1;	// IMP=0x0000000000d60dfc
- (long long)applicationIconBadgeNumber;	// IMP=0x0000000000d60deb
- (void)setSoundName:(id)arg1;	// IMP=0x0000000000d60dda
- (id)soundName;	// IMP=0x0000000000d60dc9
- (void)setAlertLaunchImage:(id)arg1;	// IMP=0x0000000000d60db8
- (id)alertLaunchImage;	// IMP=0x0000000000d60da7
- (void)setAlertAction:(id)arg1;	// IMP=0x0000000000d60d96
- (id)alertAction;	// IMP=0x0000000000d60d85
- (void)setHasAction:(_Bool)arg1;	// IMP=0x0000000000d60d75
- (_Bool)hasAction;	// IMP=0x0000000000d60d65
- (void)setAlertBody:(id)arg1;	// IMP=0x0000000000d60d54
- (id)alertBody;	// IMP=0x0000000000d60d43
- (void)setRepeatCalendar:(id)arg1;	// IMP=0x0000000000d60d32
- (id)repeatCalendar;	// IMP=0x0000000000d60d21
- (void)setRepeatInterval:(unsigned long long)arg1;	// IMP=0x0000000000d60d10
- (unsigned long long)repeatInterval;	// IMP=0x0000000000d60cff
- (void)setTimeZone:(id)arg1;	// IMP=0x0000000000d60cee
- (id)timeZone;	// IMP=0x0000000000d60cdd
- (void)setFireDate:(id)arg1;	// IMP=0x0000000000d60ccc
- (id)fireDate;	// IMP=0x0000000000d60cbb
- (_Bool)isTriggeredByRegion;	// IMP=0x0000000000d60ca6
- (_Bool)isTriggeredByDate;	// IMP=0x0000000000d60c91
- (void)validate;	// IMP=0x0000000000d60ba9
- (_Bool)isValid;	// IMP=0x0000000000d60b2d
- (id)nextFireDateAfterDate:(id)arg1 localTimeZone:(id)arg2;	// IMP=0x0000000000d5fe9c
- (id)nextFireDateForLastFireDate:(id)arg1;	// IMP=0x0000000000d5fd62
- (id)description;	// IMP=0x0000000000d5f900
- (id)userInfo;	// IMP=0x0000000000d5f88f
- (void)setUserInfo:(id)arg1;	// IMP=0x0000000000d5f6ec
- (void)_setUserInfoData:(id)arg1;	// IMP=0x0000000000d5f6d8
- (long long)compareFireDates:(id)arg1;	// IMP=0x0000000000d5f531
- (unsigned long long)hash;	// IMP=0x0000000000d5f49d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d5ef24
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d5ed88
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000d5eb9d
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000d5e724
- (id)init;	// IMP=0x0000000000d5e68c

@end

