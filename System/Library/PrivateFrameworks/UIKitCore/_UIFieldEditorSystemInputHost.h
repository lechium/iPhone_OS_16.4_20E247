//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UISystemInputViewController, UIVisualEffectView, _UIFieldEditorSystemInputHostView;

__attribute__((visibility("hidden")))
@interface _UIFieldEditorSystemInputHost
{
    _UIFieldEditorSystemInputHostView *_containerView;	// 8 = 0x8
    UIVisualEffectView *_backgroundEffectView;	// 16 = 0x10
    UISystemInputViewController *_systemInputViewController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000073989e
@property(readonly, nonatomic) UISystemInputViewController *_systemInputViewController; // @synthesize _systemInputViewController;
- (id)description;	// IMP=0x000000000073986a
- (_Bool)_isTV;	// IMP=0x00000000007397ea
- (void)_updateFieldEditorBackgroundViewLayoutForcingDefault:(_Bool)arg1;	// IMP=0x0000000000739336
- (id)_viewForHostingFieldEditor;	// IMP=0x0000000000739319
- (void)layoutIfNeeded;	// IMP=0x0000000000739305
- (void)addPlaceholderLabel:(id)arg1;	// IMP=0x0000000000738f92
- (void)removeFieldEditor;	// IMP=0x0000000000738ecf
- (void)addFieldEditor:(id)arg1;	// IMP=0x0000000000738afb
- (void)dealloc;	// IMP=0x0000000000738ab2

@end
