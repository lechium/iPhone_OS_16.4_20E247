//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKClient, AKRequestDispatcher;

@interface AKSRPService : NSObject
{
    AKClient *_client;	// 8 = 0x8
    AKRequestDispatcher *_requestDispatcher;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000007053d
- (_Bool)_shouldClearCKForFailedMagicAuthWithError:(long long)arg1 authContextHelper:(id)arg2;	// IMP=0x0010000000070479
- (void)_handleError:(id)arg1 withServerResponse:(id)arg2 context:(id)arg3 andCompletion:(CDUnknownBlockType)arg4;	// IMP=0x001000000006ff6b
- (void)_doURLSwitchWithServerResponse:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000006fc4c
- (void)_reprovisionAnisetteWithServerResponse:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000006f8af
- (void)_resyncAnisetteWithServerResponse:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000006f4ee
- (id)_anisetteActionTargetForServerResponse:(id)arg1 andContext:(id)arg2;	// IMP=0x001000000006f447
- (void)_parseFailedServerResponse:(id)arg1 withError:(id)arg2 context:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000006f135
- (void)_continueSRPContractWithAuthURL:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000006ef22
- (void)performSRPContractWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000006edd2
- (id)initWithClient:(id)arg1;	// IMP=0x001000000006ed51
- (id)initWithClient:(id)arg1 requestDispatcher:(id)arg2;	// IMP=0x001000000006ecb8

@end

