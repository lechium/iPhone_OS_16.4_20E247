//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccountStore, FAFamilyCircleCache, FAFamilyFetchActivityScheduler, FAMarqueeUpdateHandler, FARequestCoalescer, NSString;

@interface FAFetchFamilyCircleOperation
{
    ACAccountStore *_accountStore;	// 8 = 0x8
    FAFamilyCircleCache *_cache;	// 16 = 0x10
    FARequestCoalescer *_requestCoalescer;	// 24 = 0x18
    FAFamilyFetchActivityScheduler *_familyRefreshActivityScheduler;	// 32 = 0x20
    FAMarqueeUpdateHandler *_marqueeCacheHandler;	// 40 = 0x28
    _Bool _signedInAccountShouldBeApprover;	// 48 = 0x30
    _Bool _promptUserToResolveAuthenticatonFailure;	// 49 = 0x31
    unsigned long long _cachePolicy;	// 56 = 0x38
    NSString *_clientProcess;	// 64 = 0x40
    NSString *_context;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000004c87
@property _Bool promptUserToResolveAuthenticatonFailure; // @synthesize promptUserToResolveAuthenticatonFailure=_promptUserToResolveAuthenticatonFailure;
@property(copy) NSString *context; // @synthesize context=_context;
@property(copy) NSString *clientProcess; // @synthesize clientProcess=_clientProcess;
@property unsigned long long cachePolicy; // @synthesize cachePolicy=_cachePolicy;
@property _Bool signedInAccountShouldBeApprover; // @synthesize signedInAccountShouldBeApprover=_signedInAccountShouldBeApprover;
- (id)familyCircleWithServerResponse:(id)arg1 responseHeaders:(id)arg2 error:(id *)arg3;	// IMP=0x001000000000459a
- (id)_accountStore;	// IMP=0x0010000000004559
- (id)cachePolicyString;	// IMP=0x001000000000452c
- (id)_renewCredentials;	// IMP=0x0010000000004109
- (id)_familyCircleWithResponse:(id)arg1;	// IMP=0x0010000000003e3d
- (id)_fetchCircleRequestWithCacheResponse:(id)arg1;	// IMP=0x001000000000347d
- (id)fetchCircleFromServerWithCacheResponse:(id)arg1;	// IMP=0x001000000000303d
- (id)fetchCircleFromServer;	// IMP=0x0010000000003029
- (_Bool)_signedInAccountMatchesApproverRequirementsFromCache:(id)arg1;	// IMP=0x0010000000002df3
- (_Bool)_isCacheValid:(id)arg1;	// IMP=0x0010000000002d17
- (_Bool)_shouldFetchFromServer:(id)arg1;	// IMP=0x0010000000002b3b
- (id)fetchFamilyCircle;	// IMP=0x00100000000024f4
- (id)username;	// IMP=0x001000000000247a
- (id)initWithNetworkService:(id)arg1 cache:(id)arg2 marqueeCacheHanlder:(id)arg3 requestCoalescer:(id)arg4 familyRefreshActivityScheduler:(id)arg5;	// IMP=0x0010000000002370

@end

