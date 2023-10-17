//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIResponder.h>

@class NSString, SSSDittoDebugViewController, SSSViewControllerManager, UIWindow;

@interface SSSAppDelegate : UIResponder
{
    SSSDittoDebugViewController *_debugViewController;	// 8 = 0x8
    SSSViewControllerManager *_viewControllerManager;	// 16 = 0x10
    _Bool _didLaunchSuspended;	// 24 = 0x18
    UIWindow *_window;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000022aaa
@property(nonatomic) _Bool didLaunchSuspended; // @synthesize didLaunchSuspended=_didLaunchSuspended;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void)application:(id)arg1 didFinishLaunchingSuspendedWithOptions:(id)arg2;	// IMP=0x0010000000022960
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x001000000002292d
@property(readonly, nonatomic) SSSViewControllerManager *viewControllerManager;
- (void)_setUpDevelopmentUI;	// IMP=0x0010000000022877
- (_Bool)_shouldSetUpDevelopmentUI;	// IMP=0x001000000002284e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
