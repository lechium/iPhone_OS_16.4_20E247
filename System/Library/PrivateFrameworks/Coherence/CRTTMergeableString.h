//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID, ObjCReplica, ObjCVersion;

__attribute__((visibility("hidden")))
@interface CRTTMergeableString : NSObject
{
    struct vector<TopoSubstring *, std::allocator<TopoSubstring *>> _orderedSubstrings;	// 8 = 0x8
    unsigned long long _editCount;	// 32 = 0x20
    _Bool _cacheInvalid;	// 40 = 0x28
    CRTTMergeableString *_renamedString;	// 48 = 0x30
    NSObject *_context;	// 56 = 0x38
    ObjCVersion *_version;	// 64 = 0x40
    ObjCVersion *_addedByVersion;	// 72 = 0x48
    id _attributedString;	// 80 = 0x50
    NSUUID *_uuid;	// 88 = 0x58
    long long _localCounter;	// 96 = 0x60
    ObjCReplica *_addedByReplica;	// 104 = 0x68
    long long _addedByLocalCounter;	// 112 = 0x70
    void *_startNode;	// 120 = 0x78
    void *_endNode;	// 128 = 0x80
    long long _renameGeneration;	// 136 = 0x88
    struct TopoReplica _replica;	// 144 = 0x90
}

