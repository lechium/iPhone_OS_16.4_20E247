//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class LACachedExternalizedContext, NSDictionary, NSString, _TtC10CoreAuthUI19TransitionViewModel;
@protocol LABackoffCounter, LARemoteUIHost, LAUIMechanism;

@interface TransitionViewController : SBUIRemoteAlertServiceViewController
{
    TransitionViewController *_childController;	// 8 = 0x8
    long long _resetUiEvent;	// 16 = 0x10
    _Bool _allowsLandscape;	// 24 = 0x18
    _Bool _hideStatusBar;	// 25 = 0x19
    long long _presentationMode;	// 32 = 0x20
    _TtC10CoreAuthUI19TransitionViewModel *_viewModel;	// 40 = 0x28
    _Bool _callerNameOverride;	// 48 = 0x30
    _Bool _awaitingDissappear;	// 49 = 0x31
    _Bool _disappeared;	// 50 = 0x32
    _Bool _appeared;	// 51 = 0x33
    unsigned int _instanceId;	// 52 = 0x34
    id <LAUIMechanism> _mechanism;	// 56 = 0x38
    id <LARemoteUIHost> _remoteUIHost;	// 64 = 0x40
    long long _policy;	// 72 = 0x48
    NSDictionary *_options;	// 80 = 0x50
    id <LABackoffCounter> _backoffCounter;	// 88 = 0x58
    NSString *_callerName;	// 96 = 0x60
    NSString *_callerBundleId;	// 104 = 0x68
    LACachedExternalizedContext *_cachedExternalizedContext;	// 112 = 0x70
    NSDictionary *_internalInfo;	// 120 = 0x78
    NSString *_authenticationTitle;	// 128 = 0x80
    NSString *_authenticationSubtitle;	// 136 = 0x88
    CDUnknownBlockType _disappearedNotification;	// 144 = 0x90
    CDUnknownBlockType _appearedNotification;	// 152 = 0x98
}

