//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MCNewPlainCertificatePayloadHandler
{
    struct __SecIdentity *_identity;	// 40 = 0x28
}

- (struct __SecIdentity *)copyIdentityImmediatelyWithInteractionClient:(id)arg1 outError:(id *)arg2;	// IMP=0x002000000002cb51
- (id)_malformedCertificateError;	// IMP=0x001000000002ca80
- (id)_cannotStoreRootCertificateError;	// IMP=0x001000000002c9af
- (id)_cannotStoreCertificateError;	// IMP=0x001000000002c8de
- (id)_tooManyCertificatesError;	// IMP=0x001000000002c80d
- (id)_invalidPasscodeError;	// IMP=0x001000000002c73c
- (int)_grantPartialNonSSLTrustPolicyForCertificate:(struct __SecCertificate *)arg1;	// IMP=0x001000000002c4e7
- (void)_revertFullSSLTrustIfNeeded;	// IMP=0x001000000002bd47
- (void)remove;	// IMP=0x001000000002bcc4
- (void)unsetAside;	// IMP=0x001000000002bad1
- (void)setAside;	// IMP=0x001000000002ba93
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x001000000002b4ff
- (id)_storeCertificate:(struct __SecCertificate *)arg1 allowSSLTrust:(_Bool)arg2 outError:(id *)arg3;	// IMP=0x001000000002ab70
- (_Bool)preflightUserInputResponses:(id)arg1 outError:(id *)arg2;	// IMP=0x001000000002aa23
- (struct __SecIdentity *)_copyContentsOfPKCS12DataWithPasscode:(id)arg1 outError:(id *)arg2;	// IMP=0x001000000002a86e
- (void)dealloc;	// IMP=0x001000000002a828
- (id)userInputFields;	// IMP=0x001000000002a67e

@end
