//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIVisualEffectView.h>

__attribute__((visibility("hidden")))
@interface SFBannerBackgroundView : UIVisualEffectView
{
    long long _bannerStyle;	// 8 = 0x8
}

@property(nonatomic) long long bannerStyle; // @synthesize bannerStyle=_bannerStyle;
- (void)_updateVibrancy;	// IMP=0x00000000000966a1
- (void)_updateStyle;	// IMP=0x000000000009664a
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000096598
- (id)initWithEffect:(id)arg1;	// IMP=0x00000000000964bd

@end

