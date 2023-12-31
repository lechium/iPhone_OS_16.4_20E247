//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BAExtensionRuntime, MISSING_TYPE, NSArray, NSData, NSDate, NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString, NSURL;

@interface BAApplicationInfo : NSObject
{
    _Bool _awaitingNetworkConsent;	// 8 = 0x8
    _Bool _userForceQuitApp;	// 9 = 0x9
    _Bool _receivedInstalledNotification;	// 10 = 0xa
    _Bool _receivedInstallingNotification;	// 11 = 0xb
    _Bool _hasLaunchedApplication;	// 12 = 0xc
    _Bool _permittedForInitialBackgroundActivity;	// 13 = 0xd
    long long _applicationState;	// 16 = 0x10
    long long _applicationExtensionState;	// 24 = 0x18
    NSData *_persistentIdentifier;	// 32 = 0x20
    NSString *_applicationIdentifier;	// 40 = 0x28
    NSDate *_lastPeriodicCheckTime;	// 48 = 0x30
    NSDate *_lastApplicationLaunchTime;	// 56 = 0x38
    unsigned long long _initialBackgroundCellularPolicy;	// 64 = 0x40
    NSString *_applicationTeamIdentifier;	// 72 = 0x48
    NSArray *_allowedDownloadDomains;	// 80 = 0x50
    NSArray *_allowedDownloadDomainWildcards;	// 88 = 0x58
    unsigned long long _optionalAssetDownloadAllowance;	// 96 = 0x60
    unsigned long long _essentialAssetDownloadAllowance;	// 104 = 0x68
    NSURL *_manifestURL;	// 112 = 0x70
    unsigned long long _optionalAmountDownloaded;	// 120 = 0x78
    unsigned long long _essentialAmountDownloaded;	// 128 = 0x80
    NSMutableDictionary *_blocksAwaitingNetworkConsent;	// 136 = 0x88
    NSRecursiveLock *_appInfoRecursiveLock;	// 144 = 0x90
    NSMutableArray *_extensionRuntimeEvents;	// 152 = 0x98
    BAExtensionRuntime *_currentRuntime;	// 160 = 0xa0
}

