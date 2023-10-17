//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SleepDaemon/HKSPStateMachineInfoProvider-Protocol.h>

@class NSDate, NSDateInterval;

@protocol HDSPWakeUpResultsNotificationStateMachineInfoProvider <HKSPStateMachineInfoProvider>
@property(readonly, nonatomic) _Bool isWakeUpResultsNotificationEnabled;
@property(readonly, nonatomic) NSDate *currentDate;
- (NSDateInterval *)notificationAttemptWindowForWakeUpBeforeDate:(NSDate *)arg1;
@end
