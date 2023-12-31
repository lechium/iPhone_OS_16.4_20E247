//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSKeychainWrapper, IDSRateLimiter, IDSUserStore, NSArray, NSMutableArray, NSMutableSet, NSString;

@interface IDSRegistrationController : NSObject
{
    NSString *_deviceName;	// 8 = 0x8
    NSMutableArray *_handlers;	// 16 = 0x10
    NSMutableArray *_activeRegistrations;	// 24 = 0x18
    NSMutableArray *_trackedRegistrations;	// 32 = 0x20
    NSMutableSet *_deferredRegisters;	// 40 = 0x28
    int _screenSharingToken;	// 48 = 0x30
    int _iMessageToken;	// 52 = 0x34
    int _faceTimeToken;	// 56 = 0x38
    int _callingToken;	// 60 = 0x3c
    _Bool _displayingAddNumberPrompt;	// 64 = 0x40
    IDSKeychainWrapper *_keychainWrapper;	// 72 = 0x48
    IDSUserStore *_userStore;	// 80 = 0x50
    IDSRateLimiter *_simDeactivationRequestRateLimiter;	// 88 = 0x58
}

+ (_Bool)systemSupportsPhoneNumberRegistration;	// IMP=0x0020000000098390
+ (_Bool)systemSupportsRegistrationInfo:(id)arg1;	// IMP=0x00100000000981f0
+ (_Bool)systemSupportsServiceType:(id)arg1 registrationType:(int)arg2;	// IMP=0x0010000000097670
+ (_Bool)systemSupportsServiceType:(id)arg1 accountType:(int)arg2 isTemporary:(_Bool)arg3;	// IMP=0x0010000000097530
+ (id)sharedInstance;	// IMP=0x00100000000968b0
+ (id)registeredPhoneNumbers;	// IMP=0x00100000000964b0
+ (_Bool)validSIMStateForRegistration;	// IMP=0x00100000000962b0
+ (_Bool)_isPhoneNumberAuthenticationDuringBuddyAllowed;	// IMP=0x00100000000961c0
+ (_Bool)canCompleteRegistration;	// IMP=0x00100000000960c0
+ (_Bool)canStartRegistrationForAccountType:(int)arg1;	// IMP=0x0010000000095cc0
+ (_Bool)isBuddyShowing;	// IMP=0x0010000000095c30
+ (void)initialize;	// IMP=0x0010000000095bd0
- (void).cxx_destruct;	// IMP=0x00200000000a8ff0
@property(retain, nonatomic) IDSRateLimiter *simDeactivationRequestRateLimiter; // @synthesize simDeactivationRequestRateLimiter=_simDeactivationRequestRateLimiter;
@property(nonatomic) _Bool displayingAddNumberPrompt; // @synthesize displayingAddNumberPrompt=_displayingAddNumberPrompt;
@property(retain, nonatomic) IDSUserStore *userStore; // @synthesize userStore=_userStore;
@property(retain, nonatomic) IDSKeychainWrapper *keychainWrapper; // @synthesize keychainWrapper=_keychainWrapper;
@property(readonly, nonatomic) NSArray *activeRegistrations; // @synthesize activeRegistrations=_activeRegistrations;
@property(readonly, nonatomic) NSArray *trackedRegistrations; // @synthesize trackedRegistrations=_trackedRegistrations;
- (void)noteManateeAvailabilityTime;	// IMP=0x00100000000a8e40
- (void)noteiCloudSignInTime;	// IMP=0x00100000000a8df0
- (void)SIM:(id)arg1 didDeactivateWithInfo:(id)arg2;	// IMP=0x00100000000a8950
- (double)simDeactivationInfoRateLimitInterval;	// IMP=0x00100000000a8850
- (long long)simDeactivationInfoRateLimitCount;	// IMP=0x00100000000a8760
- (void)_alertForHomeNumberIfNeededForSIMIdentifier:(id)arg1 withPhoneNumber:(id)arg2;	// IMP=0x00100000000a7dc0
- (void)_notifyHomeNumberSuccessForUser:(id)arg1;	// IMP=0x00100000000a7cf0
- (id)_phoneUserWithCredentials;	// IMP=0x00100000000a79a0
- (id)_provisionedTemporaryUser;	// IMP=0x00100000000a7670
- (_Bool)_pnrOngoing;	// IMP=0x00100000000a73e0
- (void)_postHomeNumberNotificationBeforeAlertForIdentifier:(id)arg1 forcefully:(_Bool)arg2;	// IMP=0x00100000000a6f70
- (void)systemDidLeaveFirstDataProtectionLock;	// IMP=0x00100000000a6b70
- (void)_systemConfigurationPrefsChanged;	// IMP=0x00100000000a6410
@property(readonly, nonatomic) NSArray *activeRegistrationsToRegister;
- (id)activeRegistrationsOfType:(int)arg1;	// IMP=0x00100000000a6190
- (id)activeRegistrationsMatchingUserID:(id)arg1;	// IMP=0x00100000000a5f20
- (void)stopTrackingActiveRegistration:(id)arg1;	// IMP=0x00100000000a5d70
- (void)startTrackingActiveRegistration:(id)arg1;	// IMP=0x00100000000a5b00
- (void)stopTrackingRegistration:(id)arg1;	// IMP=0x00100000000a5910
- (void)startTrackingRegistration:(id)arg1;	// IMP=0x00100000000a5650
- (void)_updateNotifyState;	// IMP=0x00100000000a4fc0
- (void)removeListener:(id)arg1;	// IMP=0x00100000000a4f30
- (void)addListener:(id)arg1;	// IMP=0x00100000000a4e70
- (void)center:(id)arg1 succeededLinkHandlesConfirmation:(id)arg2 emailAddress:(id)arg3;	// IMP=0x00100000000a4c40
- (void)center:(id)arg1 failedAuthentication:(id)arg2 error:(long long)arg3 info:(id)arg4;	// IMP=0x00100000000a4670
- (void)center:(id)arg1 succeededRegionValidation:(id)arg2 regionID:(id)arg3 phoneNumber:(id)arg4 extraContext:(id)arg5 verified:(_Bool)arg6;	// IMP=0x00100000000a4300
- (void)center:(id)arg1 succeededAuthentication:(id)arg2;	// IMP=0x00100000000a40a0
- (void)center:(id)arg1 succeededInitialRegionQuery:(id)arg2;	// IMP=0x00100000000a3e30
- (_Bool)_sendIDSAuthenticationForRegistration:(id)arg1;	// IMP=0x00100000000a3ac0
- (void)_ensureProfileQueriesAreReadyForRegistratration:(id)arg1;	// IMP=0x00100000000a34d0
- (void)center:(id)arg1 failedCurrentEmailsRequest:(id)arg2 error:(long long)arg3 info:(id)arg4;	// IMP=0x00100000000a33c0
- (void)center:(id)arg1 succeededCurrentEmailsRequest:(id)arg2 emailInfo:(id)arg3;	// IMP=0x00100000000a3060
- (_Bool)_sendIDSAuthenticationOrRegistrationIfNeeded:(id)arg1;	// IMP=0x00100000000a2870
- (void)center:(id)arg1 failedIDSAuthentication:(id)arg2 error:(long long)arg3 info:(id)arg4;	// IMP=0x00100000000a1050
- (void)center:(id)arg1 succeededIDSAuthentication:(id)arg2;	// IMP=0x00100000000a0cd0
- (void)centerNeedsNewIdentification:(id)arg1;	// IMP=0x00100000000a0be0
- (void)center:(id)arg1 failedIdentification:(id)arg2 error:(long long)arg3;	// IMP=0x00100000000a09b0
- (void)center:(id)arg1 succeededIdentification:(id)arg2 phoneNumber:(id)arg3 token:(id)arg4;	// IMP=0x00100000000a0660
- (void)center:(id)arg1 allSucceededRegistrations:(id)arg2;	// IMP=0x00100000000a0570
- (void)center:(id)arg1 failedRegistration:(id)arg2 error:(long long)arg3 info:(id)arg4;	// IMP=0x00100000000a03c0
- (void)center:(id)arg1 succeededRegistration:(id)arg2;	// IMP=0x001000000009fc10
- (void)_captureDiagnosticsForFailedRegistration:(id)arg1 registrationError:(long long)arg2;	// IMP=0x001000000009f820
- (_Bool)_shouldSubmitRegistrationCompletedMetricForRegistration:(id)arg1;	// IMP=0x001000000009f790
- (void)_submitRegistrationCompletedMetricWithRegistration:(id)arg1 success:(_Bool)arg2 registrationError:(long long)arg3;	// IMP=0x001000000009f510
- (void)_notifyDeregistrationStarting:(id)arg1;	// IMP=0x001000000009f160
- (void)_notifyAllRegistrationSuccess:(id)arg1;	// IMP=0x001000000009eae0
- (void)_notifyRegistrationSuccess:(id)arg1;	// IMP=0x001000000009e3f0
- (void)_notifyRegistrationFailure:(id)arg1 error:(long long)arg2 info:(id)arg3;	// IMP=0x001000000009dbb0
- (void)_notifyRegistrationStarting:(id)arg1;	// IMP=0x001000000009d6f0
- (void)_notifyRegistrationUpdated:(id)arg1;	// IMP=0x001000000009d230
- (void)_notifyNeedsNewRegistration;	// IMP=0x001000000009cec0
- (_Bool)_performCorrectServerRequestForTemporaryPhoneRegistration:(id)arg1 sentAuthentication:(_Bool *)arg2 sentIDSAction:(_Bool *)arg3;	// IMP=0x001000000009c560
- (void)reportSpamMessage:(id)arg1 toURI:(id)arg2 registration:(id)arg3;	// IMP=0x001000000009c480
- (void)reportiMessageUnknownSender:(id)arg1 messageID:(id)arg2 isBlackholed:(_Bool)arg3 isJunked:(_Bool)arg4 messageServerTimestamp:(id)arg5 toURI:(id)arg6 registration:(id)arg7;	// IMP=0x001000000009c300
- (void)reportSpamWithMessages:(id)arg1 toURI:(id)arg2 registration:(id)arg3;	// IMP=0x001000000009c220
- (void)cancelActionsForRegistrationInfo:(id)arg1;	// IMP=0x001000000009c110
- (_Bool)unregisterInfo:(id)arg1;	// IMP=0x001000000009be30
- (_Bool)registerInfo:(id)arg1 requireSilentAuth:(_Bool)arg2;	// IMP=0x0010000000098710
- (_Bool)registerInfo:(id)arg1;	// IMP=0x00100000000986a0
- (_Bool)systemSupportsRegistrationInfo:(id)arg1;	// IMP=0x0010000000098630
- (_Bool)systemSupportsServiceType:(id)arg1 registrationType:(int)arg2;	// IMP=0x00100000000985b0
- (_Bool)systemSupportsServiceType:(id)arg1 accountType:(int)arg2 isTemporary:(_Bool)arg3;	// IMP=0x0010000000098520
- (_Bool)systemSupportsPhoneNumberRegistration;	// IMP=0x00100000000984e0
- (_Bool)registrationSupportedForRegistration:(id)arg1;	// IMP=0x0010000000097240
- (void)dealloc;	// IMP=0x0010000000097100
- (id)initWithUserStore:(id)arg1;	// IMP=0x0010000000096ae0
- (id)init;	// IMP=0x0010000000096970

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

