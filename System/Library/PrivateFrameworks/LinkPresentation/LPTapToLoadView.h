//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LPTapToLoadViewStyle, LPTextView, NSString, UILongPressGestureRecognizer, UIView;
@protocol LPTapToLoadViewDelegate;

__attribute__((visibility("hidden")))
@interface LPTapToLoadView
{
    LPTextView *_captionView;	// 8 = 0x8
    UIView *_progressView;	// 16 = 0x10
    LPTapToLoadViewStyle *_style;	// 24 = 0x18
    UIView *_highlightView;	// 32 = 0x20
    UILongPressGestureRecognizer *_highlightGestureRecognizer;	// 40 = 0x28
    _Bool _wasTapped;	// 48 = 0x30
    CDUnknownBlockType _animateOutCompletionHandler;	// 56 = 0x38
    id <LPTapToLoadViewDelegate> _tapToLoadViewDelegate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000d193e
@property(nonatomic) __weak id <LPTapToLoadViewDelegate> tapToLoadViewDelegate; // @synthesize tapToLoadViewDelegate=_tapToLoadViewDelegate;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x00000000000d1759
- (void)animateOutWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d14dc
- (void)_animateToProgressView;	// IMP=0x00000000000d10f0
- (void)_tapRecognized:(id)arg1;	// IMP=0x00000000000d0f7a
- (void)_highlightLongPressRecognized:(id)arg1;	// IMP=0x00000000000d0eae
- (void)_didScroll;	// IMP=0x00000000000d0e66
- (_Bool)gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2;	// IMP=0x00000000000d0e5e
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000000000d0e02
- (id)_createIndeterminateProgressIndicator;	// IMP=0x00000000000d0dba
- (void)_buildViews;	// IMP=0x00000000000d0be6
- (void)layoutComponentView;	// IMP=0x00000000000d0a5c
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000d09b9
- (id)initWithHost:(id)arg1 style:(id)arg2;	// IMP=0x00000000000d085b
- (id)initWithHost:(id)arg1;	// IMP=0x00000000000d084d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

