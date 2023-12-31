//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCListener, SWCDatabase, SWCDownloadScheduler, SWCDownloader;

@interface SWCManager : NSObject
{
    NSXPCListener *_xpcListener;	// 8 = 0x8
    struct optional<bool> _developerModeEnabled;	// 16 = 0x10
    SWCDatabase *_database;	// 24 = 0x18
    SWCDownloader *_downloader;	// 32 = 0x20
    SWCDownloadScheduler *_downloadScheduler;	// 40 = 0x28
}

+ (id)beginListening;	// IMP=0x00200000000173aa
+ (id)new;	// IMP=0x001000000001737c
- (id).cxx_construct;	// IMP=0x001000000001de7e
- (void).cxx_destruct;	// IMP=0x001000000001de40
@property(readonly) SWCDownloadScheduler *downloadScheduler; // @synthesize downloadScheduler=_downloadScheduler;
@property(readonly) SWCDownloader *downloader; // @synthesize downloader=_downloader;
@property(readonly) SWCDatabase *database; // @synthesize database=_database;
- (void)setAdditionalServiceDetailsForApplicationIdentifiers:(id)arg1 usingContentsOfDictionary:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001d752
- (void)setDeveloperModeEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001d350
- (void)getDeveloperModeEnabledWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000001d2b5
- (void)getTrackingDomains:(id)arg1 sources:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001cfda
- (void)removeSettingsForKeys:(id)arg1 serviceSpecifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001cc65
- (void)removeSettingsForKeys:(id)arg1 serviceType:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001c929
- (void)commitServiceSettings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001c38f
- (void)getServiceSettingsWithServiceSpecifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001c0d2
- (void)resetWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000001be92
- (void)showWithVerbosity:(unsigned char)arg1 isTTY:(_Bool)arg2 fileDescriptor:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000001a95c
- (void)addAllAppsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000001a6e9
- (void)setUserApprovalState:(unsigned char)arg1 forServiceWithServiceSpecifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001a26a
- (void)setDetails:(id)arg1 forServiceWithServiceSpecifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000019c19
- (void)removeServiceWithServiceSpecifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000019611
- (void)addServiceWithServiceSpecifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000018fb6
- (void)getDetailsWithServiceSpecifier:(id)arg1 URL:(id)arg2 limit:(unsigned long long)arg3 callerAuditToken:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000018b93
- (void)waitForSiteApprovalWithServiceSpecifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000018a14
- (void)downloader:(id)arg1 failedToDownloadAASAFileFromDomain:(id)arg2 error:(id)arg3;	// IMP=0x00100000000186ce
- (void)downloader:(id)arg1 didDownloadAASAFileContainingJSONObject:(id)arg2 fromDomain:(id)arg3 downloadRoute:(unsigned char)arg4;	// IMP=0x0010000000018515
- (void)downloader:(id)arg1 willDownloadAASAFileFromDomain:(id)arg2;	// IMP=0x0010000000018406
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000017ea0
- (void)updateEntriesForAllBundlesIgnoringCurrentState:(_Bool)arg1;	// IMP=0x001000000001762e
- (void)receiveSIGTERMSignal;	// IMP=0x00100000000175f3
- (id)init;	// IMP=0x0010000000017385
- (id)initWithDatabase:(id)arg1;	// IMP=0x0010000000017280
- (_Bool)_copyStagingDirectoryAtURL:(id)arg1 toAdditionalServiceDetailsDirectoriesForApplicationIdentifiers:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000021204
- (_Bool)_addJSONDataInDictionary:(id)arg1 toStagingDirectoryAtURL:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000020db0
- (id)_createStagingDirectoryForAdditionalServiceDetailsReturningError:(id *)arg1;	// IMP=0x0010000000020b22
- (id)_filterApplicationIdentifiers:(id)arg1 toMatchEntitlementOfXPCConnection:(id)arg2;	// IMP=0x0010000000020702
- (_Bool)_isDeveloperModeEnabled;	// IMP=0x00100000000206fa
- (_Bool)_setDeveloperModeEnabled:(_Bool)arg1 error:(id *)arg2;	// IMP=0x0010000000020390
- (void)_authorizeDeveloperModeChangeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000002037b
- (id)_developerModeSemaphoreURL;	// IMP=0x00100000000202ce
- (_Bool)_connectionMayConnect:(id)arg1;	// IMP=0x00100000000202ba
- (_Bool)_connectionIsEntitled:(id)arg1 forMutation:(_Bool)arg2;	// IMP=0x0010000000020233
- (void)_waitForSiteApprovalWithServiceSpecifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001f846
- (id)_serviceDetailsWithEntry:(id)arg1;	// IMP=0x001000000001f78c
- (id)_entriesWithServiceSpecifier:(id)arg1 URL:(id)arg2 limit:(unsigned long long)arg3 auditToken:(CDStruct_6ad76789)arg4;	// IMP=0x001000000001ef28
- (void)_updateAllEntries:(id)arg1;	// IMP=0x001000000001e32a
- (id)_eligibleSystemPlaceholderRecords;	// IMP=0x001000000001e122
- (void)_addEntriesForAllBundlesWithEnumerator:(id)arg1 toWorkingSet:(id)arg2 enterpriseContext:(id)arg3 developerModeEnabled:(_Bool)arg4;	// IMP=0x001000000001de8d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

