//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIGestureRecognizer.h>

@class CRLCanvasKnob, CRLCanvasRep, CRLInteractiveCanvasController;
@protocol CRLCanvasRepRotateTracking;

@interface CRLiOSRepRotateKnobGestureRecognizer : UIGestureRecognizer
{
    CRLInteractiveCanvasController *_interactiveCanvasController;	// 8 = 0x8
    _Bool _rotatingAroundOppositeKnob;	// 16 = 0x10
    double _lastAngleInRadians;	// 24 = 0x18
    struct CGPoint _unscaledRotationCenter;	// 32 = 0x20
    struct CGPoint _knobToTouchUnscaledOffset;	// 48 = 0x30
    struct CGPoint _repCenterInNaturalSpace;	// 64 = 0x40
    struct CGPoint _oppositeKnobPositionInNaturalSpace;	// 80 = 0x50
    CRLCanvasKnob *_knob;	// 96 = 0x60
    CRLCanvasRep *_rep;	// 104 = 0x68
    id <CRLCanvasRepRotateTracking> _tracker;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00200000001f14ef
@property(retain, nonatomic) id <CRLCanvasRepRotateTracking> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) CRLCanvasRep *rep; // @synthesize rep=_rep;
@property(retain, nonatomic) CRLCanvasKnob *knob; // @synthesize knob=_knob;
- (unsigned long long)p_standardKnobTagBeingDragged;	// IMP=0x00100000001f144d
- (struct CGPoint)p_rotationCenterInNaturalSpace;	// IMP=0x00100000001f141c
- (struct CGPoint)p_rotationCenterInParentSpace;	// IMP=0x00100000001f12fb
- (struct CGPoint)p_rotationCenterInUnscaledSpace;	// IMP=0x00100000001f1209
- (_Bool)p_shouldRotateAroundOppositeKnob;	// IMP=0x00100000001f11ca
- (double)p_angleInRadiansForPoint:(struct CGPoint)arg1;	// IMP=0x00100000001f11a9
- (void)p_updateTrackerStateAtUnscaledPoint:(struct CGPoint)arg1;	// IMP=0x00100000001f0d53
- (void)operationDidEnd;	// IMP=0x00100000001f0cc3
- (_Bool)readyToEndOperation;	// IMP=0x00100000001f0ca9
- (_Bool)allowTrackerManipulatorToTakeControl:(id)arg1;	// IMP=0x00100000001f0c8c
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00100000001f0c2a
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00100000001f0a0f
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x00100000001f0907
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00100000001efcd3
- (void)setAllowedTouchTypes:(id)arg1;	// IMP=0x00100000001efb14
- (void)reset;	// IMP=0x00100000001efa51
- (id)initWithInteractiveCanvasController:(id)arg1;	// IMP=0x00100000001ef9c1

// Remaining properties
@property(readonly, nonatomic) _Bool allowUndoRedoOperations;

@end

