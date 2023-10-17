//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CALayer, CAShapeLayer, NSString, NUCropModel, PHLivePhotoView, PLImageGeometry, PUCropGestureHandler, PXImageLayerModulator, PXImageModulationManager, _UIDynamicAnimation;

__attribute__((visibility("hidden")))
@interface PUCropPerspectiveView
{
    PLImageGeometry *_imageGeometry;	// 8 = 0x8
    PHLivePhotoView *_livePhotoView;	// 16 = 0x10
    PXImageModulationManager *_imageModulationManager;	// 24 = 0x18
    PXImageLayerModulator *_imageLayerModulator;	// 32 = 0x20
    CDStruct_1b6d18a9 _cachedVideoSeekTime;	// 40 = 0x28
    PUCropGestureHandler *_gestureHandler;	// 64 = 0x40
    _Bool _muted;	// 72 = 0x48
    _Bool _needsLayerTransformUpdate;	// 73 = 0x49
    _Bool _layerTransformUpdateAnimated;	// 74 = 0x4a
    _Bool _needsUpdateLayerTransforms;	// 75 = 0x4b
    _Bool _needsUpdateLayerTransformsAnimated;	// 76 = 0x4c
    _Bool _isDebugging;	// 77 = 0x4d
    CALayer *_imageLayer;	// 80 = 0x50
    CALayer *_mediaSuperlayer;	// 88 = 0x58
    CALayer *_mediaLayer;	// 96 = 0x60
    CALayer *_debugLayer;	// 104 = 0x68
    CAShapeLayer *_debugViewRectLayer;	// 112 = 0x70
    CAShapeLayer *_debugCropRectLayer;	// 120 = 0x78
    CAShapeLayer *_debugQuadLayer;	// 128 = 0x80
    NUCropModel *_cropModel;	// 136 = 0x88
    _UIDynamicAnimation *_currentAnimation;	// 144 = 0x90
    double _lastPitchRadians;	// 152 = 0x98
    double _lastYawRadians;	// 160 = 0xa0
    double _lastRollRadians;	// 168 = 0xa8
    double _lastImageZoomScale;	// 176 = 0xb0
    struct CGVector _lastPanRubberBandOffset;	// 184 = 0xb8
    struct CGPoint _lastModelCropCenter;	// 200 = 0xc8
    struct CGPoint _lastViewCropCenter;	// 216 = 0xd8
    double _lastUICroppingRectToImageScale;	// 232 = 0xe8
    float _gainMapValue;	// 240 = 0xf0
    struct CGImage *_gainMapImage;	// 248 = 0xf8
    struct CGRect _imageCropRect;	// 256 = 0x100
}

