//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SleepDaemon/NSObject-Protocol.h>

@class NSDate;

@protocol HDSPWatchOnWristObserver <NSObject>
- (void)detectedOffWristOnDate:(NSDate *)arg1;
- (void)detectedOnWristOnDate:(NSDate *)arg1;

@optional
- (void)wristDetectEnabledDidChange;
@end

