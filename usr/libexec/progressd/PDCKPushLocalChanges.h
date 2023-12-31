//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable;

@interface PDCKPushLocalChanges
{
    NSMapTable *_processedSynItemsByRecordID;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000e39b3
- (void)populateRecordsToSave:(id)arg1 idsToDelete:(id)arg2 withSyncItem:(id)arg3;	// IMP=0x00100000000e34f0
- (void)resolvePartialErrors:(id)arg1;	// IMP=0x00100000000e2a87
- (void)scheduleRecordsToSave:(id)arg1 recordIDsToDelete:(id)arg2 savePolicy:(long long)arg3;	// IMP=0x00100000000e23f1
- (void)deleteProcessedSyncAssociatedWithRecordID:(id)arg1;	// IMP=0x00100000000e2160
- (void)deleteSyncStateForRecordIDs:(id)arg1;	// IMP=0x00100000000e1f1c
- (void)recordUpdated:(id)arg1;	// IMP=0x00100000000e1e03
- (id)recordForSyncItem:(id)arg1;	// IMP=0x00100000000e1c2b
- (void)execute;	// IMP=0x00100000000e1597

@end

