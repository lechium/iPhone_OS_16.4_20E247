//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;

@interface MIClientConnection : NSObject
{
    unsigned int _percentComplete;	// 8 = 0x8
    NSXPCConnection *_xpcConnection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001638d
@property(readonly, nonatomic) unsigned int percentComplete; // @synthesize percentComplete=_percentComplete;
@property(nonatomic) __weak NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)createSerializedPlaceholderForInstalledAppWithBundeID:(id)arg1 personaUniqueString:(id)arg2 atResultURL:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x001000000001611f
- (void)triggerRegistrationForContainerizedContentForOptions:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000015b52
- (void)clearTestFlags:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000015a44
- (void)setTestFlags:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000015936
- (void)getTestModeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000015877
- (void)endTestModeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000015795
- (void)setTestModeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000156b3
- (void)raiseExceptionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000015578
- (void)dieForTesting;	// IMP=0x0010000000015511
- (void)getPidForTestingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000154e0
- (void)invalidateReference:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000152d1
- (void)acquireReferenceforInstalledAppWithIdentity:(id)arg1 inDomain:(unsigned long long)arg2 matchingInstallSessionID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000014be1
- (void)finalizeReference:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000142c9
- (void)systemAppMigratorHasCompleted:(CDUnknownBlockType)arg1;	// IMP=0x0010000000014102
- (void)waitForSystemAppMigratorToComplete:(CDUnknownBlockType)arg1;	// IMP=0x0010000000013f60
- (void)setSystemAppMigrationComplete:(CDUnknownBlockType)arg1;	// IMP=0x0010000000013d9a
- (void)snapshotWKAppInCompanionAppID:(id)arg1 toURL:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000013851
- (void)getAppMetadataForApp:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000131bc
- (void)updatePlaceholderMetadataForApp:(id)arg1 installType:(unsigned long long)arg2 failureReason:(unsigned long long)arg3 underlyingError:(id)arg4 failureSource:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0010000000012945
- (void)checkCapabilities:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000012551
- (void)listSafeHarborsOfType:(unsigned long long)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000121ef
- (void)removeSafeHarborForIdentifier:(id)arg1 ofType:(unsigned long long)arg2 withOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000011de3
- (void)registerSafeHarborAtPath:(id)arg1 forIdentifier:(id)arg2 ofType:(unsigned long long)arg3 withOptions:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000118ee
- (void)fetchDiskUsageForIdentifiers:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000011566
- (void)_updateiTunesMetadataWithIdentifier:(id)arg1 options:(id)arg2 plistData:(id)arg3 methodName:(const char *)arg4 entitlement:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0010000000010ac1
- (void)updateiTunesMetadataForIXWithIdentifier:(id)arg1 options:(id)arg2 plistData:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000010a96
- (void)_updateSinfWithIdentifier:(id)arg1 withOptions:(id)arg2 sinfData:(id)arg3 methodName:(const char *)arg4 entitlement:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0010000000010066
- (void)updateSinfForIXWithIdentifier:(id)arg1 withOptions:(id)arg2 sinfData:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000001003b
- (_Bool)_validateArgsForMethodWithName:(const char *)arg1 bundleIdentifier:(id)arg2 data:(id)arg3 optionalOptions:(id)arg4 error:(id *)arg5;	// IMP=0x001000000000fe3a
- (void)fetchInfoForContainerizedAppWithBundleID:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000f9e3
- (void)fetchInfoForFrameworkAtURL:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000f22d
- (void)enumerateInstalledAppsWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000eb47
- (void)updateSystemAppStateForIdentifier:(id)arg1 appState:(int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000e7e2
- (void)lookupSystemAppStateWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000e4a5
- (void)clearUninstalledIdentifiers:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000e15e
- (void)lookupUninstalledWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000de61
- (void)uninstallIdentity:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000dd24
- (void)_uninstallIdentities:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000d616
- (void)uninstallIdentifiers:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000d3d8
- (void)revertForIXWithIdentifier:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000ceda
- (void)revertIdentity:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000cdf4
- (void)_installURL:(id)arg1 identity:(id)arg2 targetingDomain:(unsigned long long)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000000c652
- (void)registerPlaceholderForReference:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000b88d
- (void)installURL:(id)arg1 identity:(id)arg2 targetingDomain:(unsigned long long)arg3 options:(id)arg4 returningResultInfo:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000000b7a9
- (void)_doInstallationForURL:(id)arg1 identity:(id)arg2 domain:(unsigned long long)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000000b01d
- (void)_callBlockAfterDelegateMessagesSend:(const char *)arg1 dispatchBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000000aeca
- (void)sendDelegateMessagesComplete;	// IMP=0x001000000000ada3
- (void)sendProgressWithStatus:(id)arg1;	// IMP=0x001000000000ad8e
- (void)sendProgressWithStatus:(id)arg1 percentComplete:(unsigned int)arg2;	// IMP=0x001000000000ac8d
- (void)sendProgressWithDictionary:(id)arg1;	// IMP=0x001000000000ab74
@property(readonly, copy, nonatomic) NSString *clientName;

@end