- (void).cxx_destruct;	// IMP=0x000000000015be2a
@property(nonatomic) float gainMapValue; // @synthesize gainMapValue=_gainMapValue;
@property(retain, nonatomic) struct CGImage *gainMapImage; // @synthesize gainMapImage=_gainMapImage;
@property(readonly, nonatomic) struct CGRect imageCropRect; // @synthesize imageCropRect=_imageCropRect;
- (void)handlePinchGesture:(id)arg1;	// IMP=0x000000000015bcf6
- (void)handlePanGesture:(id)arg1;	// IMP=0x000000000015b69e
- (void)didEndTrackingWithCropGestureHandler:(id)arg1;	// IMP=0x000000000015b68a
- (void)didTrackWithCropGestureHandler:(id)arg1;	// IMP=0x000000000015b61d
- (void)didBeginTrackingWithCropGestureHandler:(id)arg1;	// IMP=0x000000000015b606
- (void)willBeginTrackingWithCropGestureHandler:(id)arg1;	// IMP=0x000000000015b5ef
- (struct CGRect)_modelCropRectUnorientedInUICoords;	// IMP=0x000000000015b56e
- (struct CGRect)_croppingRect;	// IMP=0x000000000015b4cc
- (void)setImageCropRectFromViewCropRect:(struct CGRect)arg1 animated:(_Bool)arg2;	// IMP=0x000000000015aad8
- (struct CGRect)validateViewCropRectAgainstModelCropRect:(struct CGRect)arg1;	// IMP=0x000000000015a510
- (struct CGPoint)imagePointForViewPoint:(struct CGPoint)arg1;	// IMP=0x000000000015a415
- (struct CGRect)imageCropRectForViewRect:(struct CGRect)arg1;	// IMP=0x000000000015a1f6
- (struct CGRect)viewCropRectForImageRect:(struct CGRect)arg1;	// IMP=0x0000000000159fe8
- (struct CGRect)imageOrientedViewCropRect:(struct CGRect)arg1;	// IMP=0x0000000000159f74
- (struct CGRect)viewOrientedViewCropRect:(struct CGRect)arg1;	// IMP=0x0000000000159ed4
- (struct CGAffineTransform)imageOrientedViewCropTransform;	// IMP=0x000000000015981d
- (struct CGAffineTransform)_modelSpaceToViewSpaceTransformWithModelCropRect:(struct CGRect)arg1 currentViewCropRect:(struct CGRect)arg2;	// IMP=0x00000000001593eb
- (double)_viewScaleWithModelCropRect:(struct CGRect)arg1;	// IMP=0x0000000000159391
- (double)_zoomScaleForCurrentCropRectAndModelRect;	// IMP=0x0000000000159330
- (double)_zoomScaleForModelCropRect:(struct CGRect)arg1;	// IMP=0x00000000001592fc
- (struct CGRect)_fullCropRect;	// IMP=0x000000000015922e
- (void)_updateImageModulation;	// IMP=0x000000000015907c
- (void)_invalidateImageLayerModulator;	// IMP=0x0000000000158ff7
- (void)_invalidateImageModulationManager;	// IMP=0x0000000000158fc2
- (struct CGSize)_sizeRotatedIfNeeded:(struct CGSize)arg1;	// IMP=0x0000000000158f78
- (void)mediaViewDidFinishRendering:(id)arg1;	// IMP=0x0000000000158e5b
- (void)setImageModulationOptions:(CDStruct_910f5d27)arg1;	// IMP=0x0000000000158dd9
- (void)_setupMediaWithComposition:(id)arg1;	// IMP=0x0000000000158b16
- (void)tearDownMediaViewAndLayers;	// IMP=0x0000000000158a1e
- (void)setVideoComposition:(id)arg1 withSeekTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x0000000000158986
- (void)setAutoloopComposition:(id)arg1;	// IMP=0x00000000001588e0
- (void)setLivePhoto:(id)arg1;	// IMP=0x0000000000158866
- (void)setImageSize:(struct CGSize)arg1;	// IMP=0x000000000015872a
- (void)setImage:(id)arg1;	// IMP=0x0000000000158564
- (id)cropModel;	// IMP=0x000000000015854f
- (void)_setCropModel:(id)arg1;	// IMP=0x000000000015840c
- (void)setOrientation:(long long)arg1;	// IMP=0x0000000000158125
- (void)setNeedsLayerTransformsUpdateAnimated:(_Bool)arg1;	// IMP=0x00000000001580fe
- (void)setStraightenAngle:(double)arg1;	// IMP=0x0000000000158052
- (void)setYawAngle:(double)arg1;	// IMP=0x0000000000157fa3
- (void)setPitchAngle:(double)arg1;	// IMP=0x0000000000157ef4
- (void)layoutSubviews;	// IMP=0x0000000000157e97
- (void)setCanvasFrame:(struct CGRect)arg1;	// IMP=0x0000000000157e06
- (void)setMuted:(_Bool)arg1;	// IMP=0x0000000000157df6
- (_Bool)isMuted;	// IMP=0x0000000000157de6
- (void)setModelCropRect:(struct CGRect)arg1 viewCropRect:(struct CGRect)arg2;	// IMP=0x0000000000157c9e
- (void)_resetCropRect;	// IMP=0x0000000000157bbf
- (void)updateLayerTransformsAnimated:(_Bool)arg1 viewCropRect:(struct CGRect)arg2 modelCropRect:(struct CGRect)arg3;	// IMP=0x0000000000156ef7
- (void)updateLayerTransformsAnimated:(_Bool)arg1;	// IMP=0x0000000000156e77
- (id)_animateValueFromValue:(double)arg1 toValue:(double)arg2 interpolation:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000156cea
- (struct CGSize)masterImageSize;	// IMP=0x0000000000156c97
- (struct CATransform3D)_imageOrientationTransform;	// IMP=0x0000000000156c30
- (struct CATransform3D)_imageOrientationTransformWithoutTranslation;	// IMP=0x0000000000156bb8
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000156bb0
- (void)dealloc;	// IMP=0x0000000000156b6f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000156405

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
