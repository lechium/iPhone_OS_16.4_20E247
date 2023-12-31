//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol GCGameIntentXPCProxyRemoteClientEndpointInterface, GCGameIntentXPCProxyServerEndpointDelegate, NSObject><NSCopying><NSSecureCoding, _GCControllerComponentDescription, _GCIPCEndpointConnection;

__attribute__((visibility("hidden")))
@interface GCGameIntentXPCProxyServerEndpoint : NSObject
{
    id <GCGameIntentXPCProxyRemoteClientEndpointInterface> _clientEndpoint;	// 8 = 0x8
    id <_GCIPCEndpointConnection> _connection;	// 16 = 0x10
    id _connectionInterruptionRegistration;	// 24 = 0x18
    id _connectionInvalidationRegistration;	// 32 = 0x20
    id <NSObject><NSCopying><NSSecureCoding> _identifier;	// 40 = 0x28
    id <GCGameIntentXPCProxyServerEndpointDelegate> _delegate;	// 48 = 0x30
    id _userInfo;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000035f94
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) __weak id <GCGameIntentXPCProxyServerEndpointDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
- (void)fetchObjectIdentifierWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000035ed2
- (void)invalidateConnection;	// IMP=0x0000000000035e1f
- (_Bool)acceptClient:(id)arg1 onConnection:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000035bb0
- (void)invalidateClient;	// IMP=0x0000000000035aef
- (void)triggerGameIntentWithEvent:(long long)arg1;	// IMP=0x0000000000035a9e
@property(readonly, nonatomic) id <_GCControllerComponentDescription> receiverDescription;
- (id)init;	// IMP=0x0000000000035a0d
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000035998

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