- (id).cxx_construct;	// IMP=0x0000000000010c14
- (void).cxx_destruct;	// IMP=0x0000000000010b9f
@property(nonatomic) long long renameGeneration; // @synthesize renameGeneration=_renameGeneration;
@property(nonatomic) void *endNode; // @synthesize endNode=_endNode;
@property(nonatomic) void *startNode; // @synthesize startNode=_startNode;
@property(nonatomic) long long addedByLocalCounter; // @synthesize addedByLocalCounter=_addedByLocalCounter;
@property(readonly, nonatomic) ObjCReplica *addedByReplica; // @synthesize addedByReplica=_addedByReplica;
@property(nonatomic) long long localCounter; // @synthesize localCounter=_localCounter;
@property(readonly, nonatomic) struct TopoReplica replica; // @synthesize replica=_replica;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) id attributedString; // @synthesize attributedString=_attributedString;
@property(retain, nonatomic) ObjCVersion *addedByVersion; // @synthesize addedByVersion=_addedByVersion;
@property(retain, nonatomic) ObjCVersion *version; // @synthesize version=_version;
@property(retain, nonatomic) NSObject *context; // @synthesize context=_context;
- (void)finalizeTimestamps:(id)arg1;	// IMP=0x00000000000109f2
- (_Bool)needToFinalizeTimestamps;	// IMP=0x0000000000010952
- (void)applyRenamesAndRetainOrRelease:(id)arg1 context:(id)arg2 alsoApplyAllRenames:(_Bool)arg3;	// IMP=0x000000000001078f
- (id)renamedIfAvailable;	// IMP=0x0000000000010745
- (id)fullyRenamed:(id)arg1;	// IMP=0x00000000000104fd
- (id)temporaryConcurrentNames;	// IMP=0x00000000000103c9
- (id)temporaryNamesExcludingSelf:(_Bool)arg1;	// IMP=0x000000000001007b
- (id)renamed:(id)arg1;	// IMP=0x000000000000febe
- (void)applyTimestampRenames:(id)arg1;	// IMP=0x000000000000f9d5
- (void)_apply:(id)arg1;	// IMP=0x000000000000f648
- (void)apply:(id)arg1 skipRetain:(_Bool)arg2;	// IMP=0x000000000000f416
- (void)useRenameIfAvailable;	// IMP=0x000000000000f32b
- (id)dotDescription:(unsigned long long)arg1;	// IMP=0x000000000000ec04
- (_Bool)graphIsEqual:(id)arg1;	// IMP=0x000000000000e5c0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000e514
- (id)description;	// IMP=0x000000000000e45a
- (void)traverseUnordered:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e448
- (void)sortSplitNodes;	// IMP=0x000000000000e408
- (_Bool)deltaMerge:(id)arg1;	// IMP=0x000000000000dcf2
- (_Bool)canDeltaMerge:(id)arg1;	// IMP=0x000000000000dad3
- (unsigned long long)mergeWithString:(id)arg1 optimized:(_Bool)arg2;	// IMP=0x000000000000c761
- (_Bool)hasDeltaTo:(id)arg1 compareElements:(CDUnknownBlockType)arg2;	// IMP=0x000000000000be65
- (_Bool)canMergeString:(id)arg1;	// IMP=0x000000000000bcb0
- (void)coalesce;	// IMP=0x000000000000b927
- (void)updateSubstringIndexes;	// IMP=0x000000000000b8ea
- (void)updateAttributedStringAfterMerge;	// IMP=0x000000000000b806
- (void)invalidateCache;	// IMP=0x000000000000b7f4
- (void)_updateCache;	// IMP=0x000000000000b5ce
- (long long)substringCount;	// IMP=0x000000000000b5ad
- (void *)orderedSubstrings;	// IMP=0x000000000000b546
- (void *)splitTopoSubstring:(void *)arg1 atIndex:(unsigned int)arg2;	// IMP=0x000000000000b4c5
- (void)enumerateSubstrings:(CDUnknownBlockType)arg1;	// IMP=0x000000000000b42d
- (unsigned long long)characterIndexForIndex:(id)arg1;	// IMP=0x000000000000b2e4
- (unsigned long long)_characterIndexForIndex:(id)arg1;	// IMP=0x000000000000b17f
- (id)mergeableIndexForCharacterIndex:(long long)arg1 affinity:(unsigned long long)arg2;	// IMP=0x000000000000aefc
- (void)enumerateIndexes:(CDUnknownBlockType)arg1;	// IMP=0x000000000000adb9
- (void)getCharacterRanges:(void *)arg1 forSubstrings:(void *)arg2;	// IMP=0x000000000000aae5
- (void)getSubstrings:(void *)arg1 forTopoIDRange:(struct TopoIDRange)arg2;	// IMP=0x000000000000a5cd
- (void *)getSubstringBeforeTopoID:(struct TopoID)arg1;	// IMP=0x000000000000a493
- (void)getSubstrings:(void *)arg1 inOrderedSubstrings:(void *)arg2 forCharacterRange:(struct _NSRange)arg3;	// IMP=0x000000000000a08f
- (void)getSubstrings:(void *)arg1 forCharacterRange:(struct _NSRange)arg2;	// IMP=0x000000000000a03b
- (void)insertStorageLength:(long long)arg1 after:(void *)arg2 before:(void *)arg3 getStorage:(CDUnknownBlockType)arg4;	// IMP=0x0000000000009988
- (void)deleteSubstrings:(void *)arg1 withCharacterRanges:(void *)arg2;	// IMP=0x000000000000986d
- (void)addNewAddedByFor:(void *)arg1;	// IMP=0x0000000000009619
@property(readonly, nonatomic) _Bool isEmptyCRDT;
- (id)characterRangesForIDRange:(struct TopoIDRange)arg1;	// IMP=0x000000000000932b
- (id)characterRangesForMergeableRange:(id)arg1;	// IMP=0x0000000000008c43
- (id)characterRangesForSelection:(id)arg1 selectedSubstringsBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000000862d
- (id)characterRangesForSelection:(id)arg1;	// IMP=0x0000000000008609
- (id)selectionForCharacterRanges:(id)arg1 selectionAffinity:(unsigned long long)arg2;	// IMP=0x0000000000007fc3
- (id)selectionForCharacterRanges:(id)arg1;	// IMP=0x0000000000007f9f
- (id)replicaUUIDForCharacterAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000007f19
- (void)endEditing;	// IMP=0x0000000000007ef3
- (void)beginEditing;	// IMP=0x0000000000007ee9
- (void)insertAtIndex:(long long)arg1 length:(long long)arg2 getStorage:(CDUnknownBlockType)arg3;	// IMP=0x0000000000007d09
- (void)removeAll;	// IMP=0x0000000000007c41
- (void)removeObjectsInRange:(struct _NSRange)arg1;	// IMP=0x0000000000007b4d
- (void)replaceStorageInRange:(struct _NSRange)arg1 withStorage:(id)arg2;	// IMP=0x00000000000079ff
- (unsigned long long)length;	// IMP=0x00000000000079a7
- (id)objcReplica;	// IMP=0x0000000000007996
- (id)copyRenamedIfAvailable:(_Bool)arg1;	// IMP=0x00000000000071cd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000071b6
- (void)deleteAllSubstrings;	// IMP=0x000000000000700b
- (void)dealloc;	// IMP=0x0000000000006f2e
- (void)stealReplicaFrom:(id)arg1;	// IMP=0x0000000000006e2b
- (id)initWithStorage:(id)arg1 uuid:(id)arg2 createInitialNodes:(_Bool)arg3;	// IMP=0x00000000000069c7
- (id)initWithStorage:(id)arg1 uuid:(id)arg2;	// IMP=0x00000000000069ae
- (_Bool)saveSubstrings:(void *)arg1 encoder:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000002fed
- (_Bool)saveToEncoder:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000002f7c
- (id)initWithDecoder:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000002748
- (void)_deltaTo:(id)arg1 added:(CDUnknownBlockType)arg2 deleted:(CDUnknownBlockType)arg3 same:(CDUnknownBlockType)arg4;	// IMP=0x000000000001ba88
- (void)deltaTo:(id)arg1 added:(CDUnknownBlockType)arg2 deleted:(CDUnknownBlockType)arg3 same:(CDUnknownBlockType)arg4;	// IMP=0x000000000001b8ba
- (void)deltaTo:(id)arg1 edited:(CDUnknownBlockType)arg2 unedited:(CDUnknownBlockType)arg3;	// IMP=0x000000000001afdc
- (id)undoCommandToChangeTo:(id)arg1 unedited:(CDUnknownBlockType)arg2;	// IMP=0x000000000001a877
- (void)undeleteSubstrings:(void *)arg1;	// IMP=0x000000000001a5f7
- (_Bool)hasAllIDsIn:(void *)arg1;	// IMP=0x000000000001a3d0

@end
