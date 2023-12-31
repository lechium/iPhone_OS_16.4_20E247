//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDictionary;

@interface CSDSharedConversationServerBag : NSObject
{
    MISSING_TYPE *fitnessPlusAppBundleID;	// 8 = 0x8
    MISSING_TYPE *fitnessPlusDaemonBundleID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0040000000236600
- (id)init;	// IMP=0x0010000000236550
@property(nonatomic, readonly) unsigned long long handoffUPlusOneLeaveDelay;
@property(nonatomic, readonly) unsigned long long handoffUPlusOneLeaveTimeout;
- (_Bool)gftaasPseudonymsEnabled:(id)arg1;	// IMP=0x00100000002363d0
- (_Bool)isGuestModeSupported;	// IMP=0x0010000000236350
@property(nonatomic, readonly) double neighborhoodActivityConduitTimeout;
- (_Bool)isUPlusNDowngradeAvailable;	// IMP=0x00100000002362d0
@property(nonatomic, readonly) unsigned long long maxRemoteMirageParticipants;
- (_Bool)isGFTDowngradeToOneToOneAvailable;	// IMP=0x0010000000236290
- (_Bool)isExpanseConduitProxyEnabled;	// IMP=0x0010000000236270
@property(nonatomic, readonly) unsigned long long messageRetryIntervalMillis;
@property(nonatomic, readonly) unsigned long long messageRetryMaxAttempts;
- (id)stableBundleIdentifierForLocalBundleIdentifier:(id)arg1;	// IMP=0x00100000002361a0
@property(nonatomic, readonly) unsigned long long handoffAudioDeviceTimeout;
@property(nonatomic, readonly) unsigned long long idsFirewallBatchSize;
@property(nonatomic, readonly) unsigned long long idsFirewallCHExpiryTimeDays;
- (id)localBundleIDForActivityIdentifier:(id)arg1;	// IMP=0x0010000000235f60
@property(nonatomic, readonly) NSDictionary *activityIdentifierBundleIDMapping;
@property(nonatomic, readonly) unsigned long long letMeInRequestRecoveryTimeout;
@property(nonatomic, readonly) unsigned long long letMeInRequestNotificationTimeout;
@property(nonatomic, readonly) unsigned long long linkSyncRecoverTimeLimit;
@property(nonatomic, readonly) unsigned long long linkSyncRecoverFailureLimit;
@property(nonatomic, readonly) unsigned long long webNicknameLengthLimit;
@property(nonatomic, readonly) unsigned long long inactiveLinkCacheLimit;
@property(nonatomic, readonly) unsigned long long inactiveLinkPseudonymExpiry;
@property(nonatomic, readonly) unsigned long long linkPseudonymExpiry;
@property(nonatomic, readonly) unsigned long long maxKickMemberRetries;
@property(nonatomic, readonly) unsigned long long maxActiveParticipantFetchRetries;
- (_Bool)isSharePlayVersionCheckEnabled;	// IMP=0x0010000000235d70
- (_Bool)isModernGFTEnabled;	// IMP=0x0010000000235d50
- (_Bool)isAutomaticUpgradingEnabled;	// IMP=0x0010000000235d30
@property(nonatomic, readonly) unsigned long long activeParticipantRefreshDelay;
@property(nonatomic, readonly) unsigned long long rebroadcastTimeThreshold;
@property(nonatomic, readonly) unsigned long long AVCBlobRecoveryTimeout;
@property(nonatomic, readonly) unsigned long long AVCBlobRecoveryGracePeriod;
@property(nonatomic, readonly) unsigned long long greenTeaHandoffTimeout;
@property(nonatomic, readonly) unsigned long long sessionCleanupTimeout;
@property(nonatomic, readonly) unsigned long long activeParticipantPruningTimeout;

// Remaining properties
@property(nonatomic, readonly) _Bool automaticUpgradingEnabled;
@property(nonatomic, readonly) _Bool expanseConduitProxyEnabled;
@property(nonatomic, readonly) _Bool gftDowngradeToOneToOneAvailable;
@property(nonatomic, readonly) _Bool guestModeSupported;
@property(nonatomic, readonly) _Bool modernGFTEnabled;
@property(nonatomic, readonly) _Bool sharePlayVersionCheckEnabled;
@property(nonatomic, readonly) _Bool uPlusNDowngradeAvailable;

@end

