//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKInkOverlayView, AKPageController, AKShapeDetectionController, NSString;
@protocol PKRulerHostingDelegate;

@interface AKInkPageOverlayController : NSObject
{
    _Bool _ignoreAnnotationAndSelectionKVO;	// 8 = 0x8
    _Bool _onlyPencilDraws;	// 9 = 0x9
    AKInkOverlayView *_inkOverlayView;	// 16 = 0x10
    AKPageController *_pageController;	// 24 = 0x18
    AKShapeDetectionController *_shapeDetectionController;	// 32 = 0x20
    id <PKRulerHostingDelegate> _rulerHostingDelegate;	// 40 = 0x28
    CDUnknownBlockType _delayedShapeDetectionBlock;	// 48 = 0x30
    double _lastStrokeEndTime;	// 56 = 0x38
}

+ (id)newInkOverlayDrawingUndoTargetWithPageController:(id)arg1;	// IMP=0x0010000000061e48
- (void).cxx_destruct;	// IMP=0x00000000000647c3
@property double lastStrokeEndTime; // @synthesize lastStrokeEndTime=_lastStrokeEndTime;
@property(copy) CDUnknownBlockType delayedShapeDetectionBlock; // @synthesize delayedShapeDetectionBlock=_delayedShapeDetectionBlock;
@property _Bool onlyPencilDraws; // @synthesize onlyPencilDraws=_onlyPencilDraws;
@property _Bool ignoreAnnotationAndSelectionKVO; // @synthesize ignoreAnnotationAndSelectionKVO=_ignoreAnnotationAndSelectionKVO;
@property(nonatomic) __weak id <PKRulerHostingDelegate> rulerHostingDelegate; // @synthesize rulerHostingDelegate=_rulerHostingDelegate;
@property(retain) AKShapeDetectionController *shapeDetectionController; // @synthesize shapeDetectionController=_shapeDetectionController;
@property __weak AKPageController *pageController; // @synthesize pageController=_pageController;
- (id)_convertCHDrawing:(id)arg1 fromDrawingInCanvasView:(id)arg2 toInkOverlayView:(id)arg3;	// IMP=0x00000000000644a5
- (struct CGRect)_convertRect:(struct CGRect)arg1 fromDrawingInCanvasView:(id)arg2 toPageControllerModelSpace:(id)arg3;	// IMP=0x0000000000064334
- (struct CGSize)scaleFromDrawingInCanvasView:(id)arg1 toPageControllerModelSpace:(id)arg2;	// IMP=0x00000000000642db
- (void)_tearDownGestureDependencies;	// IMP=0x00000000000641ab
- (void)_updateGestureDependencyPriority;	// IMP=0x0000000000063b9f
- (void)_setupGestureDependencies;	// IMP=0x0000000000063966
- (void)_updateAllowedTouchTypesAllEnabled:(_Bool)arg1 pencilEnabled:(_Bool)arg2;	// IMP=0x0000000000063774
- (void)_controllerWillSave:(id)arg1;	// IMP=0x0000000000063708
- (void)_toolStatusUpdated:(id)arg1;	// IMP=0x00000000000634ee
- (void)_inkCanvasAnnotationUpdated:(id)arg1;	// IMP=0x00000000000633bd
- (void)_enclosingScrollViewDidScroll:(id)arg1;	// IMP=0x0000000000063312
- (void)didToggleRuler;	// IMP=0x0000000000063248
- (void)_inkDidChangeNotification:(id)arg1;	// IMP=0x00000000000630df
- (_Bool)shapeDetectionController:(id)arg1 shouldSelectCandidateAnnotation:(id)arg2;	// IMP=0x000000000006302f
- (_Bool)isWaitingToCoalesceStrokes;	// IMP=0x0000000000063027
- (_Bool)isIgnoringAnnotationAndSelectionKVO:(id)arg1;	// IMP=0x0000000000063015
- (void)endIgnoringAnnotationSelectionObservation:(id)arg1;	// IMP=0x0000000000063001
- (void)beginIgnoringAnnotationSelectionObservation:(id)arg1;	// IMP=0x0000000000062fea
- (id)overlayView:(id)arg1;	// IMP=0x0000000000062fd8
- (struct CGRect)shapeDetectionControllerPositioningRectForCandidatePicker:(id)arg1;	// IMP=0x0000000000062fba
- (void)shapeDetectionControllerWillPickCandidate:(id)arg1 isInk:(_Bool)arg2;	// IMP=0x0000000000062f1c
- (void)_performDelayedShapeDetection;	// IMP=0x0000000000062ea5
- (void)inputView:(id)arg1 didCollectDrawingForAnalysis:(id)arg2;	// IMP=0x000000000006243d
- (void)inputViewDidBeginStroke:(id)arg1;	// IMP=0x00000000000622ce
- (_Bool)inputViewCanBeginDrawing:(id)arg1 withTouch:(id)arg2;	// IMP=0x0000000000061e61
@property(retain) AKInkOverlayView *inkOverlayView; // @synthesize inkOverlayView=_inkOverlayView;
- (void)annotationEditingDidEndWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000061c8a
- (void)_partialTeardown;	// IMP=0x0000000000061b59
- (void)teardown;	// IMP=0x0000000000061ad9
- (void)_fullSetup;	// IMP=0x00000000000612ab
- (void)setup;	// IMP=0x0000000000060ff0
- (id)initWithPageController:(id)arg1;	// IMP=0x0000000000060f88

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

