//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ScreenTimeCore/STPersistenceController.h>

@class NSBackgroundActivityScheduler;

@interface STDaemonPersistenceController : STPersistenceController
{
    _Bool _hasStoreLoaded;	// 8 = 0x8
    NSBackgroundActivityScheduler *_cleanupActivity;	// 16 = 0x10
}

+ (long long)_computeHourAgeFromDefaultHourAge:(long long)arg1 overrideHourAge:(id)arg2;	// IMP=0x004000000002bd9f
+ (id)_buildPersistentHistoryCleanupBackgroundActivity;	// IMP=0x001000000002bcf0
- (void).cxx_destruct;	// IMP=0x002000000002be25
@property(readonly) NSBackgroundActivityScheduler *cleanupActivity; // @synthesize cleanupActivity=_cleanupActivity;
@property(nonatomic) _Bool hasStoreLoaded; // @synthesize hasStoreLoaded=_hasStoreLoaded;
- (void)_schedulePersistentHistoryCleanupActivity;	// IMP=0x001000000002b973
- (void)_createDataVaultDirectory;	// IMP=0x001000000002b777
- (void)_loadLocalPersistentStore;	// IMP=0x001000000002b3ba
- (void)resume;	// IMP=0x001000000002b37f
- (_Bool)removeCloudPersistentStoreWithError:(id *)arg1;	// IMP=0x001000000002b0e5
- (_Bool)unloadCloudPersistentStoreWithError:(id *)arg1;	// IMP=0x001000000002ad61
- (id)_destroyPersistentStoreWithDescription:(id)arg1;	// IMP=0x001000000002aae2
- (void)_destroyAndReloadAfterFailureWithStoreDescription:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000002a786
- (_Bool)_isFatalMigrationError:(id)arg1;	// IMP=0x001000000002a5f9
- (_Bool)_isFatalSQLiteError:(id)arg1;	// IMP=0x001000000002a564
- (_Bool)_shouldDestroyStoreGivenError:(id)arg1;	// IMP=0x001000000002a504
- (void)_didAddPersistentStoreDescription:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000002a1d8
- (void)loadPersistentStoreDescription:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000029f5e
- (id)newBackgroundContext;	// IMP=0x0010000000029efa
- (id)viewContext;	// IMP=0x0010000000029eaa
- (id);	// IMP=0x0010000000029e42

@end

