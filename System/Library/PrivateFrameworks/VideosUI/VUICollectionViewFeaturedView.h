//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIView;

__attribute__((visibility("hidden")))
@interface VUICollectionViewFeaturedView
{
    UIView *_imageView;	// 8 = 0x8
    UIView *_overlayView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000293004
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) UIView *imageView; // @synthesize imageView=_imageView;
- (struct CGSize)vui_layoutSubviews:(struct CGSize)arg1 computationOnly:(_Bool)arg2;	// IMP=0x0000000000292efa
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000292dda

@end

