//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class ICQUpgradeFlowManager, NSObject, NSString;
@protocol OS_xpc_object, SBUIRemoteAlertHostInterface;

@interface ICQRemoteViewController : SBUIRemoteAlertServiceViewController
{
    ICQUpgradeFlowManager *_flowManager;	// 8 = 0x8
    id <SBUIRemoteAlertHostInterface> _remoteVCProxy;	// 16 = 0x10
    NSObject<OS_xpc_object> *_xpcEndpoint;	// 24 = 0x18
    _Bool _isDismissing;	// 32 = 0x20
}

+ (_Bool)isValidICQURL:(id)arg1;	// IMP=0x00200000000029a6
- (void).cxx_destruct;	// IMP=0x0020000000003957
- (void)upgradeFlowManagerDidComplete:(id)arg1;	// IMP=0x001000000000367b
- (void)upgradeFlowManagerDidCancel:(id)arg1;	// IMP=0x00100000000034da
- (void)_cancelFlow;	// IMP=0x001000000000349a
- (void)handleButtonActions:(id)arg1;	// IMP=0x0010000000003347
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000309e
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0010000000003044
- (void)_main_dismissAndExit;	// IMP=0x0010000000002f63
- (void)_dismissAndExit;	// IMP=0x0010000000002e6f
- (void)_dismissFlowWithSuccess:(_Bool)arg1;	// IMP=0x0010000000002b53
- (void)_presentDefaultFlowWithOffer:(id)arg1 flowOptions:(id)arg2 containerViewController:(id)arg3;	// IMP=0x001000000000207a
- (void)_presentFreshmintWithOffer:(id)arg1 link:(id)arg2 flowOptions:(id)arg3 preloadedRemoteUIData:(id)arg4;	// IMP=0x0010000000001c0d
- (void)_setupRemoteProxy;	// IMP=0x0010000000001b77
- (_Bool)_shouldRemoveViewFromHierarchyOnDisappear;	// IMP=0x0010000000001b6f
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000001b1f
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000001ac9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

