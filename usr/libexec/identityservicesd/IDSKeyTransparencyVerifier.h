//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSCloudKitKeyTransparencyStore, IDSCurrentServerTime, IDSDAccountController, IDSDServiceController, IDSKTAccountKeyManager, IDSKeyTransparencyPolicy, IDSPeerIDManager, IDSPushHandler, IDSRateLimiter, IDSRegistrationKeyManager, IDSRegistrationReasonTracker, KTVerifier, MISSING_TYPE, NSDictionary;
@protocol CUTMetricLogger, IDSKeyTransparencyRegistrationDataSource;

@interface IDSKeyTransparencyVerifier : NSObject
{
    IDSCloudKitKeyTransparencyStore *_keyTransparencyStore;	// 8 = 0x8
    IDSKeyTransparencyPolicy *_policy;	// 16 = 0x10
    IDSKTAccountKeyManager *_accountKeyManager;	// 24 = 0x18
    id <IDSKeyTransparencyRegistrationDataSource> _registrationDataSource;	// 32 = 0x20
    KTVerifier *_KTVerifier;	// 40 = 0x28
    NSDictionary *_serviceToVerifier;	// 48 = 0x30
    NSDictionary *_optInEligibleKTApplicationToIDSServiceIdentifier;	// 56 = 0x38
    NSDictionary *_serviceToOptInManager;	// 64 = 0x40
    IDSRegistrationKeyManager *_keyManager;	// 72 = 0x48
    id <CUTMetricLogger> _internalMetricLogger;	// 80 = 0x50
    id <CUTMetricLogger> _productionMetricLogger;	// 88 = 0x58
    IDSRateLimiter *_selfHealRateLimiter;	// 96 = 0x60
}

