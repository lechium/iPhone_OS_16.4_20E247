//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAuthorizationEndorserRapportDiscovery, AKAuthorizationRapportClient, AKAuthorizationSessionManager, AKClient, AKCredentialRequestContext, NSArray, NSString;
@protocol AKAuthorizationClientProtocol, AKAuthorizationDaemonServiceDelegate;

@interface AKAuthorizationDaemonService : NSObject
{
    struct os_unfair_lock_s _authorizationRealUserLock;	// 8 = 0x8
    id <AKAuthorizationClientProtocol> _clientProxy;	// 16 = 0x10
    AKAuthorizationSessionManager *_authSessionManager;	// 24 = 0x18
    NSString *_realUserVerificationResults;	// 32 = 0x20
    AKClient *_client;	// 40 = 0x28
    id <AKAuthorizationDaemonServiceDelegate> _delegate;	// 48 = 0x30
    AKAuthorizationRapportClient *_rapportClient;	// 56 = 0x38
    AKAuthorizationEndorserRapportDiscovery *_endorserRapportDiscovery;	// 64 = 0x40
    NSArray *_credentials;	// 72 = 0x48
    AKCredentialRequestContext *_originalRequestContext;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00200000000918b9
@property(retain, nonatomic) AKCredentialRequestContext *originalRequestContext; // @synthesize originalRequestContext=_originalRequestContext;
@property(copy, nonatomic) NSArray *credentials; // @synthesize credentials=_credentials;
@property(retain, nonatomic) AKAuthorizationEndorserRapportDiscovery *endorserRapportDiscovery; // @synthesize endorserRapportDiscovery=_endorserRapportDiscovery;
@property(retain, nonatomic) AKAuthorizationRapportClient *rapportClient; // @synthesize rapportClient=_rapportClient;
@property(nonatomic) __weak id <AKAuthorizationDaemonServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) AKClient *client; // @synthesize client=_client;
- (void)cancelAuthorizationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000913f1
- (void)continueAuthorizationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000908b4
- (void)beginAuthorizationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000090079
- (void)_processUserResponse:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000008fb5b
- (void)_validateAndProcessUserResponse:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000008f860
- (void)performAuthorizationWithContext:(id)arg1 withUserProvidedInformation:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000008f65b
- (void)presentAuthorizationUIForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008f419
- (void)_extractWebSessionAuthorizationFromResponse:(id)arg1;	// IMP=0x001000000008f2b2
- (id)authorizationContextWithRequest:(id)arg1 client:(id)arg2;	// IMP=0x001000000008ed99
- (id)authorizationContextHelperWithContext:(id)arg1 client:(id)arg2;	// IMP=0x001000000008ecce
- (void)_completeAuthorizationWithServerResponse:(id)arg1 userResponse:(id)arg2 client:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000008e718
- (void)_performSRPAuthorizationForUserResponse:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000008e462
- (void)_safePerformSRPWithUserResponse:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000008e2ae
- (void)_requestUserAuthorizationForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008df3a
- (void)_fetchCredentialsForAssociatedDomains:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008ddf2
- (void)_fetchSafariCredentialsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000008dc71
- (void)_setupLoginChoicesForPresentationContext:(id)arg1;	// IMP=0x001000000008d769
- (long long)_credentialStateForRequestContext:(id)arg1;	// IMP=0x001000000008d6f3
- (void)_prepareRequestContext:(id)arg1 forCredentialState:(long long)arg2;	// IMP=0x001000000008d428
- (_Bool)_isPCSAccessForContext:(id)arg1;	// IMP=0x001000000008d333
- (_Bool)_shouldAllowPCSKeyAccessForContext:(id)arg1;	// IMP=0x001000000008d305
- (void)_getPresentationContextForRequestContext:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000008ca02
- (void)storeAuthorization:(id)arg1 forProxiedRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000008c7cc
- (_Bool)_shouldStartSatoriVerificationForRequestContext:(id)arg1;	// IMP=0x001000000008c760
- (void)_initiateRapportAuthorizationWithRequestContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008c5ae
- (void)_initiateAuthorizationWithRequestContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008c435
- (_Bool)_verifyEntitlementsForRequest:(id)arg1;	// IMP=0x001000000008c095
- (void)_performSilentRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008bd7d
- (void)_performRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008bc84
- (void)_determineUIAndPerformRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008bbb5
- (_Bool)_shouldEarlyReturnRequest:(id)arg1 forCredentialState:(long long)arg2;	// IMP=0x001000000008bb32
- (void)_createAndPerformRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008b54d
- (id)_clientForContext:(id)arg1;	// IMP=0x001000000008b44f
- (void)getPresentationContextForRequestContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008b167
- (void)establishConnectionWithStateBroadcastHandlerEndpoint:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008aeea
- (void)establishConnectionWithNotificationHandlerEndpoint:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008ac09
- (void)continueFetchingIconForRequestContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008aae7
- (void)fetchPrimaryApplicationInformationForWebServiceWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008a900
- (void)fetchAppleIDAuthorizeHTMLResponseTemplateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000008a4f2
- (void)revokeUpgradeWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008a237
- (void)fetchAppleOwnedDomainSetWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000008a1a3
- (void)fetchAppleIDAuthorizationURLSetWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000008a10f
- (void)startDiscoveryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000089f96
- (void)getCredentialStateForClientID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000089f03
- (void)getCredentialStateForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000089d06
- (void)performAuthorization:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008921b
- (void)dealloc;	// IMP=0x00100000000891af
- (id)initWithClient:(id)arg1;	// IMP=0x001000000008904e
- (id)init;	// IMP=0x0010000000089023

@end
