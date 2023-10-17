//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRTTCompatibleDocument, NSHashTable, NSMutableAttributedString, NSString, NSUUID, TTVectorMultiTimestamp;
@protocol TTMergeableStringDelegate;

__attribute__((visibility("hidden")))
@interface TTMergeableString : NSObject
{
    struct vector<TopoSubstring *, std::allocator<TopoSubstring *>> _startNodes;	// 8 = 0x8
    struct vector<TopoSubstring *, std::allocator<TopoSubstring *>> _endNodes;	// 32 = 0x20
    struct vector<TopoSubstring *, std::allocator<TopoSubstring *>> _orderedSubstrings;	// 56 = 0x38
    unsigned int _unserializedClock;	// 80 = 0x50
    unsigned long long _editCount;	// 88 = 0x58
    _Bool _cacheInvalid;	// 96 = 0x60
    CDUnknownBlockType _updateRangeBlock;	// 104 = 0x68
    _Bool _hasLocalChanges;	// 112 = 0x70
    NSUUID *_replicaUUID;	// 120 = 0x78
    TTVectorMultiTimestamp *_timestamp;	// 128 = 0x80
    NSObject<TTMergeableStringDelegate> *_delegate;	// 136 = 0x88
    NSHashTable *_objectsNeedingUpdatedRanges;	// 144 = 0x90
    NSMutableAttributedString *_attributedString;	// 152 = 0x98
    unsigned long long _replicaTextClock;	// 160 = 0xa0
    unsigned long long _replicaStyleClock;	// 168 = 0xa8
}

