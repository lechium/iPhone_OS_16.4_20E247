//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAMediaTimingFunction, NSArray;

__attribute__((visibility("hidden")))
@interface SHListeningOuterCirclesLayer
{
    NSArray *_outerCircleLayers;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000bff1
@property(retain, nonatomic) NSArray *outerCircleLayers; // @synthesize outerCircleLayers=_outerCircleLayers;
@property(readonly, nonatomic) CAMediaTimingFunction *linearTimingFunction;
@property(readonly, nonatomic) CAMediaTimingFunction *inOutQuartTimingFunction;
@property(readonly, nonatomic) CAMediaTimingFunction *inOutSineTimingFunction;
- (id)outerCircleCoreScaleAnimation;	// IMP=0x000000000000be21
- (id)outerCircleCoreBorderWidthAnimation;	// IMP=0x000000000000bca9
- (id)outerCircleCoreSizeAnimation;	// IMP=0x000000000000bb53
- (id)scaleNullAnimation;	// IMP=0x000000000000b9fd
- (void)addCoreAnimationToOuterCircleLayer:(id)arg1 withStartOffset:(double)arg2;	// IMP=0x000000000000b6c9
- (void)addScaleAnimationToCircleLayer:(id)arg1;	// IMP=0x000000000000b635
- (void)startListeningAnimation;	// IMP=0x000000000000b51d
- (void)layoutSublayers;	// IMP=0x000000000000b2ae
- (id)buildOuterCircleLayers;	// IMP=0x000000000000b16b
- (void)setup;	// IMP=0x000000000000b000

@end
