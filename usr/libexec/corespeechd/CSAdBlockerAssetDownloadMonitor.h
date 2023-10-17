//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CSTrialAssetDownloadMonitor, NSString;

@interface CSAdBlockerAssetDownloadMonitor
{
    int _notifyToken;	// 8 = 0x8
    unsigned long long _lastUpdatedAssetType;	// 16 = 0x10
    CSTrialAssetDownloadMonitor *_monitor;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00200000000cf828
- (void).cxx_destruct;	// IMP=0x00200000000cfcf4
@property(retain, nonatomic) CSTrialAssetDownloadMonitor *monitor; // @synthesize monitor=_monitor;
- (void)trialAssetDownloadMonitorDelegate:(id)arg1 didInstallNewAsset:(_Bool)arg2 assetType:(unsigned long long)arg3;	// IMP=0x00100000000cfc4b
- (void)_notifyObserver:(id)arg1;	// IMP=0x00100000000cfbe6
- (void)_didInstalledNewAdBlockerAsset;	// IMP=0x00100000000cfb06
- (void)_stopMonitoring;	// IMP=0x00100000000cfa63
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00100000000cf931
- (const char *)_notificationKey;	// IMP=0x00100000000cf924
- (id)init;	// IMP=0x00100000000cf87d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
