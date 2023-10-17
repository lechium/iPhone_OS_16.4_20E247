//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UIDictationView, UIKBRenderConfig;

__attribute__((visibility("hidden")))
@interface UIKeyboardDicationBackgroundGradientView : UIView
{
    UIKBRenderConfig *_renderConfig;	// 8 = 0x8
    UIDictationView *_dictationView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000b2a2aa
@property(nonatomic) UIDictationView *dictationView; // @synthesize dictationView=_dictationView;
@property(retain, nonatomic) UIKBRenderConfig *renderConfig; // @synthesize renderConfig=_renderConfig;
- (void)layoutSubviews;	// IMP=0x0000000000b2a16c
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000b2a166
- (struct CGRect)_backgroundFillFrame;	// IMP=0x0000000000b2a0ef
- (id)_timingFunctionForAnimation;	// IMP=0x0000000000b2a0cc
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;	// IMP=0x0000000000b2a0b0
- (void)startColorTransitionOut;	// IMP=0x0000000000b29e02
- (void)startColorTransitionIn;	// IMP=0x0000000000b29bd8
- (id)backgroundColorForCurrentRenderConfig;	// IMP=0x0000000000b29b9f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000b29afc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