+ (id)_keyTransparencyURIPrefixForServiceIdentifier:(id)arg1;	// IMP=0x0040000000761ed0
+ (id)keyTransparencyVersionNumberForServiceType:(id)arg1;	// IMP=0x001000000074cf00
+ (_Bool)isKeyTransparencyEnabled;	// IMP=0x001000000074cea0
+ (id)sharedInstance;	// IMP=0x001000000074be90
- (void).cxx_destruct;	// IMP=0x00200000007626c0
@property(retain, nonatomic) IDSRateLimiter *selfHealRateLimiter; // @synthesize selfHealRateLimiter=_selfHealRateLimiter;
@property(readonly, nonatomic) id <CUTMetricLogger> productionMetricLogger; // @synthesize productionMetricLogger=_productionMetricLogger;
@property(readonly, nonatomic) id <CUTMetricLogger> internalMetricLogger; // @synthesize internalMetricLogger=_internalMetricLogger;
@property(readonly, nonatomic) IDSRegistrationKeyManager *keyManager; // @synthesize keyManager=_keyManager;
@property(readonly, nonatomic) NSDictionary *serviceToOptInManager; // @synthesize serviceToOptInManager=_serviceToOptInManager;
@property(readonly, nonatomic) NSDictionary *optInEligibleKTApplicationToIDSServiceIdentifier; // @synthesize optInEligibleKTApplicationToIDSServiceIdentifier=_optInEligibleKTApplicationToIDSServiceIdentifier;
@property(readonly, nonatomic) NSDictionary *serviceToVerifier; // @synthesize serviceToVerifier=_serviceToVerifier;
@property(readonly, nonatomic) KTVerifier *KTVerifier; // @synthesize KTVerifier=_KTVerifier;
@property(readonly, nonatomic) id <IDSKeyTransparencyRegistrationDataSource> registrationDataSource; // @synthesize registrationDataSource=_registrationDataSource;
@property(readonly, nonatomic) IDSKTAccountKeyManager *accountKeyManager; // @synthesize accountKeyManager=_accountKeyManager;
@property(readonly, nonatomic) IDSKeyTransparencyPolicy *policy; // @synthesize policy=_policy;
@property(readonly, nonatomic) IDSCloudKitKeyTransparencyStore *keyTransparencyStore; // @synthesize keyTransparencyStore=_keyTransparencyStore;
- (double)keyTransparencyCKContainerExpiryTime;	// IMP=0x00100000007624a0
- (id)_clientErrorWithCode:(long long)arg1 debugDescription:(id)arg2 underlyingError:(id)arg3;	// IMP=0x0010000000762340
- (void)_presentInternalVerificationAlertWithText:(id)arg1;	// IMP=0x00100000007621d0
- (id)_keyTransparencyServiceIdentifierForTransparencyApplication:(id)arg1;	// IMP=0x0010000000761d90
- (id)_keyTransparencyVerifierForServiceIdentifier:(id)arg1;	// IMP=0x0010000000761bf0
- (long long)_IDSEndpointTransparencyVerificationStateForKTResult:(unsigned long long)arg1;	// IMP=0x0010000000761b60
- (id)_IDSEndpointTransparencyStatesForKTLoggableDatas:(id)arg1 index:(id)arg2;	// IMP=0x00100000007617e0
- (id)_KTDatasForIDSProtoKeyTransparencyTrustedDevices:(id)arg1 serviceIdentifier:(id)arg2;	// IMP=0x0010000000760f60
- (id)_IDSProtoKeyTransparencyTrustedDeviceForKeyTransparencyIndex:(id)arg1 entry:(id)arg2;	// IMP=0x0010000000760b40
- (id)_KTDatasForIDSKeyTransparencyEntries:(id)arg1;	// IMP=0x0010000000760880
- (id)_KTDataForIDSKeyTransparencyEntry:(id)arg1;	// IMP=0x0010000000760620
- (id)_mergeCloudKitTrustedDevices:(id)arg1 accountKeyTrustedDevices:(id)arg2;	// IMP=0x0010000000760520
- (_Bool)_isTrustedCandidate:(id)arg1 index:(id)arg2 givenTrustedDevices:(id)arg3;	// IMP=0x001000000075fcc0
- (unsigned long long)_numberOfMatchesForCandidates:(id)arg1 index:(id)arg2 trustedDevices:(id)arg3;	// IMP=0x001000000075faa0
- (void)_submitMetricsForTrustedDeviceVerificationWithCloudKitResult:(id)arg1 cloudKitOperationTimeInterval:(double)arg2 accountKeyResult:(id)arg3 accountKeyOperationTimeInterval:(double)arg4 index:(id)arg5 entries:(id)arg6;	// IMP=0x001000000075eb50
- (void)_submitMetricsForTrustedDeviceEnrollmentWithCloudKitResult:(id)arg1 cloudKitOperationTimeInterval:(double)arg2 accountKeyResult:(id)arg3 accountKeyOperationTimeInterval:(double)arg4;	// IMP=0x001000000075e110
- (void)_submitMetricForTrustedDeviceEnrollmentWithKVSResult:(id)arg1 kvsSyncTimeInterval:(double)arg2;	// IMP=0x001000000075dbb0
- (void)reportAccountKeyFetchMetricForService:(id)arg1 withSuccess:(_Bool)arg2 isAccountMismatch:(_Bool)arg3 withError:(id)arg4;	// IMP=0x001000000075d290
- (void)removeAllKVSEntries;	// IMP=0x001000000075d240
- (id)forceSyncKVS;	// IMP=0x001000000075c9e0
- (id)_fetchExpiredEntriesFromKVS;	// IMP=0x001000000075be70
- (id)fetchTrustedDevicesFromKVS;	// IMP=0x001000000075b8c0
- (void)_removeObjectsForKeysFromKVS:(id)arg1;	// IMP=0x001000000075b5b0
- (void)_insertTrustedDeviceToKVS:(id)arg1;	// IMP=0x001000000075b2a0
- (id)_fetchCurrentKVS;	// IMP=0x001000000075b230
- (void)updateKVSWithTrustedDevices:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000075a4f0
- (id)updateKVSWithTrustedDevice:(id)arg1;	// IMP=0x0010000000759cd0
- (void)registrationDataNeedsUpdate;	// IMP=0x0010000000759ca0
- (void)fetchKTRegistrationStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000759c20
- (_Bool)fetchCachedManateeAvailability;	// IMP=0x0010000000759bc0
- (void)shouldNoteManateeAvailabilityWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000759910
- (void)healSelfForApplication:(id)arg1 withHealableErrors:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000758cb0
- (void)fetchSelfVerificationInfoForApplication:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000756eb0
- (void)_fetchVerificationInfoForService:(id)arg1 forURIs:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000756070
- (void)fetchPeerVerificationInfoForApplication:(id)arg1 forURIs:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000755e00
- (_Bool)isOptedInForServiceIdentifier:(id)arg1;	// IMP=0x0010000000755a00
- (void)sendOptInUpdateForApplications:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000754fa0
- (void)checkOptInEligibilityForApplication:(id)arg1 andFetchSelfVerificationRequestIDWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000007545d0
- (id)_clientErrorForKTResult:(unsigned long long)arg1 underlyingError:(id)arg2;	// IMP=0x0010000000754400
- (void)_mutateSuccessfulSyncIndicatorOnKTLoggableDatas:(id)arg1 forIndex:(id)arg2;	// IMP=0x0010000000753ad0
- (void)_fulfillOrFailPromiseSeal:(id)arg1 basedOnIndex:(id)arg2 KTResult:(unsigned long long)arg3 ktLoggableDatas:(id)arg4 optedIn:(_Bool)arg5 error:(id)arg6;	// IMP=0x00100000007538e0
- (id)_currentVerificationResultsForRegisteredIndex:(id)arg1 ticket:(id)arg2;	// IMP=0x0010000000753000
- (id)_verifyKeyTransparencyOfRegisteredIndex:(id)arg1 verificationState:(id)arg2 entry:(id)arg3;	// IMP=0x0010000000752660
- (MISSING_TYPE *)_forceVerificationWithIndex:ticket:completion: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000751ce0
- (id)_currentPeerVerificationResultsForQueriedIndex:(id)arg1 ticket:(id)arg2;	// IMP=0x0010000000751090
- (id)_transparencyTicketForQueryResultsWithIndex:(id)arg1 verificationState:(id)arg2 entries:(id)arg3;	// IMP=0x0010000000750650
- (void)currentPeerVerificationResultsForURIVerificationMap:(id)arg1 forService:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x001000000074f800
- (void)nukeKeyTransparencyStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000074f270
- (void)forceVerificationWithIndex:(id)arg1 ticket:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000074efb0
- (id)currentVerificationResultsForRegisteredIndex:(id)arg1 ticket:(id)arg2;	// IMP=0x001000000074eb90
- (id)currentPeerVerificationResultsForQueriedIndex:(id)arg1 ticket:(id)arg2;	// IMP=0x001000000074e770
- (id)_pruneTrustedDevice:(id)arg1 givenEligibleServiceIdentifiers:(id)arg2;	// IMP=0x001000000074e430
- (id)transparencyTicketForRegistrationWithIndex:(id)arg1 verificationState:(id)arg2 entry:(id)arg3;	// IMP=0x001000000074df60
- (id)transparencyTicketForQueryResultsWithIndex:(id)arg1 verificationState:(id)arg2 entries:(id)arg3 localURI:(id)arg4;	// IMP=0x001000000074d770
- (id)fetchKTEligibleServices;	// IMP=0x001000000074d700
- (void)fetchLocalDeviceTrustCircleEligibleServiceIdentifiersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000074d380
- (void)fetchLocalDeviceTrustCircleEligibilityWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000074d0a0
- (_Bool)isDeviceAccountStateKeyTransparencyEligible;	// IMP=0x001000000074cff0
@property(readonly, nonatomic) IDSRegistrationReasonTracker *registrationReasonTracker;
@property(readonly, nonatomic) IDSPushHandler *pushHandler;
@property(readonly, nonatomic) IDSCurrentServerTime *serverTime;
@property(readonly, nonatomic) IDSDServiceController *serviceController;
@property(readonly, nonatomic) IDSDAccountController *accountController;
@property(readonly, nonatomic) IDSPeerIDManager *peerIDManager;
- (id)initWithPolicy:(id)arg1 serviceToVerifier:(id)arg2 keyManager:(id)arg3 store:(id)arg4 registrationDataSource:(id)arg5 internalMetricLogger:(id)arg6 productionMetricLogger:(id)arg7 accountKeyManager:(id)arg8 serviceToKTOptInManager:(id)arg9;	// IMP=0x001000000074c600
- (id)init;	// IMP=0x001000000074bf50

@end

