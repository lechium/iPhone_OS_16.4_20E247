//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue, WCDClientDelegate;

@interface WCDPrivateClient : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    NSObject<WCDClientDelegate> *_delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000001162f
@property(retain) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property __weak NSObject<WCDClientDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (id)remoteObjectProxy;	// IMP=0x001000000001155a
- (void)handlePairedSyncComplicationsStartedWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000114e8
- (void)isApplicationInfoPrivileged:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000011439
- (void)handlePingForApplicationInfo:(id)arg1;	// IMP=0x00100000000113a6
- (id)preferredBundleIDForApplicationInfo:(id)arg1;	// IMP=0x0010000000011343
- (void)fakeIncomingPayloadOnSubService:(id)arg1 ofType:(id)arg2 clientData:(id)arg3 resource:(id)arg4 resourceSandboxToken:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000010889
- (void)reconnect;	// IMP=0x001000000001082b
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;	// IMP=0x0010000000010773
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000001065d
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00100000000101e3
- (id)init;	// IMP=0x001000000001018b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

