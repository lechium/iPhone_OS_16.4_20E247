//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSExtension, NSString, NSURLCredential, UIAlertController, WBSAutoFillQuirksManager, WBSPasswordWarning, WBSSavedAccountStore, _ASAccountAuthenticationModificationHostViewController;

__attribute__((visibility("hidden")))
@interface SFPasswordSavingServiceViewController
{
    long long _action;	// 8 = 0x8
    NSArray *_protectionSpacesToUpdate;	// 16 = 0x10
    NSString *_domainForSavePasswordAction;	// 24 = 0x18
    NSURLCredential *_credential;	// 32 = 0x20
    NSString *_tokenForShowingPrompt;	// 40 = 0x28
    UIAlertController *_prompt;	// 48 = 0x30
    WBSAutoFillQuirksManager *_autoFillQuirksManager;	// 56 = 0x38
    WBSPasswordWarning *_passwordWarning;	// 64 = 0x40
    NSExtension *_accountModificationExtension;	// 72 = 0x48
    _ASAccountAuthenticationModificationHostViewController *_accountModificationHostViewController;	// 80 = 0x50
    WBSSavedAccountStore *_savedAccountStore;	// 88 = 0x58
    _Bool _supportsUpgradeToStrongPassword;	// 96 = 0x60
    _Bool _supportsUpgradeToSignInWithApple;	// 97 = 0x61
    _Bool _passwordIsWeakEnoughForActiveWarning;	// 98 = 0x62
    _Bool _passwordHasLikelyBeenCompromised;	// 99 = 0x63
}

+ (id)_exportedInterface;	// IMP=0x001000000011690d
- (void).cxx_destruct;	// IMP=0x0000000000119500
- (void)_openPasswordManagerToChangePasswordOnWebsite;	// IMP=0x0000000000119377
- (void)_initiateChangeToStrongPassword;	// IMP=0x0000000000119182
- (void)_initiateUpgradeToSignInWithApple;	// IMP=0x0000000000118f8d
- (id)_messageStringForAccountModificationPrompt;	// IMP=0x0000000000118e3e
- (id)_titleStringForAccountModificationPrompt;	// IMP=0x0000000000118d1c
- (void)_addChangePasswordOnWebsiteActionToPrompt;	// IMP=0x0000000000118c17
- (void)_addChangeToStrongPasswordActionToPrompt;	// IMP=0x0000000000118b2f
- (void)_addUpgradeToSignInWithAppleActionToPrompt;	// IMP=0x0000000000118a47
- (void)_showAccountModificationPrompt;	// IMP=0x00000000001187cf
- (void)_dismiss;	// IMP=0x0000000000118708
- (void)showPromptWithToken:(id)arg1 style:(long long)arg2;	// IMP=0x0000000000118159
- (void)_removeCredential:(id)arg1;	// IMP=0x0000000000117d5f
- (void)_updateCredential:(id)arg1;	// IMP=0x0000000000117baf
- (void)_saveCredential:(id)arg1;	// IMP=0x0000000000117aeb
- (void)_configureSecurityPromptActionsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000117614
- (void)_checkIfWarningStoreAlreadyContainsCredentialWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001172be
- (void)credentialsSubmittedForWebsiteURL:(id)arg1 user:(id)arg2 password:(id)arg3 passwordIsAutoGenerated:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000116af2
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000011692d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

