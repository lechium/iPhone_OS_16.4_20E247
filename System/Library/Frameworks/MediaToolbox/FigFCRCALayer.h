//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "FigBaseCALayer.h"

__attribute__((visibility("hidden")))
@interface FigFCRCALayer : FigBaseCALayer
{
    struct OpaqueFigCaptionRendererCALayerInternal *layerInternal;	// 16 = 0x10
}

- (void)layoutSublayers;	// IMP=0x0000000000009d87
- (void)compose;	// IMP=0x0000000000009b37
- (void)setCallbacks:(id)arg1 userEvent:(CDUnknownFunctionPointerType)arg2 viewportChanged:(CDUnknownFunctionPointerType)arg3 drawInContext:(CDUnknownFunctionPointerType)arg4;	// IMP=0x0000000000009b0a
- (void)clear:(struct CGRect)arg1;	// IMP=0x0000000000009b04
- (void)setVideoBounds:(struct CGRect)arg1;	// IMP=0x0000000000009ae3
- (void)dealloc;	// IMP=0x0000000000009a7c
- (id)init;	// IMP=0x0000000000009960
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000009947

@end

