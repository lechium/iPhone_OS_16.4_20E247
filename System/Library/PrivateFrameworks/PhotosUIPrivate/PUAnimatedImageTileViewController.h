//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ISAnimatedImageView, NSString;

__attribute__((visibility("hidden")))
@interface PUAnimatedImageTileViewController
{
    ISAnimatedImageView *_animatedImageView;	// 8 = 0x8
    long long _interactionState;	// 16 = 0x10
    struct {
        _Bool playbackState;
        _Bool animatedImage;
    } _isValid;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000c2dce
- (void)viewModel:(id)arg1 didChange:(id)arg2;	// IMP=0x00000000000c2c57
- (void)_updateAnimatedImageIfNeeded;	// IMP=0x00000000000c2b72
- (void)_invalidateAnimatedImage;	// IMP=0x00000000000c2b60
- (void)_updatePlaybackStateIfNeeded;	// IMP=0x00000000000c28da
- (void)_invalidatePlaybackState;	// IMP=0x00000000000c28c9
- (void)assetViewModelDidChange;	// IMP=0x00000000000c2859
- (id)loadView;	// IMP=0x00000000000c261e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

