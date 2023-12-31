//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/PDXPCService.h>

@class NSString, PDDatabaseManager, PDPeerPaymentAccountManager, PDPeerPaymentWebServiceCoordinator, PDRemoteInterfacePresenter, PDUserNotificationManager, PKEntitlementWhitelist, PKSharingIDSManager;

@interface PDPeerPaymentService : PDXPCService
{
    PKEntitlementWhitelist *_whitelist;	// 8 = 0x8
    PDPeerPaymentAccountManager *_peerPaymentAccountManager;	// 16 = 0x10
    PDPeerPaymentWebServiceCoordinator *_peerPaymentWebServiceCoordinator;	// 24 = 0x18
    PDRemoteInterfacePresenter *_remoteInterfacePresenter;	// 32 = 0x20
    PDDatabaseManager *_databaseManager;	// 40 = 0x28
    PDUserNotificationManager *_userNotificationManager;	// 48 = 0x30
    PKSharingIDSManager *_idsSharingManager;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000012d25c
@property(retain, nonatomic) PKSharingIDSManager *idsSharingManager; // @synthesize idsSharingManager=_idsSharingManager;
@property(retain, nonatomic) PDUserNotificationManager *userNotificationManager; // @synthesize userNotificationManager=_userNotificationManager;
@property(retain, nonatomic) PDDatabaseManager *databaseManager; // @synthesize databaseManager=_databaseManager;
@property(retain, nonatomic) PDRemoteInterfacePresenter *remoteInterfacePresenter; // @synthesize remoteInterfacePresenter=_remoteInterfacePresenter;
@property(retain, nonatomic) PDPeerPaymentWebServiceCoordinator *peerPaymentWebServiceCoordinator; // @synthesize peerPaymentWebServiceCoordinator=_peerPaymentWebServiceCoordinator;
@property(retain, nonatomic) PDPeerPaymentAccountManager *peerPaymentAccountManager; // @synthesize peerPaymentAccountManager=_peerPaymentAccountManager;
- (void)peerPaymentWebServiceCoordinatorPendingRequestsChanged;	// IMP=0x001000000012d1a8
- (void)peerPaymentAccountManagerPendingRequestsChanged;	// IMP=0x001000000012d196
- (void)_notifyPeerPaymentPendingRequestsChangedObservers;	// IMP=0x001000000012d079
- (void)_removeNotificationsForPeerPaymentPendingRequestWithRequestTokens:(id)arg1;	// IMP=0x001000000012ce73
- (void)_removeAllNotificationsForPeerPaymentPendingRequests;	// IMP=0x001000000012cbc3
- (void)_scheduleNotificationsForPeerPaymentPendingRequests:(id)arg1;	// IMP=0x001000000012c02d
- (id)_displayNameForAddress:(id)arg1;	// IMP=0x001000000012bf66
- (void)deletePeerPaymentPendingRequestsForPeerPaymentAccountWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000012bd46
- (void)deletePeerPaymentPendingRequestsForRequestTokens:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000012baef
- (void)insertOrUpdatePeerPaymentPendingRequests:(id)arg1 shouldScheduleNotifications:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000012b88c
- (void)peerPaymentPendingRequestsForPeerPaymentAccountWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000012b683
- (void)peerPaymentPendingRequestsForRequestTokens:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000012b447
- (void)remoteRegistrationRequest:(id)arg1 forHandle:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000012b20c
- (void)resetApplePayManateeViewWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000012b03c
- (void)checkTLKsMissingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000012ae6c
- (void)cloudStoreStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000012ac95
- (void)initalizeCloudStoreIfNecessaryWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000012aac5
- (void)unregisterDeviceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000012a8f5
- (void)registerDeviceWithRegistrationURL:(id)arg1 pushToken:(id)arg2 forceReregister:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000012a710
- (void)registerDeviceWithForceReregister:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000012a526
- (void)registerDeviceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000012a354
- (void)downloadPassIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000012a1ed
- (void)setLastUsedAlternateFundingSourcePassUniqueIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000129fab
- (void)lastUsedAlternateFundingSourcePassUniqueIdentifier:(CDUnknownBlockType)arg1;	// IMP=0x0010000000129dd6
- (void)balanceForPass:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000129bdd
- (void)updateMessageReceivedDate:(id)arg1 forTransactionWithIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000129867
- (void)receivedPeerPaymentMessageData:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000012910b
- (void)presentPeerPaymentTermsAndConditionsWithTermsURL:(id)arg1 termsIdentifier:(id)arg2 passUniqueID:(id)arg3 orientation:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000128e12
- (void)presentRegistrationFlowWithAccount:(id)arg1 amount:(id)arg2 state:(unsigned long long)arg3 senderAddress:(id)arg4 orientation:(id)arg5 hostSceneIdentifier:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x0010000000128ab3
- (void)presentIdentityVerificationFlowWithResponseData:(id)arg1 orientation:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000128693
- (void)registrationStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000128484
- (void)setPreferences:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000128246
- (void)deletePreferencesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000012803f
- (void)deleteAccountWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000127e38
- (void)updateMockAccountBalanceByAddingAmount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000127bfa
- (void)updatePreferencesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001279eb
- (void)updateAccountAndAssociatedAccountsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001277dc
- (void)updateAssociatedAccountsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001275cd
- (void)updateAccountWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001273be
- (void)preferencesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001271af
- (void)accountWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000126f9e
- (void)usingSynchronousProxy:(_Bool)arg1 setSharedPeerPaymentWebServiceContext:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000126d81
- (void)usingSynchronousProxy:(_Bool)arg1 fetchSharedPeerPaymentWebServiceContextWithHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000126b38
- (void)dealloc;	// IMP=0x0010000000126997
- (id)initWithConnection:(id)arg1;	// IMP=0x0010000000126908

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

