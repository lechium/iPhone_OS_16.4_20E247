//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSString, NSXPCConnection, RBSAssertion;
@protocol WCDPKClientDelegate;

@interface WCDPKClient : NSObject
{
    _Bool _productionEnvironment;	// 8 = 0x8
    NSString *_bundleID;	// 16 = 0x10
    NSXPCConnection *_connection;	// 24 = 0x18
    NSObject<WCDPKClientDelegate> *_delegate;	// 32 = 0x20
    RBSAssertion *_assertion;	// 40 = 0x28
    CDUnknownBlockType _assertionInvalidationHandler;	// 48 = 0x30
    NSData *_token;	// 56 = 0x38
    NSMutableArray *_pendingPayloads;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000021027
@property(retain, nonatomic) NSMutableArray *pendingPayloads; // @synthesize pendingPayloads=_pendingPayloads;
@property(copy, nonatomic) NSData *token; // @synthesize token=_token;
@property(copy, nonatomic) CDUnknownBlockType assertionInvalidationHandler; // @synthesize assertionInvalidationHandler=_assertionInvalidationHandler;
@property(retain, nonatomic) RBSAssertion *assertion; // @synthesize assertion=_assertion;
@property(nonatomic) __weak NSObject<WCDPKClientDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isProductionEnvironment) _Bool productionEnvironment; // @synthesize productionEnvironment=_productionEnvironment;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)remoteObjectProxy;	// IMP=0x0010000000020e97
- (void)complicationUnregister;	// IMP=0x0010000000020e4b
- (void)complicationRegister;	// IMP=0x0010000000020dff
- (void)deliverPayload:(id)arg1;	// IMP=0x0010000000020c34
- (void)deliverToken:(id)arg1;	// IMP=0x0010000000020a8c
- (void)deliverPendingItems;	// IMP=0x00100000000208b8
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;	// IMP=0x0010000000020800
- (void)systemObserverAppDidSuspendForBundleID:(id)arg1;	// IMP=0x00100000000206dc
@property(readonly, nonatomic) _Bool isRunning;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000001ff52
@property(readonly, copy) NSString *description;
- (void)setupBundleIDMonitoring;	// IMP=0x001000000001fd87
- (void)dealloc;	// IMP=0x001000000001fc55
- (id)initWithBundleID:(id)arg1;	// IMP=0x001000000001fbc2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

