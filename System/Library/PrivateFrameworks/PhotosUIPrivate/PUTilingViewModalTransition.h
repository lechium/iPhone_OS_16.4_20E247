//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUModalTransition.h"

@class NSString, PUTilingViewTransitionHelper;

__attribute__((visibility("hidden")))
@interface PUTilingViewModalTransition : PUModalTransition
{
    PUTilingViewTransitionHelper *__tilingViewTransitionHelper;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000004c82fb
@property(readonly, nonatomic) PUTilingViewTransitionHelper *_tilingViewTransitionHelper; // @synthesize _tilingViewTransitionHelper=__tilingViewTransitionHelper;
- (void)resumeTransition:(_Bool)arg1;	// IMP=0x00000000004c829e
- (void)updatePausedTransitionWithProgress:(double)arg1 interactionProgress:(double)arg2;	// IMP=0x00000000004c8245
- (void)pauseTransitionWithOptions:(unsigned long long)arg1;	// IMP=0x00000000004c81f9
- (void)pauseTransition;	// IMP=0x00000000004c81bc
@property(readonly, nonatomic, getter=isTransitionPaused) _Bool transitionPaused;
@property(readonly, nonatomic) _Bool hasStarted;
- (void)_animateTransitionWithOperation:(long long)arg1;	// IMP=0x00000000004c80d2
- (void)animateDismissTransition;	// IMP=0x00000000004c80bb
- (void)animatePresentTransition;	// IMP=0x00000000004c80a4
- (_Bool)isInteractive;	// IMP=0x00000000004c809c
- (id)init;	// IMP=0x00000000004c7f69

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

