//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CloudBookmarkMovedBookmarkManager, CloudBookmarkSyncMigrationFolderContentConverter, CloudBookmarkSyncMigrationSaveReparentedBookmarksHandler, CloudBookmarkSyncMigrationSyncDownHandler, MISSING_TYPE, NSMutableSet, NSSet, NSString;

@interface CloudBookmarkSyncMigrationConverter
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    CloudBookmarkMovedBookmarkManager *_movedBookmarkManager;	// 16 = 0x10
    MISSING_TYPE *_pendingReferenceManager;	// 24 = 0x18
    CloudBookmarkSyncMigrationFolderContentConverter *_converter;	// 32 = 0x20
    CloudBookmarkSyncMigrationSyncDownHandler *_syncDownHandler;	// 40 = 0x28
    CloudBookmarkSyncMigrationSaveReparentedBookmarksHandler *_saveReparentedBookmarksHandler;	// 48 = 0x30
    NSSet *_namesOfRecordsSavedToTheServer;	// 56 = 0x38
    NSMutableSet *_namesOfRecordsMissingFromPreviousSyncDown;	// 64 = 0x40
    NSMutableSet *_namesOfRecordsExpectedOnSyncDown;	// 72 = 0x48
    id _changeToken;	// 80 = 0x50
    _Bool _hasSavedBookmarksLocally;	// 88 = 0x58
    _Bool _isMigrating;	// 89 = 0x59
}

- (void).cxx_destruct;	// IMP=0x002000000006cea2
- (_Bool)cloudBookmarkSyncMigrationSyncDownHandler:(id)arg1 shouldApplyReference:(id)arg2 withGeneration:(id)arg3 toAttribute:(id)arg4 inRecordWithName:(id)arg5;	// IMP=0x001000000006ce75
- (void)cloudBookmarkSyncMigrationSyncDownHandler:(id)arg1 didDeleteBookmarkWithRecordName:(id)arg2;	// IMP=0x001000000006ce55
- (void)cloudBookmarkSyncMigrationSyncDownHandler:(id)arg1 didMoveBookmark:(id)arg2;	// IMP=0x001000000006cdfb
- (_Bool)cloudBookmarkSyncMigrationSaveHandler:(id)arg1 shouldApplyReference:(id)arg2 withGeneration:(id)arg3 toAttribute:(id)arg4 inRecordWithName:(id)arg5;	// IMP=0x001000000006cdce
- (void)cloudBookmarkSyncMigrationSaveHandler:(id)arg1 didDeleteBookmarkWithRecordName:(id)arg2;	// IMP=0x001000000006cdae
- (void)cloudBookmarkSyncMigrationSaveHandler:(id)arg1 didMoveBookmark:(id)arg2;	// IMP=0x001000000006cd54
- (_Bool)cloudBookmarkSyncMigrationSaveHandler:(id)arg1 shouldSaveBookmark:(id)arg2;	// IMP=0x001000000006cce6
- (void)_reparentAndSaveUnrootedBookmarksInOperationGroup:(id)arg1;	// IMP=0x001000000006c9b1
- (void)_didFinishSyncDownInOperationGroup:(id)arg1;	// IMP=0x001000000006c94d
- (void)_performSyncDownInOperationGroup:(id)arg1 withRetryManager:(id)arg2;	// IMP=0x001000000006c096
- (void)_performSyncDownInOperationGroup:(id)arg1;	// IMP=0x001000000006c01b
- (void)_generateAndSaveRecordsInOperationGroup:(id)arg1;	// IMP=0x001000000006bda5
- (void)_performMergingSyncDownInOperationGroup:(id)arg1;	// IMP=0x001000000006b905
- (void)_finishSyncing;	// IMP=0x001000000006b7ed
- (void)_migrationDidCompleteWithError:(id)arg1;	// IMP=0x001000000006b6c0
- (void)_prepareRecordsForMigration;	// IMP=0x001000000006b5d6
- (void)_didSaveLocalRecords;	// IMP=0x001000000006b4a4
- (void)beginMigrationInOperationGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000006af5d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

