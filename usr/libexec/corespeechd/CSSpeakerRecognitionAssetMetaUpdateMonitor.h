//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSSpeakerRecognitionAssetMetaUpdateMonitor
{
    int _notifyToken;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0040000000007b76
- (void)_notifyObserver:(id)arg1;	// IMP=0x0020000000007ebc
- (void)_didReceiveSpeakerRecognitionAssetMetaData;	// IMP=0x0010000000007ddc
- (void)_stopMonitoring;	// IMP=0x0010000000007d39
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x0010000000007c1a
- (const char *)_asssetMetaUpdatedKey;	// IMP=0x0010000000007c0d
- (id)init;	// IMP=0x0010000000007bcb

@end
