//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIKitScrollViewBase.h"

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC7SwiftUI17HostingScrollView : UIKitScrollViewBase
{
    MISSING_TYPE *viewType;	// 8 = 0x8
    MISSING_TYPE *layoutState;	// 16 = 0x10
    MISSING_TYPE *eventState;	// 24 = 0x18
    MISSING_TYPE *prefetchState;	// 32 = 0x20
    MISSING_TYPE *host;	// 40 = 0x28
    MISSING_TYPE *responder;	// 48 = 0x30
    MISSING_TYPE *layoutDirection;	// 56 = 0x38
    MISSING_TYPE *ignoreUpdates;	// 60 = 0x3c
    MISSING_TYPE *pendingUpdate;	// 64 = 0x40
    MISSING_TYPE *lastContentInset;	// 72 = 0x48
    MISSING_TYPE *uiLastSafeAreaInset;	// 104 = 0x68
    MISSING_TYPE *lastAdditionalInset;	// 136 = 0x88
    MISSING_TYPE *animationTarget;	// 168 = 0xa8
    MISSING_TYPE *animationOffset;	// 184 = 0xb8
    MISSING_TYPE *isAnimationCompletionCheckPending;	// 200 = 0xc8
    MISSING_TYPE *safeAreaTransitionState;	// 208 = 0xd0
    MISSING_TYPE *beginDraggingOffset;	// 224 = 0xe0
    MISSING_TYPE *onScrollToTopGesture;	// 248 = 0xf8
    MISSING_TYPE *configuration;	// 264 = 0x108
}

- (void).cxx_destruct;	// IMP=0x0000000001038f89
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000001038f76
- (void)_swiftui_focusedItem:(id)arg1 isMinX:(_Bool *)arg2 isMaxX:(_Bool *)arg3 isMinY:(_Bool *)arg4 isMaxY:(_Bool *)arg5;	// IMP=0x0000000001038ee8
- (void)_updateCycleIdleUntil:(unsigned long long)arg1;	// IMP=0x0000000001038e25
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;	// IMP=0x0000000001038ce8
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x0000000001038c62
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x0000000001038c02
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(struct CGPoint *)arg3;	// IMP=0x0000000001038b7c
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x0000000001038ae5
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;	// IMP=0x0000000001038a59
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x0000000001038a10
@property(nonatomic, readonly) _Bool _shouldScrollToContentBeginningInRightToLeft;
- (void)adjustedContentInsetDidChange;	// IMP=0x0000000001038932
- (void)safeAreaInsetsDidChange;	// IMP=0x00000000010387b5
@property(nonatomic, readonly) struct UIEdgeInsets safeAreaInsets;
@property(nonatomic) struct CGRect bounds;
- (void)didMoveToWindow;	// IMP=0x00000000010375de
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000103715f

@end
