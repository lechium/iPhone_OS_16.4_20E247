//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSJarvisTriggerModeMonitor
{
}

+ (id)triggerModeStringDescription:(long long)arg1;	// IMP=0x004000000005e861
+ (id)sharedInstance;	// IMP=0x001000000005e800
- (long long)getTriggerMode;	// IMP=0x004000000005e854
- (void)setTriggerMode:(long long)arg1;	// IMP=0x001000000005e84e
- (void)_stopMonitoring;	// IMP=0x001000000005e848
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x001000000005e842
- (id)init;	// IMP=0x001000000005e808

@end

