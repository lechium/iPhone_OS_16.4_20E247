//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MCNewSCEPPayloadHandler
{
    struct __SecIdentity *_identity;	// 40 = 0x28
}

+ (void)allowInsecureHTTPLoadsOfURL:(id)arg1 forConfiguration:(id)arg2;	// IMP=0x0040000000060562
+ (id)atsOverrideDataWithInsecureHTTPForHost:(id)arg1 fromATSOverrideData:(id)arg2;	// IMP=0x00100000000602fe
+ (id)mutableATSExceptionInExceptionDomains:(id)arg1 matchingHost:(id)arg2;	// IMP=0x001000000006014b
- (struct __SecIdentity *)copyIdentityImmediatelyWithInteractionClient:(id)arg1 outError:(id *)arg2;	// IMP=0x00200000000614c8
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x00100000000610c1
- (id)_performPKIOperation:(id)arg1 withPayload:(id)arg2 usingPost:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0010000000060f22
- (_Bool)_createKeyPairLength:(unsigned long long)arg1 outPublicKey:(struct __SecKey **)arg2 outPrivateKey:(struct __SecKey **)arg3;	// IMP=0x0010000000060e2d
- (id)_invalidRAResponse;	// IMP=0x0010000000060dac
- (id)_synchronousTransactionWithURL:(id)arg1 method:(id)arg2 content:(id)arg3 contentType:(id)arg4 outResponseCode:(long long *)arg5 outContentType:(id *)arg6 outError:(id *)arg7;	// IMP=0x0010000000060668
- (id)_SCEPOperationURLWithBaseURLString:(id)arg1 operation:(id)arg2 message:(id)arg3;	// IMP=0x001000000005ffa2
- (id)userInputFields;	// IMP=0x001000000005fe1f
- (void)dealloc;	// IMP=0x001000000005fdd9

@end
