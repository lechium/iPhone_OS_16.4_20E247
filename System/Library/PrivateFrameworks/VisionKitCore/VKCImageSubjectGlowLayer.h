//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

__attribute__((visibility("hidden")))
@interface VKCImageSubjectGlowLayer : CALayer
{
    _Bool _active;	// 8 = 0x8
    CALayer *_glowLayer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000950f5
@property(retain, nonatomic) CALayer *glowLayer; // @synthesize glowLayer=_glowLayer;
@property(nonatomic) _Bool active; // @synthesize active=_active;
- (id)animationGroupWithDuration:(double)arg1 beginTime:(double)arg2 animations:(id)arg3;	// IMP=0x0000000000095010
- (id)animationWithKeyPath:(id)arg1 beginTime:(double)arg2 duration:(double)arg3;	// IMP=0x0000000000094f65
- (id)shapeLayerLineWidth:(double)arg1 opacity:(double)arg2 path:(struct CGPath *)arg3;	// IMP=0x0000000000094e6f
- (void)renderGlowParameters:(id)arg1 path:(struct CGPath *)arg2 pathLength:(double)arg3 duration:(double)arg4 maxStrokeLengthFraction:(id)arg5;	// IMP=0x0000000000094614
- (void)configureAnimationWithViewScale:(double)arg1 screenScale:(double)arg2 path:(id)arg3;	// IMP=0x000000000009421a
- (void)hideGlow:(_Bool)arg1;	// IMP=0x0000000000094095
- (void)stopAnimationAnimated:(_Bool)arg1;	// IMP=0x0000000000094065
- (void)beginAnimationWithViewScale:(double)arg1 screenScale:(double)arg2 path:(id)arg3;	// IMP=0x0000000000093f47
- (id)thickGlowParametersWithViewScale:(double)arg1;	// IMP=0x0000000000093e58
- (id)thinGlowParametersWithScreenScale:(double)arg1 viewScale:(double)arg2;	// IMP=0x0000000000093d3b
- (id)init;	// IMP=0x0000000000093c67

@end

