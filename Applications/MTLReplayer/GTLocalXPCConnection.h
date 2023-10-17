//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_os_transaction, OS_xpc_object;

@interface GTLocalXPCConnection : NSObject
{
    NSObject<OS_xpc_object> *_connection;	// 8 = 0x8
    NSObject<OS_os_transaction> *_transaction;	// 16 = 0x10
    NSMutableDictionary *_dispatchers;	// 24 = 0x18
    NSObject<OS_xpc_object> *_error;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000006418c
@property(retain, nonatomic) NSObject<OS_xpc_object> *error; // @synthesize error=_error;
- (void)activateWithMessageHandler:(CDUnknownBlockType)arg1 andErrorHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000640a9
- (id)sendMessageWithReplySync:(id)arg1;	// IMP=0x0010000000064090
- (void)sendMessage:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000064044
- (void)sendMessage:(id)arg1;	// IMP=0x0010000000064033
@property(readonly, nonatomic) NSObject<OS_xpc_object> *connection;
- (void)dispatchMessage:(id)arg1;	// IMP=0x0010000000063f75
- (void)deregisterDispatcher:(unsigned long long)arg1;	// IMP=0x0010000000063f21
- (unsigned long long)registerDispatcher:(id)arg1;	// IMP=0x0010000000063eef
- (void)registerDispatcher:(id)arg1 forPort:(unsigned long long)arg2;	// IMP=0x0010000000063e6d
- (id)initWithTransactionScopedXPCConnection:(id)arg1;	// IMP=0x0010000000063de8
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x0010000000063d63

@end
