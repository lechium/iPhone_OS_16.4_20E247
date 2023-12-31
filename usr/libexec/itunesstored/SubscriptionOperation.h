//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSNumber, NSString, SSAuthenticationContext, SSVSubscriptionResponse;

@interface SubscriptionOperation : ISOperation
{
    SSAuthenticationContext *_authenticationContext;	// 96 = 0x60
    long long _operationType;	// 104 = 0x68
    _Bool _requestingOfflineSlot;	// 112 = 0x70
    SSVSubscriptionResponse *_response;	// 120 = 0x78
    NSString *_userAgent;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00200000000c35dc
- (id)_requestPropertiesWithAccount:(id)arg1 syncState:(id)arg2 fairPlaySubscriptionController:(id)arg3;	// IMP=0x00100000000c35d4
- (id)_newMachineDataOperationWithAccount:(id)arg1 response:(id)arg2;	// IMP=0x00100000000c34ab
- (void)run;	// IMP=0x00100000000c3442
@property(copy) NSString *userAgent;
@property(getter=isRequestingOfflineSlot) _Bool requestingOfflineSlot;
@property long long operationType;
@property(copy) SSAuthenticationContext *authenticationContext;
@property(readonly, copy) SSVSubscriptionResponse *response;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property(readonly) Class superclass;

@end

