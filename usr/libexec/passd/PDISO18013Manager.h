//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PDUserNotificationManager, PKSecureElement;

@interface PDISO18013Manager : NSObject
{
    PKSecureElement *_secureElement;	// 8 = 0x8
    PDUserNotificationManager *_userNotificationManager;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000018f6e8
- (void)suspendCredentialsForCredentialIds:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000018f6d2
- (void)activateCredentialsForCredentialIds:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000018f6bc
- (void)deleteCredentialsForCredentialIds:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000018f6a6
- (void)allCredentialsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000018f690
- (void)generateISOEncryptionCertificateForSubCredentialId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000018f67c
- (void)addISO18013Blobs:(id)arg1 cardType:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000018f66c
- (void)passWillBeRemoved:(id)arg1;	// IMP=0x001000000018f2ec
- (void)deleteSubCredentialIdentifiers:(id)arg1 cardType:(long long)arg2;	// IMP=0x001000000018f2e6
- (void)handlePaymentPassUpdateFrom:(id)arg1 priorPaymentApplications:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000018e836
- (id)initWithSecureElement:(id)arg1 userNotificationManager:(id)arg2;	// IMP=0x001000000018e79d

@end

