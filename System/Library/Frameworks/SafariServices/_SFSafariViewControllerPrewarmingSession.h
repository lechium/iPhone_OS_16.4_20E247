//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString, SFBrowserRemoteViewController, SFQueueingServiceViewControllerProxy, _UIAsyncInvocation;
@protocol SFServiceViewControllerProtocol;

__attribute__((visibility("hidden")))
@interface _SFSafariViewControllerPrewarmingSession : NSObject
{
    SFQueueingServiceViewControllerProxy<SFServiceViewControllerProtocol> *_serviceProxy;	// 8 = 0x8
    _UIAsyncInvocation *_cancelViewServiceRequest;	// 16 = 0x10
    NSHashTable *_tokens;	// 24 = 0x18
    _Bool _suspended;	// 32 = 0x20
    SFBrowserRemoteViewController *_remoteViewController;	// 40 = 0x28
}

+ (id)sharedSessionIfExists;	// IMP=0x00100000000aa73a
+ (id)sharedSession;	// IMP=0x00100000000aa723
+ (id)_sharedSessionCreateIfNeeded:(_Bool)arg1;	// IMP=0x00100000000aa6ca
- (void).cxx_destruct;	// IMP=0x00000000000ab1d5
@property(readonly, nonatomic) SFBrowserRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
- (void)remoteViewController:(id)arg1 initialLoadDidRedirectToURL:(id)arg2;	// IMP=0x00000000000ab1c5
- (void)remoteViewController:(id)arg1 hostApplicationOpenURL:(id)arg2;	// IMP=0x00000000000ab1bf
- (void)remoteViewController:(id)arg1 setSwipeGestureEnabled:(_Bool)arg2;	// IMP=0x00000000000ab1b9
- (void)remoteViewController:(id)arg1 executeCustomActivityProxyID:(id)arg2;	// IMP=0x00000000000ab1b3
- (void)remoteViewController:(id)arg1 fetchActivityViewControllerInfoForURL:(id)arg2 title:(id)arg3;	// IMP=0x00000000000ab1ad
- (void)remoteViewControllerDidLoadWebView:(id)arg1;	// IMP=0x00000000000ab1a7
- (void)remoteViewController:(id)arg1 didFinishInitialLoad:(_Bool)arg2;	// IMP=0x00000000000ab1a1
- (void)remoteViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2;	// IMP=0x00000000000ab0b5
- (void)remoteViewControllerWillDismiss:(id)arg1;	// IMP=0x00000000000ab0af
- (void)serviceProxyWillQueueInvocation:(id)arg1;	// IMP=0x00000000000ab094
- (void)_connectToService;	// IMP=0x00000000000aaed9
- (void)_disconnectFromService;	// IMP=0x00000000000aae74
- (id)_validTokens;	// IMP=0x00000000000aae04
- (_Bool)_hasValidTokens;	// IMP=0x00000000000aaccf
- (void)_resume;	// IMP=0x00000000000aac16
- (void)_suspend;	// IMP=0x00000000000aaba6
- (void)restart;	// IMP=0x00000000000aab78
- (void)tokenWithIDDidInvalidate:(unsigned long long)arg1;	// IMP=0x00000000000aaa80
- (id)prewarmConnectionsToURLs:(id)arg1;	// IMP=0x00000000000aa8fc
- (void)dealloc;	// IMP=0x00000000000aa887
- (id)init;	// IMP=0x00000000000aa74e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

