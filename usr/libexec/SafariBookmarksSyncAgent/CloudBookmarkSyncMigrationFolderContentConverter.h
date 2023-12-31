//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CloudBookmarkSyncMigrationPositionGenerator, NSEnumerator;

@interface CloudBookmarkSyncMigrationFolderContentConverter
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    CloudBookmarkSyncMigrationPositionGenerator *_positionGenerator;	// 16 = 0x10
    NSEnumerator *_recordNameEnumerator;	// 24 = 0x18
    _Bool _isMigrating;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000007a912
- (id)positionForCloudBookmarkWithRecordName:(id)arg1;	// IMP=0x001000000007a8f5
- (id)generateIdentityHashWithComponents:(id)arg1;	// IMP=0x001000000007a854
- (id)_nextCloudBookmarkToSave;	// IMP=0x001000000007a713
- (void)_didFinishSavingRecordsWithNames:(id)arg1;	// IMP=0x001000000007a62a
- (void)_didFailSavingWithError:(id)arg1;	// IMP=0x001000000007a55c
- (void)beginFolderMigrationInOperationGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000007a330

@end

