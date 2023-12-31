//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BacklightServicesHost/NSObject-Protocol.h>

@class NSDate, NSString;
@protocol BSTimerScheduleQuerying><BSCancellable><BSInvalidatable;

@protocol BLSHOSTimerProviding <NSObject>
@property(readonly, nonatomic) NSDate *now;
- (void)dispatchToMainQueueAfterSecondsDelay:(double)arg1 identifier:(NSString *)arg2 block:(void (^)(void))arg3;
- (id <BSTimerScheduleQuerying><BSCancellable><BSInvalidatable>)scheduledWakingTimerWithIdentifier:(NSString *)arg1 interval:(double)arg2 leewayInterval:(double)arg3 handler:(void (^)(id <BSTimerScheduleQuerying><BSCancellable><BSInvalidatable>))arg4;
- (id <BSTimerScheduleQuerying><BSCancellable><BSInvalidatable>)scheduledTimerWithIdentifier:(NSString *)arg1 interval:(double)arg2 leewayInterval:(double)arg3 handler:(void (^)(id <BSTimerScheduleQuerying><BSCancellable><BSInvalidatable>))arg4;
- (NSDate *)dateWithTimeIntervalSinceNow:(double)arg1;
@end

