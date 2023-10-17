//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BKSApplicationStateMonitor, NSMutableArray, NSString, UIColor, UIView, UIWebClip, WBSApplicationManifestFetcher, WKProcessPool, WKWebsiteDataStore, _SFInjectedJavaScriptController, _SFWebClipMetadataFetcher;

__attribute__((visibility("hidden")))
@interface _SFWebAppServiceViewController
{
    UIWebClip *_webClip;	// 8 = 0x8
    UIView *_statusBarBackgroundView;	// 16 = 0x10
    WKProcessPool *_processPool;	// 24 = 0x18
    WKWebsiteDataStore *_websiteDataStore;	// 32 = 0x20
    NSMutableArray *_fallbackURLs;	// 40 = 0x28
    BKSApplicationStateMonitor *_stateMonitor;	// 48 = 0x30
    unsigned int _hostState;	// 56 = 0x38
    unsigned long long _mediaStateIconBeforeSuspension;	// 64 = 0x40
    WBSApplicationManifestFetcher *_applicationManifestFetcher;	// 72 = 0x48
    _SFInjectedJavaScriptController *_activityJSController;	// 80 = 0x50
    _SFWebClipMetadataFetcher *_webClipMetadataFetcher;	// 88 = 0x58
    UIColor *_themeColor;	// 96 = 0x60
    _Bool _updatingThemeColor;	// 104 = 0x68
}

+ (id)_exportedInterface;	// IMP=0x0010000000082f35
+ (id)_remoteViewControllerInterface;	// IMP=0x0010000000082f15
+ (id)serviceViewControllers;	// IMP=0x0010000000082eb0
- (void).cxx_destruct;	// IMP=0x0000000000088504
- (void)_updateThemeColor;	// IMP=0x0000000000088396
- (void)_fetchApplicationManifestIfNeeded;	// IMP=0x0000000000087f05
- (void)statusBarIndicatorTappedWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000087c03
@property(readonly, nonatomic) _Bool audioOnly;
- (void)muteMediaCapture;	// IMP=0x0000000000087aef
@property(readonly, copy, nonatomic) NSString *URLString;
- (void)setMediaStateIcon:(unsigned long long)arg1;	// IMP=0x000000000008794c
@property(readonly, nonatomic) _Bool canOverrideStatusBar;
- (void)_loadNextFallbackURL;	// IMP=0x00000000000878c4
- (void)_loadWebClipPageURL:(id)arg1;	// IMP=0x00000000000876e3
- (id)_canonicalPageURL;	// IMP=0x0000000000087611
- (void)_handleHostStateUpdate:(id)arg1;	// IMP=0x000000000008751f
- (void)handlePushNotificationActivation:(id)arg1;	// IMP=0x00000000000873ec
- (void)processWebPushForWebAppWithIdentifier:(id)arg1;	// IMP=0x0000000000086f3e
- (void)websiteDataStore:(id)arg1 workerOrigin:(id)arg2 updatedAppBadge:(id)arg3;	// IMP=0x0000000000086aeb
- (void)websiteDataStore:(id)arg1 openWindow:(id)arg2 fromServiceWorkerOrigin:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000086998
- (void)websiteDataStore:(id)arg1 showNotification:(id)arg2;	// IMP=0x0000000000086405
- (id)notificationPermissionsForWebsiteDataStore:(id)arg1;	// IMP=0x0000000000085eb2
- (id)placeholderBundleIdentifierForDataStore:(id)arg1;	// IMP=0x0000000000085e22
- (void)loadWebAppWithIdentifier:(id)arg1;	// IMP=0x00000000000858fe
- (void)navigationBarDoneButtonWasTapped:(id)arg1;	// IMP=0x00000000000856a7
- (long long)_persona;	// IMP=0x000000000008569c
- (void)_initialLoadFinishedWithSuccess:(_Bool)arg1;	// IMP=0x0000000000085643
- (id)processPool;	// IMP=0x00000000000855fe
- (_Bool)_usesScrollToTopView;	// IMP=0x00000000000855f6
- (void)_setCurrentWebViewController:(id)arg1;	// IMP=0x00000000000854f7
- (id)webViewConfiguration;	// IMP=0x00000000000853f5
- (void)setupPreferences:(id)arg1;	// IMP=0x000000000008534a
- (void)_setUpCookieStoragePolicyForDataStore:(id)arg1;	// IMP=0x0000000000085344
- (id)websiteDataStore;	// IMP=0x00000000000852be
- (id)createWebsiteDataStoreForWebClipIdentifier:(id)arg1;	// IMP=0x00000000000851f6
- (id)websiteDataStoreConfigurationWithWebClipIdentifier:(id)arg1;	// IMP=0x0000000000084d9c
- (_Bool)canPrint;	// IMP=0x0000000000084d87
- (void)webViewControllerDidUpdateThemeColor:(id)arg1;	// IMP=0x0000000000084d75
- (void)_updateDisplayMode;	// IMP=0x0000000000084a51
- (void)webViewControllerDidChangeURL:(id)arg1;	// IMP=0x0000000000084a10
- (void)webViewController:(id)arg1 didFinishNavigation:(id)arg2;	// IMP=0x0000000000084960
- (void)webViewController:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;	// IMP=0x000000000008491f
- (_Bool)_isURLOutOfScope:(id)arg1 withLoginURLExempted:(_Bool)arg2;	// IMP=0x0000000000084880
- (_Bool)_isURLOutOfLegacyScope:(id)arg1 withLoginURLExempted:(_Bool)arg2;	// IMP=0x0000000000084684
- (_Bool)_isURLOutOfManifestScope:(id)arg1;	// IMP=0x0000000000084560
- (void)webViewController:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000083f42
- (void)webViewControllerDidFirstVisuallyNonEmptyLayout:(id)arg1;	// IMP=0x0000000000083ed3
- (void)webViewControllerDidChangeLoadingState:(id)arg1;	// IMP=0x0000000000083e2a
- (void)webViewController:(id)arg1 updatedAppBadge:(id)arg2 fromSecurityOrigin:(id)arg3;	// IMP=0x0000000000083afd
- (void)webViewController:(id)arg1 requestNotificationPermissionForSecurityOrigin:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000083754
- (void)webAppWillResignActive;	// IMP=0x00000000000836f8
- (void)webAppDidBecomeActive;	// IMP=0x0000000000083667
- (void)_hostApplicationDidEnterBackground;	// IMP=0x00000000000835a0
- (void)setNeedsStatusBarAppearanceUpdate;	// IMP=0x00000000000833d1
- (long long)preferredStatusBarStyle;	// IMP=0x0000000000083350
- (void)viewDidLoad;	// IMP=0x000000000008326c
- (void)clearWebsiteDataWithWebClipIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000008316d
- (void)clearWebViewAndWebsiteDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000082fe9
- (void)dealloc;	// IMP=0x0000000000082fa0
- (_Bool)_clientIsWebApp;	// IMP=0x0000000000082f55

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
