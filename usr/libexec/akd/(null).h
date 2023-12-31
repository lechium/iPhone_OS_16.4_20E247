//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAccountManager, AKAuthenticationSurrogateManager;
@protocol OS_dispatch_queue;

@interface (null) : NSObject
{
    AKAuthenticationSurrogateManager *_surrogateManager;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_clientUIWorkQueue;	// 16 = 0x10
    AKAccountManager *_accountManager;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x002000000007832a
- (void).cxx_destruct;	// IMP=0x002000000007c773
- (void)promptForAppleIDSettingsRedirectWithContext:(id)arg1 client:(id)arg2 needFullUI:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000007c2e9
- (id)uiWorkQueue;	// IMP=0x001000000007c2db
- (_Bool)_isFullUICapabilityRequiredFor2FA;	// IMP=0x001000000007c2d3
- (id)_stringByAppendingBlameIfNecessary:(id)arg1 withContext:(id)arg2 client:(id)arg3;	// IMP=0x001000000007c086
- (id)_optionsForCreatingUserNotificationWithTitle:(id)arg1 message:(id)arg2 defaultButton:(id)arg3 alternateButton:(id)arg4 serviceType:(long long)arg5;	// IMP=0x001000000007bfa5
- (id)_notificationDictionaryForClient:(id)arg1 context:(id)arg2 needFullUI:(_Bool)arg3;	// IMP=0x001000000007b5ec
- (_Bool)_isBackgroundClient:(id)arg1 eligibleForForegroundAuthenticationWithContext:(id)arg2;	// IMP=0x001000000007b30b
- (void)_performBlockWithClient:(id)arg1 context:(id)arg2 requireFullUICapability:(_Bool)arg3 allowRedirectToSettings:(_Bool)arg4 block:(CDUnknownBlockType)arg5;	// IMP=0x001000000007ace4
- (void)presentFidoAuthForContext:(id)arg1 fidoContext:(id)arg2 client:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000007aac0
- (void)presentBiometricOrPasscodeValidationForContext:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000007a8c7
- (void)dismissNativeRecoveryUIForContext:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000007a5bb
- (void)presentNativeRecoveryUIForContext:(id)arg1 recoveryContext:(id)arg2 client:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000007a230
- (void)dismissServerProvidedUIForContext:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000079f83
- (void)presentServerProvidedUIForContext:(id)arg1 client:(id)arg2 withConfiguration:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000079c63
- (void)presentSecondFactorAlertForContext:(id)arg1 client:(id)arg2 withError:(id)arg3 title:(id)arg4 message:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000007997a
- (void)dismissSecondFactorUIForContext:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000079751
- (void)presentSecondFactorUIForContext:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000079525
- (void)presentLoginAlertForContext:(id)arg1 client:(id)arg2 withError:(id)arg3 title:(id)arg4 message:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000007903a
- (void)dismissBasicLoginUIForContext:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000078d91
- (void)presentBasicLoginUIForContext:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000078888
- (void)dismissKeepUsingUIForContext:(id)arg1 client:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000078692
- (void)presentKeepUsingUIForContext:(id)arg1 client:(id)arg2 appleID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000007846e
@property(readonly, nonatomic) AKAuthenticationSurrogateManager *surrogateManager;
- (id)init;	// IMP=0x001000000007837f

@end

