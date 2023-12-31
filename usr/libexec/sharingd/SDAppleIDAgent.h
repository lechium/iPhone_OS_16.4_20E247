//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSConnection, NSDate, NSMutableArray, NSMutableDictionary, NSString, SDAppleIDDatabaseManager, SDAppleIDIdentityRequest, SDAppleIDServerTask;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SDAppleIDAgent : NSObject
{
    _Bool _agentEnabled;	// 8 = 0x8
    NSMutableDictionary *_agentMetaInfo;	// 16 = 0x10
    NSString *_appleID;	// 24 = 0x18
    NSDate *_creationDate;	// 32 = 0x20
    SDAppleIDDatabaseManager *_dbManager;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 48 = 0x30
    NSMutableArray *_findPersonRequests;	// 56 = 0x38
    SDAppleIDIdentityRequest *_identityRequest;	// 64 = 0x40
    SDAppleIDServerTask *_infoRequest;	// 72 = 0x48
    _Bool _linkIdentityEnabled;	// 80 = 0x50
    NSObject<OS_dispatch_source> *_periodicVerifyTimer;	// 88 = 0x58
    APSConnection *_pushConnection;	// 96 = 0x60
    NSString *_pushEnvironment;	// 104 = 0x68
    SDAppleIDServerTask *_task;	// 112 = 0x70
    SDAppleIDIdentityRequest *_testIdentityRequest;	// 120 = 0x78
    NSObject<OS_dispatch_source> *_throttledRetryTimer;	// 128 = 0x80
    _Bool _updatePush;	// 136 = 0x88
    _Bool _updatePeriodicVerifyTimer;	// 137 = 0x89
}