+ (id)extensionContainingApplicationList;	// IMP=0x0020000000031bfb
+ (id)classesForSerialization;	// IMP=0x0010000000031af3
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000031aeb
+ (_Bool)applicationForIdentifierAllowsBackgroundActivity:(id)arg1;	// IMP=0x0010000000031834
- (void).cxx_destruct;	// IMP=0x0020000000036e2b
@property(retain) BAExtensionRuntime *currentRuntime; // @synthesize currentRuntime=_currentRuntime;
@property(retain) NSMutableArray *extensionRuntimeEvents; // @synthesize extensionRuntimeEvents=_extensionRuntimeEvents;
@property(retain) NSRecursiveLock *appInfoRecursiveLock; // @synthesize appInfoRecursiveLock=_appInfoRecursiveLock;
@property(readonly) NSMutableDictionary *blocksAwaitingNetworkConsent; // @synthesize blocksAwaitingNetworkConsent=_blocksAwaitingNetworkConsent;
@property unsigned long long essentialAmountDownloaded; // @synthesize essentialAmountDownloaded=_essentialAmountDownloaded;
@property unsigned long long optionalAmountDownloaded; // @synthesize optionalAmountDownloaded=_optionalAmountDownloaded;
@property(retain) NSURL *manifestURL; // @synthesize manifestURL=_manifestURL;
@property unsigned long long essentialAssetDownloadAllowance; // @synthesize essentialAssetDownloadAllowance=_essentialAssetDownloadAllowance;
@property unsigned long long optionalAssetDownloadAllowance; // @synthesize optionalAssetDownloadAllowance=_optionalAssetDownloadAllowance;
@property(retain) NSArray *allowedDownloadDomainWildcards; // @synthesize allowedDownloadDomainWildcards=_allowedDownloadDomainWildcards;
@property(retain) NSArray *allowedDownloadDomains; // @synthesize allowedDownloadDomains=_allowedDownloadDomains;
@property(retain) NSString *applicationTeamIdentifier; // @synthesize applicationTeamIdentifier=_applicationTeamIdentifier;
@property unsigned long long initialBackgroundCellularPolicy; // @synthesize initialBackgroundCellularPolicy=_initialBackgroundCellularPolicy;
@property _Bool permittedForInitialBackgroundActivity; // @synthesize permittedForInitialBackgroundActivity=_permittedForInitialBackgroundActivity;
@property _Bool hasLaunchedApplication; // @synthesize hasLaunchedApplication=_hasLaunchedApplication;
@property(retain) NSDate *lastApplicationLaunchTime; // @synthesize lastApplicationLaunchTime=_lastApplicationLaunchTime;
@property(retain) NSDate *lastPeriodicCheckTime; // @synthesize lastPeriodicCheckTime=_lastPeriodicCheckTime;
@property(retain) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (MISSING_TYPE *)debugDescription;	// IMP=0x0010000000036a0c
- (id)_serializableAllowedDomainInfo;	// IMP=0x001000000003698c
- (void)_populateAllowedDomainInfoWithArray:(id)arg1;	// IMP=0x00100000000366db
- (void)_debugConsumeTime:(double)arg1;	// IMP=0x0010000000036548
- (void)performAfterNetworkConsentProvided:(CDUnknownBlockType)arg1 queue:(id)arg2;	// IMP=0x00100000000362b5
- (void)applicationLaunched;	// IMP=0x00100000000361c8
- (void)donePeriodicCheck;	// IMP=0x0010000000036115
- (void)extensionExited;	// IMP=0x0010000000035f5c
- (void)willLaunchExtension;	// IMP=0x0010000000035e5c
- (_Bool)shouldLaunchExtension;	// IMP=0x0010000000035e18
- (void)resetExtensionRuntime;	// IMP=0x0010000000035cde
- (double)extensionRuntime;	// IMP=0x0010000000035a0d
- (_Bool)shouldDoPeriodicCheck;	// IMP=0x0010000000035920
- (_Bool)allowsBackgroundActivity;	// IMP=0x0010000000035678
- (_Bool)initialRestrictionsAreEnforced;	// IMP=0x001000000003563d
- (_Bool)consumeAllowanceShouldStopWithAdditionalBytes:(unsigned long long)arg1 downloadNecessity:(long long)arg2 isManifest:(_Bool)arg3;	// IMP=0x0010000000035573
- (_Bool)_consumeAllowanceShouldStopWithAdditionalBytes:(unsigned long long)arg1 downloadNecessity:(long long)arg2 isManifest:(_Bool)arg3;	// IMP=0x0010000000035481
- (unsigned long long)_remainingDownloadAllowanceWithNecessity:(long long)arg1 isManifest:(_Bool)arg2;	// IMP=0x001000000003537c
- (unsigned long long)remainingDownloadAllowanceWithNecessity:(long long)arg1 isManifest:(_Bool)arg2;	// IMP=0x0010000000035297
- (unsigned long long)remainingDownloadAllowanceWithNecessity:(long long)arg1;	// IMP=0x0010000000035283
- (id)applicationSecurityGroups;	// IMP=0x0010000000034f7a
- (id)extensionIdentity;	// IMP=0x0010000000034928
- (void)updateApplicationWithInfoDictionary:(id)arg1 applicationRecord:(id)arg2 overrides:(id)arg3;	// IMP=0x001000000003417d
- (void)applicationInstalled;	// IMP=0x001000000003403b
- (void)applicationInstallingWithUpdateInstall:(_Bool)arg1;	// IMP=0x0010000000033e77
@property(retain) NSData *persistentIdentifier; // @synthesize persistentIdentifier=_persistentIdentifier;
- (_Bool)setAwaitingNetworkConsent:(_Bool)arg1;	// IMP=0x0010000000033a72
- (_Bool)awaitingNetworkConsent;	// IMP=0x00100000000339ea
@property _Bool receivedInstallingNotification; // @synthesize receivedInstallingNotification=_receivedInstallingNotification;
@property _Bool receivedInstalledNotification; // @synthesize receivedInstalledNotification=_receivedInstalledNotification;
- (void)applicationPrepareWithDescriptor:(id)arg1;	// IMP=0x001000000003360b
@property _Bool userForceQuitApp; // @synthesize userForceQuitApp=_userForceQuitApp;
@property long long applicationExtensionState; // @synthesize applicationExtensionState=_applicationExtensionState;
@property long long applicationState; // @synthesize applicationState=_applicationState;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000003320a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000032cbd
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000032473
- (id)initWithIdentifier:(id)arg1 applicationTeamIdentifier:(id)arg2;	// IMP=0x0010000000032035
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0010000000032021

@end

