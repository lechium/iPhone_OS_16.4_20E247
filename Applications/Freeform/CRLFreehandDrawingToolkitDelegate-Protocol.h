//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CRLInteractiveCanvasController;

@protocol CRLFreehandDrawingToolkitDelegate <NSObject>
@property(readonly, nonatomic) _Bool wantsToSuppressKnobsOnTransformReps;
@property(readonly, nonatomic) _Bool isInDrawingMode;
@property(readonly, nonatomic) _Bool canBeginFreehandDrawingMode;
@property(readonly, nonatomic) CRLInteractiveCanvasController *interactiveCanvasControllerForFreehandDrawingTools;
- (unsigned long long)freehandDrawingBehaviorAtUnscaledPoint:(struct CGPoint)arg1;
- (void)toolkitDidDrawWithIndirectTouch;
- (void)toolkitDidDrawWithFinger;
- (void)toolkitDidDrawWithPencil;
- (void)beginDrawingTransformModeIfNeeded;
- (void)endDrawingModeIfNeeded;
- (void)beginDrawingModeIfNeeded;
@end
