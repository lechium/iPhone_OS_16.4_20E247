//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRLCanvasKnob, CRLInteractiveCanvasController, NSMutableSet;

@interface CRLCanvasRepEnterExitNotifier : NSObject
{
    CRLInteractiveCanvasController *_interactiveCanvasController;	// 8 = 0x8
    NSMutableSet *_currentlyHitReps;	// 16 = 0x10
    CRLCanvasKnob *_overKnob;	// 24 = 0x18
    _Bool _currentlyExiting;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000001cc16d
- (void)p_updateEnteredRepsAtPoint:(struct CGPoint)arg1 withPlatformObject:(id)arg2;	// IMP=0x00100000001cbc1b
- (void)p_updateEnteredKnobsAtPoint:(struct CGPoint)arg1 withPlatformObject:(id)arg2;	// IMP=0x00100000001cbad3
- (void)cursorExitedAtPoint:(struct CGPoint)arg1 withPlatformObject:(id)arg2;	// IMP=0x00100000001cb901
- (void)updateEnteredExitedRepStateAtPoint:(struct CGPoint)arg1 withPlatformObject:(id)arg2;	// IMP=0x00100000001cb886
- (void)cursorEnteredAtPoint:(struct CGPoint)arg1 withPlatformObject:(id)arg2;	// IMP=0x00100000001cb80b
- (id)initWithInteractiveCanvasController:(id)arg1;	// IMP=0x00100000001cb78d

@end
