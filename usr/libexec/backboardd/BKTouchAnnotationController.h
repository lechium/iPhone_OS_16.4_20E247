//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKDisplayAnnotationController, MISSING_TYPE, NSString;
@protocol OS_dispatch_queue;

@interface BKTouchAnnotationController : NSObject
{
    _Bool _shouldVisualizeTouches;	// 8 = 0x8
    _Bool _shouldVisualizeHitTestRegions;	// 9 = 0x9
    BKDisplayAnnotationController *_displayAnnotationController;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
}

+ (id)workQueue;	// IMP=0x002000000002dd0b
- (void).cxx_destruct;	// IMP=0x002000000002d1b9
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) BKDisplayAnnotationController *displayAnnotationController; // @synthesize displayAnnotationController=_displayAnnotationController;
- (void)_queue_touchWasSoftCanceled:(unsigned int)arg1;	// IMP=0x001000000002cf8b
- (void)_queue_touchWasHardCanceled:(unsigned int)arg1;	// IMP=0x001000000002cecf
- (void)_queue_setCenter:(struct CGPoint)arg1 forTouchIdentifier:(unsigned int)arg2;	// IMP=0x001000000002cd79
- (id)_keyPathForTouchIdentifier:(unsigned int)arg1;	// IMP=0x001000000002cd55
- (int)_pidForClientPort:(unsigned int)arg1;	// IMP=0x001000000002ccdc
- (id)_stringDescribingContextID:(unsigned int)arg1 clientPort:(unsigned int)arg2;	// IMP=0x001000000002cbc2
- (id)_stringDescribingPID:(int)arg1;	// IMP=0x001000000002caad
- (id)_stringByRemovingPrefix:(id)arg1 fromString:(id)arg2;	// IMP=0x001000000002c9f2
- (void)_queue_removeAnnotationForTouch:(unsigned int)arg1 withUniqueIdentifier:(id)arg2;	// IMP=0x001000000002c9d0
- (void)_queue_annotateTouch:(unsigned int)arg1 withString:(id)arg2 uniqueIdentifier:(id)arg3 fromPID:(int)arg4;	// IMP=0x001000000002c719
- (void)_queue_annotateTouch:(unsigned int)arg1 withUniqueString:(id)arg2;	// IMP=0x001000000002c6fe
- (void)_queue_updateHoverStateForTouchIdentifier:(unsigned int)arg1 z:(double)arg2 maxZ:(double)arg3;	// IMP=0x001000000002c66b
- (void)hitTestRegionsDidChange:(id)arg1;	// IMP=0x001000000002c5e0
- (void)touchDidFinishProcessingTouchCollection;	// IMP=0x001000000002c5da
- (void)touchWillStartProcessingTouchCollection;	// IMP=0x001000000002c5d4
- (void)touchDidSoftCancel:(unsigned int)arg1;	// IMP=0x001000000002c586
- (void)touch:(unsigned int)arg1 didAlwaysRouteToContext:(unsigned int)arg2 clientPort:(unsigned int)arg3;	// IMP=0x001000000002c531
- (void)touchDidHIDCancel:(unsigned int)arg1;	// IMP=0x001000000002c4e3
- (void)touch:(unsigned int)arg1 pathIndex:(long long)arg2 rangeOutAtPoint:(struct CGPoint)arg3;	// IMP=0x001000000002c495
- (MISSING_TYPE *)touch:pathIndex:upAtPoint:detached: /* Error: Ran out of types for this method. */;	// IMP=0x001000000002c447
- (void)touch:(unsigned int)arg1 didMoveToPoint:(struct CGPoint)arg2 eventMask:(unsigned int)arg3 z:(double)arg4 maxZ:(double)arg5;	// IMP=0x001000000002c3e5
- (void)touchDidTransfer:(unsigned int)arg1 destination:(id)arg2;	// IMP=0x001000000002c34e
- (void)touchDidDetach:(unsigned int)arg1 destinations:(id)arg2;	// IMP=0x001000000002c300
- (void)touch:(unsigned int)arg1 didHitTestToDestination:(id)arg2 hostingChainIndex:(long long)arg3;	// IMP=0x001000000002c262
- (void)touch:(unsigned int)arg1 pathIndex:(long long)arg2 downAtPoint:(struct CGPoint)arg3 eventMask:(unsigned int)arg4 transducerType:(unsigned int)arg5;	// IMP=0x001000000002c202
- (void)touch:(unsigned int)arg1 pathIndex:(long long)arg2 rangeInAtPoint:(struct CGPoint)arg3 eventMask:(unsigned int)arg4 z:(double)arg5 maxZ:(double)arg6 transducerType:(unsigned int)arg7;	// IMP=0x001000000002c19c
- (void)_queue_applyBasicAnnotationTextForTouchIdentifier:(unsigned int)arg1 pathIndex:(long long)arg2;	// IMP=0x001000000002c030
- (void)annotateTouch:(unsigned int)arg1 withString:(id)arg2 uniqueIdentifier:(id)arg3 fromPID:(int)arg4;	// IMP=0x001000000002bf62
- (void)annotateTouch:(unsigned int)arg1 withString:(id)arg2 uniqueIdentifier:(id)arg3;	// IMP=0x001000000002be9f
- (void)annotateTouch:(unsigned int)arg1 withUniqueString:(id)arg2;	// IMP=0x001000000002be08
@property _Bool shouldVisualizeHitTestRegions;
@property _Bool shouldVisualizeTouches;
- (id)initWithDisplayUUID:(id)arg1;	// IMP=0x001000000002bb79

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