+ (id)sharedAgent;	// IMP=0x0020000000198fad
- (void).cxx_destruct;	// IMP=0x00200000001996f7
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x0010000000199598
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x00100000001994b1
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;	// IMP=0x001000000019939b
- (void)handleUILockStatusChangedNotification;	// IMP=0x001000000019934b
- (void)handleKeyBagFirstUnlockNotification;	// IMP=0x00100000001992fb
- (void)handleAppleIDSignedOutNotification;	// IMP=0x00100000001992ab
- (void)handleAppleIDSignedInNotification;	// IMP=0x001000000019925b
- (void)handleAppleIDChangedNotification;	// IMP=0x001000000019920b
- (id)validationRecordInfoForAppleID:(id)arg1;	// IMP=0x00100000001990bb
- (id)statusInfo;	// IMP=0x0010000000199058
- (void)requestWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000198e6d
- (void)prefsChanged;	// IMP=0x0010000000198e1d
- (void)personInfoWithEmailOrPhone:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000198d6a
- (void)personInfoWithEmailOrPhone:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000198d51
- (id)myAccount;	// IMP=0x0010000000198cd2
- (void)invalidate;	// IMP=0x0010000000198c82
- (id)detailedDescription;	// IMP=0x0010000000198c1f
- (void)queryVerifiedIdentityForEmailOrPhone:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001988c7
- (struct __SecIdentity *)copyIdentityForAppleID:(id)arg1;	// IMP=0x00100000001987fa
- (id)verifiedIdentityForCertificateChain:(id)arg1 emailOrPhone:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000198254
- (id)verifiedIdentityForEmailOrPhone:(id)arg1;	// IMP=0x0010000000197f6f
- (void)verifiedIdentityForEmailOrPhone:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000197f56
- (void)verifiedIdentityForEmailOrPhone:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000197d97
- (void)activate;	// IMP=0x0010000000197d47
- (id)accountStatusForAppleID:(id)arg1;	// IMP=0x0010000000197c96
- (id)accountForAppleID:(id)arg1;	// IMP=0x0010000000197bbd
- (_Bool)_wasOldAgentIdentityQueried;	// IMP=0x0010000000197b93
- (_Bool)_wasIdentityLinkedOnce;	// IMP=0x0010000000197b69
- (void)_verifyStateWithDelay:(double)arg1;	// IMP=0x0010000000197a94
- (void)_verifyState;	// IMP=0x001000000019689d
- (void)_updateMyInfo;	// IMP=0x0010000000196815
- (void)_updateAppleID;	// IMP=0x001000000019671d
- (void)_update;	// IMP=0x00100000001966ac
- (id)_statusInfo;	// IMP=0x0010000000196587
- (void)_setMetaInfoValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000196550
- (void)_setCurrentAppleIDContactInfo:(id)arg1 validationRecord:(id)arg2;	// IMP=0x0010000000196536
- (void)_setCurrentAppleIDIdentity:(id)arg1;	// IMP=0x001000000019651c
- (void)_requestIdentityForAppleID:(id)arg1 certificateToken:(id)arg2 privateKeyPersistentReference:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000195ebd
- (void)_requestInfoForAppleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000195852
- (void)_removeObservers;	// IMP=0x00100000001957ff
- (void)_prefsChanged;	// IMP=0x00100000001954fb
- (void)_personInfoWithEmailOrPhone:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000194dd6
- (void)_performServerTaskWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000193e75
- (void)_performOtherTaskWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001934fd
- (int)_performKeychainCount;	// IMP=0x0010000000193189
- (int)_performKeyVerificationForIdentity:(id)arg1;	// IMP=0x0010000000192df7
- (id)_metaInfoValueForKey:(id)arg1;	// IMP=0x0010000000192de1
- (unsigned long long)_keychainCleanupTag;	// IMP=0x0010000000192dbe
- (void)_handleThrottledRetryTimerFired;	// IMP=0x0010000000192d46
- (void)_handlePeriodicVerifyTimerFired;	// IMP=0x0010000000192c82
- (void)_handleReceivedIdentity:(id)arg1 forAppleID:(id)arg2 identityRequest:(id)arg3 withError:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000001928de
- (void)_handleReceivedCertificateToken:(id)arg1 privateKeyPersistentReference:(id)arg2 forAppleID:(id)arg3;	// IMP=0x0010000000192843
- (void)_handleUntrustedAppleIDCertificateChainForIdentity:(id)arg1;	// IMP=0x00100000001926b5
- (void)_handleUILockStatusChange;	// IMP=0x0010000000192581
- (void)_handleUILockStatusChangedNotification;	// IMP=0x001000000019251a
- (void)_handleServerTaskCompletionWithError:(id)arg1;	// IMP=0x0010000000192374
- (void)_handleKeyVerificationFailure;	// IMP=0x00100000001922e0
- (void)_handleKeyBagFirstUnlockNotification;	// IMP=0x0010000000192279
- (void)_handleInfoResponse:(id)arg1 forAppleID:(id)arg2 infoRequest:(id)arg3 certificateSerialNumber:(id)arg4 withError:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000019144d
- (void)_handleFindPersonResponse:(id)arg1 forRequest:(id)arg2 emailOrPhone:(id)arg3 withError:(id)arg4 queue:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0010000000190ef0
- (void)_handleCertificateStatusUpdate:(long long)arg1 forAppleID:(id)arg2;	// IMP=0x0010000000190be0
- (void)_handleAppleIDSignedOutNotification;	// IMP=0x0010000000190ad7
- (void)_handleAppleIDSignedInNotification;	// IMP=0x00100000001909f7
- (void)_handleAppleIDChangedNotification;	// IMP=0x0010000000190988
- (void)_handleAccountIdentifierValidationRecordMismatch;	// IMP=0x00100000001908e9
- (void)_ensureThrottledRetryTimerStopped;	// IMP=0x0010000000190853
- (void)_ensureThrottledRetryTimerStartedWithSuggestedDelay:(unsigned long long)arg1;	// IMP=0x0010000000190503
- (void)_ensurePeriodicVerifyTimerStopped;	// IMP=0x0010000000190476
- (void)_ensurePeriodicVerifyTimerStarted;	// IMP=0x00100000001902dc
- (void)_ensurePushStopped;	// IMP=0x0010000000190247
- (int)_ensureEduModeDevicesAreCleanedUp;	// IMP=0x001000000018ffd9
- (void)_checkIfAppleIDCertificateChainIsValidForIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000018fd56
- (id)_detailedDescription;	// IMP=0x001000000018ea9c
- (void)_ensurePushStarted;	// IMP=0x001000000018e898
- (struct __SecIdentity *)_copyIdentityForAppleID:(id)arg1;	// IMP=0x001000000018e850
- (void)_clearAccount;	// IMP=0x001000000018e7b9
- (void)_cleanUpAccount:(id)arg1;	// IMP=0x001000000018e5d4
- (void)_invalidate;	// IMP=0x001000000018e32e
- (void)_addObservers;	// IMP=0x001000000018e245
- (void)_activate;	// IMP=0x001000000018e1a5
- (long long)_accountState;	// IMP=0x001000000018dadf
- (id)_accountForAppleID:(id)arg1;	// IMP=0x001000000018dac9
- (_Bool)eduModeEnabled;	// IMP=0x001000000018da09
- (void)dealloc;	// IMP=0x001000000018d9c5
- (id)init;	// IMP=0x001000000018d8fd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

