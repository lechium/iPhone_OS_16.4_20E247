//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMAccessoryNetworkAccessViolation, NSArray, NSString;
@protocol _HMNetworkConfigurationProfileDelegate;

__attribute__((visibility("hidden")))
@interface _HMNetworkConfigurationProfile
{
    _Bool _networkAccessRestricted;	// 12 = 0xc
    _Bool _supportsWiFiReconfiguration;	// 13 = 0xd
    long long _targetProtectionMode;	// 16 = 0x10
    long long _currentProtectionMode;	// 24 = 0x18
    NSArray *_allowedHosts;	// 32 = 0x20
    HMAccessoryNetworkAccessViolation *_accessViolation;	// 40 = 0x28
    long long _credentialType;	// 48 = 0x30
    id <_HMNetworkConfigurationProfileDelegate> _delegate;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x00100000000f28b9
- (void).cxx_destruct;	// IMP=0x00000000000f23a9
@property(nonatomic) __weak id <_HMNetworkConfigurationProfileDelegate> delegate; // @synthesize delegate=_delegate;
- (id)logIdentifier;	// IMP=0x00000000000f232c
- (void)_handleWiFiReconfigurationUpdated:(id)arg1;	// IMP=0x00000000000f213a
- (void)_handleAccessViolationUpdated:(id)arg1;	// IMP=0x00000000000f1f53
- (void)_handleHostsUpdated:(id)arg1;	// IMP=0x00000000000f1cab
- (void)_notifyDelegateOfUpdatedWiFiCredentialType;	// IMP=0x00000000000f1bb0
- (void)_notifyDelegateOfUpdatedWiFiReconfigurationSupport;	// IMP=0x00000000000f1ab5
- (void)_notifyDelegateOfUpdatedAccessViolation;	// IMP=0x00000000000f19ba
- (void)_notifyDelegateOfUpdatedAllowedHosts;	// IMP=0x00000000000f18bf
- (void)_notifyDelegateOfNetworkAccessModeChanged;	// IMP=0x00000000000f17c4
- (void)_notifyDelegateOfUpdatedProtectionMode;	// IMP=0x00000000000f16c9
- (void)previewAllowedHostsForAutoProtectionModeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000f133a
- (void)reconfigureWiFiWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f0d90
- (_Bool)_mergeWithNewObject:(id)arg1;	// IMP=0x00000000000f097a
- (id)messageReceiveQueue;	// IMP=0x00000000000f092a
- (id)messageDestination;	// IMP=0x00000000000f08c1
- (id)messageTargetUUID;	// IMP=0x00000000000f0871
- (void)setCredentialType:(long long)arg1;	// IMP=0x00000000000f0836
@property(readonly) long long credentialType; // @synthesize credentialType=_credentialType;
- (void)setSupportsWiFiReconfiguration:(_Bool)arg1;	// IMP=0x00000000000f07c8
@property(readonly) _Bool supportsWiFiReconfiguration; // @synthesize supportsWiFiReconfiguration=_supportsWiFiReconfiguration;
- (void)setTargetProtectionMode:(long long)arg1;	// IMP=0x00000000000f067b
@property(readonly) long long targetProtectionMode; // @synthesize targetProtectionMode=_targetProtectionMode;
- (void)setNetworkAccessRestricted:(_Bool)arg1;	// IMP=0x00000000000f060d
@property(readonly, getter=isNetworkAccessRestricted) _Bool networkAccessRestricted; // @synthesize networkAccessRestricted=_networkAccessRestricted;
- (void)setCurrentProtectionMode:(long long)arg1;	// IMP=0x00000000000f04c0
@property(readonly) long long currentProtectionMode; // @synthesize currentProtectionMode=_currentProtectionMode;
- (void)setAccessViolation:(id)arg1;	// IMP=0x00000000000f043f
@property(readonly) HMAccessoryNetworkAccessViolation *accessViolation; // @synthesize accessViolation=_accessViolation;
- (void)setAllowedHosts:(id)arg1;	// IMP=0x00000000000f03b1
@property(readonly) NSArray *allowedHosts; // @synthesize allowedHosts=_allowedHosts;
- (void)_registerNotificationHandlers;	// IMP=0x00000000000f029a
- (id)initWithAccessoryIdentifier:(id)arg1 targetProtection:(long long)arg2 currentProtection:(long long)arg3 networkAccessRestricted:(_Bool)arg4 allowedHosts:(id)arg5 accessViolation:(id)arg6 supportsWiFiReconfiguration:(_Bool)arg7 credentialType:(long long)arg8;	// IMP=0x00000000000f0175

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
