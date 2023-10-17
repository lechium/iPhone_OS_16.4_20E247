//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AKCredentialRequestContext;

@interface AKOwnerProxyClient
{
    AKCredentialRequestContext *_credentialRequest;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000000a186
- (id)teamID;	// IMP=0x001000000000a169
- (id)appID;	// IMP=0x001000000000a14c
- (id)bundleID;	// IMP=0x001000000000a12f
- (id)localizedAppName;	// IMP=0x001000000000a112
- (id)name;	// IMP=0x001000000000a03d
- (_Bool)hasOwnerAccess;	// IMP=0x001000000000a035
- (_Bool)hasWriteAccess;	// IMP=0x001000000000a02d
- (_Bool)hasPublicAccess;	// IMP=0x001000000000a025
- (_Bool)hasPrivateSignedAccess;	// IMP=0x001000000000a01d
- (_Bool)hasPrivateAccess;	// IMP=0x001000000000a015
- (_Bool)hasInternalAccess;	// IMP=0x001000000000a00d
- (id)description;	// IMP=0x0010000000009fa1
- (id)initWithCredentialRequest:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000009f29
- (id)initWithCredentialRequest:(id)arg1;	// IMP=0x0010000000009eb9

@end
