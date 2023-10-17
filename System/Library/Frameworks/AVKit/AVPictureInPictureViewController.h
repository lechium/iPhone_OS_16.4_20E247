//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class AVPictureInPicturePlayerLayerView, AVPlayerController, NSString;
@protocol AVPictureInPictureViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface AVPictureInPictureViewController : UIViewController
{
    _Bool _shouldShowAlternateActionButtonImage;	// 8 = 0x8
    AVPictureInPicturePlayerLayerView *_pictureInPicturePlayerLayerView;	// 16 = 0x10
    AVPlayerController *_playerController;	// 24 = 0x18
    id <AVPictureInPictureViewControllerDelegate> _delegate;	// 32 = 0x20
    AVPictureInPictureViewController *_contentViewController;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000006eafe
@property(retain, nonatomic) AVPictureInPictureViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(nonatomic) __weak id <AVPictureInPictureViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldShowAlternateActionButtonImage; // @synthesize shouldShowAlternateActionButtonImage=_shouldShowAlternateActionButtonImage;
@property(retain, nonatomic) AVPlayerController *playerController; // @synthesize playerController=_playerController;
@property(readonly, nonatomic) AVPictureInPicturePlayerLayerView *pictureInPicturePlayerLayerView; // @synthesize pictureInPicturePlayerLayerView=_pictureInPicturePlayerLayerView;
- (void)loadView;	// IMP=0x000000000006e796
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006e711
- (void)dealloc;	// IMP=0x000000000006e644
- (id)initWithPictureInPicturePlayerLayerView:(id)arg1;	// IMP=0x000000000006e518
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000006e504
- (id)init;	// IMP=0x000000000006e4f0
- (void)didAnimatePictureInPictureStop;	// IMP=0x000000000006eb9b
- (void)willAnimatePictureInPictureStart;	// IMP=0x000000000006eb4f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool shouldShowLoadingIndicator;
@property(readonly) Class superclass;

@end
