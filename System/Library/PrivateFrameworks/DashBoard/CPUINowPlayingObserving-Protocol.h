//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DashBoard/NSObject-Protocol.h>

@class CPUINowPlayingManager, CPUINowPlayingSnapshot, NSString;

@protocol CPUINowPlayingObserving <NSObject>
- (void)nowPlayingManager:(CPUINowPlayingManager *)arg1 didThrottleUpdateForBundleIdentifier:(NSString *)arg2;
- (void)nowPlayingManager:(CPUINowPlayingManager *)arg1 didUpdateSnapshot:(CPUINowPlayingSnapshot *)arg2;
@end

