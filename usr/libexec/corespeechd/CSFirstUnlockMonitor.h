//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSFirstUnlockMonitor
{
    int _notifyToken;	// 8 = 0x8
    _Bool _firstUnlocked;	// 12 = 0xc
}

+ (id)sharedInstance;	// IMP=0x0040000000088492
- (_Bool)_checkFirstUnlocked;	// IMP=0x00200000000887bc
- (_Bool)isFirstUnlocked;	// IMP=0x00100000000887ac
- (void)_notifyObserver:(id)arg1 withUnlocked:(_Bool)arg2;	// IMP=0x0010000000088742
- (void)_didReceiveFirstUnlock:(_Bool)arg1;	// IMP=0x00100000000886d0
- (void)_didReceiveFirstUnlockInQueue:(_Bool)arg1;	// IMP=0x001000000008865e
- (void)_stopMonitoring;	// IMP=0x00100000000885bb
- (void)_firstUnlockNotified;	// IMP=0x0010000000088580
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x0000000000088559
- (id)init;	// IMP=0x001000000008850c

@end

