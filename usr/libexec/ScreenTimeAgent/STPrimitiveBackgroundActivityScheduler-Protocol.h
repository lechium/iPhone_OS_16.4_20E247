//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;
@protocol STPrimitiveBackgroundActivitySchedulerDelegate;

@protocol STPrimitiveBackgroundActivityScheduler
@property __weak id <STPrimitiveBackgroundActivitySchedulerDelegate> delegate;
- (void)invalidateBackgroundActivityOfType:(long long)arg1;
- (void)scheduleBackgroundActivityOfType:(long long)arg1 interval:(NSNumber *)arg2;
@end
