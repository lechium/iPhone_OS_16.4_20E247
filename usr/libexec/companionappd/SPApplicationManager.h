//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NPSDomainAccessor, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface SPApplicationManager : NSObject
{
    _Bool _domainVerified;	// 8 = 0x8
    long long _installationMode;	// 16 = 0x10
    NSString *_currentXcodeControlledPlugin;	// 24 = 0x18
    NPSDomainAccessor *_watchKitAppsDomain;	// 32 = 0x20
    NSMutableDictionary *_continuouslyDiscoveredPlugins;	// 40 = 0x28
    CDUnknownBlockType _pluginsFoundBlock;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_pkPluginManagementQueue;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_pkPluginCompletionQueue;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_pkPluginBeginUsingTimerQueue;	// 72 = 0x48
    NSMutableDictionary *_pkPluginBeginUsingTimers;	// 80 = 0x50
    id _wkContinuousDiscoveryToken;	// 88 = 0x58
    id _domainUpdateLock;	// 96 = 0x60
    NSMutableSet *_companionAppIDsInstalledViaXcode;	// 104 = 0x68
    id _companionAppIDsInstalledViaXcodeLock;	// 112 = 0x70
    NSMutableSet *_extensionsKilledDueToAppDeath;	// 120 = 0x78
    NSObject<OS_dispatch_queue> *_extensionsKilledDueToAppDeathAccessQueue;	// 128 = 0x80
}

+ (id)sharedInstance;	// IMP=0x0040000000019d3d
- (void).cxx_destruct;	// IMP=0x00200000000201c2
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *extensionsKilledDueToAppDeathAccessQueue; // @synthesize extensionsKilledDueToAppDeathAccessQueue=_extensionsKilledDueToAppDeathAccessQueue;
@property(retain, nonatomic) NSMutableSet *extensionsKilledDueToAppDeath; // @synthesize extensionsKilledDueToAppDeath=_extensionsKilledDueToAppDeath;
@property(retain, nonatomic) id companionAppIDsInstalledViaXcodeLock; // @synthesize companionAppIDsInstalledViaXcodeLock=_companionAppIDsInstalledViaXcodeLock;
@property(retain, nonatomic) NSMutableSet *companionAppIDsInstalledViaXcode; // @synthesize companionAppIDsInstalledViaXcode=_companionAppIDsInstalledViaXcode;
@property(retain, nonatomic) id domainUpdateLock; // @synthesize domainUpdateLock=_domainUpdateLock;
@property(retain, nonatomic) id wkContinuousDiscoveryToken; // @synthesize wkContinuousDiscoveryToken=_wkContinuousDiscoveryToken;
@property(retain, nonatomic) NSMutableDictionary *pkPluginBeginUsingTimers; // @synthesize pkPluginBeginUsingTimers=_pkPluginBeginUsingTimers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *pkPluginBeginUsingTimerQueue; // @synthesize pkPluginBeginUsingTimerQueue=_pkPluginBeginUsingTimerQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *pkPluginCompletionQueue; // @synthesize pkPluginCompletionQueue=_pkPluginCompletionQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *pkPluginManagementQueue; // @synthesize pkPluginManagementQueue=_pkPluginManagementQueue;
@property(copy, nonatomic) CDUnknownBlockType pluginsFoundBlock; // @synthesize pluginsFoundBlock=_pluginsFoundBlock;
@property(retain, nonatomic) NSMutableDictionary *continuouslyDiscoveredPlugins; // @synthesize continuouslyDiscoveredPlugins=_continuouslyDiscoveredPlugins;
@property _Bool domainVerified; // @synthesize domainVerified=_domainVerified;
@property(retain, nonatomic) NPSDomainAccessor *watchKitAppsDomain; // @synthesize watchKitAppsDomain=_watchKitAppsDomain;
@property(copy) NSString *currentXcodeControlledPlugin; // @synthesize currentXcodeControlledPlugin=_currentXcodeControlledPlugin;
@property long long installationMode; // @synthesize installationMode=_installationMode;
- (void)saveGizmoBuildVersion:(id)arg1;	// IMP=0x001000000001ff6e
- (id)savedGizmoBuildVersion;	// IMP=0x001000000001fece
- (void)notifyInactiveForPluginWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001fc3d
- (void)notifyActiveForPluginWithIdentifier:(id)arg1;	// IMP=0x001000000001fa04
- (_Bool)pluginHasFinishedBeginUsing:(id)arg1;	// IMP=0x001000000001f944
- (void)markPluginWithIdentifierNeedsBeginUsing:(id)arg1;	// IMP=0x001000000001f716
- (void);	// IMP=0x001000000001f40d
- (void)discoverAllPlugIns:(CDUnknownBlockType)arg1;	// IMP=0x001000000001f24f
- (void)updateCoreDuetSession:(id)arg1;	// IMP=0x001000000001f249
- (void)clearXcodeWillInstallSockPuppetAppWithCompanionAppIDState:(id)arg1;	// IMP=0x001000000001f199
- (_Bool)willXcodeInstallSockPuppetAppWithCompanionAppID:(id)arg1;	// IMP=0x001000000001f0d4
- (void)xcodeWillInstallSockPuppetAppWithCompanionAppID:(id)arg1;	// IMP=0x001000000001f024
- (void)fetchInstalledApplicationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000001eed4
- (_Bool)applicationContainsWK1Application:(id)arg1;	// IMP=0x001000000001ed30
- (_Bool)applicationContainsWK2Application:(id)arg1;	// IMP=0x001000000001ec57
- (void)stopUsingPluginIfNecessary:(id)arg1;	// IMP=0x001000000001e721
- (id)identifierForPluginProxy:(id)arg1;	// IMP=0x001000000001e694
- (id)pluginIdentifierForProtocolIdentifier:(id)arg1;	// IMP=0x001000000001e4c4
- (id)gizmoApplicationInfoWithIdentifier:(id)arg1;	// IMP=0x001000000001e3e1
- (id)gizmoPersistentDomain;	// IMP=0x001000000001e201
- (void)handleInstallationsReportedByLaunchServices:(id)arg1;	// IMP=0x001000000001dda2
- (_Bool)wasExtensionKilledDueToAppDeath:(id)arg1;	// IMP=0x001000000001dc9d
- (void)setExtension:(id)arg1 wasKilledDueToAppDeath:(_Bool)arg2;	// IMP=0x001000000001dadf
- (void)getOrBeginActivePlugInForApplication:(id)arg1 setupBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000001d1c0
- (void)beginUsingPlugin:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001bcaf
- (void)waitForPreviousPluginToFinishEnding:(id)arg1 toComplete:(CDUnknownBlockType)arg2;	// IMP=0x001000000001b254
- (void)callEndUsingCompletionsForPluginWithIdentifier:(id)arg1;	// IMP=0x001000000001abf5
- (void)registerForContinuousPluginDiscovery;	// IMP=0x0010000000019f13
- (id)init;	// IMP=0x0010000000019d92

@end
