//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _UIFeedbackCoreHapticsEngine;
@protocol CHHapticPatternPlayer, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIFeedbackCoreHapticsPlayer : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;	// 8 = 0x8
    CDUnknownBlockType _invalidationBlock;	// 16 = 0x10
    _UIFeedbackCoreHapticsEngine *_hapticEngine;	// 24 = 0x18
    id <CHHapticPatternPlayer> _coreHapticsPlayer;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000006d012e
@property(retain, nonatomic) id <CHHapticPatternPlayer> coreHapticsPlayer; // @synthesize coreHapticsPlayer=_coreHapticsPlayer;
@property(nonatomic) __weak _UIFeedbackCoreHapticsEngine *hapticEngine; // @synthesize hapticEngine=_hapticEngine;
@property(copy, nonatomic) CDUnknownBlockType invalidationBlock; // @synthesize invalidationBlock=_invalidationBlock;
- (void)_internal_stopFeedbackData:(id)arg1 forFeedback:(id)arg2;	// IMP=0x00000000006cfece
- (void)_stopFeedback:(id)arg1;	// IMP=0x00000000006cfde1
- (_Bool)_internal_playFeedbackData:(id)arg1 forFeedback:(id)arg2 atTime:(double)arg3;	// IMP=0x00000000006cf945
- (void)_playFeedback:(id)arg1 atTime:(double)arg2;	// IMP=0x00000000006cf844
- (void)_internal_updateValueForParameters:(id)arg1 withKey:(id)arg2;	// IMP=0x00000000006ce7d4
- (void)_updateValueForParameters:(id)arg1 withKey:(id)arg2;	// IMP=0x00000000006ce6fc
- (id)_internal_createFixedParameterForParameters:(id)arg1 withKey:(id)arg2 forEventType:(id)arg3;	// IMP=0x00000000006cd716
- (id)_internal_createPatternForFeedbackData:(id)arg1 feedback:(id)arg2 engine:(id)arg3;	// IMP=0x00000000006cd05f
- (id)_internal_createEventsForFeedbackData:(id)arg1 engine:(id)arg2 parameters:(id *)arg3 parameterCurves:(id *)arg4;	// IMP=0x00000000006ccf79
- (id)_internal_createEventsForTransientHapticData:(id)arg1;	// IMP=0x00000000006cc978
- (id)_internal_createEventsForLegacyFeedbackData:(id)arg1;	// IMP=0x00000000006cc1e3
- (id)_internal_createEventsForFileFeedbackData:(id)arg1 engine:(id)arg2 parameters:(id *)arg3 parameterCurves:(id *)arg4;	// IMP=0x00000000006cb4c9
- (id)_internal_createPlayerWithPattern:(id)arg1;	// IMP=0x00000000006cb16f
- (id)initWithEngine:(id)arg1;	// IMP=0x00000000006cb0dd

@end

