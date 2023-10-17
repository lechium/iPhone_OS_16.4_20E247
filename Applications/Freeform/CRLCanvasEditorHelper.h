//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRLCanvasEditor, CRLDragAndDropCanvasHighlightDecorator, CRLInteractiveCanvasController, CRLKeyboardMovementManipulator, CRLiOSContextMenuController, NSString, _TtC8Freeform21CRLEditingCoordinator;
@protocol CRLCanvasEditor;

@interface CRLCanvasEditorHelper : NSObject
{
    id <CRLCanvasEditor> mCanvasEditor;	// 8 = 0x8
    _Bool mTornDown;	// 16 = 0x10
    CRLKeyboardMovementManipulator *mKeyboardManipulator;	// 24 = 0x18
    CRLDragAndDropCanvasHighlightDecorator *mDragAndDropHighlightDecorator;	// 32 = 0x20
    _Bool mCustomPasteMenuDisplayed;	// 40 = 0x28
    CRLiOSContextMenuController *mContextMenuController;	// 48 = 0x30
}

+ (_Bool)physicalKeyboardIsSender:(id)arg1;	// IMP=0x00200000002253b6
+ (Class)selectionClass;	// IMP=0x0010000000223691
- (void).cxx_destruct;	// IMP=0x0020000000239c16
@property(nonatomic) _Bool customPasteMenuDisplayed; // @synthesize customPasteMenuDisplayed=mCustomPasteMenuDisplayed;
@property(retain, nonatomic) CRLiOSContextMenuController *contextMenuController; // @synthesize contextMenuController=mContextMenuController;
- (void)p_beginEditingTextShape:(id)arg1 replacementRange:(struct _NSRange)arg2 withText:(id)arg3;	// IMP=0x00100000002398dd
- (void)beginEditingOnKeyInputWithString:(id)arg1;	// IMP=0x0010000000239802
- (id)shapeInfoToBeginEditing;	// IMP=0x001000000023954b
- (void)contextMenuDidHideForContextMenuController:(id)arg1;	// IMP=0x00100000002394c4
- (void)addMiniFormatterElementsToArray:(id)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x0010000000238bcf
- (void)addContextualMenuElementsToArray:(id)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x001000000023775f
- (void)crlaxAddContextualMenuOptionsToArray:(id)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x00100000002372cc
- (void)addContextualMenuItemsToArray:(id)arg1;	// IMP=0x00100000002371e8
- (void)prepareGeometryForInsertingImageInfo:(id)arg1 forDragAndDropAtPoint:(struct CGPoint)arg2;	// IMP=0x00100000002371e2
- (_Bool)insertBoardItemsFromDragAndDrop:(id)arg1 atPoint:(struct CGPoint)arg2 onRep:(id)arg3 insertionContext:(id)arg4 alreadyPositionedInputInfos:(_Bool)arg5;	// IMP=0x0010000000236211
- (_Bool)wantsToHighlightRep:(id)arg1 forDragOperationWithDragInfo:(id)arg2 atPoint:(struct CGPoint)arg3 allowNonPlaceholderReplacement:(_Bool)arg4;	// IMP=0x0010000000235e82
- (_Bool)handleDragOperation:(unsigned long long)arg1 withDragInfo:(id)arg2 atUnscaledPoint:(struct CGPoint)arg3;	// IMP=0x0010000000235e7a
- (unsigned long long)dragOperationForDragInfo:(id)arg1 atUnscaledPoint:(struct CGPoint)arg2;	// IMP=0x0010000000235e72
- (void)hideDragAndDropUI;	// IMP=0x0010000000235e40
- (void)updateDragAndDropUIForPoint:(struct CGPoint)arg1 dragInfo:(id)arg2;	// IMP=0x0010000000235d28
- (id)repToHighlightForDragInfo:(id)arg1 atUnscaledPoint:(struct CGPoint)arg2;	// IMP=0x0010000000235c2d
- (void)presentMediaCompatibilityAlertWithReasons:(long long)arg1 forMediaType:(long long)arg2 forSingleMediaObject:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000235b84
- (void)arrowKeyReceivedInDirection:(unsigned long long)arg1 withModifierKeys:(id)arg2;	// IMP=0x001000000023547a
- (void)zoomOut:(id)arg1;	// IMP=0x00100000002353c2
- (void)zoomIn:(id)arg1;	// IMP=0x001000000023530a
- (void)scrollCanvasPageUp:(id)arg1;	// IMP=0x00100000002352ce
- (void)scrollCanvasPageDown:(id)arg1;	// IMP=0x0010000000235292
- (void)scrollCanvasRight:(id)arg1;	// IMP=0x0010000000235256
- (void)scrollCanvasLeft:(id)arg1;	// IMP=0x001000000023521a
- (void)scrollCanvasDown:(id)arg1;	// IMP=0x00100000002351de
- (void)scrollCanvasUp:(id)arg1;	// IMP=0x00100000002351a5
- (void)p_scrollCanvasForScrollType:(unsigned long long)arg1;	// IMP=0x001000000023510c
- (struct CGPoint)contentOffsetForDocumentNavigationType:(unsigned long long)arg1;	// IMP=0x0010000000234f4a
- (_Bool)p_allowsCanvasScrollingFromKeyboard;	// IMP=0x0010000000234e96
- (struct CGPoint)p_offsetToMoveLayout:(id)arg1 edge:(int)arg2 toOffset:(double)arg3 inRootSpace:(_Bool)arg4;	// IMP=0x0010000000234c7d
- (struct CGPoint)p_offsetToMoveCenterOfLayout:(id)arg1 toPoint:(struct CGPoint)arg2 inRootSpace:(_Bool)arg3;	// IMP=0x0010000000234af0
- (struct CGRect)p_boundingBoxForLayouts:(id)arg1 inRootSpace:(_Bool)arg2;	// IMP=0x00100000002348ff
- (void)didRepositionLayouts:(id)arg1 additionalData:(id *)arg2;	// IMP=0x00100000002348f9
- (void)willRepositionLayouts:(id)arg1 additionalData:(id *)arg2;	// IMP=0x00100000002348f3
- (void)distributeDrawablesEvenly;	// IMP=0x0010000000233833
- (void)distributeDrawablesByEdge:(int)arg1;	// IMP=0x0010000000232d94
- (void)alignDrawablesByEdge:(int)arg1;	// IMP=0x0010000000232400
- (id)layoutsForAlignAndDistribute;	// IMP=0x001000000023214b
- (void)sendToBack:(id)arg1;	// IMP=0x00100000002320e1
- (void)sendBackward:(id)arg1;	// IMP=0x0010000000232077
- (void)bringForward:(id)arg1;	// IMP=0x001000000023200d
- (void)bringToFront:(id)arg1;	// IMP=0x0010000000231fa3
- (void)reduceDocumentFileSize:(id)arg1;	// IMP=0x0010000000231f66
- (void)reduceFileSizeForSelectedImages:(id)arg1;	// IMP=0x0010000000231f60
- (_Bool)p_canReduceFileSizeForSelectedImages;	// IMP=0x0010000000231e77
- (void)enterQuickSelectMode:(id)arg1;	// IMP=0x0010000000231dc6
- (id)insertCopiesOfInfos:(id)arg1 forDuplicatingDragOnRep:(id)arg2;	// IMP=0x0010000000231a6b
- (struct CGPoint)p_centerOfBoardItems:(id)arg1;	// IMP=0x001000000023144f
- (void)prepareGeometryForPastingBoardItems:(id)arg1 fromPasteboard:(id)arg2 intoContainer:(id)arg3 useOriginalPositions:(_Bool)arg4;	// IMP=0x00100000002311b4
- (void)prepareGeometryForInsertingNativelySourcedShapes:(id)arg1 intoFreehandDrawing:(id)arg2;	// IMP=0x00100000002311a2
- (void)p_fixupGeometryForInsertingBoardItems:(id)arg1 intoContainer:(id)arg2;	// IMP=0x0010000000230d30
- (void)prepareGeometryForInsertingBoardItems:(id)arg1 withInsertionContext:(id)arg2;	// IMP=0x0010000000230966
- (id)commandsToSwapConnectionsFromRep:(id)arg1 toInfo:(id)arg2;	// IMP=0x00100000002304b7
- (id)infosToDeleteToDeleteInfos:(id)arg1;	// IMP=0x0010000000230042
- (id)commandForDeletingInfosPossiblyFromMultipleContainers:(id)arg1 shouldRemoveEmptyContainers:(_Bool)arg2 canDeleteNewlyCreatedInfos:(_Bool)arg3;	// IMP=0x001000000022f7d3
- (id)commandForDeletingInfosPossiblyFromMultipleContainers:(id)arg1 shouldRemoveEmptyContainers:(_Bool)arg2;	// IMP=0x001000000022f7be
- (id)commandForDeletingBoardItemsFromTopLevelContainer:(id)arg1 shouldRemoveEmptyContainers:(_Bool)arg2;	// IMP=0x001000000022f70c
- (id)commandToInsertBoardItems:(id)arg1 intoContainer:(id)arg2 belowBoardItem:(id)arg3 withOffset:(unsigned long long)arg4;	// IMP=0x001000000022f226
- (id)commandForInsertingBoardItemsIntoTopLevelContainer:(id)arg1 below:(id)arg2 withOffset:(unsigned long long)arg3;	// IMP=0x001000000022f098
- (id)commandForInsertingBoardItemsIntoTopLevelContainer:(id)arg1 below:(id)arg2;	// IMP=0x001000000022f083
- (void)replaceBoardItem:(id)arg1 withBoardItem:(id)arg2;	// IMP=0x001000000022ee3e
- (_Bool)canReplaceBoardItem:(id)arg1;	// IMP=0x001000000022ee36
- (id)commandForReplacingImagePlaceholderInSelection:(id)arg1 withBoardItems:(id)arg2 isCrossDocument:(_Bool)arg3 withSender:(id)arg4 outSelectionBehavior:(out id *)arg5;	// IMP=0x001000000022e856
- (void)didMaskImage:(id)arg1 additionalData:(id)arg2;	// IMP=0x001000000022e850
- (void)willMaskImage:(id)arg1 withShapeInfo:(id)arg2 additionalData:(id *)arg3;	// IMP=0x001000000022e84a
- (void)maskImage:(id)arg1 withShapeType:(long long)arg2;	// IMP=0x001000000022e374
- (void)p_maskImage:(id)arg1 withShape:(id)arg2 shouldOpenGroup:(_Bool)arg3 shouldBeginEditing:(_Bool)arg4 shouldCenterAroundFaces:(_Bool)arg5;	// IMP=0x001000000022d9d3
- (void)maskImage:(id)arg1 withShape:(id)arg2 shouldOpenGroup:(_Bool)arg3 shouldBeginEditing:(_Bool)arg4;	// IMP=0x001000000022d9b1
- (void)maskWithShapeType:(long long)arg1;	// IMP=0x001000000022d5ef
- (void)maskWithShape;	// IMP=0x001000000022cfc4
- (void)mask;	// IMP=0x001000000022ccf7
- (void)selectParent:(id)arg1;	// IMP=0x001000000022cbfa
- (_Bool)canInsertBoardItems:(id)arg1 intoGroup:(id)arg2;	// IMP=0x001000000022c8c3
- (_Bool)canGroupBoardItems:(id)arg1;	// IMP=0x001000000022c646
- (void)ungroup:(id)arg1;	// IMP=0x001000000022bd78
- (id)commandsForUngrouping:(id)arg1 objectsToSelect:(id)arg2;	// IMP=0x001000000022ad62
- (void)group:(id)arg1;	// IMP=0x001000000022a7e9
- (id)p_commandsForGroupingBoardItems:(id)arg1 outNewGroup:(id *)arg2;	// IMP=0x001000000022a15d
- (id)p_commandsToPrepareForGroupingBoardItems:(id)arg1 infosToAdjustForConnectionLines:(id)arg2;	// IMP=0x001000000022a0a0
- (id)drawablesToLockOrUnlockForInfos:(id)arg1;	// IMP=0x001000000022a08a
- (void)unlock:(id)arg1;	// IMP=0x001000000022a076
- (void)lock:(id)arg1;	// IMP=0x0010000000229e04
- (void)p_setLockStatusOfSelectedDrawables:(_Bool)arg1;	// IMP=0x00100000002298cf
- (void)deselectAll:(id)arg1;	// IMP=0x0010000000229840
- (void)duplicate:(id)arg1;	// IMP=0x001000000022953a
- (void)pasteValues:(id)arg1;	// IMP=0x0010000000229362
- (void)pasteAsPlainText:(id)arg1;	// IMP=0x0010000000229185
- (void)paste:(id)arg1;	// IMP=0x0010000000228fe2
- (void)cut:(id)arg1;	// IMP=0x0010000000228e88
- (void)p_copy:(id)arg1;	// IMP=0x0010000000228e16
- (void)delete:(id)arg1;	// IMP=0x0010000000228c19
- (void)perform_deleteBoardItems:(id)arg1;	// IMP=0x0010000000228853
- (void)perform_delete;	// IMP=0x0010000000228807
- (void)deleteBoardItems:(id)arg1;	// IMP=0x00100000002287f5
- (id)boardItemsToDelete;	// IMP=0x0010000000228731
- (id)selectionBehaviorForDeletingBoardItems:(id)arg1;	// IMP=0x0010000000228345
- (id)topMostContainerForDeletingContainer:(id)arg1;	// IMP=0x0010000000227e15
- (long long)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x001000000022796a
- (long long)canvasEditorCanPerformSendDrawablesBackwardActionWithSender:(id)arg1;	// IMP=0x001000000022776f
- (long long)canvasEditorCanPerformBringDrawablesForwardActionWithSender:(id)arg1;	// IMP=0x0010000000227574
- (id)tooltipForMoveForward;	// IMP=0x0010000000227511
- (id)tooltipForMoveBackward;	// IMP=0x00100000002274ae
- (id)tooltipForMoveToFront;	// IMP=0x001000000022744b
- (id)tooltipForMoveToBack;	// IMP=0x00100000002273e8
- (_Bool)canDivideCompoundShape:(id)arg1;	// IMP=0x00100000002273e0
- (_Bool)canUngroupGroupInfo:(id)arg1;	// IMP=0x0010000000227387
- (_Bool)canUngroupWithSelection:(id)arg1;	// IMP=0x00100000002271fd
- (long long)canvasEditorCanPerformLockAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0010000000226ebf
- (_Bool)canPerformMaskWithShapeTypeWithSender:(id)arg1;	// IMP=0x0010000000226c26
- (_Bool)canPerformMaskWithShapeWithSender:(id)arg1;	// IMP=0x0010000000226841
- (_Bool)canPerformUnmaskWithSender:(id)arg1;	// IMP=0x00100000002266b1
- (_Bool)canPerformMaskWithSender:(id)arg1;	// IMP=0x00100000002264a9
- (long long)canvasEditorCanPerformDistributeActionWithSender:(id)arg1;	// IMP=0x0010000000226414
- (long long)canvasEditorCanPerformAlignAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x001000000022637f
- (long long)canvasEditorCanPerformConnectWithConnectionLineAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x00100000002262dd
- (long long)canvasEditorCanPerformUngroupActionWithSender:(id)arg1;	// IMP=0x0010000000226226
- (long long)canvasEditorCanPerformGroupActionWithSender:(id)arg1;	// IMP=0x0010000000225e48
- (long long)canvasEditorCanPerformDeselectAllAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0010000000225dcf
- (_Bool)allowSelectAllForSender:(id)arg1 hasNothingVisiblySelected:(_Bool)arg2 hasAtLeastOneThingToSelect:(_Bool)arg3;	// IMP=0x0010000000225ca4
- (long long)canvasEditorCanPerformSelectAllAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0010000000225c16
- (long long)canvasEditorCanPerformDuplicateAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0010000000225b29
- (long long)canvasEditorCanPerformPastePreservingFormulasAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0010000000225a9b
- (long long)canvasEditorCanPerformPasteValuesAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0010000000225a0d
- (long long)canvasEditorCanPerformPasteAsPlainTextAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x001000000022597f
- (long long)canvasEditorCanPerformPasteAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x00100000002258e6
- (long long)canvasEditorCanPerformCutAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0010000000225853
- (long long)canvasEditorCanPerformCopyStyleAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x00100000002257da
- (long long)canvasEditorCanPerformCopyAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0000000000225741
- (long long)canvasEditorCanPerformDeleteAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x00100000002256a5
- (_Bool)canPasteWithItemSource:(id)arg1 sender:(id)arg2;	// IMP=0x001000000022540b
- (_Bool)shouldAllowPotentiallyKeyboardBasedActionForSender:(id)arg1;	// IMP=0x0010000000225327
- (id)p_canvasSelectionPathChangingInfo:(id)arg1 shouldExclude:(_Bool)arg2;	// IMP=0x001000000022504f
- (id)selectionPathForInsertingBoardItems:(id)arg1 byReplacingInfosInSelectionPath:(id)arg2 preservingMultipleContainers:(_Bool)arg3;	// IMP=0x00100000002247ee
- (id)selectionPathByReplacingInfosInSelectionPath:(id)arg1 withInfos:(id)arg2 preservingMultipleContainers:(_Bool)arg3;	// IMP=0x00100000002244d1
- (id)selectionPathByReplacingInfosInSelectionPath:(id)arg1 withInfos:(id)arg2;	// IMP=0x00100000002244bc
- (id)canvasSelectionPathExcludingInfo:(id)arg1;	// IMP=0x00100000002244a5
- (id)canvasSelectionPathIncludingInfo:(id)arg1;	// IMP=0x0010000000224491
- (id)selectionPathWithInfos:(id)arg1;	// IMP=0x0010000000223f90
- (id)selectionPathWithInfo:(id)arg1;	// IMP=0x0010000000223f04
- (id)permittedActionsForReasons:(unsigned long long)arg1;	// IMP=0x0010000000223ee0
- (Class)p_editorClassForBoardItems:(id)arg1 shouldIgnoreLockedState:(_Bool)arg2;	// IMP=0x0010000000223bee
- (Class)editorClassForInfos:(id)arg1;	// IMP=0x0010000000223bda
- (id)nextEditorForSelection:(id)arg1 withNewEditorStack:(id)arg2 selectionPath:(id)arg3;	// IMP=0x00100000002236a2
- (_Bool)isLayoutSelectable:(id)arg1;	// IMP=0x001000000022353d
- (void)dealloc;	// IMP=0x0010000000223349
- (void)teardown;	// IMP=0x001000000022333f
- (id)pasteboardController;	// IMP=0x00100000002232ef
- (id)keyboardMovementManipulator;	// IMP=0x00100000002232e1
@property(readonly, nonatomic) _TtC8Freeform21CRLEditingCoordinator *editingCoordinator;
@property(readonly, nonatomic) CRLInteractiveCanvasController *interactiveCanvasController;
@property(readonly, nonatomic) CRLCanvasEditor *canvasEditor;
- (id)initWithCanvasEditor:(id)arg1;	// IMP=0x0010000000223144

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
