//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDProfile, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface HDMobilityWalkingSteadinessAnalyticsNotificationEventDataSource : NSObject
{
    HDProfile *_profile;	// 8 = 0x8
    NSString *_category;	// 16 = 0x10
    long long _value;	// 24 = 0x18
    NSDate *_date;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000008047
- (id)areHealthNotificationsAuthorizedWithError:(id *)arg1;	// IMP=0x0000000000007fbf
- (id)notificationTypeWithError:(id *)arg1;	// IMP=0x0000000000007f9f
- (id)notificationClassificationWithError:(id *)arg1;	// IMP=0x0000000000007f7f
- (id)daysSinceLastNotificationWithError:(id *)arg1;	// IMP=0x0000000000007e08
- (id)biologicalSexWithError:(id *)arg1;	// IMP=0x0000000000007dac
- (id)ageWithError:(id *)arg1;	// IMP=0x0000000000007d1b
- (id)initWithProfile:(id)arg1 category:(id)arg2 value:(long long)arg3 date:(id)arg4;	// IMP=0x0000000000007c5d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

