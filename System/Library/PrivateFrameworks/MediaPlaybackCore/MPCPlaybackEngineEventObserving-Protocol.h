//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlaybackCore/NSObject-Protocol.h>

@class MPCPlaybackEngine, NSString;

@protocol MPCPlaybackEngineEventObserving <NSObject>

@optional
- (void)engine:(MPCPlaybackEngine *)arg1 didReachEndOfQueueWithReason:(NSString *)arg2;
@end

