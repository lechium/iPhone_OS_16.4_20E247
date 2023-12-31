//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSMutableURLRequest, NSString, NSURL, UIBarButtonItem, WKWebView;
@protocol OOPAWebViewControllerDelegate;

@interface OOPAWebViewController : UIViewController
{
    WKWebView *_webView;	// 8 = 0x8
    _Bool _hasAlreadyAppeared;	// 16 = 0x10
    UIBarButtonItem *_backButton;	// 24 = 0x18
    UIBarButtonItem *_forwardButton;	// 32 = 0x20
    NSMutableURLRequest *_urlRequest;	// 40 = 0x28
    struct __CFURLStorageSession *_storageSession;	// 48 = 0x30
    _Bool _hidingWebView;	// 56 = 0x38
    id <OOPAWebViewControllerDelegate> _delegate;	// 64 = 0x40
    NSURL *_authURL;	// 72 = 0x48
    NSString *_navBarTitle;	// 80 = 0x50
    NSString *_username;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0020000000002c20
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *navBarTitle; // @synthesize navBarTitle=_navBarTitle;
@property(copy, nonatomic) NSURL *authURL; // @synthesize authURL=_authURL;
@property(nonatomic) __weak id <OOPAWebViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;	// IMP=0x0010000000002a9d
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;	// IMP=0x00100000000029c0
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;	// IMP=0x0010000000002956
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000027dc
- (void)_updateNavigationPromptWithActiveURL:(id)arg1;	// IMP=0x0010000000002735
- (void)_updateNavigationButtons;	// IMP=0x00100000000026b5
- (void)_forwardButtonTapped:(id)arg1;	// IMP=0x001000000000268f
- (void)_backButtonTapped:(id)arg1;	// IMP=0x0010000000002669
- (void)_cancelButtonTapped:(id)arg1;	// IMP=0x00100000000025e0
- (void)connection:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0010000000002539
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;	// IMP=0x0010000000002284
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;	// IMP=0x0010000000002078
- (_Bool)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;	// IMP=0x0010000000002070
- (void)_loadWebView;	// IMP=0x0010000000001eb4
- (void)_loadWebViewIfReady;	// IMP=0x0010000000001e77
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000001e36
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000001b4e
- (id)init;	// IMP=0x0010000000001914

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

