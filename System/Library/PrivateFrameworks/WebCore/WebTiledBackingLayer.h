//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

__attribute__((visibility("hidden")))
@interface WebTiledBackingLayer : CALayer
{
    struct unique_ptr<WebCore::TileController, std::default_delete<WebCore::TileController>> _tileController;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x0000000000d5c290
- (void).cxx_destruct;	// IMP=0x0000000000d5c250
- (void)setBorderWidth:(double)arg1;	// IMP=0x0000000000d5c210
- (void)setBorderColor:(struct CGColor *)arg1;	// IMP=0x0000000000d5c160
- (void)invalidate;	// IMP=0x0000000000d5c120
- (struct TiledBacking *)tiledBacking;	// IMP=0x0000000000d5c100
- (double)contentsScale;	// IMP=0x0000000000d5c0c0
- (void)setContentsScale:(double)arg1;	// IMP=0x0000000000d5c0a0
- (_Bool)wantsDeepColorBackingStore;	// IMP=0x0000000000d5c080
- (void)setWantsDeepColorBackingStore:(_Bool)arg1;	// IMP=0x0000000000d5c050
- (_Bool)drawsAsynchronously;	// IMP=0x0000000000d5c020
- (void)setDrawsAsynchronously:(_Bool)arg1;	// IMP=0x0000000000d5bff0
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;	// IMP=0x0000000000d5bed0
- (void)setNeedsDisplay;	// IMP=0x0000000000d5be80
- (_Bool)isOpaque;	// IMP=0x0000000000d5be50
- (void)setOpaque:(_Bool)arg1;	// IMP=0x0000000000d5be20
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000000d5bd30
- (id)actionForKey:(id)arg1;	// IMP=0x0000000000d5bd20
- (void *)createTileController:(void *)arg1;	// IMP=0x0000000000d5bcc0
- (void)dealloc;	// IMP=0x0000000000d5bc90
- (id)init;	// IMP=0x0000000000d5bc60

@end
