//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class NSMutableDictionary, NSObject, NSString, PDFPage, PDFRenderingProperties;
@protocol PDFPageLayerGeometryInterface;

__attribute__((visibility("hidden")))
@interface PDFSimplePageLayer : CALayer
{
    PDFPage *_page;	// 8 = 0x8
    NSObject<PDFPageLayerGeometryInterface> *_geometryInterface;	// 16 = 0x10
    PDFRenderingProperties *_renderingProperties;	// 24 = 0x18
    NSMutableDictionary *_pageLayerEffects;	// 32 = 0x20
    CALayer *_effectsLayer;	// 40 = 0x28
    unsigned long long _visibilityDelegateIndex;	// 48 = 0x30
    double _contentsScale;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000006df0d
- (void)_pageChangedPageRef:(id)arg1;	// IMP=0x000000000006defb
- (void)_pageDidRotate:(id)arg1;	// IMP=0x000000000006dd0c
- (void)_updateLayerEffect:(id)arg1 withPageTransform:(struct CGAffineTransform)arg2;	// IMP=0x000000000006da6f
- (id)_pageLayerEffects;	// IMP=0x000000000006da52
- (void)_updateGeometry;	// IMP=0x000000000006d978
- (void)drawInContext:(struct CGContext *)arg1;	// IMP=0x000000000006d872
- (unsigned long long)visibilityDelegateIndex;	// IMP=0x000000000006d861
- (void)setVisibilityDelegateIndex:(unsigned long long)arg1;	// IMP=0x000000000006d850
- (void)willEndStartLiveResize;	// IMP=0x000000000006d84a
- (void)willStartLiveResize;	// IMP=0x000000000006d844
- (void)applyTileLayoutScale:(double)arg1;	// IMP=0x000000000006d83e
- (void)restoreOriginalTileLayout;	// IMP=0x000000000006d838
- (void)saveOriginalTileLayout;	// IMP=0x000000000006d832
- (void)clearTiles;	// IMP=0x000000000006d82c
- (void)forceTileUpdate;	// IMP=0x000000000006d826
- (_Bool)enablesTileUpdates;	// IMP=0x000000000006d81e
- (void)setEnableTileUpdates:(_Bool)arg1;	// IMP=0x000000000006d818
- (void)scalePageLayerEffects:(double)arg1;	// IMP=0x000000000006d747
- (struct CGAffineTransform)layerEffectTransform;	// IMP=0x000000000006d657
- (void)updatePageLayerEffects;	// IMP=0x000000000006d49b
- (void)updatePageLayerEffectForID:(id)arg1;	// IMP=0x000000000006d3d8
- (id)pageLayerEffectForID:(id)arg1;	// IMP=0x000000000006d3bb
- (void)removePageLayerEffectForID:(id)arg1;	// IMP=0x000000000006d2f3
- (void)addPageLayerEffect:(id)arg1;	// IMP=0x000000000006d12d
- (_Bool)isVisible;	// IMP=0x000000000006cfd2
- (long long)displayBox;	// IMP=0x000000000006cf98
- (void)setNeedsTilesUpdate;	// IMP=0x000000000006cf3c
- (id)renderingProperties;	// IMP=0x000000000006cf23
- (id)geometryInterface;	// IMP=0x000000000006cf0a
- (id)page;	// IMP=0x000000000006cef1
- (void)dealloc;	// IMP=0x000000000006ce9e
- (id)initWithPage:(id)arg1 geometryInterface:(id)arg2 andRenderingProperties:(id)arg3;	// IMP=0x000000000006cad0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

