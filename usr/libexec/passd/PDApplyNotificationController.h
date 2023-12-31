//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, PDApplyManager, PDDatabaseManager, PDFamilyCircleManager, PDPaymentWebServiceCoordinator, PDUserNotificationManager, PKFamilyMemberCollection;
@protocol OS_dispatch_queue;

@interface PDApplyNotificationController : NSObject
{
    PDUserNotificationManager *_userNotificationManager;	// 8 = 0x8
    PDApplyManager *_applyManager;	// 16 = 0x10
    PDFamilyCircleManager *_familyMemberManager;	// 24 = 0x18
    PDDatabaseManager *_databaseManager;	// 32 = 0x20
    PDPaymentWebServiceCoordinator *_paymentWebServiceCoordinator;	// 40 = 0x28
    PKFamilyMemberCollection *_familyMemberCollection;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_workQueue;	// 56 = 0x38
}

+ (id)_expiryReminderNotificationDateFromExpiryDate:(id)arg1;	// IMP=0x002000000035b85e
+ (id)_acceptReminderNotificationDate;	// IMP=0x001000000035b7a4
- (void).cxx_destruct;	// IMP=0x0020000000360564
- (void)_queue_loadFamilyMemberCollectionIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000003603a8
- (id)_customRouteForJointOfferWithAccountIdentifier:(id)arg1 invitationIdentifier:(id)arg2;	// IMP=0x001000000036031a
- (id)_customRouteForInvitationWithIdentifier:(id)arg1;	// IMP=0x00100000003602a0
- (id)_customRouteForPassUniqueID:(id)arg1;	// IMP=0x0010000000360237
- (void)_insertOrUpdateInvitationClosedNotificationForOldApplication:(id)arg1 newApplication:(id)arg2;	// IMP=0x001000000035fc30
- (void)_insertOrUpdateInvitationOfferDeclinedNotificationForOldApplication:(id)arg1 newApplication:(id)arg2;	// IMP=0x001000000035f453
- (void)_insertOrUpdateInvitationOfferAcceptedNotificationForOldApplication:(id)arg1 newApplication:(id)arg2;	// IMP=0x001000000035ed47
- (void)_insertOrUpdateInvitationOfferReadyNotificationForOldApplication:(id)arg1 newApplication:(id)arg2;	// IMP=0x001000000035e985
- (void)_insertOrUpdateInvitationReceivedNotificationForOldApplication:(id)arg1 newApplication:(id)arg2;	// IMP=0x001000000035e3b7
- (void)_insertOrUpdatePathToOfferCompletedNotificationForOldApplication:(id)arg1 newApplication:(id)arg2 preferredLanguage:(id)arg3;	// IMP=0x001000000035e33d
- (void)_insertOrUpdateFeatureApplicationClosedNotificationForOldApplication:(id)arg1 newApplication:(id)arg2 preferredLanguage:(id)arg3;	// IMP=0x001000000035e245
- (void)_insertOrUpdateFeatureApplicationOpenNotificationsForOldApplication:(id)arg1 newApplication:(id)arg2 preferredLanguage:(id)arg3;	// IMP=0x001000000035dfd0
- (void)_insertOrUpdateFeatureApplicationNewNotificationsForOldApplication:(id)arg1 newApplication:(id)arg2 preferredLanguage:(id)arg3;	// IMP=0x001000000035de93
- (void)_insertOrUpdateFeatureApplicationTerminatedNotificationsForOldApplication:(id)arg1 newApplication:(id)arg2 preferredLanguage:(id)arg3;	// IMP=0x001000000035d859
- (void)_insertOrUpdateFeatureApplicationWithdrawnNotificationsForOldApplication:(id)arg1 newApplication:(id)arg2 preferredLanguage:(id)arg3;	// IMP=0x001000000035d633
- (void)_insertOrUpdateFeatureApplicationAcceptedNotificationsForOldApplication:(id)arg1 newApplication:(id)arg2 preferredLanguage:(id)arg3;	// IMP=0x001000000035d1dc
- (void)_insertOrUpdateFeatureApplicationPendingNotificationsForOldApplication:(id)arg1 newApplication:(id)arg2 preferredLanguage:(id)arg3;	// IMP=0x001000000035cfd4
- (void)_insertOrUpdateFeatureApplicationBookedNotificationsForOldApplication:(id)arg1 newApplication:(id)arg2 preferredLanguage:(id)arg3;	// IMP=0x001000000035cc1c
- (void)_insertOrUpdateFeatureApplicationExpiredNotificationsForOldApplication:(id)arg1 newApplication:(id)arg2 preferredLanguage:(id)arg3;	// IMP=0x001000000035ca33
- (void)_insertOrUpdateFeatureApplicationApprovedNotificationsForOldApplication:(id)arg1 newApplication:(id)arg2 preferredLanguage:(id)arg3;	// IMP=0x001000000035c27e
- (id)_cutomRouteForApplicationIdentifier:(id)arg1;	// IMP=0x001000000035c24f
- (id)_cutomRouteForFeatureIdentifier:(unsigned long long)arg1;	// IMP=0x001000000035c1d0
- (MISSING_TYPE *)familyCircleManagerDidUpdateFamilyMembers: /* Error: Ran out of types for this method. */;	// IMP=0x001000000035c168
- (void)_queue_notificationForNewApplication:(id)arg1 oldApplication:(id)arg2 preferredLanguage:(id)arg3;	// IMP=0x001000000035bd2c
- (void)notificationForNewApplication:(id)arg1 oldApplication:(id)arg2;	// IMP=0x001000000035bb0c
- (void)_queue_removeAllNotificationsForApplicationIdentifier:(id)arg1;	// IMP=0x001000000035baaa
- (void)_queue_removeNonTerminalNotificationsForApplicationIdentifier:(id)arg1;	// IMP=0x001000000035b9c1
- (id)_expiryReminderIdentifierForApplicationIdentifier:(id)arg1;	// IMP=0x001000000035b839
- (id)_acceptReminderIdentifierForApplicationIdentifier:(id)arg1;	// IMP=0x001000000035b77f
- (id)_approvedIdentifierForApplicationIdentifier:(id)arg1;	// IMP=0x001000000035b75a
- (void)applyManager:(id)arg1 didRemoveApplication:(id)arg2;	// IMP=0x001000000035b666
- (void)applyManager:(id)arg1 didUpdateApplication:(id)arg2 oldApplication:(id)arg3;	// IMP=0x001000000035b631
- (void)applyManager:(id)arg1 didAddApplication:(id)arg2;	// IMP=0x001000000035b5fd
- (void)postApplyStateRequiresUserInteractionNotificationWithNewApplication:(id)arg1 oldApplication:(id)arg2;	// IMP=0x001000000035b20d
- (id)initWithApplyManager:(id)arg1 databaseManager:(id)arg2 familyMemberManager:(id)arg3 userNotificationManager:(id)arg4 paymentWebServiceCoordinator:(id)arg5;	// IMP=0x001000000035b09c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

