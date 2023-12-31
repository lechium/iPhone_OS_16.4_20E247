//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIImageView.h"

@class UIImage;

__attribute__((visibility("hidden")))
@interface UITabBarSwappableImageView : UIImageView
{
    UIImage *_value;	// 144 = 0x90
    UIImage *_alternate;	// 152 = 0x98
    UIImage *_landscapeValue;	// 160 = 0xa0
    UIImage *_landscapeAlternate;	// 168 = 0xa8
    _Bool _showAlternate;	// 176 = 0xb0
    _Bool _showLandscape;	// 177 = 0xb1
}

- (void).cxx_destruct;	// IMP=0x000000000023be28
- (void)setLandscape:(_Bool)arg1;	// IMP=0x000000000023be07
- (void)setImage:(id)arg1;	// IMP=0x000000000023bdb0
- (void)setAlternateImage:(id)arg1;	// IMP=0x000000000023bd59
- (void)showAlternateImage:(_Bool)arg1;	// IMP=0x000000000023bd38
- (void)setCurrentImage;	// IMP=0x000000000023bc7f
- (void)didMoveToWindow;	// IMP=0x000000000023bc6d
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000023bbc0
- (id)_selectedCompactImage;	// IMP=0x000000000023bbab
- (id)_selectedImage;	// IMP=0x000000000023bb96
- (id)_unselectedCompactImage;	// IMP=0x000000000023bb81
- (id)_unselectedImage;	// IMP=0x000000000023bb6c
- (id)initWithImage:(id)arg1 alternateImage:(id)arg2 landscapeImage:(id)arg3 landscapeAlternateImage:(id)arg4;	// IMP=0x000000000023ba04

@end

