//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIResponder.h>

@class LUILogViewerController, LUIUserSwitchTestOngoingIndicatorController, NSString, NSXPCConnection, UINavigationController, UIWindow;

@interface AppDelegate : UIResponder
{
    int mConfigurationDidChangeNotificationToken;	// 8 = 0x8
    id mLegibilityObserver;	// 16 = 0x10
    _Bool _logindAcceptedOurConnection;	// 24 = 0x18
    UIWindow *_window;	// 32 = 0x20
    UINavigationController *_navigationController;	// 40 = 0x28
    LUILogViewerController *_logViewerVC;	// 48 = 0x30
    NSXPCConnection *_connectionToLoginD;	// 56 = 0x38
    LUIUserSwitchTestOngoingIndicatorController *_testOngoingIndicatorController;	// 64 = 0x40
}

+ (_Bool)_underTestingEnvironment;	// IMP=0x0010000000005251
+ (void)_exchangeMethod:(struct objc_method *)arg1 originalSelector:(SEL)arg2 originalClass:(Class)arg3 forNewMethod:(struct objc_method *)arg4 newSelector:(SEL)arg5 newClass:(Class)arg6;	// IMP=0x001000000000511b
+ (void)_swapInstanceMethod:(SEL)arg1 originalClass:(Class)arg2 forNewInstanceMethod:(SEL)arg3 newClass:(Class)arg4;	// IMP=0x00100000000050b5
+ (void)_swapClassMethod:(SEL)arg1 originalClass:(Class)arg2 forNewClassMethod:(SEL)arg3 newClass:(Class)arg4;	// IMP=0x0010000000005030
+ (void)_setupEnvironmentForAssignStudentScreenTest;	// IMP=0x0010000000004f8c
+ (void)_setupEnvironmentForAppleIDScreenTest;	// IMP=0x0010000000004ea5
+ (void)_setupEnvironmentForClassScreenTest;	// IMP=0x0010000000004e01
+ (void)_setupEnvironmentForRecentUserScreenTest;	// IMP=0x0010000000004d16
+ (void)_setupWIFIPicker;	// IMP=0x0010000000004cb7
+ (void)_setupFooterNote;	// IMP=0x0010000000004bc8
+ (void)_setupFastLaunch;	// IMP=0x0010000000004b6d
+ (void)setupTestEnvironmentIfNeeded;	// IMP=0x0010000000004700
+ (void)_hackCanShowWhileLockedMethodIfNeeded;	// IMP=0x00100000000045e4
+ (void)initialize;	// IMP=0x00100000000045cb
+ (void)load;	// IMP=0x00100000000045b2
- (void).cxx_destruct;	// IMP=0x001000000001c27a
@property(retain, nonatomic) LUIUserSwitchTestOngoingIndicatorController *testOngoingIndicatorController; // @synthesize testOngoingIndicatorController=_testOngoingIndicatorController;
@property _Bool logindAcceptedOurConnection; // @synthesize logindAcceptedOurConnection=_logindAcceptedOurConnection;
@property(retain) NSXPCConnection *connectionToLoginD; // @synthesize connectionToLoginD=_connectionToLoginD;
@property(retain, nonatomic) LUILogViewerController *logViewerVC; // @synthesize logViewerVC=_logViewerVC;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void)logViewerControllerDidCloseLogViewer:(id)arg1;	// IMP=0x001000000001c13c
- (void)logViewerControllerDidOpenLogViewer:(id)arg1;	// IMP=0x001000000001c0db
- (void)_setupLogViewerIfNeeded;	// IMP=0x001000000001bffe
- (void)menuButtonLongPressed;	// IMP=0x001000000001bf71
- (void)idleTimerFired;	// IMP=0x001000000001bd3c
- (void)menuButtonPressed;	// IMP=0x001000000001bcaf
- (void)observeLockButtonDoubleTapEvent;	// IMP=0x001000000001bbb6
- (void)observeHomeButtonLongPressNotification;	// IMP=0x001000000001baf1
- (void)observeHomeButtonDoubleTapNotification;	// IMP=0x001000000001ba51
- (void)endObservingHomeButtonDoubleTapNotification;	// IMP=0x001000000001b9b8
- (void)userListDidUpdate;	// IMP=0x001000000001b909
- (void)bluetoothPowerStatusChanged:(id)arg1;	// IMP=0x001000000001b8c5
- (void)enableBluetooth;	// IMP=0x001000000001b82a
- (void)clearPasteboard;	// IMP=0x001000000001b7d5
- (void)disableAirplaneMode;	// IMP=0x001000000001b726
- (void)enableWiFi;	// IMP=0x001000000001b678
- (void)_fetchConfiguration:(CDUnknownBlockType)arg1;	// IMP=0x001000000001b5d0
- (void)fetchConfiguration;	// IMP=0x001000000001ad1b
- (void)saveClassConfiguration:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001aa48
- (void)programmaticallyAuthenticateWithUser:(id)arg1 password:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001a904
- (void)loginAppleID:(id)arg1 password:(id)arg2 localLoginOnly:(_Bool)arg3 isTemporarySession:(_Bool)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000001a7d4
- (void)chooseUserWithIdentifier:(id)arg1 inClassWithID:(id)arg2 password:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000001a515
- (void)hideUserSwitchTestOngoingIndicator;	// IMP=0x001000000001a45d
- (void)presentUserSwitchTestOngoingIndicatorWithCancelAction:(CDUnknownBlockType)arg1;	// IMP=0x001000000001a28b
- (void)presentUserSwitchTestDonePopup;	// IMP=0x001000000001a1f4
- (void)checkedInWithLoginD;	// IMP=0x001000000001a1dd
- (void)checkInWithLoginD;	// IMP=0x001000000001a0d7
- (void)_connectToLoginD;	// IMP=0x0010000000019d90
- (void)fetchAllPhotosForUsers:(id)arg1;	// IMP=0x0010000000019c90
- (void)newClassRosterReceived:(id)arg1;	// IMP=0x0010000000019a69
- (void)readCachedClassRoster;	// IMP=0x00100000000198a2
- (void)presentUserLoginViewControllerForUserInfo:(id)arg1 inClass:(id)arg2;	// IMP=0x00100000000197df
- (void)applicationWillTerminate:(id)arg1;	// IMP=0x00100000000197d9
- (void)applicationWillEnterForeground:(id)arg1;	// IMP=0x00100000000197d3
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x00100000000197cd
- (void)applicationWillResignActive:(id)arg1;	// IMP=0x00100000000197c7
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x00100000000197c1
- (void)deleteAnyAccountsWeShould;	// IMP=0x00100000000194d1
- (void)generateLoginUserView;	// IMP=0x0010000000019348
- (void)_initializeLoginWindow;	// IMP=0x00100000000190c2
- (void)dealloc;	// IMP=0x0010000000019000
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x0010000000018be5
- (void)_test_setupLogViewerIfNeeded_appleIDScreen;	// IMP=0x0010000000005ce8
- (void)_cleanUpEverything;	// IMP=0x0010000000005b4f
- (void)_test_applicationDidBecomeActive:(id)arg1;	// IMP=0x0010000000005a2a
- (id)_test_deviceAssetTag_footerNote;	// IMP=0x001000000000599f
- (id)_test_deviceLockScreenFootnote_footerNote;	// IMP=0x0010000000005914
- (id)_test_recentUsers_recentUserScreen;	// IMP=0x001000000000573d
- (void)_test_consumeSinglePressUpForButtonKind_wifiPicker;	// IMP=0x00100000000056ed
- (void)_test_fetchConfiguration_appleIDScreen:(CDUnknownBlockType)arg1;	// IMP=0x00100000000056db
- (long long)_test_homeButtonType_assignStudentScreen;	// IMP=0x00100000000056d0
- (void)_test_fetchConfiguration_assignStudentScreen:(CDUnknownBlockType)arg1;	// IMP=0x00000000000053f6
- (void)_test_fetchConfiguration_classScreen:(CDUnknownBlockType)arg1;	// IMP=0x00100000000052ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
