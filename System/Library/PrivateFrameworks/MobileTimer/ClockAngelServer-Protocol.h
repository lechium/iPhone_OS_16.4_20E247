//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileTimer/NSObject-Protocol.h>

@class NSDate, NSNumber, NSString;

@protocol ClockAngelServer <NSObject>
- (void)warmUp;
- (void)stopSession;
- (void)pauseSessionWithTimeRemainingString:(NSString *)arg1 remainingPortion:(NSNumber *)arg2;
- (void)startSessionWithEstimatedEndDate:(NSDate *)arg1 duartion:(NSNumber *)arg2;
@end
