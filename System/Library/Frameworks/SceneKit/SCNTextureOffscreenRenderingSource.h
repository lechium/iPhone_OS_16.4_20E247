//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SCNTextureSource.h"

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface SCNTextureOffscreenRenderingSource : SCNTextureSource
{
    _Bool _usesIOSurface;	// 32 = 0x20
    struct CGSize _framebufferSize;	// 40 = 0x28
    struct __C3DFramebuffer *_framebuffer;	// 56 = 0x38
}

- (void)_unbindFramebuffer:(struct __C3DEngineContext *)arg1;	// IMP=0x00000000002a96c9
- (void)_bindFramebuffer:(struct __C3DEngineContext *)arg1;	// IMP=0x00000000002a969a
- (void)_buildMipmaps:(struct __C3DEngineContext *)arg1;	// IMP=0x00000000002a9603
- (struct __C3DTexture *)__prepareFramebufferWithSize:(struct CGSize)arg1 withEngineContext:(struct __C3DEngineContext *)arg2 textureSampler:(struct __C3DTextureSampler *)arg3 needsStencil:(_Bool)arg4;	// IMP=0x00000000002a94e3
- (void)_createFramebufferWithEngineContext:(struct __C3DEngineContext *)arg1 size:(struct CGSize)arg2;	// IMP=0x00000000002a937f
- (void)cleanup:(struct __C3DRendererContext *)arg1;	// IMP=0x00000000002a933b
- (MISSING_TYPE *)textureSize;	// IMP=0x00000000002a9325

@end

