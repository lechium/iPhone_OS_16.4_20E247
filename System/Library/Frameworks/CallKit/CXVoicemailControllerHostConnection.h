//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString, NSURL, NSXPCConnection;
@protocol CXVoicemailControllerHostConnectionDelegate, CXVoicemailControllerVendorProtocol, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CXVoicemailControllerHostConnection : NSObject
{
    NSString *_applicationIdentifier;	// 8 = 0x8
    NSURL *_bundleURL;	// 16 = 0x10
    id <CXVoicemailControllerHostConnectionDelegate> _delegate;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_serialQueue;	// 32 = 0x20
    NSXPCConnection *_connection;	// 40 = 0x28
    NSSet *_capabilities;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000054313
@property(copy, nonatomic) NSSet *capabilities; // @synthesize capabilities=_capabilities;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(nonatomic) __weak id <CXVoicemailControllerHostConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
@property(copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (oneway void)requestTransaction:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000054136
- (oneway void)requestVoicemails:(CDUnknownBlockType)arg1;	// IMP=0x0000000000054030
- (oneway void)removeVoicemails:(id)arg1;	// IMP=0x0000000000053fbe
- (oneway void)addOrUpdateVoicemails:(id)arg1;	// IMP=0x0000000000053f4c
@property(readonly, nonatomic) id <CXVoicemailControllerVendorProtocol> remoteObjectProxy;
@property(readonly, nonatomic, getter=isPermittedToUsePrivateAPI) _Bool permittedToUsePrivateAPI;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000053d98
- (id)initWithConnection:(id)arg1 serialQueue:(id)arg2;	// IMP=0x0000000000053695
- (id)init;	// IMP=0x0000000000053687

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
