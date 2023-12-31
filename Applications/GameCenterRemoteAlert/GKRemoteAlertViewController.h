//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class GKGameCenterViewController, NSString;

@interface GKRemoteAlertViewController : SBUIRemoteAlertServiceViewController
{
    _Bool _needToShowGreenBuddy;	// 8 = 0x8
    GKGameCenterViewController *_gameCenterViewController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000002c71
@property(nonatomic) _Bool needToShowGreenBuddy; // @synthesize needToShowGreenBuddy=_needToShowGreenBuddy;
@property(retain, nonatomic) GKGameCenterViewController *gameCenterViewController; // @synthesize gameCenterViewController=_gameCenterViewController;
- (void)dismiss;	// IMP=0x00100000000029be
- (void)invokeDashboardWithHostPID:(int)arg1 game:(id)arg2 byPassPreAuthentication:(_Bool)arg3 deepLink:(id)arg4;	// IMP=0x0010000000002658
- (void)dismissExistingAndInvokeDashboardWithHostPID:(int)arg1 game:(id)arg2 byPassPreAuthentication:(_Bool)arg3 deepLink:(id)arg4;	// IMP=0x00100000000024d7
- (void)showGreenBuddyWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000020dd
- (id)deserializeGameFromData:(id)arg1;	// IMP=0x0010000000001f01
- (_Bool)contextCanBypassAuthentication:(id)arg1;	// IMP=0x0010000000001eb0
- (void)gameCenterViewControllerDidFinish:(id)arg1;	// IMP=0x0010000000001e9e
- (_Bool)_shouldRemoveViewFromHierarchyOnDisappear;	// IMP=0x0010000000001e96
- (_Bool)prefersStatusBarHidden;	// IMP=0x0010000000001e8e
- (void)handleButtonActions:(id)arg1;	// IMP=0x0010000000001e7c
- (void)prepareForActivationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000016f1
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000000fac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

