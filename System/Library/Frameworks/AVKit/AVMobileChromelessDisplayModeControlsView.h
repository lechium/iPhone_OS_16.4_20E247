//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVButton, AVMobileChromelessControlsStyleSheet;
@protocol AVMobileChromelessDisplayModeControlsViewDelegate;

__attribute__((visibility("hidden")))
@interface AVMobileChromelessDisplayModeControlsView
{
    AVButton *_fullScreenButton;	// 8 = 0x8
    AVButton *_pictureInPictureButton;	// 16 = 0x10
    _Bool _includesPictureInPictureControl;	// 24 = 0x18
    _Bool _includesFullscreenControl;	// 25 = 0x19
    AVMobileChromelessControlsStyleSheet *_styleSheet;	// 32 = 0x20
    unsigned long long _fullscreenIcon;	// 40 = 0x28
    id <AVMobileChromelessDisplayModeControlsViewDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000d9115
@property(nonatomic) __weak id <AVMobileChromelessDisplayModeControlsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool includesFullscreenControl; // @synthesize includesFullscreenControl=_includesFullscreenControl;
@property(nonatomic) _Bool includesPictureInPictureControl; // @synthesize includesPictureInPictureControl=_includesPictureInPictureControl;
@property(nonatomic) unsigned long long fullscreenIcon; // @synthesize fullscreenIcon=_fullscreenIcon;
@property(retain, nonatomic) AVMobileChromelessControlsStyleSheet *styleSheet; // @synthesize styleSheet=_styleSheet;
- (void)_updateFullscreenControlIcon;	// IMP=0x00000000000d9046
- (void)_addDisplayModeControlViews:(id)arg1;	// IMP=0x00000000000d8f1c
- (void)fullScreenButtonWasPressed;	// IMP=0x00000000000d8e7f
- (void)pictureInPictureControlWasPressed;	// IMP=0x00000000000d8de2
- (void)layoutSubviews;	// IMP=0x00000000000d8ba7
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000000d8afc
- (id)initWithStyleSheet:(id)arg1;	// IMP=0x00000000000d8659

@end
