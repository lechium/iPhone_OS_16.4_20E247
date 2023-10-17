//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPVolumeSlider.h>

@class MTVisualStylingProvider, NSString;

__attribute__((visibility("hidden")))
@interface MediaControlsVolumeSlider : MPVolumeSlider
{
    MTVisualStylingProvider *_visualStylingProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000dedec
@property(retain, nonatomic) MTVisualStylingProvider *visualStylingProvider; // @synthesize visualStylingProvider=_visualStylingProvider;
- (void)providedStylesDidChangeForProvider:(id)arg1;	// IMP=0x00000000000ded86
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000000ded3b
- (void)setMaximumTrackVisualProvider:(id)arg1;	// IMP=0x00000000000dec8a
- (void)setMinimumTrackVisualProvider:(id)arg1;	// IMP=0x00000000000debdf
- (void)tintColorDidChange;	// IMP=0x00000000000de871
- (id)_thumbImageForStyle:(long long)arg1;	// IMP=0x00000000000de800
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000000de6ad
- (struct CGRect)maximumValueImageRectForBounds:(struct CGRect)arg1;	// IMP=0x00000000000de602
- (struct CGRect)minimumValueImageRectForBounds:(struct CGRect)arg1;	// IMP=0x00000000000de566
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;	// IMP=0x00000000000de3c1
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;	// IMP=0x00000000000de246
- (id)createThumbView;	// IMP=0x00000000000de042
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;	// IMP=0x00000000000ddfa9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
