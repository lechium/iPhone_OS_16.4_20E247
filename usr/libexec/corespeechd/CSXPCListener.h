//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface CSXPCListener : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_xpc_object> *_listener;	// 16 = 0x10
    NSMutableArray *_connections;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000009bd0b
@property(retain, nonatomic) NSMutableArray *connections; // @synthesize connections=_connections;
@property(retain, nonatomic) NSObject<OS_xpc_object> *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)CSXPCConnectionReceivedClientError:(id)arg1 clientError:(id)arg2 client:(id)arg3;	// IMP=0x001000000009bb48
- (void)_handleNewRemoteConnection:(id)arg1;	// IMP=0x001000000009b9f0
- (void)_handleListenerError:(id)arg1;	// IMP=0x001000000009b9b9
- (void)_handleListenerEvent:(id)arg1;	// IMP=0x001000000009b8bb
- (void)listen;	// IMP=0x001000000009b743
- (id)init;	// IMP=0x001000000009b664

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
