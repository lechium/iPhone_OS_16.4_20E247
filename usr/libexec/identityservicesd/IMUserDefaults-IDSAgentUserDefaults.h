//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMFoundation/IMUserDefaults.h>

@interface IMUserDefaults (IDSAgentUserDefaults)
+ (_Bool)handleInFirewallAllowList:(id)arg1;	// IMP=0x0020000000765bc0
+ (_Bool)shouldFirewallDropForAllCategories;	// IMP=0x0010000000765b30
+ (_Bool)isFirewallEnabled;	// IMP=0x0010000000765a20
+ (id)fileTypeForOptions:(id)arg1;	// IMP=0x0010000000765880
+ (id)fileForOptions:(id)arg1;	// IMP=0x00100000007656e0
+ (id)configurationForOptions:(id)arg1;	// IMP=0x0010000000765540
+ (_Bool)bypassRegistrationControlStatusCheck;	// IMP=0x00100000007654b0
+ (long long)keyTransparencyCKContainerExpiryOverride;	// IMP=0x0010000000765420
+ (long long)coalesceDelayOverride;	// IMP=0x0000000000765390
+ (long long)homeNumberSecondsUntilExpiration;	// IMP=0x0010000000765300
+ (_Bool)bypassHomeNumberCarrierCheck;	// IMP=0x0010000000765270
+ (_Bool)isDroppingMadridMessages;	// IMP=0x00100000007651e0
+ (_Bool)isForcingOnePerFanout;	// IMP=0x0010000000765150
+ (_Bool)isForcingAttachmentMessage;	// IMP=0x00100000007650c0
+ (_Bool)isFakingEveryUnlockAsFirstUnlock;	// IMP=0x0010000000765030
+ (_Bool)forceFlushOnDeliveryReceipt;	// IMP=0x0010000000764fa0
+ (id)keyTransparencyAccountKeyFetchMetricDeviceID;	// IMP=0x0010000000764d70
+ (long long)keyTransparencySubsequentGossipChance;	// IMP=0x0010000000764ce0
+ (long long)keyTransparencyFirstGossipChance;	// IMP=0x0010000000764c50
+ (_Bool)isKeyTransparencyUIEnabled;	// IMP=0x0010000000764bc0
+ (_Bool)isKeyTransparencyAggressiveVerificationScheduleEnabled;	// IMP=0x0010000000764b30
+ (_Bool)isKeyTransparencyAccountKeyCircleDisabled;	// IMP=0x0010000000764aa0
+ (_Bool)isKeyTransparencyCloudKitCircleDisabled;	// IMP=0x0010000000764a10
+ (_Bool)isKeyTransparencyDisabled;	// IMP=0x0010000000764980
+ (_Bool)isKTAsyncEnrollmentDisabled;	// IMP=0x00100000007648f0
+ (_Bool)isForcefulLegacyEnabled;	// IMP=0x0010000000764860
+ (_Bool)isForcefulECCEnabled;	// IMP=0x00100000007647d0
+ (_Bool)isAlwaysPairAsTinker;	// IMP=0x0010000000764740
+ (_Bool)isDebugPiscoLoggingEnabled;	// IMP=0x00100000007646b0
+ (_Bool)isDeviceScoringEnabled;	// IMP=0x0010000000764620
+ (_Bool)isBAACertDisabled;	// IMP=0x0010000000764590
+ (_Bool)isAbsintheV4Enabled;	// IMP=0x0010000000764500
+ (_Bool)isPiscoDisabled;	// IMP=0x0010000000764470
+ (id)fixedInterfaceDestination;	// IMP=0x00100000007643e0
+ (id)fixedInterface;	// IMP=0x0010000000764350
+ (long long)sessionNetworkAvailabilityCheckOverrideBehavior;	// IMP=0x0010000000764280
@end

