//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebCore/WAKView.h>

@class NSMutableArray, WebNodeHighlight;

__attribute__((visibility("hidden")))
@interface WebNodeHighlightView : WAKView
{
    WebNodeHighlight *_webNodeHighlight;	// 8 = 0x8
    NSMutableArray *_layers;	// 16 = 0x10
}

- (id)webNodeHighlight;	// IMP=0x0000000000110600
- (void)layoutSublayers:(id)arg1;	// IMP=0x00000000001104d0
- (void)_layoutForRectsHighlight:(void *)arg1 parent:(id)arg2;	// IMP=0x0000000000110390
- (void)_layoutForNodeHighlight:(void *)arg1 parent:(id)arg2;	// IMP=0x000000000010f660
- (void)_attach:(id)arg1 numLayers:(unsigned long long)arg2;	// IMP=0x000000000010f550
- (_Bool)isFlipped;	// IMP=0x000000000010f540
- (void)detachFromWebNodeHighlight;	// IMP=0x000000000010f510
- (void)dealloc;	// IMP=0x000000000010f4a0
- (id)initWithWebNodeHighlight:(id)arg1;	// IMP=0x000000000010f420
- (void)_removeAllLayers;	// IMP=0x000000000010f2c0

@end

