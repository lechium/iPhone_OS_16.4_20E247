//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol WKKeyboardScrollViewAnimatorDelegate;

__attribute__((visibility("hidden")))
@interface WKKeyboardScrollViewAnimator : NSObject
{
    struct WeakObjCPtr<UIScrollView> _scrollView;	// 8 = 0x8
    struct RetainPtr<WKKeyboardScrollingAnimator> _animator;	// 16 = 0x10
    _Bool _delegateRespondsToIsKeyboardScrollable;	// 24 = 0x18
    _Bool _delegateRespondsToDistanceForIncrement;	// 25 = 0x19
    _Bool _delegateRespondsToWillScroll;	// 26 = 0x1a
    _Bool _delegateRespondsToDidFinishScrolling;	// 27 = 0x1b
    id <WKKeyboardScrollViewAnimatorDelegate> _delegate;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x000000000044dbd2
- (void).cxx_destruct;	// IMP=0x000000000044db98
@property(nonatomic) __weak id <WKKeyboardScrollViewAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFinishScrolling;	// IMP=0x000000000044db52
- (RectEdges_e190dc78)rubberbandableDirections;	// IMP=0x000000000044daea
- (RectEdges_e190dc78)scrollableDirectionsFromOffset:(struct CGPoint)arg1;	// IMP=0x000000000044d9c1
- (struct CGSize)interactiveScrollVelocity;	// IMP=0x000000000044d94c
- (struct CGPoint)boundedContentOffset:(struct CGPoint)arg1;	// IMP=0x000000000044d8fa
- (struct CGPoint)contentOffset;	// IMP=0x000000000044d8c4
- (void)scrollWithScrollToExtentAnimationTo:(struct CGPoint)arg1;	// IMP=0x000000000044d86e
- (void)scrollToContentOffset:(struct FloatPoint)arg1 animated:(_Bool)arg2;	// IMP=0x000000000044d78c
- (double)distanceForIncrement:(unsigned char)arg1 inDirection:(unsigned char)arg2;	// IMP=0x000000000044d6a2
- (_Bool)isKeyboardScrollable;	// IMP=0x000000000044d668
- (_Bool)scrollTriggeringKeyIsPressed;	// IMP=0x000000000044d652
- (void)handleKeyEvent:(id)arg1;	// IMP=0x000000000044d63c
- (_Bool)beginWithEvent:(id)arg1;	// IMP=0x000000000044d626
- (void)willStartInteractiveScroll;	// IMP=0x000000000044d610
- (void)invalidate;	// IMP=0x000000000044d53a
- (void)dealloc;	// IMP=0x000000000044d4f8
- (id)initWithScrollView:(id)arg1;	// IMP=0x000000000044d475
- (id)init;	// IMP=0x000000000044d46d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