+ (id)unserialisedReplicaID;	// IMP=0x00100000000e6ed4
- (id).cxx_construct;	// IMP=0x00000000000eeed1
- (void).cxx_destruct;	// IMP=0x00000000000eee39
@property(readonly, nonatomic) unsigned long long replicaStyleClock; // @synthesize replicaStyleClock=_replicaStyleClock;
@property(readonly, nonatomic) unsigned long long replicaTextClock; // @synthesize replicaTextClock=_replicaTextClock;
@property(retain, nonatomic) NSMutableAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(readonly, nonatomic) NSHashTable *objectsNeedingUpdatedRanges; // @synthesize objectsNeedingUpdatedRanges=_objectsNeedingUpdatedRanges;
@property(nonatomic) __weak NSObject<TTMergeableStringDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool hasLocalChanges; // @synthesize hasLocalChanges=_hasLocalChanges;
@property(retain, nonatomic) TTVectorMultiTimestamp *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSUUID *replicaUUID; // @synthesize replicaUUID=_replicaUUID;
- (id)dotDescription:(unsigned long long)arg1;	// IMP=0x00000000000ee82e
@property(readonly) unsigned long long hash;
- (_Bool)graphIsEqual:(id)arg1;	// IMP=0x00000000000ee3a8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ee2f9
@property(readonly, copy) NSString *description;
- (void)traverseUnordered:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ee1e1
- (void)sortSplitNodes;	// IMP=0x00000000000ee1b6
- (unsigned long long)mergeWithString:(id)arg1 mergeTimestamps:(_Bool)arg2;	// IMP=0x00000000000ecfda
- (unsigned long long)mergeWithString:(id)arg1;	// IMP=0x00000000000ecfc2
- (void)dumpMergeData:(id)arg1;	// IMP=0x00000000000ec968
- (void)checkTimestampLogStyleErrors:(_Bool)arg1;	// IMP=0x00000000000ec685
- (_Bool)check:(id *)arg1;	// IMP=0x00000000000ec165
- (void)updateClock;	// IMP=0x00000000000ebe53
- (_Bool)canMergeString:(id)arg1;	// IMP=0x00000000000ebc17
- (void)generateIdsForLocalChangesSafeForSharedTimestamp:(_Bool)arg1;	// IMP=0x00000000000eb8e6
- (void)generateIdsForLocalChanges;	// IMP=0x00000000000eb876
- (void)cleanupObjectsNeedingUpdatedRanges;	// IMP=0x00000000000eb639
- (void)updateTopoIDRange:(struct TopoIDRange)arg1 toNewRangeID:(struct TopoIDRange)arg2;	// IMP=0x00000000000eb2e8
- (void)coalesce;	// IMP=0x00000000000eaa24
- (void)updateSubstringIndexes;	// IMP=0x00000000000ea9eb
- (void)updateAttributedStringAfterMerge;	// IMP=0x00000000000ea90e
- (void)invalidateCache;	// IMP=0x00000000000ea8fc
- (void)updateCache;	// IMP=0x00000000000ea68b
- (void *)orderedSubstrings;	// IMP=0x00000000000ea65e
- (void *)splitTopoSubstring:(void *)arg1 atIndex:(unsigned int)arg2;	// IMP=0x00000000000ea533
- (_Bool)selection:(id)arg1 wasModifiedAfter:(id)arg2;	// IMP=0x00000000000ea1c0
- (_Bool)textEitherSideOfSelectionAnchor:(struct TopoID)arg1 wasModifiedAfter:(id)arg2;	// IMP=0x00000000000e9fac
- (void)enumerateRangesModifiedAfter:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e9eba
- (long long)substring:(void *)arg1 modifiedAfter:(id)arg2;	// IMP=0x00000000000e9e20
- (void)enumerateSubstrings:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e9d43
- (unsigned long long)getCharacterIndexForCharID:(struct TopoID)arg1;	// IMP=0x00000000000e9baa
- (void)getCharacterRanges:(void *)arg1 forSubstrings:(void *)arg2;	// IMP=0x00000000000e98e9
- (void)getSubstrings:(void *)arg1 forTopoIDRange:(struct TopoIDRange)arg2;	// IMP=0x00000000000e92d6
- (void *)getSubstringBeforeTopoID:(struct TopoID)arg1;	// IMP=0x00000000000e911e
- (void)getSubstrings:(void *)arg1 inOrderedSubstrings:(void *)arg2 forCharacterRange:(struct _NSRange)arg3;	// IMP=0x00000000000e8d31
- (void)getSubstrings:(void *)arg1 forCharacterRange:(struct _NSRange)arg2;	// IMP=0x00000000000e8cdd
- (void)moveRange:(struct _NSRange)arg1 toIndex:(unsigned long long)arg2;	// IMP=0x00000000000e8c74
- (struct TopoIDRange)insertAttributedString:(id)arg1 after:(void *)arg2 before:(void *)arg3;	// IMP=0x00000000000e84bd
- (void)deleteSubstrings:(void *)arg1 withCharacterRanges:(void *)arg2;	// IMP=0x00000000000e82ac
- (void)updateTimestampsInRange:(struct _NSRange)arg1;	// IMP=0x00000000000e81bc
- (void *)endNodes;	// IMP=0x00000000000e81b2
- (void *)startNodes;	// IMP=0x00000000000e81a8
- (_Bool)isFragment;	// IMP=0x00000000000e80a3
- (void)_testSetTextTimestamp:(unsigned long long)arg1;	// IMP=0x00000000000e8096
- (void)resetLocalReplicaClocksToTimestampValues;	// IMP=0x00000000000e8039
- (_Bool)shouldInvalidateCachedSubstringsWithTimestamp:(id)arg1;	// IMP=0x00000000000e7f38
- (id)characterRangesForSelection:(id)arg1 selectedSubstringsBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e79a3
- (id)characterRangesForSelection:(id)arg1;	// IMP=0x00000000000e797f
- (id)selectionForCharacterRanges:(id)arg1 selectionAffinity:(unsigned long long)arg2;	// IMP=0x00000000000e752a
- (id)selectionForCharacterRanges:(id)arg1;	// IMP=0x00000000000e7506
- (id)replicaUUIDForCharacterAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000e7499
- (void)endEditing;	// IMP=0x00000000000e7473
- (void)beginEditing;	// IMP=0x00000000000e7469
- (void)insertAttributedString:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000e72ba
- (void)deleteCharactersInRange:(struct _NSRange)arg1;	// IMP=0x00000000000e71d3
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withAttributedString:(id)arg2;	// IMP=0x00000000000e70d9
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;	// IMP=0x00000000000e7036
- (void)insertString:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000e6fa2
- (unsigned long long)length;	// IMP=0x00000000000e6f4a
- (id)string;	// IMP=0x00000000000e6f39
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e6e0b
- (void)dealloc;	// IMP=0x00000000000e6bf1
- (id)initWithReplicaID:(id)arg1 asFragment:(_Bool)arg2;	// IMP=0x00000000000e69a9
- (id)initWithReplicaID:(id)arg1;	// IMP=0x00000000000e6994
- (id)init;	// IMP=0x00000000000e697d
- (void)walkGraph:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ddbf2
- (id)tombstone;	// IMP=0x00000000000ddbe9
- (void)realizeLocalChangesIn:(id)arg1;	// IMP=0x00000000000ddb1b
- (id)deltaSince:(id)arg1 in:(id)arg2;	// IMP=0x00000000000ddb12
- (void)mergeWith:(id)arg1;	// IMP=0x00000000000dd9b1
@property(retain, nonatomic) CRTTCompatibleDocument *document;
- (id)serializeDeltaSinceTimestamp:(id)arg1;	// IMP=0x000000000011104a
- (void)saveDeltaSinceTimestamp:(id)arg1 toArchive:(void *)arg2;	// IMP=0x000000000011102f
- (id)i_saveDeltasSinceTimestamp:(id)arg1 toArchive:(void *)arg2;	// IMP=0x00000000001109f8
- (id)serialize;	// IMP=0x000000000011090a
- (void)saveSubstrings:(void *)arg1 archiveSet:(void *)arg2 linkSet:(void *)arg3 archivedString:(id *)arg4 toArchive:(void *)arg5;	// IMP=0x00000000001100c8
- (void)saveToArchive:(void *)arg1;	// IMP=0x0000000000110054
- (id)initWithArchive:(const void *)arg1 andReplicaID:(id)arg2 withOrderedSubstrings:(void *)arg3 timestamp:(id)arg4;	// IMP=0x000000000010ef08
- (id)initWithArchive:(const void *)arg1 andReplicaID:(id)arg2 withOrderedSubstrings:(void *)arg3;	// IMP=0x000000000010eef2
- (id)initWithArchive:(const void *)arg1 andReplicaID:(id)arg2 andSharedTimestamp:(id)arg3;	// IMP=0x000000000010eed9
- (id)initWithArchive:(const void *)arg1 andReplicaID:(id)arg2;	// IMP=0x000000000010eec3
- (id)initWithData:(id)arg1 andReplicaID:(id)arg2;	// IMP=0x000000000010ed5a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
