//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface _UIVisualEffectViewCornerMask : NSObject
{
    UIImage *_image;	// 8 = 0x8
    struct CGRect _imageCenter;	// 16 = 0x10
    unsigned long long _appliedCorners;	// 48 = 0x30
    _Bool _continuous;	// 56 = 0x38
    _Bool _effectsEdges;	// 57 = 0x39
    double _radius;	// 64 = 0x40
}

+ (void)_applyZeroMaskToLayer:(id)arg1;	// IMP=0x00100000001023a4
+ (id)imageCornerMaskWithImage:(id)arg1 radius:(double)arg2;	// IMP=0x0010000000101fa9
+ (id)cornerMaskWithRadius:(double)arg1 continuous:(_Bool)arg2 cornerMask:(unsigned long long)arg3;	// IMP=0x0010000000101f58
+ (id)continuousCornerMaskWithRadius:(double)arg1;	// IMP=0x0010000000101f3c
+ (id)cornerMaskWithRadius:(double)arg1;	// IMP=0x0010000000101f23
- (void).cxx_destruct;	// IMP=0x00000000001025b1
@property(readonly, nonatomic) double radius; // @synthesize radius=_radius;
- (_Bool)_isCornerWithRadius:(double)arg1 continuous:(_Bool)arg2 mask:(unsigned long long)arg3;	// IMP=0x000000000010257c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000102461
- (void)_applyToLayer:(id)arg1;	// IMP=0x00000000001022c7
- (id)cornerMaskEffectingEdges:(_Bool)arg1;	// IMP=0x000000000010228c
- (id)cornerMaskAppliedToCorners:(unsigned long long)arg1;	// IMP=0x000000000010224b
- (id)_clone;	// IMP=0x00000000001021e1
- (_Bool)cornersAreContinuous;	// IMP=0x00000000001021d8
- (id)init;	// IMP=0x0000000000101ed5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000101eca

@end
