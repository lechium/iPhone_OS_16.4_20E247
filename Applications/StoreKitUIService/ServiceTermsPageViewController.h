//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class NSString, SKTermsPageViewController, ServiceAlertProxy;

@interface ServiceTermsPageViewController : SBUIRemoteAlertServiceViewController
{
    ServiceAlertProxy *_remoteAlertProxy;	// 8 = 0x8
    SKTermsPageViewController *_underlyingViewController;	// 16 = 0x10
}

+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x0020000000012969
- (void).cxx_destruct;	// IMP=0x002000000001383d
- (void)_showViewControllerForAlertProxy:(id)arg1;	// IMP=0x00100000000133ba
- (id)_remoteViewControllerProxy;	// IMP=0x001000000001337c
- (void)_dismissWithAcceptance:(_Bool)arg1;	// IMP=0x001000000001330d
- (void)_dismissClientViewController;	// IMP=0x001000000001327f
- (void)_dismiss;	// IMP=0x00100000000131d5
- (_Bool)_checkEntitlementsWithError:(id *)arg1;	// IMP=0x0010000000013115
- (void)termsPageViewControllerDidFinish:(id)arg1 withAcceptance:(_Bool)arg2;	// IMP=0x0010000000013101
- (void)termsPageViewControllerDidFinish:(id)arg1;	// IMP=0x00100000000130ef
- (void)handleHomeButtonPressed;	// IMP=0x00100000000130dd
- (void)alertProxyDidCancel:(id)arg1;	// IMP=0x0010000000012f40
- (void)_willAppearInRemoteViewController:(id)arg1;	// IMP=0x0010000000012eab
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000012e24
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x0010000000012c9a
- (void)viewDidLoad;	// IMP=0x0010000000012c02
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000012971
- (void)dealloc;	// IMP=0x00100000000128fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
