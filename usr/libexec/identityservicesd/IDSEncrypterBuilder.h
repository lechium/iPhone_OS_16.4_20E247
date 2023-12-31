//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSDAccountController, IDSDServiceController, IDSOTRController, IDSPeerIDManager, IDSPublicKeyStorage, IDSRateLimiter, IDSRegistrationKeyManager;

@interface IDSEncrypterBuilder : NSObject
{
    _Bool _avoidMainQueue;	// 8 = 0x8
    _Bool _forceLegacy;	// 9 = 0x9
    IDSPublicKeyStorage *_publicKeyStorage;	// 16 = 0x10
    IDSPeerIDManager *_peerIDManager;	// 24 = 0x18
    IDSDAccountController *_accountController;	// 32 = 0x20
    IDSRegistrationKeyManager *_registrationKeyManager;	// 40 = 0x28
    IDSRateLimiter *_rateLimiter;	// 48 = 0x30
    IDSOTRController *_OTRController;	// 56 = 0x38
    IDSDServiceController *_serviceController;	// 64 = 0x40
}

+ (id)builderWithPublicKeyStorage:(id)arg1 peerIDManager:(id)arg2 accountController:(id)arg3 registrationKeyManager:(id)arg4 rateLimiter:(id)arg5 OTRController:(id)arg6 serviceController:(id)arg7 avoidMainQueue:(_Bool)arg8 forceLegacy:(_Bool)arg9;	// IMP=0x0040000000167550
- (void).cxx_destruct;	// IMP=0x00200000001689c0
@property(nonatomic) _Bool forceLegacy; // @synthesize forceLegacy=_forceLegacy;
@property(nonatomic) _Bool avoidMainQueue; // @synthesize avoidMainQueue=_avoidMainQueue;
@property(retain, nonatomic) IDSDServiceController *serviceController; // @synthesize serviceController=_serviceController;
@property(retain, nonatomic) IDSOTRController *OTRController; // @synthesize OTRController=_OTRController;
@property(retain, nonatomic) IDSRateLimiter *rateLimiter; // @synthesize rateLimiter=_rateLimiter;
@property(retain, nonatomic) IDSRegistrationKeyManager *registrationKeyManager; // @synthesize registrationKeyManager=_registrationKeyManager;
@property(retain, nonatomic) IDSDAccountController *accountController; // @synthesize accountController=_accountController;
@property(retain, nonatomic) IDSPeerIDManager *peerIDManager; // @synthesize peerIDManager=_peerIDManager;
@property(retain, nonatomic) IDSPublicKeyStorage *publicKeyStorage; // @synthesize publicKeyStorage=_publicKeyStorage;
- (id)verifierWithEndpoint:(id)arg1 keyType:(unsigned int)arg2 keyDiversifier:(id)arg3;	// IMP=0x00100000001685c0
- (id)verifierWithLocalURI:(id)arg1 remoteURI:(id)arg2 pushToken:(id)arg3 service:(id)arg4 cert:(id)arg5 keyType:(unsigned int)arg6 keyDiversifier:(id)arg7;	// IMP=0x00100000001682d0
- (id)signerWithKeyType:(unsigned int)arg1 keyDiversifier:(id)arg2 service:(id)arg3;	// IMP=0x0010000000168190
- (id)encrypterWithOTRToken:(id)arg1;	// IMP=0x00100000001680e0
- (id)encrypterWithEndpoint:(id)arg1;	// IMP=0x0010000000167f70
- (id)encrypterWithDeviceID:(id)arg1;	// IMP=0x0010000000167e50
- (id)encrypterWithLocalURI:(id)arg1 remoteURI:(id)arg2 pushToken:(id)arg3 service:(id)arg4 cert:(id)arg5;	// IMP=0x0010000000167b20
- (id)_createHashingDeviceIdentityEncrypter;	// IMP=0x0010000000167a10
- (id)initWithPublicKeyStorage:(id)arg1 peerIDManager:(id)arg2 accountController:(id)arg3 registrationKeyManager:(id)arg4 rateLimiter:(id)arg5 OTRController:(id)arg6 serviceController:(id)arg7 avoidMainQueue:(_Bool)arg8 forceLegacy:(_Bool)arg9;	// IMP=0x00100000001677a0

@end

