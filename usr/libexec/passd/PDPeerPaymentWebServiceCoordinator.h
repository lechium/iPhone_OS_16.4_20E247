//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableArray, NSSet, NSString, PDAssertionManager, PDCardFileManager, PDCloudStoreNotificationCoordinator, PDDeviceRegistrationServiceCoordinator, PDFamilyCircleManager, PDPeerPaymentWebServiceAccountFetch, PDPeerPaymentWebServiceArchiver, PDPushNotificationManager, PDUserNotificationManager, PKPaymentWebService, PKPeerPaymentAccount, PKPeerPaymentPreferences, PKPeerPaymentWebService, PKSharingIDSManager;
@protocol OS_dispatch_queue, PDPeerPaymentWebServiceCoordinatorDataSource, PKTapToRadarDelegate;

@interface PDPeerPaymentWebServiceCoordinator : NSObject
{
    PDPushNotificationManager *_pushNotificationManager;	// 8 = 0x8
    PKSharingIDSManager *_sharingIDSManager;	// 16 = 0x10
    PDFamilyCircleManager *_familyCircleManager;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_sharedPeerPaymentWebServiceQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_replyQueue;	// 40 = 0x28
    PDPeerPaymentWebServiceArchiver *_archiver;	// 48 = 0x30
    PKPeerPaymentWebService *_sharedPeerPaymentWebService;	// 56 = 0x38
    PKPeerPaymentAccount *_account;	// 64 = 0x40
    PKPeerPaymentPreferences *_preferences;	// 72 = 0x48
    PKPeerPaymentAccount *_mockAccount;	// 80 = 0x50
    PDAssertionManager *_assertionManager;	// 88 = 0x58
    PDUserNotificationManager *_userNotificationManager;	// 96 = 0x60
    id <PDPeerPaymentWebServiceCoordinatorDataSource> _dataSource;	// 104 = 0x68
    PDCardFileManager *_passStore;	// 112 = 0x70
    NSMutableArray *_pendingPreferencesFetches;	// 120 = 0x78
    NSMutableArray *_queuedPendingPreferencesFetches;	// 128 = 0x80
    _Bool _isFetchingPreferences;	// 136 = 0x88
    id <PKTapToRadarDelegate> _tapToRadarDelegate;	// 144 = 0x90
    NSSet *_peerPaymentPushNotificationTopics;	// 152 = 0x98
    NSSet *_additionalPushNotificationTopics;	// 160 = 0xa0
    _Bool _unregistering;	// 168 = 0xa8
    NSMutableArray *_accountFetchRequests;	// 176 = 0xb0
    PDPeerPaymentWebServiceAccountFetch *_currentAccountFetchRequest;	// 184 = 0xb8
    struct os_unfair_lock_s _lockObservers;	// 192 = 0xc0
    struct os_unfair_lock_s _lockPushTopics;	// 196 = 0xc4
    NSHashTable *_observers;	// 200 = 0xc8
    PDCloudStoreNotificationCoordinator *_cloudStoreNotificationCoordinator;	// 208 = 0xd0
    PDDeviceRegistrationServiceCoordinator *_deviceRegistrationCoordinator;	// 216 = 0xd8
    PKPaymentWebService *_paymentWebService;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x002000000044317a
@property(retain, nonatomic) PKPaymentWebService *paymentWebService; // @synthesize paymentWebService=_paymentWebService;
@property(retain, nonatomic) PDDeviceRegistrationServiceCoordinator *deviceRegistrationCoordinator; // @synthesize deviceRegistrationCoordinator=_deviceRegistrationCoordinator;
@property(retain, nonatomic) PDCloudStoreNotificationCoordinator *cloudStoreNotificationCoordinator; // @synthesize cloudStoreNotificationCoordinator=_cloudStoreNotificationCoordinator;
- (void)_accessObserversWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000442f1d
- (void)unregisterObserver:(id)arg1;	// IMP=0x0010000000442ebe
- (void)registerObserver:(id)arg1;	// IMP=0x0010000000442e5f
- (id)_mockAccountInitialState;	// IMP=0x00100000004426e9
- (unsigned long long)_peerPaymentErrorStateForRegistrationResponse:(id)arg1 error:(id)arg2 expectsPass:(_Bool)arg3;	// IMP=0x001000000044259f
- (void)_updateSharedCacheWithAccount:(id)arg1;	// IMP=0x00100000004422bb
- (void)updateSharedCache;	// IMP=0x00100000004422a5
- (void)_updateSharedCacheWithWebService:(id)arg1;	// IMP=0x001000000044220e
- (void)_initalizeCloudStoreIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000442131
- (void)_archiveSharedPeerPaymentWebServiceContext;	// IMP=0x001000000044201e
- (void)_handleUpdatedAccount:(id)arg1 withOldAccount:(id)arg2;	// IMP=0x0010000000441ccf
- (void)_completeUpdatingPreferences;	// IMP=0x0010000000441acb
- (void)_writePreferences:(id)arg1 withError:(id)arg2;	// IMP=0x00100000004418a9
- (void)_updatePreferencesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000004414c8
- (void)_updateAccountWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000004412ec
- (void)_postAccountChangedNotification;	// IMP=0x0010000000441237
- (void)_postAssociatedAccountActiveNotificationIfNecessaryForNewAssociatedAccountInformation:(id)arg1 oldAssociatedAccountInformation:(id)arg2;	// IMP=0x0010000000440474
- (void)_postGraduationNotificationIfNecessary;	// IMP=0x001000000043f7fa
- (void)_queue_executeNextAccountFetchRequestIfPossible;	// IMP=0x001000000043db16
- (void)_queue_addAccountFetchRequest:(id)arg1;	// IMP=0x001000000043d862
- (_Bool)_shouldAttemptBackgroundPeerPaymentPassDownload;	// IMP=0x001000000043d80f
- (void)updatePendingRequestsWithRequestTokens:(id)arg1;	// IMP=0x001000000043d025
- (void)peerPaymentPendingRequestsForRequests:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000043c8e3
- (void)didReceiveRemoteRegistationResult:(unsigned long long)arg1 fromDestination:(id)arg2;	// IMP=0x001000000043c12a
- (void)_cancelPendingTransactionNotifications;	// IMP=0x001000000043bc94
- (void)applyPushNotificationToken:(id)arg1;	// IMP=0x001000000043b8ff
- (void)handlePushNotificationForTopic:(id)arg1 userInfo:(id)arg2;	// IMP=0x001000000043b030
- (id)pushNotificationTopics;	// IMP=0x001000000043aef4
- (void)_updatePushTopics;	// IMP=0x001000000043ac58
- (void)cloudStoreNotificationCoordinator:(id)arg1 createdZoneWithName:(id)arg2 forContainerName:(id)arg3 scope:(long long)arg4;	// IMP=0x001000000043a91e
- (void)_processStaleAccountFetchAfterTranactionScheduledTask:(id)arg1;	// IMP=0x001000000043a51d
- (void)performScheduledActivityWithIdentifier:(id)arg1 activityCriteria:(id)arg2;	// IMP=0x001000000043a34e
- (void)scheduleTaskToFetchStaleAccountIfNecessary:(_Bool)arg1 associatedAccountEndpoint:(_Bool)arg2;	// IMP=0x001000000043a0a0
- (void)_performPeerPaymentAssociatedAccountRemoteRegistrationRequestWithActivityIdentifier:(id)arg1 reason:(id)arg2;	// IMP=0x001000000043975a
- (id)_altDSIDFromAssociatedAccountRemoteRegistrationActivityIdentifier:(id)arg1;	// IMP=0x00100000004396e9
- (id)_associatedAccountRemoteRegistrationActivityIdentifierForAltDSID:(id)arg1;	// IMP=0x00100000004396bd
- (void)_scheduleAssociatedAccountRemoteRegistrationActivityIfNecessaryForReason:(unsigned long long)arg1;	// IMP=0x0010000000438e06
- (void)_performPeerPaymentReregisterActivityForReason:(id)arg1;	// IMP=0x0010000000438aac
- (void)_schedulePeerPaymentReregisterActivityForReason:(id)arg1;	// IMP=0x001000000043899c
- (void)_performPeerPaymentPassDownloadActivity;	// IMP=0x00100000004386cc
- (void)_schedulePeerPaymentCoordinatorActivities;	// IMP=0x001000000043859f
- (void)remoteRegistrationRequest:(id)arg1 forHandle:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000043848f
- (void)resetApplePayManateeViewWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000004383e3
- (void)checkTLKsMissingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000438337
- (void)initalizeCloudStoreIfNecessaryWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000438325
- (void)cloudStoreStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000438279
- (void)submitDeviceScoreIdentifiersForTransaction:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000437f8f
- (void)updateMockAccountBalanceByAddingAmount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000437e32
- (void)_downloadAssociatedPeerPaymentPassWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000436a71
- (_Bool)_hasAssociatedPeerPaymentPassSetup;	// IMP=0x001000000043699b
- (_Bool)_hasAssociatedPeerPaymentPass;	// IMP=0x0010000000436923
- (void)downloadPassIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000004368c7
- (_Bool)_peerPaymentPassExists;	// IMP=0x00100000004367fd
- (void)handleMigratedAccount:(id)arg1;	// IMP=0x0010000000436689
- (void)setPreferences:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000004363bf
- (void)deletePreferencesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000004362fa
- (void)deleteAccountWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000436216
- (void)updatePreferencesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000436204
- (void)updateAccountAndAssociatedAccountsWithDiagnosticReasons:(id)arg1 abridgedRegistration:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000436124
- (void)updateAccountAndAssociatedAccountsWithDiagnosticReasons:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000043610d
- (void)_updateAssociatedAccountsFromPush:(_Bool)arg1 diagnosticReasons:(id)arg2 abridgedRegistration:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000435ff6
- (void)updateAssociatedAccountsWithDiagnosticReasons:(id)arg1 abridgedRegistration:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000435fd9
- (void)updateAssociatedAccountsWithDiagnosticReasons:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000435fc2
- (void)_updateAccountFromPush:(_Bool)arg1 diagnosticReasons:(id)arg2 abridgedRegistration:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000435eab
- (void)updateAccountWithDiagnosticReasons:(id)arg1 abridgedRegistration:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000435e8e
- (void)updateAccountWithDiagnosticReasons:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000435e71
- (void)updateAccountAndAssociatedAccountsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000435dee
- (void)updateAssociatedAccountsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000435d6b
- (void)updateAccountWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000435ce8
- (void)unregisterDeviceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000043584b
- (void)_queue_processRegistrationResponse:(id)arg1 registrationError:(id)arg2 previouslyRegistered:(_Bool)arg3 abridgedRegistration:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000434a98
- (void)performDeviceRegistrationWithRegistrationURL:(id)arg1 pushToken:(id)arg2 forceReregister:(_Bool)arg3 abridgedRegistration:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000004343cc
- (void)registerDeviceWithRegistrationURL:(id)arg1 pushToken:(id)arg2 forceReregister:(_Bool)arg3 reason:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000433fe4
- (void)registerDeviceWithRegistrationURL:(id)arg1 pushToken:(id)arg2 reason:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000433fbc
- (void)registerDeviceWithRegistrationURL:(id)arg1 pushToken:(id)arg2 forceReregister:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000433f9a
- (void)registerDeviceWithReason:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000433f7e
- (void)registerDeviceWithForceReregister:(_Bool)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000433d59
- (void)handleCompanionSerialNumberChanged;	// IMP=0x0010000000433c1a
- (void)registrationStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000004339a7
- (void)identityVerificationResponseWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000433865
- (void)receivedPeerPaymentMessage:(id)arg1;	// IMP=0x0010000000433749
- (void)handlePassLibraryChangedWithPassUniqueIdentifier:(id)arg1;	// IMP=0x001000000043366f
- (void)preferencesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000433525
- (void)accountWithPreventingServerFetch:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000043313a
- (void)updateSharedWebServiceContext:(id)arg1;	// IMP=0x0010000000432f18
- (void)deleteSharedWebServiceWithDiagnosticReason:(id)arg1;	// IMP=0x0010000000432823
@property(readonly, nonatomic) PKPeerPaymentWebService *sharedPeerPaymentWebService;
- (void)dealloc;	// IMP=0x0010000000432697
- (id)initWithPushNotificationManager:(id)arg1 paymentWebService:(id)arg2 assertionManager:(id)arg3 userNotificationManager:(id)arg4 sharingIDSManager:(id)arg5 familyCircleManager:(id)arg6 dataSource:(id)arg7 passStore:(id)arg8 tapToRadarDelegate:(id)arg9;	// IMP=0x0010000000431c73

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
