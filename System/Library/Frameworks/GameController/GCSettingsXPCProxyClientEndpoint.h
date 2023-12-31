//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GCController, GCSProfile, NSString;
@protocol GCSettingsXPCProxyRemoteServerEndpointInterface, NSObject><NSCopying><NSSecureCoding;

__attribute__((visibility("hidden")))
@interface GCSettingsXPCProxyClientEndpoint : NSObject
{
    GCController *_controller;	// 8 = 0x8
    id <GCSettingsXPCProxyRemoteServerEndpointInterface> _serverEndpoint;	// 16 = 0x10
    id _connectionInterruptionRegistration;	// 24 = 0x18
    id _connectionInvalidationRegistration;	// 32 = 0x20
    id <NSObject><NSCopying><NSSecureCoding> _identifier;	// 40 = 0x28
    GCSProfile *_settingsProfile;	// 48 = 0x30
    CDUnknownBlockType _changedHandler;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000712c8
@property(copy, nonatomic) CDUnknownBlockType changedHandler; // @synthesize changedHandler=_changedHandler;
@property(readonly, nonatomic) GCSProfile *settingsProfile; // @synthesize settingsProfile=_settingsProfile;
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
- (void)fetchObjectIdentifierWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000071225
- (void)invalidateConnection;	// IMP=0x0000000000071181
- (void)refreshProfile;	// IMP=0x0000000000071062
- (void)newProfile:(id)arg1;	// IMP=0x0000000000070f4f
- (void)_remoteEndpointHasSetProfile:(id)arg1;	// IMP=0x0000000000070e13
- (void)setController:(id)arg1;	// IMP=0x0000000000070e02
- (void)setRemoteEndpoint:(id)arg1 connection:(id)arg2;	// IMP=0x0000000000070bf3
- (id)init;	// IMP=0x0000000000070bc8
- (id)initWithIdentifier:(id)arg1 initialValueForProfile:(id)arg2;	// IMP=0x0000000000070a87

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

