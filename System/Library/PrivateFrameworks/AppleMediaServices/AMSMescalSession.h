//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSMescalFairPlay, AMSURLSession, NSData;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSMescalSession : NSObject
{
    NSData *_certificateData;	// 8 = 0x8
    AMSURLSession *_urlSession;	// 16 = 0x10
    AMSMescalFairPlay *_fairPlayContext;	// 24 = 0x18
    long long _mescalType;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 40 = 0x28
}

+ (id)sessionWithType:(long long)arg1;	// IMP=0x006000000028b568
+ (id)primeSession;	// IMP=0x006000000028b4fe
+ (id)defaultSession;	// IMP=0x006000000028b494
- (void).cxx_destruct;	// IMP=0x000000000028ec3b
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (_Bool)_verifyEntitlements;	// IMP=0x000000000028ebc5
- (_Bool)_shouldRetryFairPlayForError:(id)arg1;	// IMP=0x000000000028eb36
- (void)_resetSession;	// IMP=0x000000000028eb0c
- (id)_postExchangeData:(id)arg1 bag:(id)arg2 error:(id *)arg3;	// IMP=0x000000000028e575
- (id)_loadCertificateDataWithBag:(id)arg1 error:(id *)arg2;	// IMP=0x000000000028e01f
- (id)_establishContextWithBag:(id)arg1 error:(id *)arg2;	// IMP=0x000000000028dacf
- (id)_cachedCertPath;	// IMP=0x000000000028d991
- (id)_cachedCertData;	// IMP=0x000000000028d486
- (_Bool)_cacheCertData:(id)arg1 expiration:(double)arg2;	// IMP=0x000000000028cdf4
- (_Bool)verifyPrimeSignature:(id)arg1 error:(id *)arg2;	// IMP=0x000000000028ca67
- (_Bool)verifyData:(id)arg1 withSignature:(id)arg2 bag:(id)arg3 error:(id *)arg4;	// IMP=0x000000000028c339
- (id)signData:(id)arg1 bag:(id)arg2 error:(id *)arg3;	// IMP=0x000000000028bc87
- (id)primeSignatureForData:(id)arg1 bag:(id)arg2 error:(id *)arg3;	// IMP=0x000000000028b5b0
- (id)initWithType:(long long)arg1;	// IMP=0x000000000028b402

@end

