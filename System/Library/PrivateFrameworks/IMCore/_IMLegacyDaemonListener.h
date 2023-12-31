//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDate, NSMutableArray, NSMutableDictionary, NSProtocolChecker, NSString;

@interface _IMLegacyDaemonListener : NSObject
{
    _Bool _hidingDisconnect;	// 8 = 0x8
    _Bool _setupComplete;	// 9 = 0x9
    _Bool _holdingChatMessages;	// 10 = 0xa
    _Bool _postedSetupComplete;	// 11 = 0xb
    _Bool _hasPendingProcessChange;	// 12 = 0xc
    NSMutableDictionary *_contexts;	// 16 = 0x10
    NSMutableArray *_handlers;	// 24 = 0x18
    NSString *_myStatusMessage;	// 32 = 0x20
    unsigned long long _vcCapabilities;	// 40 = 0x28
    NSMutableDictionary *_properties;	// 48 = 0x30
    NSMutableDictionary *_persistentProperties;	// 56 = 0x38
    NSProtocolChecker *_protocol;	// 64 = 0x40
    NSMutableArray *_deferredChatMessages;	// 72 = 0x48
    NSMutableDictionary *_services;	// 80 = 0x50
    NSDate *_myIdleSince;	// 88 = 0x58
    NSData *_myPicture;	// 96 = 0x60
    unsigned long long _myStatus;	// 104 = 0x68
    NSString *_myNowPlayingString;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000045d31
@property(nonatomic) _Bool hasPendingProcessChange; // @synthesize hasPendingProcessChange=_hasPendingProcessChange;
@property(retain, nonatomic) NSString *myNowPlayingString; // @synthesize myNowPlayingString=_myNowPlayingString;
@property(nonatomic) unsigned long long myStatus; // @synthesize myStatus=_myStatus;
@property(retain, nonatomic) NSData *myPicture; // @synthesize myPicture=_myPicture;
@property(retain, nonatomic) NSDate *myIdleSince; // @synthesize myIdleSince=_myIdleSince;
@property(retain, nonatomic) NSMutableDictionary *services; // @synthesize services=_services;
@property(retain, nonatomic) NSMutableArray *deferredChatMessages; // @synthesize deferredChatMessages=_deferredChatMessages;
@property(retain, nonatomic) NSProtocolChecker *protocol; // @synthesize protocol=_protocol;
@property(retain, nonatomic) NSMutableDictionary *persistentProperties; // @synthesize persistentProperties=_persistentProperties;
@property(retain, nonatomic) NSMutableDictionary *properties; // @synthesize properties=_properties;
@property(readonly, nonatomic) _Bool hasPostedSetupComplete; // @synthesize hasPostedSetupComplete=_postedSetupComplete;
@property(readonly, nonatomic) _Bool shouldHoldChatMessages; // @synthesize shouldHoldChatMessages=_holdingChatMessages;
@property(readonly, nonatomic) unsigned long long vcCapabilities; // @synthesize vcCapabilities=_vcCapabilities;
@property(retain, nonatomic) NSString *myStatusMessage; // @synthesize myStatusMessage=_myStatusMessage;
@property(retain, nonatomic) NSMutableArray *handlers; // @synthesize handlers=_handlers;
@property(readonly, nonatomic, getter=isSetupComplete) _Bool setupComplete; // @synthesize setupComplete=_setupComplete;
@property(nonatomic, setter=_setHidingDisconnect:) _Bool _hidingDisconnect; // @synthesize _hidingDisconnect;
@property(readonly, nonatomic) NSMutableDictionary *_contexts; // @synthesize _contexts;
- (void)simSubscriptionsDidChange;	// IMP=0x0000000000045b4f
- (void)_resetPostedSetupCompleted;	// IMP=0x0000000000045b14
- (void)oneTimeCodesDidChange:(id)arg1;	// IMP=0x00000000000459d4
- (void)pendingNicknamesOrHandledNicknamesDidChange;	// IMP=0x0000000000045969
- (void)updatePersonalNickname:(id)arg1;	// IMP=0x00000000000458f3
- (void)updateNicknameHandlesForSharing:(id)arg1 blocked:(id)arg2;	// IMP=0x0000000000045869
- (void)handlesSharingNicknamesDidChange;	// IMP=0x0000000000045825
- (void)updatePendingNicknameUpdates:(id)arg1 handledNicknameUpdates:(id)arg2;	// IMP=0x0000000000045502
- (void)updateNicknameData:(id)arg1;	// IMP=0x00000000000454fc
- (void)nicknameRequestResponse:(id)arg1 encodedNicknameData:(id)arg2;	// IMP=0x00000000000454f6
- (void)receivedUrgentRequestForMessages:(id)arg1;	// IMP=0x00000000000452f1
- (void)updateCloudKitStateWithDictionary:(id)arg1;	// IMP=0x000000000004527b
- (void)updateCloudKitState;	// IMP=0x0000000000045237
- (void)didAttemptToDisableAllDevicesResult:(_Bool)arg1;	// IMP=0x00000000000451e4
- (void)didPerformAdditionalStorageRequiredCheckWithSuccess:(_Bool)arg1 additionalStorageRequired:(unsigned long long)arg2 forAccountId:(id)arg3 error:(id)arg4;	// IMP=0x0000000000045148
- (void)didAttemptToSetEnabledTo:(_Bool)arg1 result:(_Bool)arg2;	// IMP=0x00000000000450f0
- (void)qosClassWhileServicingRequestsResponse:(unsigned int)arg1 identifier:(id)arg2;	// IMP=0x0000000000044fc2
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000000044b29
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000000044b13
- (void)didFetchCloudKitSyncDebuggingInfo:(id)arg1;	// IMP=0x0000000000044a72
- (void)didAttemptToDisableiCloudBackups:(long long)arg1 error:(id)arg2;	// IMP=0x000000000004484b
- (void)didFetchRampState:(id)arg1;	// IMP=0x0000000000044704
- (void)didFetchSyncStateStats:(id)arg1;	// IMP=0x00000000000445bd
- (void)databaseChatSpamUpdated:(id)arg1;	// IMP=0x00000000000443b8
- (void)databaseUpdated:(id)arg1;	// IMP=0x0000000000043fff
- (void)newSetupInfoAvailable;	// IMP=0x0000000000043f58
- (void)_deferredSetup:(id)arg1;	// IMP=0x0000000000043532
- (void)setupComplete:(_Bool)arg1 info:(id)arg2;	// IMP=0x00000000000427d8
- (void)account:(id)arg1 defaults:(id)arg2 blockList:(id)arg3 allowList:(id)arg4 blockingMode:(unsigned int)arg5 blockIdleStatus:(_Bool)arg6 status:(id)arg7 capabilities:(unsigned long long)arg8 serviceLoginStatus:(unsigned int)arg9 loginStatusMessage:(id)arg10;	// IMP=0x0000000000042722
- (void)service:(id)arg1 properties:(id)arg2 defaults:(id)arg3 defaultAccountSettings:(id)arg4 allAccounts:(id)arg5 activeAccounts:(id)arg6;	// IMP=0x0000000000041957
- (void)services:(id)arg1 properties:(id)arg2 persistentProperties:(id)arg3;	// IMP=0x0000000000041219
- (void)account:(id)arg1 status:(id)arg2 capabilities:(unsigned long long)arg3 serviceLoginStatus:(unsigned int)arg4 loginStatusMessage:(id)arg5;	// IMP=0x0000000000040f07
- (void)persistentProperty:(id)arg1 changedTo:(id)arg2 from:(id)arg3;	// IMP=0x0000000000040ca0
- (void)_cacheValue:(id)arg1 forPersistentProperty:(id)arg2;	// IMP=0x0000000000040c26
- (id)valueOfPersistentProperty:(id)arg1;	// IMP=0x0000000000040c10
- (void)property:(id)arg1 changedTo:(id)arg2 from:(id)arg3;	// IMP=0x00000000000409a9
- (void)_cacheValue:(id)arg1 forProperty:(id)arg2;	// IMP=0x000000000004092f
- (id)valueOfProperty:(id)arg1;	// IMP=0x0000000000040919
- (id)_stampForContext:(id)arg1;	// IMP=0x0000000000040903
- (void)_setStamp:(id)arg1 forContext:(id)arg2;	// IMP=0x0000000000040822
- (void)account:(id)arg1 postedError:(id)arg2;	// IMP=0x00000000000404cf
- (void)account:(id)arg1 blockIdleStatusChanged:(_Bool)arg2;	// IMP=0x00000000000404c9
- (void)account:(id)arg1 blockingModeChanged:(unsigned int)arg2;	// IMP=0x00000000000404c3
- (void)account:(id)arg1 allowListChanged:(id)arg2;	// IMP=0x00000000000404bd
- (void)account:(id)arg1 blockListChanged:(id)arg2;	// IMP=0x00000000000404b7
- (void)account:(id)arg1 handleSubscriptionRequestFrom:(id)arg2 withMessage:(id)arg3;	// IMP=0x00000000000401f4
- (void)account:(id)arg1 groupsChanged:(id)arg2 error:(id)arg3;	// IMP=0x000000000003ff20
- (void)fileTransferDownloadFailedWithLocalURL:(id)arg1 error:(id)arg2;	// IMP=0x000000000003fe57
- (void)fileTransferDownloadedSucceededWithLocalURL:(id)arg1;	// IMP=0x000000000003fdad
- (void)fileTransferExplicitDownloadFailed:(id)arg1 suggestedRetryGUID:(id)arg2 error:(id)arg3;	// IMP=0x000000000003fcc6
- (void)fileTransfer:(id)arg1 explicitDownloadSucceededWithPath:(id)arg2 livePhotoBundlePath:(id)arg3;	// IMP=0x000000000003fbdf
- (void)fileTransferHighQualityDownloadFailed:(id)arg1;	// IMP=0x000000000003fb2f
- (void)fileTransfer:(id)arg1 highQualityDownloadSucceededWithPath:(id)arg2;	// IMP=0x000000000003fa61
- (void)fileTransfer:(id)arg1 updatedWithCurrentBytes:(unsigned long long)arg2 totalBytes:(unsigned long long)arg3 averageTransferRate:(unsigned long long)arg4;	// IMP=0x000000000003f996
- (void)fileTransfer:(id)arg1 updatedWithProperties:(id)arg2;	// IMP=0x000000000003f8c8
- (void)fileTransfers:(id)arg1 createdWithLocalPaths:(id)arg2;	// IMP=0x000000000003f7fa
- (void)fileTransfer:(id)arg1 createdWithProperties:(id)arg2;	// IMP=0x000000000003f72c
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messagesReceived:(id)arg5;	// IMP=0x000000000003f35d
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messageReceived:(id)arg5;	// IMP=0x000000000003ef8e
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 invitationReceived:(id)arg5;	// IMP=0x000000000003ebc2
- (void)account:(id)arg1 buddyProperties:(id)arg2 buddyPictures:(id)arg3;	// IMP=0x000000000003e8ee
- (void)pinCodeAlertCompleted:(id)arg1 deviceName:(id)arg2 deviceType:(id)arg3 phoneNumber:(id)arg4 responseFromDevice:(_Bool)arg5 wasCancelled:(_Bool)arg6;	// IMP=0x000000000003e621
- (void)displayPinCodeForAccount:(id)arg1 pinCode:(id)arg2 deviceName:(id)arg3 deviceType:(id)arg4 phoneNumber:(id)arg5;	// IMP=0x000000000003e380
- (void)account:(id)arg1 buddyPictureChanged:(id)arg2 imageData:(id)arg3 imageHash:(id)arg4;	// IMP=0x000000000003e085
- (void)account:(id)arg1 buddyPropertiesChanged:(id)arg2;	// IMP=0x000000000003dde4
- (void)networkDataAvailabilityChanged:(_Bool)arg1;	// IMP=0x000000000003dd54
- (void)vcCapabilitiesChanged:(unsigned long long)arg1;	// IMP=0x000000000003db62
- (void)account:(id)arg1 capabilitiesChanged:(unsigned long long)arg2;	// IMP=0x000000000003d895
- (void)account:(id)arg1 statusChanged:(id)arg2;	// IMP=0x000000000003d5fc
- (void)account:(id)arg1 loginStatusChanged:(unsigned int)arg2 message:(id)arg3 reason:(int)arg4 properties:(id)arg5;	// IMP=0x000000000003d296
- (void)accountRemoved:(id)arg1;	// IMP=0x000000000003d1ba
- (void)accountAdded:(id)arg1 defaults:(id)arg2 service:(id)arg3;	// IMP=0x000000000003d027
- (void)account:(id)arg1 defaultsChanged:(id)arg2;	// IMP=0x000000000003cd8b
- (void)activeAccountsChanged:(id)arg1 forService:(id)arg2;	// IMP=0x000000000003c727
- (void)defaultsChanged:(id)arg1 forService:(id)arg2;	// IMP=0x000000000003c4a2
- (void)releaseHeldChatMessages;	// IMP=0x000000000003c35b
- (void)holdChatMessages;	// IMP=0x000000000003c351
@property(readonly, nonatomic, getter=isHoldingChatMessages) _Bool holdingChatMessages;
- (void)_deferNotification:(id)arg1;	// IMP=0x000000000003c2da
- (void)_processDeferredInvitationDictionary:(id)arg1;	// IMP=0x000000000003c0b3
@property(readonly, nonatomic) unsigned int myIdleTime;
- (void)_processMyStatusChanged;	// IMP=0x000000000003bfcc
- (void)_reallyProcessMyStatusChanged;	// IMP=0x000000000003b865
- (id)serviceWithName:(id)arg1;	// IMP=0x000000000003b84f
@property(readonly, nonatomic) NSArray *allServices;
- (void)removeHandler:(id)arg1;	// IMP=0x000000000003b7ec
- (void)addHandler:(id)arg1;	// IMP=0x000000000003b77a
- (void)_noteDisconnected;	// IMP=0x000000000003b76c
- (id)init;	// IMP=0x000000000003b6b6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

