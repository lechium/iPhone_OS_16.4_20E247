//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "FigBaseCALayer.h"

__attribute__((visibility("hidden")))
@interface FigFCRCALayerOutputNodeLayer : FigBaseCALayer
{
    struct OpaqueFigCaptionRendererCALayerOutputNodeLayerInternal *layerInternal;	// 16 = 0x10
}

- (void)addAnimation:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000012bb40
- (void)_addPositionAnimationToLayer:(id)arg1 usingAnimation:(id)arg2 forKey:(id)arg3;	// IMP=0x000000000012b9b5
- (void)_addBoundsAnimationToLayer:(id)arg1 usingAnimation:(id)arg2 forKey:(id)arg3;	// IMP=0x000000000012b68d
- (void)setNodeSeparated:(_Bool)arg1;	// IMP=0x000000000012b5fe
- (void)setNodeOptions:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x000000000012b56b
- (void)setWindowOpacity:(double)arg1;	// IMP=0x000000000012b555
- (void)dealloc;	// IMP=0x000000000012b4f6
- (id)init;	// IMP=0x000000000012b49d
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000012b484

@end
