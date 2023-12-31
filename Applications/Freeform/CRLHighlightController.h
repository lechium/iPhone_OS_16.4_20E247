//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CALayer, CAShapeLayer, CRLImage, NSString;

@interface CRLHighlightController : NSObject
{
    _Bool _shouldCreateBackground;	// 8 = 0x8
    double _viewScale;	// 16 = 0x10
    CALayer *_layer;	// 24 = 0x18
    struct CGPath *_path;	// 32 = 0x20
    struct CGColor *_backgroundColor;	// 40 = 0x28
    CRLImage *_image;	// 48 = 0x30
    CAShapeLayer *_backgroundLayer;	// 56 = 0x38
    CALayer *_imageLayer;	// 64 = 0x40
    struct CGRect _rectToAnimate;	// 72 = 0x48
    struct CGAffineTransform _transform;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x002000000020a340
@property(retain, nonatomic) CALayer *imageLayer; // @synthesize imageLayer=_imageLayer;
@property(retain, nonatomic) CAShapeLayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(retain, nonatomic) CRLImage *image; // @synthesize image=_image;
@property(nonatomic) _Bool shouldCreateBackground; // @synthesize shouldCreateBackground=_shouldCreateBackground;
@property(nonatomic) struct CGColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) struct CGPath *path; // @synthesize path=_path;
@property(readonly, nonatomic) struct CGRect rectToAnimate; // @synthesize rectToAnimate=_rectToAnimate;
@property(readonly, nonatomic) CALayer *layer; // @synthesize layer=_layer;
@property(nonatomic) double viewScale; // @synthesize viewScale=_viewScale;
@property(nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
- (void)buildLayersForPath:(struct CGPath *)arg1 withImage:(id)arg2;	// IMP=0x001000000020a1dc
- (void)p_buildLayersWithBackgroundForPath:(struct CGPath *)arg1 withImage:(id)arg2;	// IMP=0x0010000000209ac9
- (void)p_buildLayersForPath:(struct CGPath *)arg1 withImage:(id)arg2;	// IMP=0x0010000000209659
- (void)createLayerWithZOrder:(double)arg1 contentsScaleForLayers:(double)arg2;	// IMP=0x001000000020932d
- (void)hide;	// IMP=0x0010000000209312
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000002092f9
- (_Bool)drawRoundedRect;	// IMP=0x00100000002092f1
- (void)reset;	// IMP=0x0010000000209247
- (void)disconnect;	// IMP=0x0010000000209241
- (void)dealloc;	// IMP=0x00100000002091dd
@property(readonly, nonatomic) CALayer *layerToAnimate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

