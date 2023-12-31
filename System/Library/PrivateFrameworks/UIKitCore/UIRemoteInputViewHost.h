//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLayoutConstraint, UIInputViewController, UIInputViewSet, UIRemoteInputViewInfo, UIView, UIViewController, UIWindow;

__attribute__((visibility("hidden")))
@interface UIRemoteInputViewHost : NSObject
{
    UIViewController *_inputRootViewController;	// 8 = 0x8
    UIInputViewController *_inputViewController;	// 16 = 0x10
    UIView *_inputView;	// 24 = 0x18
    NSLayoutConstraint *_inputViewWidthConstraint;	// 32 = 0x20
    NSLayoutConstraint *_inputViewHeightConstraint;	// 40 = 0x28
    UIViewController *_assistantViewController;	// 48 = 0x30
    UIWindow *_inputViewWindow;	// 56 = 0x38
    UIWindow *_assistantViewWindow;	// 64 = 0x40
    UIInputViewSet *_inputViewSet;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000e1b7e
@property(retain, nonatomic) UIInputViewSet *inputViewSet; // @synthesize inputViewSet=_inputViewSet;
@property(readonly, nonatomic) UIWindow *assistantViewWindow; // @synthesize assistantViewWindow=_assistantViewWindow;
@property(readonly, nonatomic) UIWindow *inputViewWindow; // @synthesize inputViewWindow=_inputViewWindow;
- (id)settingsScene;	// IMP=0x00000000000e1a94
- (id)remoteAssistantItemForResponder:(id)arg1;	// IMP=0x00000000000e1637
- (id)rtiGroupsForBarButtonItemGroups:(id)arg1;	// IMP=0x00000000000e0f65
@property(readonly, nonatomic) UIRemoteInputViewInfo *inputViewInfo;
- (void)updateInputViewsIfNecessary;	// IMP=0x00000000000e0cf0
- (_Bool)updateCustomInputViewIfNecessary;	// IMP=0x00000000000e02f8
- (_Bool)updateAssistantViewIfNecessary;	// IMP=0x00000000000df890
- (struct UIEdgeInsets)assistantViewInsets;	// IMP=0x00000000000df721
@property(readonly, nonatomic) UIRemoteInputViewInfo *assistantViewInfo;

@end

