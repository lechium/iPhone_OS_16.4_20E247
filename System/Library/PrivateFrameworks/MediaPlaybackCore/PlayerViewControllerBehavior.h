//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVKit/AVMusicAppBehavior.h>

@class MISSING_TYPE;

@interface PlayerViewControllerBehavior : AVMusicAppBehavior
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *onGoingJumpToTimeInfo;	// 24 = 0x18
    MISSING_TYPE *reporter;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000004f460
- (id)init;	// IMP=0x000000000004f400
- (void)willMoveToContext:(id)arg1;	// IMP=0x000000000004d050
- (void)contextWillHandleUserAction:(long long)arg1;	// IMP=0x000000000004d010
- (void)skipToNextItem;	// IMP=0x000000000004c5b0
- (void)skipToPreviousItem;	// IMP=0x000000000004c580

@end

