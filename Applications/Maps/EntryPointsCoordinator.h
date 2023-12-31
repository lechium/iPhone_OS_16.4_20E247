//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LaunchAlertsManager, NSMutableArray, NSString, RichMapsActivity;
@protocol EntryPointsCoordinatorDelegate, LoadingToken, OS_dispatch_group, OS_dispatch_queue;

@interface EntryPointsCoordinator : NSObject
{
    _Bool _launchedWithExternalInput;	// 8 = 0x8
    _Bool _coldLaunch;	// 9 = 0x9
    _Bool _waitingForFirstContainee;	// 10 = 0xa
    _Bool _mergeLocked;	// 11 = 0xb
    _Bool _launchedInBackground;	// 12 = 0xc
    _Bool _restoreTaskAdded;	// 13 = 0xd
    _Bool _waitingForAlerts;	// 14 = 0xe
    _Bool _firstWidget;	// 15 = 0xf
    _Bool _waitingForCarplayAppScene;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_tasksQueue;	// 24 = 0x18
    NSObject<OS_dispatch_group> *_tasksGroup;	// 32 = 0x20
    unsigned long long _tasksDone;	// 40 = 0x28
    NSMutableArray *_tasks;	// 48 = 0x30
    NSMutableArray *_tasksToPerform;	// 56 = 0x38
    id <LoadingToken> _continuityLoadingToken;	// 64 = 0x40
    RichMapsActivity *_mergedRichMapsActivity;	// 72 = 0x48
    _Bool _didLaunchWithExplicitIntent;	// 80 = 0x50
    id <EntryPointsCoordinatorDelegate> _delegate;	// 88 = 0x58
    LaunchAlertsManager *_launchAlertsManager;	// 96 = 0x60
    NSString *_launchApplication;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x002000000070c57f
@property(copy, nonatomic) NSString *launchApplication; // @synthesize launchApplication=_launchApplication;
@property(retain, nonatomic) LaunchAlertsManager *launchAlertsManager; // @synthesize launchAlertsManager=_launchAlertsManager;
@property(readonly, nonatomic) _Bool didLaunchWithExplicitIntent; // @synthesize didLaunchWithExplicitIntent=_didLaunchWithExplicitIntent;
@property(nonatomic) __weak id <EntryPointsCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)receivedFullyDrawnNotification:(id)arg1;	// IMP=0x001000000070c4ac
- (void)receivedDidPresentContaineeNotification:(id)arg1;	// IMP=0x001000000070c449
- (void)openNotificationData:(id)arg1 forType:(id)arg2 recordIdentifier:(id)arg3;	// IMP=0x001000000070c325
- (void)openShortcutItem:(id)arg1;	// IMP=0x001000000070c233
- (_Bool)shouldHandleUniversalLinkWithUserActivity:(id)arg1;	// IMP=0x001000000070c176
- (void)_continueUserActivity:(id)arg1 session:(id)arg2 windowSize:(struct CGSize)arg3;	// IMP=0x001000000070bd08
- (void)continueUserActivity:(id)arg1 session:(id)arg2 windowSize:(struct CGSize)arg3;	// IMP=0x001000000070bb5e
- (void)didFailToContinueUserActivityWithType:(id)arg1 error:(id)arg2;	// IMP=0x001000000070b813
- (void)willContinueUserActivityWithType:(id)arg1;	// IMP=0x001000000070b718
- (void)_openURL:(id)arg1 referringURL:(id)arg2 sourceApplication:(id)arg3 session:(id)arg4 sceneOptions:(id)arg5 mkOptions:(id)arg6 windowSize:(struct CGSize)arg7;	// IMP=0x001000000070b57b
- (void)openURL:(id)arg1 session:(id)arg2 sceneOptions:(id)arg3 mkOptions:(id)arg4 windowSize:(struct CGSize)arg5;	// IMP=0x001000000070b35e
- (_Bool)_isBackgroundNavigationLaunch:(id)arg1;	// IMP=0x001000000070b292
- (void)_addRestoreTaskForSession:(id)arg1;	// IMP=0x001000000070b03e
- (void)didBecomeActiveWithSession:(id)arg1;	// IMP=0x001000000070a6a3
- (void)willEnterForegroundWithSession:(id)arg1;	// IMP=0x001000000070a5f7
- (void)didEnterBackgroundWithSession:(id)arg1;	// IMP=0x001000000070a544
- (void)willResignActiveWithSession:(id)arg1;	// IMP=0x001000000070a4d1
- (void)willConnectToSession:(id)arg1 options:(id)arg2 windowSize:(struct CGSize)arg3 scene:(id)arg4;	// IMP=0x0010000000709ea7
- (void)prepareBackgroundNavigation;	// IMP=0x0010000000709e1f
- (_Bool)_sessionShouldParticipateInLifecycle:(id)arg1 scene:(id)arg2;	// IMP=0x0010000000709d8e
- (_Bool)_sessionShouldParticipateInLifecycle:(id)arg1;	// IMP=0x0010000000709d1d
- (_Bool)_shouldRestoreNavigationSession:(id)arg1;	// IMP=0x0010000000709b13
- (void)launchAlertsManagerDidFinishProcessingAlert:(id)arg1;	// IMP=0x0010000000709a8b
- (void)_updateLocaleInformation;	// IMP=0x0010000000709951
- (void)_displayLaunchAlertsIfNecessary;	// IMP=0x0010000000709610
- (void)_unlockMergeActivities;	// IMP=0x001000000070953a
- (void)_lockMergeActivities;	// IMP=0x0010000000709464
- (void)_sendMergedRichMapsActivity;	// IMP=0x00100000007091e4
- (_Bool)_debug_shouldSkipSendingMergedRichMapsActivity;	// IMP=0x0010000000709162
- (void)_sendMergedRichMapsActivityIfPossible;	// IMP=0x0010000000709040
- (void)_mergeTasks;	// IMP=0x0010000000708c4f
- (void)_addTask:(id)arg1 atFirstIndex:(_Bool)arg2;	// IMP=0x0010000000708756
- (void)_insertTaskAtFirstIndex:(id)arg1;	// IMP=0x001000000070873f
- (void)_addTask:(id)arg1;	// IMP=0x001000000070872b
- (void)_addCompletionIfNeeded;	// IMP=0x00100000007085e5
- (void)_cleanState;	// IMP=0x0010000000708536
- (id)init;	// IMP=0x0010000000708330

@end

