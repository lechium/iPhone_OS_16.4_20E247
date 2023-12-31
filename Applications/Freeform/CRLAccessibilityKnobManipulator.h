//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CRLCanvasLayoutManipulatingTracker;

@interface CRLAccessibilityKnobManipulator : NSObject
{
    id _tracker;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000051ed62
- (void)operationDidEnd;	// IMP=0x001000000051ed5c
- (_Bool)readyToEndOperation;	// IMP=0x001000000051ed54
@property(readonly, nonatomic) NSObject<CRLCanvasLayoutManipulatingTracker> *tracker;
- (_Bool)allowTrackerManipulatorToTakeControl:(id)arg1;	// IMP=0x001000000051ed3e
- (void)performMoveOfKnob:(id)arg1 toUnscaledPosition:(struct CGPoint)arg2 withTracker:(id)arg3 rep:(id)arg4 andICC:(id)arg5;	// IMP=0x001000000051eae4

// Remaining properties
@property(readonly, nonatomic) _Bool allowUndoRedoOperations;

@end

