//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSSelfTriggerEnabledMonitorAccessory
{
    _Bool _enabled;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00400000000c41c9
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void)setEnable:(_Bool)arg1;	// IMP=0x00100000000c4480
- (_Bool)isEnabled;	// IMP=0x00100000000c4470
- (void)_notifyObserver:(id)arg1 withEnabled:(_Bool)arg2;	// IMP=0x00100000000c445e
- (void)_didReceiveSelfTriggerChanged:(_Bool)arg1;	// IMP=0x00100000000c43e2
- (void)_stopMonitoring;	// IMP=0x00100000000c4363
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00100000000c425d
- (id)init;	// IMP=0x00100000000c421e

@end

