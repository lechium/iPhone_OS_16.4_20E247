//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PDAppAttestService : NSObject
{
}

- (id)_generateCborRepresentationOfCertificats:(id)arg1 authenticationData:(id)arg2;	// IMP=0x00400000003533c2
- (id)_attestedCredentialDataWithPublicKey:(id)arg1;	// IMP=0x00100000003532d7
- (id)_authenticatorDataWithPublicKey:(id)arg1;	// IMP=0x00100000003531a1
- (id)_publicKeyFromKey:(struct __SecKey *)arg1;	// IMP=0x00100000003530b7
- (struct __SecKey *)_createNewKey;	// IMP=0x0010000000352dfb
- (void)attestChallenge:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000352d9e
- (id)init;	// IMP=0x0010000000352d6f

@end

