//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface CKVideoCancelActionMenuItemView : UIView
{
    _Bool _highlighted;	// 8 = 0x8
    UIVisualEffectView *_blurView;	// 16 = 0x10
    UIImageView *_maskView;	// 24 = 0x18
    UIImageView *_xView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000004861d1
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) UIImageView *xView; // @synthesize xView=_xView;
@property(retain, nonatomic) UIImageView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000486002
- (void)layoutSubviews;	// IMP=0x0000000000485e97
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000485e86
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000485c26

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

