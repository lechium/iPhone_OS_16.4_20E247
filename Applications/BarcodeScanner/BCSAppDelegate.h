//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIResponder.h>

@class NSString, UIWindow;

@interface BCSAppDelegate : UIResponder
{
    UIWindow *_window;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000001b40f
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void)applicationWillTerminate:(id)arg1;	// IMP=0x001000000001b3e4
- (void)applicationWillEnterForeground:(id)arg1;	// IMP=0x001000000001b338
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x001000000001b28c
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x001000000001b1e0
- (void)applicationWillResignActive:(id)arg1;	// IMP=0x001000000001b134
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x001000000001b03d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

