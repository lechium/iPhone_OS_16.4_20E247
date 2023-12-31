//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, NSUUID, SFDialogController, WBSPermissionDialogThrottler, WKWebView, WKWebViewConfiguration, _SFAuthenticationContext, _SFFormAutoFillController;
@protocol SFWebViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SFWebViewController : UIViewController
{
    _SFFormAutoFillController *_autoFillController;	// 8 = 0x8
    _Bool _didFirstLayout;	// 16 = 0x10
    _Bool _didFinishDocumentLoad;	// 17 = 0x11
    _Bool _shouldSuppressDialogsThatBlockWebProcess;	// 18 = 0x12
    NSString *_domainWhereUserDeclinedAutomaticStrongPassword;	// 24 = 0x18
    WBSPermissionDialogThrottler *_permissionDialogThrottler;	// 32 = 0x20
    _Bool _loading;	// 40 = 0x28
    _Bool _didFirstVisuallyNonEmptyLayout;	// 41 = 0x29
    _Bool _didFirstPaint;	// 42 = 0x2a
    _Bool _hasFocusedInputFieldOnCurrentPage;	// 43 = 0x2b
    _Bool _hasFormControlInteraction;	// 44 = 0x2c
    id <SFWebViewControllerDelegate> _delegate;	// 48 = 0x30
    WKWebViewConfiguration *_webViewConfiguration;	// 56 = 0x38
    SFDialogController *_dialogController;	// 64 = 0x40
    NSUUID *_UUID;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000a39b5
@property(copy, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(readonly, nonatomic) _Bool hasFormControlInteraction; // @synthesize hasFormControlInteraction=_hasFormControlInteraction;
@property(readonly, nonatomic) _Bool hasFocusedInputFieldOnCurrentPage; // @synthesize hasFocusedInputFieldOnCurrentPage=_hasFocusedInputFieldOnCurrentPage;
@property(readonly, nonatomic) _Bool didFirstPaint; // @synthesize didFirstPaint=_didFirstPaint;
@property(readonly, nonatomic) SFDialogController *dialogController; // @synthesize dialogController=_dialogController;
@property(readonly, nonatomic) WKWebViewConfiguration *webViewConfiguration; // @synthesize webViewConfiguration=_webViewConfiguration;
@property(readonly, nonatomic) _Bool didFirstVisuallyNonEmptyLayout; // @synthesize didFirstVisuallyNonEmptyLayout=_didFirstVisuallyNonEmptyLayout;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) __weak id <SFWebViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_webView:(id)arg1 requestNotificationPermissionForSecurityOrigin:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a3830
- (_Bool)sfWebViewCanFindNextOrPrevious:(id)arg1;	// IMP=0x00000000000a37bf
- (_Bool)sfWebViewShouldFillStringForFind:(id)arg1;	// IMP=0x00000000000a3748
- (_Bool)sfWebViewCanPromptForAccountSecurityRecommendation;	// IMP=0x00000000000a36d7
- (id)sfWebView:(id)arg1 didStartDownload:(id)arg2;	// IMP=0x00000000000a364b
- (void)sfWebViewDidEndFormControlInteraction:(id)arg1;	// IMP=0x00000000000a363a
- (void)sfWebViewDidStartFormControlInteraction:(id)arg1;	// IMP=0x00000000000a3629
- (void)sfWebViewDidBecomeFirstResponder:(id)arg1;	// IMP=0x00000000000a360b
- (void)sfWebViewDidChangeSafeAreaInsets:(id)arg1;	// IMP=0x00000000000a35bb
- (void)dialogController:(id)arg1 dismissViewController:(id)arg2 withAdditionalAnimations:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a3530
- (void)dialogController:(id)arg1 presentViewController:(id)arg2 withAdditionalAnimations:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a349e
- (id)permissionDialogThrottler;	// IMP=0x00000000000a345d
- (void)presentDialog:(id)arg1 sender:(id)arg2;	// IMP=0x00000000000a343f
- (void)dialogController:(id)arg1 willPresentDialog:(id)arg2;	// IMP=0x00000000000a33ef
- (long long)dialogController:(id)arg1 presentationPolicyForDialog:(id)arg2;	// IMP=0x00000000000a3343
- (void)_webView:(id)arg1 updatedAppBadge:(id)arg2 fromSecurityOrigin:(id)arg3;	// IMP=0x00000000000a328a
- (_Bool)_webView:(id)arg1 fileUploadPanelContentIsManagedWithInitiatingFrame:(id)arg2;	// IMP=0x00000000000a3190
- (void)panel:(id)arg1 decidePolicyForLocalAuthenticatorWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a30a0
- (void)panel:(id)arg1 selectAssertionResponse:(id)arg2 source:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000a2f85
- (void)panel:(id)arg1 requestPINWithRemainingRetries:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a2e8b
- (void)panel:(id)arg1 dismissWebAuthenticationPanelWithResult:(long long)arg2;	// IMP=0x00000000000a2dc8
- (void)panel:(id)arg1 updateWebAuthenticationPanel:(long long)arg2;	// IMP=0x00000000000a2c7c
- (void)_webView:(id)arg1 runWebAuthenticationPanel:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000a2b69
- (void)_webView:(id)arg1 queryPermission:(id)arg2 forOrigin:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000a2710
- (void)_webView:(id)arg1 mediaCaptureStateDidChange:(unsigned long long)arg2;	// IMP=0x00000000000a26ab
- (void)_webView:(id)arg1 checkUserMediaPermissionForURL:(id)arg2 mainFrameURL:(id)arg3 frameIdentifier:(unsigned long long)arg4 decisionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000a25d6
- (void)_webView:(id)arg1 requestUserMediaAuthorizationForDevices:(unsigned long long)arg2 url:(id)arg3 mainFrameURL:(id)arg4 decisionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000a24f2
- (long long)_webView:(id)arg1 dataOwnerForDragSession:(id)arg2;	// IMP=0x00000000000a24df
- (long long)_webView:(id)arg1 dataOwnerForDropSession:(id)arg2;	// IMP=0x00000000000a24cf
- (void)_webView:(id)arg1 didChangeSafeAreaShouldAffectObscuredInsets:(_Bool)arg2;	// IMP=0x00000000000a247f
- (void)_webView:(id)arg1 requestGeolocationAuthorizationForURL:(id)arg2 frame:(id)arg3 decisionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000a23ab
- (void)_webViewDidExitFullscreen:(id)arg1;	// IMP=0x00000000000a2359
- (void)_webViewDidEnterFullscreen:(id)arg1;	// IMP=0x00000000000a2304
- (void)_webView:(id)arg1 printFrame:(id)arg2;	// IMP=0x00000000000a2285
- (void)_webView:(id)arg1 contextMenuDidEndForElement:(id)arg2;	// IMP=0x00000000000a21f6
- (void)_webView:(id)arg1 contextMenuForElement:(id)arg2 willCommitWithAnimator:(id)arg3;	// IMP=0x00000000000a213d
- (id)_webView:(id)arg1 contextMenuContentPreviewForElement:(id)arg2;	// IMP=0x00000000000a2098
- (void)_webView:(id)arg1 contextMenuWillPresentForElement:(id)arg2;	// IMP=0x00000000000a2009
- (void)_webView:(id)arg1 contextMenuConfigurationForElement:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a1f45
- (_Bool)_webView:(id)arg1 shouldIncludeAppLinkActionsForElement:(id)arg2;	// IMP=0x00000000000a1f3d
- (void)_webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000a1e68
- (void)webViewDidClose:(id)arg1;	// IMP=0x00000000000a1de9
- (void)_webView:(id)arg1 requestStorageAccessPanelForDomain:(id)arg2 underCurrentDomain:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000a1d71
- (void)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000a1cf5
- (void)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000a1c80
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000a1c0b
- (void)_webView:(id)arg1 insertTextSuggestion:(id)arg2 inInputSession:(id)arg3;	// IMP=0x00000000000a1bea
- (void)_webView:(id)arg1 accessoryViewCustomButtonTappedInFormInputSession:(id)arg2;	// IMP=0x00000000000a1bcc
- (void)_webView:(id)arg1 willSubmitFormValues:(id)arg2 userObject:(id)arg3 submissionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000a1ba5
- (void)copyCurrentStrongPassword;	// IMP=0x00000000000a1b88
- (void)makeStrongPasswordFieldViewableAndEditable:(_Bool)arg1;	// IMP=0x00000000000a1b6b
- (void)replaceCurrentPasswordWithPassword:(id)arg1;	// IMP=0x00000000000a1b4d
@property(readonly, nonatomic) NSString *alphanumericStrongPassword;
@property(readonly, nonatomic) NSString *defaultStrongPassword;
@property(readonly, nonatomic) NSString *currentStrongPassword;
- (id)_webViewAdditionalContextForStrongPasswordAssistance:(id)arg1;	// IMP=0x00000000000a1a33
- (void)_webView:(id)arg1 didResignInputElementStrongPasswordAppearanceWithUserInfo:(id)arg2;	// IMP=0x00000000000a1a15
- (_Bool)_webView:(id)arg1 focusRequiresStrongPasswordAssistance:(id)arg2;	// IMP=0x00000000000a1968
- (long long)_webView:(id)arg1 decidePolicyForFocusedElement:(id)arg2;	// IMP=0x00000000000a1833
- (void)_webViewDidShowSafeBrowsingWarning:(id)arg1;	// IMP=0x00000000000a17d9
- (void)_webView:(id)arg1 didStartInputSession:(id)arg2;	// IMP=0x00000000000a172e
- (void)_webView:(id)arg1 willStartInputSession:(id)arg2;	// IMP=0x00000000000a1679
- (void)_webView:(id)arg1 didPresentFocusedElementViewController:(id)arg2;	// IMP=0x00000000000a1673
- (void)formAutoFillControllerDidFocusSensitiveFormField:(id)arg1;	// IMP=0x00000000000a160d
- (void)_automaticPasswordInputViewAutoFillContextProviderRequiredNotification:(id)arg1;	// IMP=0x00000000000a1574
- (void)_userDeclinedAutomaticStrongPasswordForCurrentDomainOnTabWithUUID:(id)arg1;	// IMP=0x00000000000a1434
- (void)_automaticPasswordInputViewNotification:(id)arg1;	// IMP=0x00000000000a1288
- (void)performPageLevelAutoFill;	// IMP=0x00000000000a126b
- (_Bool)formAutoFillControllerShouldShowIconsInPasswordPicker:(id)arg1;	// IMP=0x00000000000a1263
- (void)formAutoFillControllerGetAuthenticationForAutoFill:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a0f3d
- (void)formAutoFillControllerUserChoseToUseGeneratedPassword:(id)arg1;	// IMP=0x00000000000a0f1c
- (_Bool)formAutoFillControllerDidUserDeclineAutomaticStrongPasswordForCurrentDomain:(id)arg1;	// IMP=0x00000000000a0e4a
- (_Bool)formAutoFillControllerShouldDisableStreamlinedLogin:(id)arg1;	// IMP=0x00000000000a0e42
- (id)formAutoFillControllerURLForFormAutoFill:(id)arg1;	// IMP=0x00000000000a0dde
- (_Bool)formAutoFillControllerCanPrefillForm:(id)arg1;	// IMP=0x00000000000a0db9
@property(readonly, nonatomic) _SFAuthenticationContext *autoFillAuthenticationContext;
- (int)_analyticsClient;	// IMP=0x00000000000a0d31
- (void)_webView:(id)arg1 didFinishLoadForQuickLookDocumentInMainFrame:(id)arg2;	// IMP=0x00000000000a0cb2
- (void)_webView:(id)arg1 didStartLoadForQuickLookDocumentInMainFrameWithFileName:(id)arg2 uti:(id)arg3;	// IMP=0x00000000000a0c0f
- (void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a0b5a
- (void)_webViewWebProcessDidCrash:(id)arg1;	// IMP=0x00000000000a0ae8
- (void)_webView:(id)arg1 navigationDidFinishDocumentLoad:(id)arg2;	// IMP=0x00000000000a0a44
- (void)_webView:(id)arg1 renderingProgressDidChange:(unsigned long long)arg2;	// IMP=0x00000000000a0941
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;	// IMP=0x00000000000a088d
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;	// IMP=0x00000000000a07c7
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a0717
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 preferences:(id)arg3 decisionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000a0665
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;	// IMP=0x00000000000a05d2
- (void)_webView:(id)arg1 willGoToBackForwardListItem:(id)arg2 inPageCache:(_Bool)arg3;	// IMP=0x00000000000a0533
- (void)_webViewDidEndNavigationGesture:(id)arg1 withNavigationToBackForwardListItem:(id)arg2;	// IMP=0x00000000000a04b4
- (void)_webViewWillEndNavigationGesture:(id)arg1 withNavigationToBackForwardListItem:(id)arg2;	// IMP=0x00000000000a0435
- (void)_webView:(id)arg1 decidePolicyForSOAuthorizationLoadWithCurrentPolicy:(long long)arg2 forExtension:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000a0363
- (void)_webView:(id)arg1 didNegotiateModernTLSForURL:(id)arg2;	// IMP=0x00000000000a02ea
- (void)_webView:(id)arg1 authenticationChallenge:(id)arg2 shouldAllowLegacyTLS:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a023a
- (void)_webView:(id)arg1 navigation:(id)arg2 didSameDocumentNavigation:(long long)arg3;	// IMP=0x00000000000a016e
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;	// IMP=0x000000000009ffb7
- (void)_webViewDidCancelClientRedirect:(id)arg1;	// IMP=0x000000000009ff67
- (void)_webView:(id)arg1 willPerformClientRedirectToURL:(id)arg2 delay:(double)arg3;	// IMP=0x000000000009fed6
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;	// IMP=0x000000000009fe57
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;	// IMP=0x000000000009fd67
- (void)willBeginUserInitiatedNavigation;	// IMP=0x000000000009fd3f
- (void)willActivateWebViewController;	// IMP=0x000000000009fd22
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000009fa98
- (void)invalidate;	// IMP=0x000000000009fa7b
- (void)dealloc;	// IMP=0x000000000009f861
@property(readonly, nonatomic) WKWebView *webView;
- (id)_presentingViewControllerForWebView:(id)arg1;	// IMP=0x000000000009f7e3
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000009f7d0
- (void)loadView;	// IMP=0x000000000009f461
- (id)initWithWebViewConfiguration:(id)arg1;	// IMP=0x000000000009f1e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

