//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIResponder.h>

@class NSString, UIWindow;

@interface SceneDelegate : UIResponder
{
    UIWindow *_window;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000001da4
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void)sceneDidEnterBackground:(id)arg1;	// IMP=0x0010000000001d79
- (void)sceneWillEnterForeground:(id)arg1;	// IMP=0x0010000000001d73
- (void)sceneWillResignActive:(id)arg1;	// IMP=0x0010000000001d6d
- (void)sceneDidBecomeActive:(id)arg1;	// IMP=0x0010000000001d67
- (void)sceneDidDisconnect:(id)arg1;	// IMP=0x0010000000001d61
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;	// IMP=0x0010000000001d5b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

