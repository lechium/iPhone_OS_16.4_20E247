//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVKit/NSObject-Protocol.h>

@class AVPlayerController;

@protocol AVPlayerControllerWebKitDelegate <NSObject>

@optional
- (void)webkitPlayerController:(AVPlayerController *)arg1 didUpdateSeekToTime:(double)arg2;
- (void)webkitPlayerController:(AVPlayerController *)arg1 didChangeScrubbingStateTo:(_Bool)arg2;
@end

