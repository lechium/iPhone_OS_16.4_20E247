//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemonFoundation/HDAssertion.h>

@class BKSProcessAssertion, CLInUseAssertion, HDHealthStoreClient;

__attribute__((visibility("hidden")))
@interface _HDBackgroundRunningAssertion : HDAssertion
{
    _Bool _shouldAcquireCLAssertion;	// 8 = 0x8
    HDHealthStoreClient *_client;	// 16 = 0x10
    BKSProcessAssertion *_bksAssertion;	// 24 = 0x18
    CLInUseAssertion *_coreLocationAssertion;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000016ab56

@end
