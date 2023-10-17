//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CRLCanvasRep, CRLCursor, CRLCursorPlatformObject, CRLEditingCoordinator, CRLEditorController, CRLSelectionPath, CRLSubselection, NSArray, NSMutableArray, NSObject, NSSet, NSString, UIContextMenuConfiguration, UIContextMenuInteraction;
@protocol CRLCanvasElementInfo, CRLEditor, CRLSearchReference, UIContextMenuInteractionAnimating;

@protocol CRLEditor <NSObject>
@property(readonly, nonatomic) CRLEditingCoordinator *editingCoordinator;
@property(retain, nonatomic) CRLEditorController *editorController;
- (void)selectionDidChangeFromSelection:(CRLSubselection *)arg1 toSelection:(CRLSubselection *)arg2 withFlags:(unsigned long long)arg3;
- (CRLSubselection *)selectionWillChangeFromSelection:(CRLSubselection *)arg1 toSelection:(CRLSubselection *)arg2 withFlags:(unsigned long long)arg3 inSelectionPath:(CRLSelectionPath *)arg4 withNewEditors:(NSArray *)arg5;
- (NSObject<CRLEditor> *)nextEditorForSelection:(CRLSubselection *)arg1 withNewEditorStack:(NSArray *)arg2 selectionPath:(CRLSelectionPath *)arg3;
- (_Bool)shouldRemainOnEditorStackForSelection:(CRLSubselection *)arg1 inSelectionPath:(CRLSelectionPath *)arg2 withNewEditors:(NSArray *)arg3;

@optional
@property(readonly, nonatomic) _Bool shouldPreventQuickSelect;
@property(readonly, nonatomic) double liftDelayOverride;
@property(readonly, nonatomic) id <CRLSearchReference> editingSearchReference;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingEditRecording;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingReplacement;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingFreehandAnimations;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingAttribution;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingCalloutAttributes;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingShrinkTextToFit;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingResize;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingSmartShapeAttributes;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingEndpoints;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingConnectionLineAttributes;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingTextInset;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingAccessibilityDescription;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingOpacity;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingReflection;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingShadow;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingStroke;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingFill;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)cancelOperation:(id)arg1;
- (void)selectLastContainerTab:(id)arg1;
- (void)selectFirstContainerTab:(id)arg1;
- (void)selectNextContainerTab:(id)arg1;
- (void)selectPreviousContainerTab:(id)arg1;
- (void)decreaseFontSizeByOne:(id)arg1;
- (void)increaseFontSizeByOne:(id)arg1;
- (void)maskWithSelection:(id)arg1;
- (void)distributeDrawablesEvenly:(id)arg1;
- (_Bool)wantsStickyNoteMiniFormatterVariant;
- (_Bool)shouldSuppressMiniFormatter;
- (void)addMiniFormatterElementsToArray:(NSMutableArray *)arg1 atPoint:(struct CGPoint)arg2;
- (void)selectAllForQuickSelect:(id)arg1;
- (NSString *)quickSelectHUDIconSystemImageName;
- (NSString *)quickSelectHUDTitle;
- (_Bool)wantsToPreserveEditorSelection;
- (void)handleAlternateContextMenuBehaviorAtPoint:(struct CGPoint)arg1;
- (_Bool)wantsAlternateContextMenuBehaviorAtPoint:(struct CGPoint)arg1;
- (void)contextMenuInteraction:(UIContextMenuInteraction *)arg1 willEndForConfiguration:(UIContextMenuConfiguration *)arg2 animator:(id <UIContextMenuInteractionAnimating>)arg3;
- (void)crlaxAddContextualMenuOptionsToArray:(NSMutableArray *)arg1 atPoint:(struct CGPoint)arg2;
- (void)addContextualMenuElementsToArray:(NSMutableArray *)arg1 atPoint:(struct CGPoint)arg2;
- (void)addContextualMenuItemsToArray:(NSMutableArray *)arg1;
- (struct CGRect)targetRectForEditMenu;
- (CRLCursor *)cursorAtPoint:(struct CGPoint)arg1 withCursorPlatformObject:(CRLCursorPlatformObject *)arg2;
- (void)selectParent:(id)arg1;
- (void)reverseTableDirection:(id)arg1;
- (void)reverseDirection:(id)arg1;
- (_Bool)canBeginEditingRepOnDoubleTap:(CRLCanvasRep *)arg1;
- (_Bool)canRemainDuringSharedReadOnlyMode;
- (_Bool)canSaveSelectionToArchivedViewState;
- (_Bool)canRemainDuringUserInitiatedSave;
- (_Bool)canRemainDuringDragInsert;
- (double)targetPointSizeForSelectionWithViewScale:(double)arg1;
- (void)deleteForward:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (void)duplicate:(id)arg1;
- (void)delete:(id)arg1;
- (void)deselectAll:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)select:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (_Bool)shouldProhibitAction:(SEL)arg1;
- (NSSet *)permittedActionsForReasons:(unsigned long long)arg1;
- (long long)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
- (void)tearDown;
- (void)willEnterForeground;
- (void)didEnterBackground;
- (void)willResignActive;
- (void)didResignTextInputEditor;
- (void)willResignTextInputEditor;
- (void)didBecomeTextInputEditor;
- (void)willResignCurrentEditor;
- (void)didBecomeCurrentEditorForEditorController:(CRLEditorController *)arg1;
- (_Bool)shouldDiscardAllSubselectionsStartingWithSelection:(CRLSubselection *)arg1 withNewEditorStack:(NSArray *)arg2 selectionPath:(CRLSelectionPath *)arg3;
- (_Bool)shouldBecomeTextInputEditor;
- (_Bool)currentSelectionContainsInfo:(NSObject<CRLCanvasElementInfo> *)arg1;
- (void)documentEditabilityDidChange;
@end
