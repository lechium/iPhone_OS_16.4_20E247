//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIAdaptivePresentationControllerDelegate-Protocol.h>

@class UIMenu, UITouch, _UIContextMenuPresentationController;
@protocol _UIMenuLeaf;

@protocol _UIContextMenuPresentationControllerDelegate <UIAdaptivePresentationControllerDelegate>
- (UIMenu *)_contextMenuPresentationController:(_UIContextMenuPresentationController *)arg1 willDisplayMenu:(UIMenu *)arg2;
- (void)_contextMenuPresentationController:(_UIContextMenuPresentationController *)arg1 didSelectMenuLeaf:(id <_UIMenuLeaf>)arg2;
- (void)_contextMenuPresentationControllerDidEndPanInteraction:(_UIContextMenuPresentationController *)arg1;
- (void)_contextMenuPresentationControllerDidBeginPanInteraction:(_UIContextMenuPresentationController *)arg1 allowSwipeToDismiss:(_Bool *)arg2;
- (void)_contextMenuPresentationController:(_UIContextMenuPresentationController *)arg1 beginDragWithTouch:(UITouch *)arg2;
- (void)_contextMenuPresentationControllerWantsToBeDismissed:(_UIContextMenuPresentationController *)arg1 withReason:(unsigned long long)arg2 alongsideActions:(void (^)(void))arg3 completion:(void (^)(void))arg4;
@end

