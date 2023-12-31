//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class AppleConnectSSOAuthenticator, NSString, NSURL, UIBarButtonItem, UIButton, UILabel;

@interface MapsAppleConnectAuthViewController : UIViewController
{
    AppleConnectSSOAuthenticator *_appleConnectAuthenticator;	// 8 = 0x8
    UILabel *_statusLabel;	// 16 = 0x10
    UIButton *_reAuthButton;	// 24 = 0x18
    UIBarButtonItem *_cancelButton;	// 32 = 0x20
    unsigned long long _state;	// 40 = 0x28
    _Bool _alreadyDisplayedACAuth;	// 48 = 0x30
    NSURL *_authProxyURL;	// 56 = 0x38
}

+ (void)presentAppleConnectAuthControllerFrom:(id)arg1 withProxyURL:(id)arg2;	// IMP=0x0020000000652ad7
- (void).cxx_destruct;	// IMP=0x0020000000654654
@property(nonatomic) _Bool alreadyDisplayedACAuth; // @synthesize alreadyDisplayedACAuth=_alreadyDisplayedACAuth;
@property(copy, nonatomic) NSURL *authProxyURL; // @synthesize authProxyURL=_authProxyURL;
@property(retain, nonatomic) NSString *personID;
- (void)authenticator:(id)arg1 didCompleteWithError:(id)arg2;	// IMP=0x001000000065421f
- (void)authenticator:(id)arg1 didCompleteWithResult:(id)arg2;	// IMP=0x0010000000653f7d
- (void)_doAppleConnectAuthentication;	// IMP=0x0010000000653dc0
- (void)_dismissViewController;	// IMP=0x0010000000653d39
- (void)_updateStatus:(_Bool)arg1 message:(id)arg2;	// IMP=0x0010000000653bed
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000653b33
- (void)viewDidLoad;	// IMP=0x0010000000652d14
- (id)initWithProxyURL:(id)arg1;	// IMP=0x0010000000652a69

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

