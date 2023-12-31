//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SFUnifiedBarItemView.h"

@class NSLayoutConstraint, NSString, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface SFUnifiedBarButtonView : SFUnifiedBarItemView
{
    UIImageView *_imageView;	// 8 = 0x8
    NSLayoutConstraint *_imageViewLeadingConstraint;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000057aa0
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;	// IMP=0x0000000000057a39
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000000579ea
- (struct CGRect)_hitRect;	// IMP=0x0000000000057958
- (struct CGRect)_selectedIndicatorBounds;	// IMP=0x0000000000057831
- (double)preferredWidth;	// IMP=0x00000000000576fa
- (void)tintColorDidChange;	// IMP=0x000000000005766f
@property(nonatomic) _Bool shouldTrailingAlignImage;
- (void)setEnabled:(_Bool)arg1;	// IMP=0x00000000000575ce
@property(retain, nonatomic) UIImage *image;
- (void)updateTitleFont;	// IMP=0x0000000000057460
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000572ce
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000056cd9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

