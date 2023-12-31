//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PDFTilePoolPrivate;

__attribute__((visibility("hidden")))
@interface PDFTilePool : NSObject
{
    PDFTilePoolPrivate *_private;	// 8 = 0x8
}

+ (id)sharedPool;	// IMP=0x0060000000040037
- (void).cxx_destruct;	// IMP=0x0000000000041467
- (int)activeTileCount;	// IMP=0x000000000004144d
- (void)releasePDFTileSurface:(id)arg1;	// IMP=0x0000000000041314
- (void)_renderTileForRequest:(id)arg1;	// IMP=0x00000000000408e3
- (struct CGContext *)_createContextForTileSurface:(id)arg1 ofRequest:(id)arg2;	// IMP=0x00000000000407ed
- (id)_createTileSurfaceForRequest:(id)arg1;	// IMP=0x000000000004040c
- (void)requestPDFTileSurfaceForTarget:(id)arg1 forPage:(id)arg2 withRenderingProperties:(id)arg3 atZoomFactor:(double)arg4 frame:(struct CGRect)arg5 transform:(struct CGAffineTransform)arg6 tag:(int)arg7;	// IMP=0x0000000000040222
- (void)saveBitmapFiles;	// IMP=0x000000000004021c
- (int)tileSurfaceType;	// IMP=0x000000000004020f
- (void)setTileSurfaceType:(int)arg1;	// IMP=0x0000000000040202
- (int)tileSurfaceSize;	// IMP=0x00000000000401f7
- (void)dealloc;	// IMP=0x0000000000040161
- (id)init;	// IMP=0x000000000004008c

@end

