//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue, VCPMADServicePublicServerProtocol;

@interface VCPMADServicePublicClientHandler
{
    NSXPCConnection *_connection;	// 8 = 0x8
    id <VCPMADServicePublicServerProtocol> _clientProxy;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_managementQueue;	// 24 = 0x18
    NSMutableDictionary *_taskIDMapping;	// 32 = 0x20
    NSString *_clientBundleID;	// 40 = 0x28
    NSString *_clientTeamID;	// 48 = 0x30
}

+ (unsigned long long)requestLimit;	// IMP=0x0020000000003e6b
+ (id)clientHandlerWithXPCConnection:(id)arg1;	// IMP=0x0010000000003e06
- (void).cxx_destruct;	// IMP=0x0020000000006040
- (void)endEntryPoint;	// IMP=0x001000000000602b
- (void)cacheHitWithQueryID:(unsigned long long)arg1 cachedResultQueryID:(unsigned long long)arg2;	// IMP=0x001000000000600d
- (void)startEntryPointWithQueryID:(unsigned long long)arg1;	// IMP=0x0010000000005ff5
- (void)cancelAllRequests;	// IMP=0x0010000000005c26
- (void)cancelRequest:(int)arg1;	// IMP=0x0010000000005929
- (void)currentOutstandingTasksWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000005899
- (void)requestImageProcessing:(id)arg1 forAssetURL:(id)arg2 withSandboxToken:(id)arg3 identifier:(id)arg4 requestID:(int)arg5 andReply:(CDUnknownBlockType)arg6;	// IMP=0x0010000000004ff9
- (void)requestImageProcessing:(id)arg1 forIOSurface:(id)arg2 withOrientation:(unsigned int)arg3 identifier:(id)arg4 requestID:(int)arg5 andReply:(CDUnknownBlockType)arg6;	// IMP=0x00100000000048a9
- (void)completeRequest:(int)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000045e4
- (_Bool)scheduleTask:(id)arg1 withRequestID:(int)arg2 error:(id *)arg3;	// IMP=0x0010000000003e76
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x00100000000036fe
- (id)init;	// IMP=0x00100000000036f0

@end
