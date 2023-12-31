//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UITargetedPreview, _UIPlatterSoftShadowView, _UIPortalView;

__attribute__((visibility("hidden")))
@interface _UIHighlightPlatterView : UIView
{
    double _shadowAlpha;	// 144 = 0x90
    double _backgroundAlpha;	// 152 = 0x98
    UITargetedPreview *_targetedPreview;	// 160 = 0xa0
    _UIPortalView *_portalView;	// 168 = 0xa8
    UIView *_backgroundView;	// 176 = 0xb0
    _UIPlatterSoftShadowView *_shadowView;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x0000000000f5f43e
@property(retain, nonatomic) _UIPlatterSoftShadowView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) _UIPortalView *portalView; // @synthesize portalView=_portalView;
@property(retain, nonatomic) UITargetedPreview *targetedPreview; // @synthesize targetedPreview=_targetedPreview;
@property(nonatomic) double backgroundAlpha; // @synthesize backgroundAlpha=_backgroundAlpha;
@property(nonatomic) double shadowAlpha; // @synthesize shadowAlpha=_shadowAlpha;
- (_Bool)_isEligibleForFocusOcclusion;	// IMP=0x0000000000f5f37e
- (id)initWithTargetedPreview:(id)arg1;	// IMP=0x0000000000f5e7b8

@end

