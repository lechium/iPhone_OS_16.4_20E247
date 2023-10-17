//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, NSString, QLOverlayPlayButton, QLVideoScrubberView, QLWaveformScrubberViewProvider, UIScrollView, UIView;

__attribute__((visibility("hidden")))
@interface QLAudioItemViewController
{
    QLOverlayPlayButton *_playButton;	// 8 = 0x8
    UIView *_scrubberContainer;	// 16 = 0x10
    UIScrollView *_scrubberContainerScrollView;	// 24 = 0x18
    QLVideoScrubberView *_scrubber;	// 32 = 0x20
    QLWaveformScrubberViewProvider *_scrubberViewProvider;	// 40 = 0x28
    _Bool _previewIsVisisble;	// 48 = 0x30
    _Bool _scrubbing;	// 49 = 0x31
    NSLayoutConstraint *_topScrubber;	// 56 = 0x38
    double _scrubberVerticalOffset;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000004bd9b
@property double scrubberVerticalOffset; // @synthesize scrubberVerticalOffset=_scrubberVerticalOffset;
@property _Bool scrubbing; // @synthesize scrubbing=_scrubbing;
@property(retain) UIView *scrubberContainer; // @synthesize scrubberContainer=_scrubberContainer;
@property(retain) NSLayoutConstraint *topScrubber; // @synthesize topScrubber=_topScrubber;
- (void)transitionDidFinish:(_Bool)arg1 didComplete:(_Bool)arg2;	// IMP=0x000000000004bcc3
- (void)transitionDidStart:(_Bool)arg1;	// IMP=0x000000000004bc79
- (_Bool)canEnterFullScreen;	// IMP=0x000000000004bc71
- (id)timeLabelScrollView;	// IMP=0x000000000004bc54
- (id)accessoryView;	// IMP=0x000000000004bc3f
- (void)didChangePlayingStatus;	// IMP=0x000000000004bbca
- (void)_tapRecognized:(id)arg1;	// IMP=0x000000000004bbb8
- (void)setPlayControlsHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000004bac0
- (void)performFirstTimeAppearanceActions:(unsigned long long)arg1;	// IMP=0x000000000004baae
- (_Bool)canPerformFirstTimeAppearanceActions:(unsigned long long)arg1;	// IMP=0x000000000004baa3
- (void)previewDidDisappear:(_Bool)arg1;	// IMP=0x000000000004ba67
- (void)previewDidAppear:(_Bool)arg1;	// IMP=0x000000000004ba1b
- (void)addScrubberWithDeferral;	// IMP=0x000000000004b2d9
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000004b22e
- (void)dealloc;	// IMP=0x000000000004b1d8
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000004a8b6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
