//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class SSSCropOverlayGrabberView;

@interface SSSCropOverlayCornerView : UIView
{
    unsigned long long _corner;	// 8 = 0x8
    SSSCropOverlayGrabberView *_topLineView;	// 16 = 0x10
    SSSCropOverlayGrabberView *_leftLineView;	// 24 = 0x18
}

+ (double)preferredDimension;	// IMP=0x0040000000035f42
- (void).cxx_destruct;	// IMP=0x00200000000362c1
@property(readonly, nonatomic) unsigned long long corner; // @synthesize corner=_corner;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x001000000003617f
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00100000000360c1
- (struct CGSize)intrinsicContentSize;	// IMP=0x001000000003607a
- (void)layoutSubviews;	// IMP=0x0010000000035f5b
- (id)initForCorner:(unsigned long long)arg1;	// IMP=0x0010000000035e00

@end

