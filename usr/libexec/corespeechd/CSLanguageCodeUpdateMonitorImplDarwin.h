//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CSLanguageCodeUpdateMonitorImplDarwin
{
    NSString *_currentLanguageCode;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000db3ac
- (void)_notifyObserver:(id)arg1 withLanguageCode:(id)arg2;	// IMP=0x00100000000db32a
- (void)_didReceiveLanguageCodeUpdate:(id)arg1;	// IMP=0x00100000000db148
- (void)notifySiriLanguageCodeChanged:(id)arg1;	// IMP=0x00100000000db0bf
- (void)_stopMonitoring;	// IMP=0x00100000000db040
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00100000000dafc1
- (id)init;	// IMP=0x00100000000daf14

@end
