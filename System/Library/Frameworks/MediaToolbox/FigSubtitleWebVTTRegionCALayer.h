//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "FigBaseCALayer.h"

__attribute__((visibility("hidden")))
@interface FigSubtitleWebVTTRegionCALayer : FigBaseCALayer
{
    struct OpaqueFigSubtitleWebVTTRegionCALayerInternal *layerInternal;	// 16 = 0x10
}

- (void)handleNeedsLayoutNotification;	// IMP=0x0000000000026047
- (void)layoutSublayers;	// IMP=0x0000000000025b12
- (void)setReLayout;	// IMP=0x0000000000025a8b
- (void)setNeedsDisplay;	// IMP=0x0000000000025970
- (void)setViewport:(struct CGRect)arg1;	// IMP=0x00000000000258de
- (void)setRenderer:(struct OpaqueFigSubtitleRenderer *)arg1;	// IMP=0x000000000002586b
- (void)setContent:(struct __CFDictionary *)arg1;	// IMP=0x00000000000254fa
- (struct __CFString *)getContentID;	// IMP=0x0000000000025480
- (void)dealloc;	// IMP=0x000000000002539d
- (id)init;	// IMP=0x00000000000251ff

@end
