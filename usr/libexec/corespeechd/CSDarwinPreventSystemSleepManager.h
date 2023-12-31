//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSPreventSystemSleepPowerAssertion;

@interface CSDarwinPreventSystemSleepManager : NSObject
{
    double _assertionTimeoutInterval;	// 8 = 0x8
    CSPreventSystemSleepPowerAssertion *_preventSystemSleepPowerAssertion;	// 16 = 0x10
    long long _currentState;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000e7a1f
@property(nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) CSPreventSystemSleepPowerAssertion *preventSystemSleepPowerAssertion; // @synthesize preventSystemSleepPowerAssertion=_preventSystemSleepPowerAssertion;
@property(readonly, nonatomic) double assertionTimeoutInterval; // @synthesize assertionTimeoutInterval=_assertionTimeoutInterval;
- (void)dealloc;	// IMP=0x00100000000e79a7
- (void)acquireAssertionForIdleUser;	// IMP=0x00100000000e767e
- (void)acquireAssertionForActiveUser;	// IMP=0x00100000000e7579
- (void)acquireAssertion;	// IMP=0x00100000000e7520
- (void)releasePreventSystemSleepAssertion;	// IMP=0x00100000000e74ee
- (void)_acquirePreventSystemSleepAssertionWithTimeout:(id)arg1;	// IMP=0x00100000000e73d7
- (id)initWithTimeout:(double)arg1;	// IMP=0x00100000000e7394

@end

