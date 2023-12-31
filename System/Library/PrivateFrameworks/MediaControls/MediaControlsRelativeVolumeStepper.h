//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MPButton, MPVolumeController, MTMaterialView, MTVisualStylingProvider, NSBundle;

__attribute__((visibility("hidden")))
@interface MediaControlsRelativeVolumeStepper : UIView
{
    MPVolumeController *_volumeController;	// 8 = 0x8
    MTVisualStylingProvider *_visualStylingProvider;	// 16 = 0x10
    MTMaterialView *_increaseBackground;	// 24 = 0x18
    MTMaterialView *_decreaseBackground;	// 32 = 0x20
    MPButton *_increaseButton;	// 40 = 0x28
    MPButton *_decreaseButton;	// 48 = 0x30
    NSBundle *_mediaControlsBundle;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000005d339
@property(retain, nonatomic) NSBundle *mediaControlsBundle; // @synthesize mediaControlsBundle=_mediaControlsBundle;
@property(retain, nonatomic) MPButton *decreaseButton; // @synthesize decreaseButton=_decreaseButton;
@property(retain, nonatomic) MPButton *increaseButton; // @synthesize increaseButton=_increaseButton;
@property(retain, nonatomic) MTMaterialView *decreaseBackground; // @synthesize decreaseBackground=_decreaseBackground;
@property(retain, nonatomic) MTMaterialView *increaseBackground; // @synthesize increaseBackground=_increaseBackground;
@property(retain, nonatomic) MTVisualStylingProvider *visualStylingProvider; // @synthesize visualStylingProvider=_visualStylingProvider;
@property(retain, nonatomic) MPVolumeController *volumeController; // @synthesize volumeController=_volumeController;
- (void)increaseButtonHoldReleased:(id)arg1;	// IMP=0x000000000005d080
- (void)increaseButtonHoldBegan:(id)arg1;	// IMP=0x000000000005d033
- (void)increaseTouchUpInside:(id)arg1;	// IMP=0x000000000005d016
- (void)decreaseButtonHoldReleased:(id)arg1;	// IMP=0x000000000005cfad
- (void)decreaseButtonHoldBegan:(id)arg1;	// IMP=0x000000000005cf60
- (void)decreaseTouchUpInside:(id)arg1;	// IMP=0x000000000005cf43
- (void)layoutSubviews;	// IMP=0x000000000005cd86
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000005c64d

@end

