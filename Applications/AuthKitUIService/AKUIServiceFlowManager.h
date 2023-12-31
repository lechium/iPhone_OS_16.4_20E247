//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKRemoteViewController, NSDictionary, NSString, UIViewController;
@protocol AKUIServiceFlowManagerDelegate, OS_xpc_object;

@interface AKUIServiceFlowManager : NSObject
{
    NSDictionary *_remoteContextInfo;	// 8 = 0x8
    NSObject<OS_xpc_object> *_xpcEndpoint;	// 16 = 0x10
    id <AKUIServiceFlowManagerDelegate> _sceneFlowDelegate;	// 24 = 0x18
    AKRemoteViewController *_remoteViewController;	// 32 = 0x20
    UIViewController *_presentingViewController;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000003ee4
@property(retain, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain, nonatomic) AKRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(nonatomic) __weak id <AKUIServiceFlowManagerDelegate> sceneFlowDelegate; // @synthesize sceneFlowDelegate=_sceneFlowDelegate;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcEndpoint; // @synthesize xpcEndpoint=_xpcEndpoint;
@property(retain, nonatomic) NSDictionary *remoteContextInfo; // @synthesize remoteContextInfo=_remoteContextInfo;
- (void)notifyFlowCompletionToExitScene;	// IMP=0x0010000000003c70
- (void)notifyFlowCompletionWithCancellation;	// IMP=0x0010000000003c6a
- (void)_presentLoginRemoteViewControllerWithContext:(id)arg1;	// IMP=0x0010000000003ae9
- (void)_presentPrivateEmailRemoteViewControllerWithContext:(id)arg1 altDSID:(id)arg2;	// IMP=0x001000000000394f
- (void)_presentAuthorizationRemoteViewControllerWithContext:(id)arg1;	// IMP=0x00100000000037f4
- (void)presentAuthorizeFlowWithRootViewController:(id)arg1;	// IMP=0x0010000000003167

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

