//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVPlaybackControlsView, NSArray;
@protocol AVPlayerViewControllerAnimationCoordinator;

@protocol AVPlaybackControlsViewVisibilityDelegate
- (void)playbackControlsViewDidToggleControlsVisibility:(AVPlaybackControlsView *)arg1;
- (void)playbackControlsView:(AVPlaybackControlsView *)arg1 animateAlongsideVisibilityAnimationsWithAnimationCoordinator:(id <AVPlayerViewControllerAnimationCoordinator>)arg2 appearingViews:(NSArray *)arg3 disappearingViews:(NSArray *)arg4;
- (void)playbackControlsViewNeedsUpdateStatusBarAppearance:(AVPlaybackControlsView *)arg1;
@end

