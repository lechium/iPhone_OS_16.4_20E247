//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AVPanGestureIncrement : NSObject
{
    _Bool _hasMultipleTouches;	// 8 = 0x8
    double _timestamp;	// 16 = 0x10
    struct CGPoint _translation;	// 24 = 0x18
    struct CGPoint _velocity;	// 40 = 0x28
}

+ (id)gestureIncrementWithTranslation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2 timestamp:(double)arg3 hasMultipleTouches:(_Bool)arg4;	// IMP=0x006000000004de48
@property(readonly, nonatomic) _Bool hasMultipleTouches; // @synthesize hasMultipleTouches=_hasMultipleTouches;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) struct CGPoint velocity; // @synthesize velocity=_velocity;
@property(readonly, nonatomic) struct CGPoint translation; // @synthesize translation=_translation;
- (id)debugDescription;	// IMP=0x000000000004ddcb

@end
