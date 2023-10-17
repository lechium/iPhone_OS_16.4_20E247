//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_dispatch_queue;

@interface CSAudioRouteChangeMonitorImpl
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    _Bool _isHearstConnected;	// 16 = 0x10
    _Bool _isHearstRouted;	// 17 = 0x11
    _Bool _isJarvisConnected;	// 18 = 0x12
    _Bool _isSiriInputSourceOutOfBand;	// 19 = 0x13
}

- (void).cxx_destruct;	// IMP=0x0020000000050533
- (void)_startObservingSystemControllerLifecycle;	// IMP=0x001000000005052d
- (void)_systemControllerDied:(id)arg1;	// IMP=0x0010000000050426
- (void)_notifySiriInputSourceOutOfBandState:(_Bool)arg1;	// IMP=0x00100000000502d1
- (void)_notifyJarvisConnectionState:(_Bool)arg1;	// IMP=0x0010000000050171
- (void)_notifyHearstRoutedState:(_Bool)arg1;	// IMP=0x001000000005001c
- (void)_notifyHearstConnectionState:(_Bool)arg1;	// IMP=0x001000000004fecc
- (_Bool)_fetchSiriInputSourceOutOfBandState;	// IMP=0x001000000004fe50
- (_Bool)_fetchJarvisConnectionState;	// IMP=0x001000000004fe48
- (_Bool)_fetchHearstRoutedState;	// IMP=0x001000000004fe40
- (_Bool)_fetchHearstConnectionState;	// IMP=0x001000000004fe38
- (void)_stopMonitoring;	// IMP=0x001000000004fdb9
- (void)_startObservingAudioRouteChange;	// IMP=0x001000000004fdb3
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x001000000004fc48
- (void)carPlayIsConnectedDidChange:(id)arg1;	// IMP=0x001000000004fb68
- (void)carPlayAuxStreamSupportDidChange:(id)arg1;	// IMP=0x001000000004fa5f
- (void)pickableRoutesDidChange:(id)arg1;	// IMP=0x001000000004f918
- (void)preferredExternalRouteDidChange:(id)arg1;	// IMP=0x001000000004f80b
- (void)getSiriInputSourceOutOfBand:(CDUnknownBlockType)arg1;	// IMP=0x001000000004f756
- (_Bool)siriInputSourceOutOfBand;	// IMP=0x001000000004f6a2
- (_Bool)carPlayConnected;	// IMP=0x001000000004f69a
- (_Bool)jarvisConnected;	// IMP=0x001000000004f5e6
- (void)getJarvisConnected:(CDUnknownBlockType)arg1;	// IMP=0x001000000004f531
- (_Bool)hearstRouted;	// IMP=0x001000000004f47d
- (void)getHearstRouted:(CDUnknownBlockType)arg1;	// IMP=0x001000000004f3c8
- (_Bool)hearstConnected;	// IMP=0x001000000004f314
- (void)getHearstConnected:(CDUnknownBlockType)arg1;	// IMP=0x001000000004f25f
- (id)init;	// IMP=0x001000000004f1c7

@end
