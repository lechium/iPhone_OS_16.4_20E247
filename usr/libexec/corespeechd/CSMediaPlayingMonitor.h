//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_dispatch_queue;

@interface CSMediaPlayingMonitor
{
    long long _mediaIsPlaying;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00400000000e682d
- (void).cxx_destruct;	// IMP=0x00200000000e708b
- (void)mediaPlayingStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e6fd6
- (long long)mediaPlayingState;	// IMP=0x00100000000e6f22
- (void)_notifyObserver:(id)arg1 mediaIsPlayingState:(long long)arg2;	// IMP=0x00100000000e6eae
- (void)_notePossiblePlayPausedStateChange:(id)arg1;	// IMP=0x00100000000e6d21
- (void)_stopMonitoring;	// IMP=0x00100000000e6c4e
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00100000000e6b42
- (void)initializeMediaPlayingState;	// IMP=0x00100000000e6915
- (id)init;	// IMP=0x00100000000e68a7

@end
