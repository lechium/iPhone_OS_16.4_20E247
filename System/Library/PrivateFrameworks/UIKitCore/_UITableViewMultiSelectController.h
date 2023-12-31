//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIMultiSelectInteraction, UIMultiSelectInteractionState, UITableView;

__attribute__((visibility("hidden")))
@interface _UITableViewMultiSelectController : NSObject
{
    UITableView *_tableView;	// 8 = 0x8
    UIMultiSelectInteraction *_multiSelectInteraction;	// 16 = 0x10
    UIMultiSelectInteractionState *_currentSelectionState;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000092f068
@property(retain, nonatomic) UIMultiSelectInteractionState *currentSelectionState; // @synthesize currentSelectionState=_currentSelectionState;
@property(retain, nonatomic) UIMultiSelectInteraction *multiSelectInteraction; // @synthesize multiSelectInteraction=_multiSelectInteraction;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic, getter=isInMultiselectInteraction) _Bool inMultiselectInteraction;
- (void)didCancelMultiSelectInteraction:(id)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x000000000092ef27
- (_Bool)multiSelectInteractionGestureShouldPreventDragLiftGesture:(id)arg1;	// IMP=0x000000000092ef1f
- (void)multiSelectInteraction:(id)arg1 appendSelectionAtPoint:(struct CGPoint)arg2;	// IMP=0x000000000092edf0
- (void)multiSelectInteraction:(id)arg1 toggleSelectionStateUpToPoint:(struct CGPoint)arg2;	// IMP=0x000000000092ed4a
- (void)toggleSelectionStateUpToIndexPath:(id)arg1;	// IMP=0x000000000092ed36
- (_Bool)shouldAllowSelectionExtensionAtIndexPath:(id)arg1;	// IMP=0x000000000092ec8a
- (_Bool)shouldAllowSelectionAppendageAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000092ec35
- (_Bool)shouldAllowSelectionExtensionAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000092eba3
- (void)didEndMultiSelectInteraction:(id)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x000000000092eaba
- (_Bool)shouldBeginMultiSelectInteraction:(id)arg1 ofType:(long long)arg2 atPoint:(struct CGPoint)arg3 withVelocity:(struct CGPoint)arg4;	// IMP=0x000000000092ea56
- (_Bool)supportsMultiSelectInteraction:(id)arg1;	// IMP=0x000000000092e9d8
- (void)willBeginExtendingSelectionAtIndexPath:(id)arg1 keepingSelection:(_Bool)arg2;	// IMP=0x000000000092e6e7
- (void)willBeginMultiSelectInteraction:(id)arg1 atPoint:(struct CGPoint)arg2 keepCurrentSelection:(_Bool)arg3;	// IMP=0x000000000092e630
- (_Bool)interaction:(id)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(struct CGPoint)arg2 withVelocity:(struct CGPoint)arg3;	// IMP=0x000000000092e61e
- (_Bool)_shouldBeginInteractionAtIndexPath:(id)arg1;	// IMP=0x000000000092e4e9
- (_Bool)_shouldBeginInteractionAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000092e457
- (void)automaticallyTransitionToMultiSelectModeKeepingCurrentSelection:(_Bool)arg1;	// IMP=0x000000000092e1c2
- (_Bool)isInMultiSelectMode;	// IMP=0x000000000092e140
- (void)multiSelectInteraction:(id)arg1 extendSelectionInDirection:(unsigned long long)arg2;	// IMP=0x000000000092df86
- (_Bool)supportsKeyboardSelectionExtension;	// IMP=0x000000000092df7e
- (id)targetForKeyCommands;	// IMP=0x000000000092df70
- (id)keyCommandsForSelectionExtension;	// IMP=0x000000000092df5a
- (void)clearSelectionState;	// IMP=0x000000000092df46
- (id)_tableViewDelegate;	// IMP=0x000000000092de80
- (_Bool)_isPointInsideEditControl:(struct CGPoint)arg1;	// IMP=0x000000000092dccb
- (void)_adjustSelectionRangeToIndexPath:(id)arg1 isDeselecting:(_Bool)arg2;	// IMP=0x000000000092dbe1
- (void)_updateSelectedIndexPaths:(id)arg1;	// IMP=0x000000000092d895
- (void)_updateSelectedIndexPathsForCurrentSelection;	// IMP=0x000000000092d6b4
- (void)_deselectIndexPaths:(id)arg1;	// IMP=0x000000000092d4f6
- (void)_selectIndexPaths:(id)arg1;	// IMP=0x000000000092d150
- (void)_endAutoScroll;	// IMP=0x000000000092d0e6
- (void)_handleAutoScrollFromPoint:(struct CGPoint)arg1;	// IMP=0x000000000092d012
- (void)selectedIndexPathsChanged:(id)arg1;	// IMP=0x000000000092cf3d
- (void)uninstallFromTableView;	// IMP=0x000000000092cf06
- (id)initWithTableView:(id)arg1;	// IMP=0x000000000092ce3b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

