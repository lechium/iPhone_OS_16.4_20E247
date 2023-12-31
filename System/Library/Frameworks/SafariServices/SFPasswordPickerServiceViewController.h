//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, NSURL, SFAccountPickerViewController, WBSGlobalFrameIdentifier, _ASCredentialAuthenticationViewController, _ASIncomingCallObserver, _SFAuthenticationContext;

__attribute__((visibility("hidden")))
@interface SFPasswordPickerServiceViewController
{
    _ASCredentialAuthenticationViewController *_externalCredentialViewController;	// 8 = 0x8
    SFAccountPickerViewController *_accountPickerViewController;	// 16 = 0x10
    _Bool _presentInPopover;	// 24 = 0x18
    _Bool _hasAuthenticationForOtherPasswords;	// 25 = 0x19
    NSURL *_webViewURL;	// 32 = 0x20
    _SFAuthenticationContext *_context;	// 40 = 0x28
    NSString *_remoteAppID;	// 48 = 0x30
    NSString *_remoteLocalizedAppName;	// 56 = 0x38
    NSString *_remoteUnlocalizedAppName;	// 64 = 0x40
    NSArray *_externallyVerifiedAssociatedDomains;	// 72 = 0x48
    double _authenticationGracePeriod;	// 80 = 0x50
    WBSGlobalFrameIdentifier *_webFrameIdentifier;	// 88 = 0x58
    NSString *_credentialType;	// 96 = 0x60
    CDUnknownBlockType _presentCredentialsHandler;	// 104 = 0x68
    _ASIncomingCallObserver *_callObserver;	// 112 = 0x70
}

+ (id)_exportedInterface;	// IMP=0x0010000000096d81
+ (id)_remoteViewControllerInterface;	// IMP=0x0010000000096c89
- (void).cxx_destruct;	// IMP=0x000000000009bac2
- (void)credentialAuthenticationViewController:(id)arg1 didFinishWithCredential:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000009b791
- (void)presentUIForPasswordCredentialAuthenticationViewController:(id)arg1;	// IMP=0x000000000009b776
- (void)credentialListViewController:(id)arg1 didFinishWithCredential:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000009b532
- (void)credentialProviderExtensionManagerExtensionListDidChange:(id)arg1;	// IMP=0x000000000009b52c
- (void)setPageID:(id)arg1 frameID:(id)arg2 credentialType:(id)arg3;	// IMP=0x000000000009b3cf
- (void)setAuthenticationGracePeriod:(double)arg1;	// IMP=0x000000000009b376
- (void)setExternallyVerifiedAndApprovedSharedWebCredentialsDomains:(id)arg1;	// IMP=0x000000000009b2e6
- (void)setRemoteUnlocalizedAppName:(id)arg1;	// IMP=0x000000000009b256
- (void)setRemoteLocalizedAppName:(id)arg1;	// IMP=0x000000000009b1c6
- (void)setRemoteAppID:(id)arg1;	// IMP=0x000000000009b136
- (void)setWebViewURL:(id)arg1;	// IMP=0x000000000009b0c0
- (void)_sendCredentialToClientAndDismiss:(id)arg1;	// IMP=0x000000000009ae4d
- (void)_authenticateAndSetPresentCredentialsHandlerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000009865b
- (void)_fillCredential:(id)arg1 needsAuthentication:(_Bool)arg2;	// IMP=0x0000000000097ef9
- (void)authenticateToPresentInPopover:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000097ed9
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x0000000000097ec6
- (void)_presentCredentialListForExtension:(id)arg1;	// IMP=0x00000000000978db
- (id)_actionForPresentingPasswordManagerExtension:(id)arg1;	// IMP=0x000000000009768f
- (void)_authenticateToViewOtherPasswordsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000009719b
- (void)_dismiss;	// IMP=0x000000000009713f
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000009702e
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000096f9a
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000096da1
- (id)_context;	// IMP=0x0000000000096d23
- (_Bool)contextShouldAllowMultipleBiometricFailures:(id)arg1;	// IMP=0x0000000000096d1b
- (_Bool)contextShouldAllowPasscodeFallback:(id)arg1;	// IMP=0x0000000000096d13
- (_Bool)contextRequiresSessionBasedAuthentication:(id)arg1;	// IMP=0x0000000000096d0b
- (_Bool)displayMessageAsTitleForContext:(id)arg1;	// IMP=0x0000000000096d03
- (id)passcodePromptForContext:(id)arg1;	// IMP=0x0000000000096cda
- (id)authenticationMessageForContext:(id)arg1;	// IMP=0x0000000000096cb1
- (id)authenticationCustomUIProgressObserverForContext:(id)arg1;	// IMP=0x0000000000096ca9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

