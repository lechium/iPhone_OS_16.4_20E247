//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIResponder.h>

@class NSString, PKPaymentAuthorizationRemoteAlertViewController, UIWindow;

@interface InAppPaymentSceneDelegate : UIResponder
{
    PKPaymentAuthorizationRemoteAlertViewController *_inAppPaymentViewController;	// 8 = 0x8
    UIWindow *_window;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000005e24
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void)sceneWillResignActive:(id)arg1;	// IMP=0x0010000000005dc5
- (void)sceneDidEnterBackground:(id)arg1;	// IMP=0x0010000000005cd3
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;	// IMP=0x0010000000005439

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
