//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CSDAnalyticsReporter : NSObject
{
}

+ (void)sendSessionServerTerminatedEventWithActivitySession:(id)arg1 code:(unsigned int)arg2;	// IMP=0x002000000033e2a0
+ (void)sendManualLaunchAttemptEventWithActivitySession:(id)arg1;	// IMP=0x001000000033e250
+ (void)sendManualLaunchNeededEventWithActivitySession:(id)arg1;	// IMP=0x001000000033e200
- (void).cxx_destruct;	// IMP=0x004000000033e420
- (id)init;	// IMP=0x001000000033e3c0
- (void)reportingController:(id)arg1 statusChangedForCall:(id)arg2 totalCallCount:(long long)arg3;	// IMP=0x001000000033e2e0

@end
