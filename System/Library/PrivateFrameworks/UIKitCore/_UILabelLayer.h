//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class _UILabelContentLayer;

__attribute__((visibility("hidden")))
@interface _UILabelLayer : CALayer
{
    _UILabelContentLayer *_contentLayer;	// 8 = 0x8
    _Bool _contentInsetsValid;	// 16 = 0x10
    struct UIEdgeInsets _contentInsets;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000013d0934
- (void)setContentsScale:(double)arg1;	// IMP=0x00000000013d08de
- (void)setContentsMultiplyColor:(struct CGColor *)arg1;	// IMP=0x00000000013d0888
- (void)setContentsFormat:(id)arg1;	// IMP=0x00000000013d0816
- (void)setNeedsDisplayOnBoundsChange:(_Bool)arg1;	// IMP=0x00000000013d07c0
- (void)setContentsGravity:(id)arg1;	// IMP=0x00000000013d074e
- (id)_labelLayerToClipDuringBoundsSizeAnimation;	// IMP=0x00000000013d0732
- (void)_setLabelMasksToBoundsForAnimation:(_Bool)arg1;	// IMP=0x00000000013d0703
- (void)setMasksToBounds:(_Bool)arg1;	// IMP=0x00000000013d0687
- (void)_clearContents;	// IMP=0x00000000013d0645
- (void)_updateContentLayer;	// IMP=0x00000000013d0468
- (void)invalidateContentInsets;	// IMP=0x00000000013d043b
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;	// IMP=0x00000000013d03c6
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x00000000013d032e
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000013d0296
- (void)layoutSublayers;	// IMP=0x00000000013cff61
- (void)updateContentInsets;	// IMP=0x00000000013cfe0d

@end

