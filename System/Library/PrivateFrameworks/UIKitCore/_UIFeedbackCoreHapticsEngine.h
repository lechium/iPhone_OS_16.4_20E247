//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIFeedbackEngine.h"

@class CHHapticEngine, NSMutableSet;

__attribute__((visibility("hidden")))
@interface _UIFeedbackCoreHapticsEngine : _UIFeedbackEngine
{
    NSMutableSet *_playersInUse;	// 8 = 0x8
    NSMutableSet *_playersToInvalidate;	// 16 = 0x10
    CHHapticEngine *_coreHapticsEngine;	// 24 = 0x18
}

+ (void)_setHapticPatternClass:(Class)arg1;	// IMP=0x00600000006c8044
+ (void)_setHapticEngineCreationBlock:(CDUnknownBlockType)arg1;	// IMP=0x00600000006c8023
+ (void)_loadHapticEngineClass;	// IMP=0x00600000006c7f65
+ (_Bool)_supportsAbortingDeactivation;	// IMP=0x00600000006c7f5d
+ (_Bool)_supportsPlayingFeedbackPatternsDirectly;	// IMP=0x00600000006c7f55
+ (_Bool)_supportsPlayingIndividualFeedback:(id)arg1;	// IMP=0x00600000006c7f41
+ (_Bool)_supportsPlayingIndividualFeedback:(id)arg1 allowsIgnoreCapture:(_Bool)arg2;	// IMP=0x00600000006c7bb4
+ (id)sharedEngine;	// IMP=0x00600000006c7b2f
+ (id)_internalQueue;	// IMP=0x00600000006c7aac
- (void).cxx_destruct;	// IMP=0x00000000006cac5d
@property(readonly, nonatomic) CHHapticEngine *coreHapticsEngine; // @synthesize coreHapticsEngine=_coreHapticsEngine;
- (id)_stats_key;	// IMP=0x00000000006cac3f
- (void)_internal_dequeueReusableFeedbackPlayerWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000006ca923
- (void)_internal_startRunningFeedbackPlayerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000006ca4e7
- (void)_internal_teardownUnderlyingPlayerIfPossibleWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000006c9e48
- (void)_internal_activateUnderlyingPlayerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000006c9c7c
- (void)_internal_cooldownUnderlyingPlayerIfPossibleWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000006c9aca
- (void)_internal_prewarmUnderlyingPlayerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000006c9679
- (void)_internal_coreHapticsEngineFinishedWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000006c8f8e
- (_Bool)_internal_initializeCoreHapticsEngine;	// IMP=0x00000000006c8d90
- (id)_internal_createCoreHapticsEngine;	// IMP=0x00000000006c8528
- (void)_internal_coreHapticsEngineStoppedForReason:(long long)arg1;	// IMP=0x00000000006c84c6
- (void)_coreHapticsEngineStoppedForReason:(long long)arg1;	// IMP=0x00000000006c8425
- (void)_internal_resetCoreHapticsEngine;	// IMP=0x00000000006c8185
- (void)_resetCoreHapticsEngine;	// IMP=0x00000000006c8080
- (id)init;	// IMP=0x00000000006c8051

@end

