//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecord, CloudBookmarkItemConfiguration, NSMutableDictionary, NSString, WBBookmarkSyncData, WBSCRDTPosition;
@protocol WBSBookmarkDBAccess;

@interface CloudBookmark : NSObject
{
    WBBookmarkSyncData *_syncData;	// 8 = 0x8
    NSMutableDictionary *_remotelyModifiedAttributes;	// 16 = 0x10
    NSMutableDictionary *_remotelyModifiedAssetAttributes;	// 24 = 0x18
    CloudBookmarkItemConfiguration *_configuration;	// 32 = 0x20
    CKRecord *_record;	// 40 = 0x28
    const void *_item;	// 48 = 0x30
    id <WBSBookmarkDBAccess> _databaseAccessor;	// 56 = 0x38
    NSString *_recordName;	// 64 = 0x40
    NSString *_parentRecordName;	// 72 = 0x48
}

+ (id)_decodedSyncDataInData:(id)arg1;	// IMP=0x004000000001ff63
+ (void)applyPendingReferences:(id)arg1 toItemWithRecordName:(id)arg2 inDatabase:(void *)arg3 databaseAccessor:(id)arg4 updater:(id)arg5;	// IMP=0x001000000001d045
+ (id)cloudBookmarkWithAddedRecord:(id)arg1 configuration:(id)arg2 inDatabase:(void *)arg3 databaseAccessor:(id)arg4 updater:(id)arg5;	// IMP=0x001000000001c779
+ (id)cloudBookmarkWithChange:(void *)arg1 databaseAccessor:(id)arg2 updater:(id)arg3;	// IMP=0x001000000001c6fe
+ (void)updateSyncDataGenerationsWithChange:(void *)arg1 databaseAccessor:(id)arg2 updater:(id)arg3;	// IMP=0x001000000001bfd1
+ (id)cloudBookmarkToMigrateItemWithRecordName:(id)arg1 inDatabase:(void *)arg2 databaseAccessor:(id)arg3 updater:(id)arg4;	// IMP=0x001000000001bcde
+ (id)cloudBookmarkForReparentedItemWithRecordName:(id)arg1 inDatabase:(void *)arg2 databaseAccessor:(id)arg3 updater:(id)arg4;	// IMP=0x001000000001b9eb
+ (id)cloudBookmarkWithRecordName:(id)arg1 inDatabase:(void *)arg2 databaseAccessor:(id)arg3 updater:(id)arg4;	// IMP=0x001000000001b60c
+ (id)positionForItemWithRecordName:(id)arg1 inDatabase:(void *)arg2 databaseAccessor:(id)arg3;	// IMP=0x001000000001b4d2
- (void).cxx_destruct;	// IMP=0x0020000000023a68
@property(readonly, copy, nonatomic) NSString *parentRecordName; // @synthesize parentRecordName=_parentRecordName;
@property(readonly, copy, nonatomic) NSString *recordName; // @synthesize recordName=_recordName;
@property(readonly, nonatomic) id <WBSBookmarkDBAccess> databaseAccessor; // @synthesize databaseAccessor=_databaseAccessor;
@property(readonly, nonatomic) const void *item; // @synthesize item=_item;
@property(readonly, nonatomic) CKRecord *record; // @synthesize record=_record;
@property(readonly, nonatomic) CloudBookmarkItemConfiguration *configuration; // @synthesize configuration=_configuration;
- (unsigned long long)_resultByMergingStateWithRecord:(id)arg1 shouldContinueMerge:(_Bool *)arg2;	// IMP=0x0010000000023291
- (unsigned long long)_resultByMergingMinimumAPIVersionWithRecord:(id)arg1;	// IMP=0x0010000000022f60
- (unsigned long long)_resultByMergingParentAndPositionWithRecord:(id)arg1 usingUpdater:(id)arg2;	// IMP=0x0010000000022b6e
- (unsigned long long)resultFromMergingRecord:(id)arg1 usingUpdater:(id)arg2 isLocalUpdateOnly:(_Bool)arg3;	// IMP=0x0010000000021ce5
- (unsigned long long)resultFromMergingRecord:(id)arg1 usingUpdater:(id)arg2;	// IMP=0x0010000000021cd0
- (void)_applyPendingReferences:(id)arg1;	// IMP=0x0010000000021a16
- (_Bool)_canApplyValue:(id)arg1 withGeneration:(id)arg2 toAttribute:(id)arg3 updater:(id)arg4;	// IMP=0x0010000000021957
- (_Bool)_updateRecordWithMissingAttributesWithUpdater:(id)arg1;	// IMP=0x0010000000021340
- (void)_updateRecordWithModifiedAttributes:(id)arg1 updater:(id)arg2;	// IMP=0x0010000000020f72
- (void)_updateRecordParentAndPositionWithUpdater:(id)arg1;	// IMP=0x0010000000020d27
- (void)_updateGenerationsForAttributeKeys:(id)arg1 withDeviceIdentifier:(id)arg2;	// IMP=0x0010000000020ae0
- (void)_updateGenerationsForChange:(void *)arg1 withDeviceIdentifier:(id)arg2;	// IMP=0x0010000000020890
- (void)_loadAttributesForKnownKeysIntoEmptyItemUsingRemoteRecord:(id)arg1 updater:(id)arg2;	// IMP=0x0010000000020314
- (void)saveAssetsIfNeededWithUpdater:(id)arg1;	// IMP=0x001000000002009d
- (void)updateLocalItem;	// IMP=0x001000000001ff9d
- (id)_generateIdentityHashUsingUpdater:(id)arg1;	// IMP=0x001000000001fc94
- (id)_modifiedOrLocalIdentityHashWithUpdater:(id)arg1;	// IMP=0x001000000001fb98
- (id)_modifiedOrLocalParentReferenceWithUpdater:(id)arg1;	// IMP=0x001000000001fa94
- (id)_transformedModifiedOrLocalValueForKey:(id)arg1 isEncrypted:(_Bool *)arg2;	// IMP=0x001000000001f8d0
- (id)modifiedOrLocalValueForKey:(id)arg1;	// IMP=0x001000000001f705
- (_Bool)isDuplicateOfBookmark:(id)arg1;	// IMP=0x001000000001f45e
@property(readonly, nonatomic) unsigned long long duplicateHash;
@property(nonatomic) long long state;
@property(copy, nonatomic) WBSCRDTPosition *position;
- (id)_createParentFolderReferenceWithRecordName:(id)arg1 updater:(id)arg2;	// IMP=0x001000000001f1af
- (id)_createRecordWithRecordName:(id)arg1 updater:(id)arg2;	// IMP=0x001000000001f0e3
- (id)_createRecordIDWithName:(id)arg1 updater:(id)arg2;	// IMP=0x001000000001f043
- (_Bool)_updateRecordWithChange:(void *)arg1 updater:(id)arg2;	// IMP=0x001000000001edb3
- (void)dealloc;	// IMP=0x001000000001ed74
- (id)_initWithItemToMigrate:(void *)arg1 configuration:(id)arg2 databaseAccessor:(id)arg3 updater:(id)arg4;	// IMP=0x001000000001e7dc
- (id)_initWithAddedRecord:(id)arg1 configuration:(id)arg2 forItem:(void *)arg3 databaseAccessor:(id)arg4 updater:(id)arg5;	// IMP=0x001000000001e16c
- (id)_initWithItem:(const void *)arg1 configuration:(id)arg2 syncData:(id)arg3 databaseAccessor:(id)arg4;	// IMP=0x001000000001df37
- (id)_initWithConfiguration:(id)arg1 deleteChange:(void *)arg2 databaseAccessor:(id)arg3 updater:(id)arg4;	// IMP=0x001000000001dc11
- (id)_initWithChange:(void *)arg1 databaseAccessor:(id)arg2 updater:(id)arg3;	// IMP=0x001000000001d60b
- (id)_initWithReparentedItem:(void *)arg1 configuration:(id)arg2 databaseAccessor:(id)arg3 updater:(id)arg4;	// IMP=0x001000000001d415
- (id)_initWithItem:(void *)arg1 configuration:(id)arg2 databaseAccessor:(id)arg3;	// IMP=0x001000000001d345
- (id)init;	// IMP=0x001000000001d337

@end
