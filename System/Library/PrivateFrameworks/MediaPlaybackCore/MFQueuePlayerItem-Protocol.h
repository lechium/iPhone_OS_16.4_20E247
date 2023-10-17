//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlaybackCore/MFPlayerItem-Protocol.h>
#import <MediaPlaybackCore/MFTransitionInformationProviding-Protocol.h>

@protocol MFQueuePlayerItem <MFPlayerItem, MFTransitionInformationProviding>
- (void)reset;
@property(nonatomic, readonly) _Bool isSpokenAudio;
@property(nonatomic, readonly) _Bool isAlwaysLive;
@property(nonatomic, readonly) double playbackStartTime;
@property(nonatomic) _Bool isStartItem;
@property(nonatomic) double playbackStartTimeOverride;
@property(nonatomic, readonly) _Bool isMovieOrTVShow;
@end
