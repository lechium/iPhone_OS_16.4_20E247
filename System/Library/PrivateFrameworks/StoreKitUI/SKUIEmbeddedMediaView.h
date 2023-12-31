//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class MPMoviePlayerController, NSString, UIImage, UIImageView;
@protocol SKUIEmbeddedMediaViewDelegate;

__attribute__((visibility("hidden")))
@interface SKUIEmbeddedMediaView : UIControl
{
    id <SKUIEmbeddedMediaViewDelegate> _delegate;	// 8 = 0x8
    long long _mediaType;	// 16 = 0x10
    NSString *_mediaURLString;	// 24 = 0x18
    MPMoviePlayerController *_moviePlayer;	// 32 = 0x20
    UIImageView *_playerDecorationView;	// 40 = 0x28
    UIImageView *_thumbnailReflectionView;	// 48 = 0x30
    UIImageView *_thumbnailView;	// 56 = 0x38
    _Bool _usingInlinePlayback;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000304c42
@property(copy, nonatomic) NSString *mediaURLString; // @synthesize mediaURLString=_mediaURLString;
@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) __weak id <SKUIEmbeddedMediaViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_thumbnailView;	// IMP=0x0000000000304b30
- (void)_tearDownMoviePlayer;	// IMP=0x0000000000304a1f
- (struct CGSize)_sizeToFitImageSize:(struct CGSize)arg1 bounds:(struct CGRect)arg2;	// IMP=0x000000000030499b
- (void)_sendPlaybackStateChanged;	// IMP=0x000000000030492b
- (id)_newMoviePlayerControllerWithURL:(id)arg1;	// IMP=0x000000000030480a
- (void)_playbackStateChanged:(id)arg1;	// IMP=0x00000000003047f8
- (void)_didFinishPlayback:(id)arg1;	// IMP=0x000000000030478f
- (void)_didExitFullscreen:(id)arg1;	// IMP=0x000000000030474f
- (void)didMoveToWindow;	// IMP=0x0000000000304704
- (void)setBackgroundColor:(id)arg1;	// IMP=0x0000000000304682
- (void)layoutSubviews;	// IMP=0x0000000000304156
@property(retain, nonatomic) UIImage *thumbnailImage;
@property(nonatomic) long long thumbnailContentMode;
@property(nonatomic) _Bool showsThumbnailReflection;
@property(readonly, nonatomic) long long playbackState;
- (void)endPlaybackAnimated:(_Bool)arg1;	// IMP=0x0000000000303b2e
- (void)beginPlaybackAnimated:(_Bool)arg1;	// IMP=0x00000000003039e2
- (void)beginInlinePlaybackWithURL:(id)arg1;	// IMP=0x00000000003038fb
- (void)dealloc;	// IMP=0x0000000000303819

@end

