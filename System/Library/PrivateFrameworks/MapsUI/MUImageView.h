//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface MUImageView : UIView
{
    UIImageView *_fallbackImageView;	// 8 = 0x8
    UIImageView *_contentImageView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000006fb57
@property(readonly, nonatomic) UIImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;	// IMP=0x000000000006fb29
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000006fb0c
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000006faef
@property(nonatomic) UIImage *fallbackImage;
@property(nonatomic) UIImage *image;
- (void)_updateAppearance;	// IMP=0x000000000006f98a
- (void)setImage:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000006f783
- (void)layoutSubviews;	// IMP=0x000000000006f6e8
- (void)_setupSubviews;	// IMP=0x000000000006f544
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000006f4e7

@end
