//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DashBoard/NSObject-Protocol.h>

@class DBNetworkPathMonitor;

@protocol DBNetworkPathMonitorObserver <NSObject>
- (void)networkPathMonitorDidChangeNetworkPath:(DBNetworkPathMonitor *)arg1;
- (void)networkPathMonitor:(DBNetworkPathMonitor *)arg1 didChangeNetworkReachable:(_Bool)arg2;
@end

