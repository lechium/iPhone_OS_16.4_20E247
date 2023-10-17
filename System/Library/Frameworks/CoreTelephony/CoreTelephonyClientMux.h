//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FrameworkCache, MuxNotificationSink, NSError, NSSet, NSXPCConnection, NSXPCListenerEndpoint;

__attribute__((visibility("hidden")))
@interface CoreTelephonyClientMux : NSObject
{
    struct map<__unsafe_unretained id, (anonymous namespace)::DelegateContext, std::less<__unsafe_unretained id>, std::allocator<std::pair<const __unsafe_unretained id, (anonymous namespace)::DelegateContext>>> _delegates;	// 8 = 0x8
    NSSet *_currentSelectorSet;	// 32 = 0x20
    struct map<__CTAssertionType *, std::pair<dispatch::queue, void (^)(NSError *)>, std::less<__CTAssertionType *>, std::allocator<std::pair<__CTAssertionType *const, std::pair<dispatch::queue, void (^)(NSError *)>>>> _clientCallback;	// 40 = 0x28
    FrameworkCache *_cache;	// 64 = 0x40
    NSXPCConnection *_connection;	// 72 = 0x48
    struct queue _xpcQueue;	// 80 = 0x50
    NSXPCListenerEndpoint *_endpoint;	// 88 = 0x58
    MuxNotificationSink *_notificationSink;	// 96 = 0x60
    NSError *_reconnectError;	// 104 = 0x68
}

- (id).cxx_construct;	// IMP=0x0000000000057ce9
- (void).cxx_destruct;	// IMP=0x0000000000057c6d
@property(retain, nonatomic) NSError *reconnectError; // @synthesize reconnectError=_reconnectError;
@property(retain, nonatomic) MuxNotificationSink *notificationSink; // @synthesize notificationSink=_notificationSink;
@property(retain, nonatomic) NSXPCListenerEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(nonatomic) struct queue xpcQueue; // @synthesize xpcQueue=_xpcQueue;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)registerBlockForInvalidationNotification:(struct __CTAssertionType *)arg1 callbackQueue:(struct queue)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x0000000000057ae4
- (struct __CTAssertionType *)createCTAssertionForConnectionType:(int)arg1 allocator:(struct __CFAllocator *)arg2 proxy:(id)arg3;	// IMP=0x0000000000057a0e
- (unsigned long long)_getAssertionTypeId;	// IMP=0x00000000000579e0
- (void)removeAssertionForInvalidationNotification:(struct __CTAssertionType *)arg1;	// IMP=0x0000000000057944
- (void)_sendConnectionInvalidatedNotification_sync:(id)arg1;	// IMP=0x00000000000577b1
- (id)_connection;	// IMP=0x000000000005779f
- (void)_ensureConnectionSetup_sync:(_Bool)arg1;	// IMP=0x0000000000057760
- (void)_ensureConnectionSetup_sync;	// IMP=0x0000000000057749
- (void)_initializeConnection_sync;	// IMP=0x0000000000057735
- (void)_connect_sync;	// IMP=0x0000000000056cbb
- (void)_setReconnectError_sync:(id)arg1;	// IMP=0x0000000000056caa
- (void)_registerForNotifications_sync:(id)arg1 shouldForce:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000056acf
- (void)_computeNotificationSet_sync:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000005672b
- (void)_computeNotificationSet_sync:(CDUnknownBlockType)arg1;	// IMP=0x0000000000056713
- (void)_computeNotificationSetForced_sync:(CDUnknownBlockType)arg1;	// IMP=0x00000000000566f8
- (void)_computeNotificationSetForced_sync;	// IMP=0x000000000005667a
- (id)proxyWithErrorHandler_sync:(CDUnknownBlockType)arg1;	// IMP=0x00000000000565fa
- (void)cacheValue:(id)arg1 forSelector:(SEL)arg2;	// IMP=0x00000000000565e3
- (id)cachedValueForSelector:(SEL)arg1;	// IMP=0x00000000000565cd
- (id)synchronousProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000056513
- (id)proxyWithQueue:(struct queue)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000056452
- (void)sink:(id)arg1 handleNotification:(id)arg2;	// IMP=0x00000000000560a1
- (void)removeDelegate:(id)arg1;	// IMP=0x0000000000056013
- (void)addDelegate:(id)arg1 queue:(struct queue)arg2;	// IMP=0x0000000000055f4b
- (void)dealloc;	// IMP=0x0000000000055e82
- (id)initWithEndpoint:(id)arg1 sink:(id)arg2;	// IMP=0x0000000000055ded
- (id)initWithSink:(id)arg1;	// IMP=0x0000000000055c75
- (id)init;	// IMP=0x0000000000055c11

@end