+ (id)rootController;	// IMP=0x002000000000ec1a
+ (unsigned int)newTaskId;	// IMP=0x001000000000d19b
+ (unsigned int)newInstanceId;	// IMP=0x001000000000d187
+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x001000000000bf9c
- (void).cxx_destruct;	// IMP=0x0020000000010505
@property(readonly, nonatomic) unsigned int instanceId; // @synthesize instanceId=_instanceId;
@property(copy, nonatomic) CDUnknownBlockType appearedNotification; // @synthesize appearedNotification=_appearedNotification;
@property(copy, nonatomic) CDUnknownBlockType disappearedNotification; // @synthesize disappearedNotification=_disappearedNotification;
@property(nonatomic) _Bool appeared; // @synthesize appeared=_appeared;
@property(nonatomic) _Bool disappeared; // @synthesize disappeared=_disappeared;
@property(nonatomic) _Bool awaitingDissappear; // @synthesize awaitingDissappear=_awaitingDissappear;
@property(retain, nonatomic) NSString *authenticationSubtitle; // @synthesize authenticationSubtitle=_authenticationSubtitle;
@property(retain, nonatomic) NSString *authenticationTitle; // @synthesize authenticationTitle=_authenticationTitle;
@property(readonly, nonatomic) NSDictionary *internalInfo; // @synthesize internalInfo=_internalInfo;
@property(readonly, nonatomic) LACachedExternalizedContext *cachedExternalizedContext; // @synthesize cachedExternalizedContext=_cachedExternalizedContext;
@property(readonly, nonatomic) NSString *callerBundleId; // @synthesize callerBundleId=_callerBundleId;
@property(readonly, nonatomic) _Bool callerNameOverride; // @synthesize callerNameOverride=_callerNameOverride;
@property(readonly, nonatomic) NSString *callerName; // @synthesize callerName=_callerName;
@property(retain, nonatomic) id <LABackoffCounter> backoffCounter; // @synthesize backoffCounter=_backoffCounter;
@property(readonly, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(readonly, nonatomic) long long policy; // @synthesize policy=_policy;
@property(readonly, nonatomic) id <LARemoteUIHost> remoteUIHost; // @synthesize remoteUIHost=_remoteUIHost;
@property(readonly, nonatomic) id <LAUIMechanism> mechanism; // @synthesize mechanism=_mechanism;
- (void)viewModelDidReceiveAuthenticationDataWithInternalInfo:(id)arg1 mechanism:(id)arg2;	// IMP=0x00100000000102ba
- (void)viewModelDidReceiveMechanismEvent:(long long)arg1 value:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000102a8
- (void)viewModelDidReceiveMechanismEvent:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000010296
- (void)viewModelDidReceiveDismissWasInvalidated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000010284
- (void)showWithController:(long long)arg1 internalInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000010272
- (_Bool)_canShowWhileLocked;	// IMP=0x001000000001026a
- (_Bool)_internalBooleanDefaultNamed:(id)arg1;	// IMP=0x0010000000010187
- (_Bool)_shouldSimulateStaleRootController;	// IMP=0x001000000001016e
- (_Bool)_shouldSkipStaleRootControllerRecovery;	// IMP=0x0010000000010155
- (void)_dismiss;	// IMP=0x0010000000010069
- (void)noteActivatedWithPresentationMode:(long long)arg1;	// IMP=0x001000000000feea
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000fd78
- (long long)preferredStatusBarStyle;	// IMP=0x001000000000fcf9
- (int)_preferredStatusBarVisibility;	// IMP=0x001000000000fccf
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x001000000000fc56
- (_Bool)processHomeButtonPressed;	// IMP=0x001000000000fc4e
- (void)handleButtonActions:(id)arg1;	// IMP=0x001000000000fb6e
- (void)dismissChildWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000fa0d
- (void)mechanismEvent:(long long)arg1 value:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000000f898
- (void)mechanismEvent:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000f881
- (void)internalInfoWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000000f864
- (void)_setActivityWatchdog;	// IMP=0x001000000000f74d
- (void)authMethodWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000000f6d4
- (void)externalizedContextWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000000f6b7
- (void)uiFailureWithError:(id)arg1;	// IMP=0x001000000000f5d4
- (void)uiSuccessWithResult:(id)arg1;	// IMP=0x001000000000f4fc
- (void)uiFallback;	// IMP=0x001000000000f4c7
- (void)uiCancel;	// IMP=0x001000000000f492
- (void)uiEvent:(long long)arg1 options:(id)arg2;	// IMP=0x001000000000f382
- (_Bool)isRemoteViewController;	// IMP=0x000000000000f37a
- (_Bool)isFullScreenController;	// IMP=0x001000000000f372
- (void)_handleIdleExitResponse:(id)arg1 error:(id)arg2;	// IMP=0x001000000000f17b
- (void)_checkClearForIdleExit;	// IMP=0x001000000000ef96
- (void)_scheduleIdleExit;	// IMP=0x001000000000eedc
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x001000000000ec33
- (void)idleTimerDisable:(_Bool)arg1;	// IMP=0x001000000000ebb4
- (_Bool)prefersStatusBarHidden;	// IMP=0x001000000000eb81
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000000ea1f
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000000e8f0
- (void)viewDidLoad;	// IMP=0x001000000000e842
- (_Bool)_shouldHideStatusBarForController:(long long)arg1;	// IMP=0x001000000000e7fc
- (void)_performOnMainQueueWhenAppeared:(CDUnknownBlockType)arg1;	// IMP=0x001000000000e238
- (_Bool)shouldPresentWithAnimation;	// IMP=0x001000000000e226
- (void)transitionToController:(long long)arg1 internalInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000d6fc
- (void)dismissRemoteUIWasInvalidated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000d1c6
- (void)_dismissRemoteUIWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000d1af
- (id)localizedCallerName;	// IMP=0x001000000000d069
@property(readonly, copy) NSString *description;
- (void)didReceiveAuthenticationData;	// IMP=0x001000000000cca0
- (id)initWithInternalInfo:(id)arg1 mechanism:(id)arg2 backoffCounter:(id)arg3 remoteUIHost:(id)arg4 allowsLandscape:(_Bool)arg5;	// IMP=0x001000000000cb8b
- (id)initWithInternalInfo:(id)arg1 parent:(id)arg2 allowsLandscape:(_Bool)arg3;	// IMP=0x001000000000c9a6
- (void)_setupConnection;	// IMP=0x001000000000c3a9
- (void)_resetUI;	// IMP=0x001000000000c344
- (_Bool)_isRootControllerClass;	// IMP=0x001000000000c2f9
- (void)dealloc;	// IMP=0x001000000000c28b
- (id)init;	// IMP=0x001000000000bfa4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
