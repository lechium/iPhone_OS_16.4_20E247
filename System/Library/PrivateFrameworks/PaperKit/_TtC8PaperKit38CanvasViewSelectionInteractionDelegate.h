//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8PaperKit38CanvasViewSelectionInteractionDelegate : NSObject
{
    MISSING_TYPE *containerView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000101a10
- (id)init;	// IMP=0x00000000001019b0
- (void)selectionInteraction:(id)arg1 contextMenuInteraction:(id)arg2 willEndForConfiguration:(id)arg3 animator:(id)arg4 forElement:(id)arg5 inAttachment:(id)arg6;	// IMP=0x00000000001018b0
- (void)selectionInteraction:(id)arg1 contextMenuInteraction:(id)arg2 willDisplayMenuForConfiguration:(id)arg3 animator:(id)arg4 forElement:(id)arg5 inAttachment:(id)arg6;	// IMP=0x0000000000101880
- (id)selectionInteraction:(id)arg1 contextMenuInteraction:(id)arg2 previewForHighlightingMenuWithConfiguration:(id)arg3 forElement:(id)arg4 inAttachment:(id)arg5;	// IMP=0x00000000001017b0
- (id)selectionInteraction:(id)arg1 contextMenuInteraction:(id)arg2 configurationForElement:(id)arg3 inAttachment:(id)arg4;	// IMP=0x0000000000101700
- (_Bool)selectionInteraction:(id)arg1 didLongPressElement:(id)arg2 withGesture:(id)arg3 inAttachment:(id)arg4;	// IMP=0x0000000000101650
- (void)selectionInteraction:(id)arg1 didTapElement:(id)arg2 withGesture:(id)arg3 inAttachment:(id)arg4;	// IMP=0x00000000001015b0
- (void)selectionInteraction:(id)arg1 didDropItemProvider:(id)arg2 inAttachment:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000101500
- (void)selectionInteraction:(id)arg1 dragInteractionWillEndForElements:(id)arg2 withOperation:(unsigned long long)arg3 inAttachment:(id)arg4;	// IMP=0x0000000000101130
- (void)selectionInteraction:(id)arg1 dragInteractionWillBeginForElements:(id)arg2 inAttachment:(id)arg3;	// IMP=0x0000000000101080
- (void)selectionInteraction:(id)arg1 renderPreviewForElements:(id)arg2 inContext:(struct CGContext *)arg3 withConfig:(id)arg4 inAttachment:(id)arg5 withCompletion:(CDUnknownBlockType)arg6;	// IMP=0x0000000000100f70
- (id)selectionInteraction:(id)arg1 selectedElementsInAttachment:(id)arg2;	// IMP=0x0000000000100330
- (id)selectionInteraction:(id)arg1 elementsInAttachment:(id)arg2;	// IMP=0x0000000000100310
- (_Bool)selectionInteraction:(id)arg1 selectionContainsPoint:(struct CGPoint)arg2 inAttachment:(id)arg3;	// IMP=0x0000000000100280
- (id)selectionInteraction:(id)arg1 elementsForSpaceInsertedAtPoint:(struct CGPoint)arg2 inAttachment:(id)arg3;	// IMP=0x00000000001001d0
- (id)selectionInteraction:(id)arg1 didDuplicateElements:(id)arg2 inAttachment:(id)arg3;	// IMP=0x0000000000100110
- (void)selectionInteraction:(id)arg1 didDeleteElements:(id)arg2 inAttachment:(id)arg3;	// IMP=0x0000000000100010
- (void)selectionInteractionDidPaste:(id)arg1 atPoint:(struct CGPoint)arg2 inAttachment:(id)arg3;	// IMP=0x00000000000fff90
- (id)selectionInteraction:(id)arg1 pasteboardRepresentationsForElements:(id)arg2 strokes:(id)arg3 inAttachment:(id)arg4;	// IMP=0x00000000000ffe80
- (_Bool)selectionInteraction:(id)arg1 canPerformAction:(SEL)arg2 withSender:(id)arg3 inAttachment:(id)arg4;	// IMP=0x00000000000ffde0
- (void)selectionInteraction:(id)arg1 didClearSelectionForElements:(id)arg2 inAttachment:(id)arg3;	// IMP=0x00000000000ffd70
- (void)selectionInteraction:(id)arg1 didEndInsertSpaceInAttachment:(id)arg2;	// IMP=0x00000000000ffc70
- (void)selectionInteraction:(id)arg1 insertSpaceDidMove:(double)arg2 inAttachment:(id)arg3;	// IMP=0x00000000000ffb70
- (void)selectionInteraction:(id)arg1 willBeginInsertSpaceInAttachment:(id)arg2;	// IMP=0x00000000000ffa70
- (void)selectionInteraction:(id)arg1 didEndDraggingElements:(id)arg2 inAttachment:(id)arg3;	// IMP=0x00000000000ffa50
- (void)selectionInteraction:(id)arg1 didDragElements:(id)arg2 withTransform:(struct CGAffineTransform)arg3 inAttachment:(id)arg4;	// IMP=0x00000000000ff9a0
- (void)selectionInteraction:(id)arg1 didSelectElements:(id)arg2 inAttachment:(id)arg3;	// IMP=0x00000000000ff910
- (const struct CGPath *)selectionInteraction:(id)arg1 pathForElement:(id)arg2 inAttachment:(id)arg3;	// IMP=0x00000000000ff880
- (id)selectionInteraction:(id)arg1 requestElementsInPath:(id)arg2 inAttachment:(id)arg3;	// IMP=0x00000000000ff7d0
- (id)selectionInteraction:(id)arg1 requestElementsInRect:(struct CGRect)arg2 inAttachment:(id)arg3;	// IMP=0x00000000000ff6f0
- (_Bool)selectionInteractionShouldForwardToElements:(id)arg1 atPoint:(struct CGPoint)arg2 forEvent:(id)arg3;	// IMP=0x00000000000ff660
- (_Bool)selectionInteractionShouldBegin:(id)arg1 atPoint:(struct CGPoint)arg2 forEvent:(id)arg3 orGestureRecognizer:(id)arg4;	// IMP=0x00000000000ff360

@end
