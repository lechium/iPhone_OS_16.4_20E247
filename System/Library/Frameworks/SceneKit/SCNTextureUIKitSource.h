//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CALayer, UIView, UIWindow;

__attribute__((visibility("hidden")))
@interface SCNTextureUIKitSource
{
    _Bool _windowReady;	// 64 = 0x40
    id _source;	// 72 = 0x48
    UIWindow *_uiWindow;	// 80 = 0x50
    UIView *_uiView;	// 88 = 0x58
    struct CGSize _sizeCache;	// 96 = 0x60
    unsigned int _textureID;	// 112 = 0x70
    CALayer *_uiWindowLayer;	// 120 = 0x78
    _Bool _isOpaque;	// 128 = 0x80
    struct __C3DEngineContext *_engineContext;	// 136 = 0x88
    struct __C3DTextureSampler *_textureSampler;	// 144 = 0x90
}

@property(nonatomic) _Bool isOpaque; // @synthesize isOpaque=_isOpaque;
@property(retain, nonatomic) id source; // @synthesize source=_source;
@property(retain, nonatomic) UIView *uiView; // @synthesize uiView=_uiView;
@property(retain, nonatomic) CALayer *uiWindowLayer; // @synthesize uiWindowLayer=_uiWindowLayer;
@property(retain, nonatomic) UIWindow *uiWindow; // @synthesize uiWindow=_uiWindow;
- (void)_layerTreeDidUpdate;	// IMP=0x0000000000284dce
- (struct __C3DTexture *)textureWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;	// IMP=0x0000000000284d6b
- (struct CGSize)layerSizeInPixels;	// IMP=0x0000000000284ccf
- (double)layerContentsScaleFactor;	// IMP=0x0000000000284c9d
- (id)layer;	// IMP=0x0000000000284c80
- (float)clearValue;	// IMP=0x0000000000284c6b
- (id)layerToFocusForRenderedLayer:(id)arg1;	// IMP=0x0000000000284c5a
- (void)cleanup:(struct __C3DRendererContext *)arg1;	// IMP=0x0000000000284c08
- (void)setup;	// IMP=0x0000000000284b9b
- (void)dealloc;	// IMP=0x0000000000284a95
- (_Bool)requiresMainThreadUpdates;	// IMP=0x0000000000284a8d
- (_Bool)shouldFlip;	// IMP=0x0000000000284a85
- (_Bool)supportsMetal;	// IMP=0x0000000000284a7d

@end

