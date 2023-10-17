//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class ICQRemoteContext, ICQUpgradeFlowManager, NSString;

@interface ICQUIRootViewController : UIViewController
{
    ICQUpgradeFlowManager *_flowManager;	// 8 = 0x8
    ICQRemoteContext *_remoteContext;	// 16 = 0x10
    NSString *_sceneIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000005124
@property(copy, nonatomic) NSString *sceneIdentifier; // @synthesize sceneIdentifier=_sceneIdentifier;
@property(retain, nonatomic) ICQRemoteContext *remoteContext; // @synthesize remoteContext=_remoteContext;
- (void)_dismissAndExit;	// IMP=0x0010000000004ece
- (void)_notifyFlowCompletionToDaemonWithSuccess:(_Bool)arg1;	// IMP=0x0010000000004bfa
- (void)_dismissFlowWithSuccess:(_Bool)arg1;	// IMP=0x0010000000004b3f
- (void)upgradeFlowManager:(id)arg1 didPresentViewController:(id)arg2;	// IMP=0x0010000000004afe
- (void)upgradeFlowManagerDidComplete:(id)arg1;	// IMP=0x0010000000004867
- (void)upgradeFlowManagerDidCancel:(id)arg1;	// IMP=0x0010000000004748
- (void)_presentUpgradeFlow;	// IMP=0x00100000000044d2
- (void)viewDidLoad;	// IMP=0x00100000000043a5
- (void)loadView;	// IMP=0x001000000000436c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
