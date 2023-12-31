//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuickLookUICore/QLItemViewController.h>

@class NSLayoutConstraint, NSMutableDictionary, UITextView;

__attribute__((visibility("hidden")))
@interface QLDebugItemViewController : QLItemViewController
{
    _Bool _constraintsSetUp;	// 8 = 0x8
    UITextView *_logTextView;	// 16 = 0x10
    NSMutableDictionary *_selectorToCount;	// 24 = 0x18
    NSLayoutConstraint *_topConstraint;	// 32 = 0x20
    NSLayoutConstraint *_bottomConstraint;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000002e45b
- (id)_attributesForLogLevel:(unsigned long long)arg1;	// IMP=0x000000000002e26c
- (void)_addLog:(id)arg1 logLevel:(unsigned long long)arg2;	// IMP=0x000000000002e0f7
- (void)_encounterMethodCall:(SEL)arg1 animatedValue:(unsigned long long)arg2;	// IMP=0x000000000002dfbf
- (void)_encounterMethodCall:(SEL)arg1;	// IMP=0x000000000002dfab
- (void)previewDidDisappear:(_Bool)arg1;	// IMP=0x000000000002de85
- (void)previewWillDisappear:(_Bool)arg1;	// IMP=0x000000000002dd78
- (void)previewDidAppear:(_Bool)arg1;	// IMP=0x000000000002dc6b
- (void)previewWillFinishAppearing;	// IMP=0x000000000002dc20
- (void)previewIsAppearingWithProgress:(double)arg1;	// IMP=0x000000000002dbd5
- (void)previewWillAppear:(_Bool)arg1;	// IMP=0x000000000002dac8
- (_Bool)canEnterFullScreen;	// IMP=0x000000000002dac0
- (_Bool)canPinchToDismiss;	// IMP=0x000000000002dab8
- (_Bool)canSwipeToDismiss;	// IMP=0x000000000002dab0
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000002d838
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002d396

@end

