//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKMousePointerAnimationDriver, CADisplayLink, MISSING_TYPE;

@interface BKMousePointerAnimation : NSObject
{
    struct CGPoint _relativeTranslation;	// 8 = 0x8
    struct CGPoint _destinationPoint;	// 24 = 0x18
    MISSING_TYPE *_targetFPS;	// 40 = 0x28
    struct CGPoint _lastSentOriginRelativeOffset;	// 48 = 0x30
    CADisplayLink *_displayLink;	// 64 = 0x40
    BKMousePointerAnimationDriver *_animationDriver;	// 72 = 0x48
    CDUnknownBlockType _applierBlock;	// 80 = 0x50
    CDUnknownBlockType _completionBlock;	// 88 = 0x58
    double _initialTimestamp;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00200000000486d6
@property(readonly, nonatomic) struct CGPoint destinationPoint; // @synthesize destinationPoint=_destinationPoint;
- (_Bool)isComplete;	// IMP=0x0010000000048685
- (void)stop;	// IMP=0x001000000004861c
- (void)start;	// IMP=0x0010000000048558
- (void)displayLinkFired:(id)arg1;	// IMP=0x0010000000048460
- (id)initWithRelativeTranslation:(struct CGPoint)arg1 destinationPoint:(struct CGPoint)arg2 animationDriver:(id)arg3 updateRate:(long long)arg4 applierBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x001000000004831d

@end
