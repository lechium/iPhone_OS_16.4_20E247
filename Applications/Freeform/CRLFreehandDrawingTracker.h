//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRLFreehandDrawingTool, CRLFreehandDrawingToolInputPoint, CRLInteractiveCanvasController, NSMutableArray, NSString;

@interface CRLFreehandDrawingTracker : NSObject
{
    CRLInteractiveCanvasController *_icc;	// 8 = 0x8
    CRLFreehandDrawingTool *_trackingTool;	// 16 = 0x10
    NSMutableArray *_pendingInputPointsToSendToTool;	// 24 = 0x18
    CRLFreehandDrawingToolInputPoint *_lastInputPointSentToTool;	// 32 = 0x20
    _Bool _operationShouldBeDynamic;	// 40 = 0x28
    _Bool _hasBegunDrawing;	// 41 = 0x29
    _Bool _hasExecutedCommand;	// 42 = 0x2a
    _Bool _hasFinishBeenCalled;	// 43 = 0x2b
    _Bool _wasSuccessful;	// 44 = 0x2c
    _Bool _isEnqueueingCommandsInRealTime;	// 45 = 0x2d
}

+ (_Bool)p_operationShouldBeDynamicUsingToolType:(unsigned long long)arg1;	// IMP=0x002000000059d917
- (void).cxx_destruct;	// IMP=0x002000000059f163
@property(readonly, nonatomic) _Bool isEnqueueingCommandsInRealTime; // @synthesize isEnqueueingCommandsInRealTime=_isEnqueueingCommandsInRealTime;
- (_Bool)operationShouldBeDynamic;	// IMP=0x001000000059f151
- (_Bool)supportsAlignmentGuides;	// IMP=0x001000000059f149
- (_Bool)shouldOpenCommandGroupToCommitChangesForReps:(id)arg1;	// IMP=0x001000000059f141
- (void)commitChangesForReps:(id)arg1;	// IMP=0x001000000059ebf4
- (void)p_commandControllerDidExecuteUserCommand:(id)arg1;	// IMP=0x001000000059ea1a
- (void)p_setTrackingToolIfNeeded;	// IMP=0x001000000059e424
- (void)changeDynamicLayoutsForReps:(id)arg1;	// IMP=0x001000000059dd4e
- (void)willBeginDynamicOperationForReps:(id)arg1;	// IMP=0x001000000059db69
- (_Bool)allowPopoverToRemainOpenDuringDynamicOperation;	// IMP=0x001000000059db61
@property(readonly, nonatomic) _Bool disallowCanvasGrowingWhileTracking;
- (void)finishWithSuccess:(_Bool)arg1;	// IMP=0x001000000059db0c
- (void)addPoint:(id)arg1;	// IMP=0x001000000059d924
- (id)initWithInteractiveCanvasController:(id)arg1;	// IMP=0x001000000059d460

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool disallowAllActionsWhileTracking;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
