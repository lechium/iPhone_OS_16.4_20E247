//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CTXPCContexts, CoreTelephonyClient, MISSING_TYPE, NSDictionary, NSMutableDictionary, NSSet, NSString, NSUUID;
@protocol CSDCoreTelephonyClientDelegate, OS_dispatch_queue;

@interface CSDCoreTelephonyClient : NSObject
{
    id <CSDCoreTelephonyClientDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    CoreTelephonyClient *_client;	// 24 = 0x18
    CTXPCContexts *_activeContexts;	// 32 = 0x20
    NSMutableDictionary *_mobileCodesToISOCountryCode;	// 40 = 0x28
}

+ (_Bool)_isNSErrorFatal:(id)arg1;	// IMP=0x00200000001bbc75
+ (_Bool)_isCTErrorFatal:(CDStruct_1ef3fb1f)arg1;	// IMP=0x00100000001bbc58
- (void).cxx_destruct;	// IMP=0x00200000001bc642
@property(readonly, nonatomic) NSMutableDictionary *mobileCodesToISOCountryCode; // @synthesize mobileCodesToISOCountryCode=_mobileCodesToISOCountryCode;
@property(copy, nonatomic) CTXPCContexts *activeContexts; // @synthesize activeContexts=_activeContexts;
@property(readonly, nonatomic) CoreTelephonyClient *client; // @synthesize client=_client;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <CSDCoreTelephonyClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void)ctEmergencyCallbackModeStatusChangedWithUserInfo:(id)arg1;	// IMP=0x00100000001bc497
- (void)phoneServicesCapabilitiesChanged:(id)arg1;	// IMP=0x00100000001bc2ef
- (void)context:(id)arg1 capabilitiesChanged:(id)arg2;	// IMP=0x00100000001bc152
- (void)callCapabilitiesChanged:(id)arg1 capabilities:(id)arg2;	// IMP=0x00100000001bbf99
- (void)activeSubscriptionsDidChange;	// IMP=0x00100000001bbf13
- (id)_subscriptionWithUUID:(id)arg1;	// IMP=0x00100000001bbd18
- (id)mobileNetworkCodeForSubscription:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001bbb7b
- (id)mobileCountryCodeForSubscription:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001bba9e
- (id)ISOCountryCodeForMobileCountryCode:(id)arg1 mobileNetworkCode:(id)arg2;	// IMP=0x00100000001bb782
- (id)ISOCountryCodeForSubscriptionUUID:(id)arg1;	// IMP=0x00100000001bb46e
- (id)accountISOCountryCodeForSubscriptionUUID:(id)arg1;	// IMP=0x00100000001bb1b4
- (void)legacyRecheckAccountStatusForCapability:(id)arg1;	// IMP=0x00100000001bb0be
- (void)legacyRemoveSecondaryThumperDeviceWithIDSDeviceIdentifier:(id)arg1;	// IMP=0x00100000001baf4e
- (void)legacyAddSecondaryThumperDeviceWithIDSDeviceIdentifier:(id)arg1;	// IMP=0x00100000001badde
- (id)legacySystemCapabilities;	// IMP=0x00100000001bad35
- (void)setLegacyCapability:(id)arg1 enabled:(_Bool)arg2 capabilityInformation:(id)arg3;	// IMP=0x00100000001bab9c
- (MISSING_TYPE *)endEmergencyCallbackMode;	// IMP=0x00100000001baa6b
- (void)recheckAccountStatusForSubscription:(id)arg1 capability:(id)arg2;	// IMP=0x00100000001ba8fc
- (void)removeSecondaryThumperDeviceWithIDSDeviceIdentifier:(id)arg1 fromSubscription:(id)arg2;	// IMP=0x00100000001ba6dc
- (void)addSecondaryThumperDeviceWithIDSDeviceIdentifier:(id)arg1 toSubscription:(id)arg2;	// IMP=0x00100000001ba4bc
- (void)setSubscription:(id)arg1 capability:(id)arg2 enabled:(_Bool)arg3 info:(id)arg4;	// IMP=0x00100000001ba246
- (void)setCapability:(id)arg1 enabled:(_Bool)arg2 info:(id)arg3;	// IMP=0x00100000001ba234
- (id)systemCapabilitiesForSubscription:(id)arg1;	// IMP=0x00100000001ba0bf
- (id)capabilityInfoForSubscription:(id)arg1 capability:(id)arg2;	// IMP=0x00100000001b9f1b
- (id)callCapabilitiesForSubscription:(id)arg1;	// IMP=0x00100000001b9d5f
@property(readonly, copy, nonatomic) NSDictionary *thumperDeviceInfo;
@property(readonly, nonatomic, getter=isEmergencyCallbackModeEnabled) _Bool emergencyCallbackModeEnabled;
@property(readonly, copy, nonatomic) NSSet *telephonySubscriptions;
@property(readonly, copy, nonatomic) NSSet *subscriptions;
@property(readonly, copy, nonatomic) NSUUID *preferredVoiceSubscriptionUUID;
- (id)initWithQueue:(id)arg1 shouldRegisterForECBMNotification:(_Bool)arg2;	// IMP=0x00100000001b9470

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

