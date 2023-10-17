//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSSpringboardStartMonitor
{
    int _notifyToken;	// 8 = 0x8
    _Bool _isSpringBoardStarted;	// 12 = 0xc
}

+ (id)sharedInstance;	// IMP=0x00400000000848ee
- (_Bool)_checkSpringBoardStarted;	// IMP=0x0020000000084d21
- (_Bool)isSpringboardStarted;	// IMP=0x0010000000084d11
- (void)_notifyObserver:(id)arg1 withStarted:(_Bool)arg2;	// IMP=0x0010000000084ca7
- (void)_didReceiveSpringboardStarted:(_Bool)arg1;	// IMP=0x0010000000084c35
- (void)_didReceiveSpringboardStartedInQueue:(_Bool)arg1;	// IMP=0x0010000000084bc3
- (void)_stopMonitoring;	// IMP=0x0010000000084b20
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x0010000000084990
- (id)init;	// IMP=0x0010000000084943

@end
