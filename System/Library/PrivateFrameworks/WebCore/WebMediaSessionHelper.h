//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebMediaSessionHelper : NSObject
{
    void *_callback;	// 8 = 0x8
    struct RetainPtr<AVRouteDetector> _routeDetector;	// 16 = 0x10
    _Bool _monitoringAirPlayRoutes;	// 24 = 0x18
    _Bool _startMonitoringAirPlayRoutesPending;	// 25 = 0x19
}

- (id).cxx_construct;	// IMP=0x0000000000238530
- (void).cxx_destruct;	// IMP=0x0000000000238510
- (void)carPlayIsConnectedDidChange:(id)arg1;	// IMP=0x0000000000238340
- (void)mediaServerConnectionDied:(id)arg1;	// IMP=0x0000000000237ef0
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x0000000000237d80
- (void)wirelessRoutesAvailableDidChange:(id)arg1;	// IMP=0x0000000000237c10
- (void)applicationWillResignActive:(id)arg1;	// IMP=0x0000000000237b00
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x00000000002379f0
- (void)applicationWillEnterForeground:(id)arg1;	// IMP=0x0000000000237880
- (void)stopMonitoringAirPlayRoutes;	// IMP=0x0000000000237850
- (void)startMonitoringAirPlayRoutes;	// IMP=0x00000000002375d0
- (_Bool)hasWirelessTargetsAvailable;	// IMP=0x00000000002375b0
- (void)clearCallback;	// IMP=0x00000000002375a0
- (void)dealloc;	// IMP=0x0000000000237490
- (id)initWithCallback:(void *)arg1;	// IMP=0x0000000000237130

@end

