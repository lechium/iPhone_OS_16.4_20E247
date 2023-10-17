//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface _SSSPDFPageMiniMapVisibleRegionView : UIView
{
    UIView *_highlightView;	// 8 = 0x8
    UIView *_shadowView;	// 16 = 0x10
    CAShapeLayer *_shadowMask;	// 24 = 0x18
    struct CGRect _visibleRect;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000002e371
@property(retain, nonatomic) CAShapeLayer *shadowMask; // @synthesize shadowMask=_shadowMask;
@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property(nonatomic) struct CGRect visibleRect; // @synthesize visibleRect=_visibleRect;
- (void)updateHiddenRegionViewWithVisibleRect:(struct CGRect)arg1;	// IMP=0x001000000002e109
- (void)updateVisibleRegionViewWithVisibleRect:(struct CGRect)arg1;	// IMP=0x001000000002e04d
- (void)layoutSubviews;	// IMP=0x001000000002df76
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000002dcdc

@end
