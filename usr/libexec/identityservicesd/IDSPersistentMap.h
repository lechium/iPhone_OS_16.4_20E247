//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSPersistentMapMergePolicy, NSMutableDictionary, NSSet, NSString;
@protocol IDSPersistentMapDelegate, IDSPersistentMapPersister, OS_dispatch_queue, OS_dispatch_source;

@interface IDSPersistentMap : NSObject
{
    _Bool _isLoaded;	// 8 = 0x8
    _Bool _allowBackup;	// 9 = 0x9
    struct os_unfair_lock_s _lock;	// 12 = 0xc
    id <IDSPersistentMapDelegate> _delegate;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    long long _versionNumber;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_serialPersistQueue;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_saveTimer;	// 48 = 0x30
    double _writeCoalescingDelay;	// 56 = 0x38
    double _writeCoalescingLeeway;	// 64 = 0x40
    CDUnknownBlockType _migrationBlock;	// 72 = 0x48
    id <IDSPersistentMapPersister> _persister;	// 80 = 0x50
    NSSet *_decodableClasses;	// 88 = 0x58
    NSMutableDictionary *_cachedMap;	// 96 = 0x60
    unsigned long long _mergePolicyType;	// 104 = 0x68
    IDSPersistentMapMergePolicy *_mergePolicy;	// 112 = 0x70
}

+ (id)defaultPersisterForIdentifier:(id)arg1 dataProtectionClass:(long long)arg2;	// IMP=0x0040000000148de0
- (void).cxx_destruct;	// IMP=0x002000000014dce0
@property(readonly, nonatomic) _Bool allowBackup; // @synthesize allowBackup=_allowBackup;
@property(retain, nonatomic) IDSPersistentMapMergePolicy *mergePolicy; // @synthesize mergePolicy=_mergePolicy;
@property(nonatomic) unsigned long long mergePolicyType; // @synthesize mergePolicyType=_mergePolicyType;
@property(readonly, nonatomic) _Bool isLoaded; // @synthesize isLoaded=_isLoaded;
@property(readonly, nonatomic) NSMutableDictionary *cachedMap; // @synthesize cachedMap=_cachedMap;
@property(retain, nonatomic) NSSet *decodableClasses; // @synthesize decodableClasses=_decodableClasses;
@property(retain, nonatomic) id <IDSPersistentMapPersister> persister; // @synthesize persister=_persister;
@property(copy, nonatomic) CDUnknownBlockType migrationBlock; // @synthesize migrationBlock=_migrationBlock;
@property(nonatomic) double writeCoalescingLeeway; // @synthesize writeCoalescingLeeway=_writeCoalescingLeeway;
@property(nonatomic) double writeCoalescingDelay; // @synthesize writeCoalescingDelay=_writeCoalescingDelay;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *saveTimer; // @synthesize saveTimer=_saveTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialPersistQueue; // @synthesize serialPersistQueue=_serialPersistQueue;
@property(nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) long long versionNumber; // @synthesize versionNumber=_versionNumber;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <IDSPersistentMapDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_performLockedBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000014d870
- (long long)_versionNumberForPersistedMap:(id)arg1;	// IMP=0x001000000014d790
- (id)_mapByStrippingMetadataFromMap:(id)arg1;	// IMP=0x001000000014d710
- (id)_mapByAddingMetadataToMap:(id)arg1;	// IMP=0x001000000014d600
- (id)_timerIdentifierFromBaseIdentifier:(id)arg1;	// IMP=0x001000000014d570
- (id)_encodeMap:(id)arg1;	// IMP=0x001000000014d270
- (id)_decodeMapData:(id)arg1;	// IMP=0x001000000014ce40
- (void)_save;	// IMP=0x001000000014c320
- (void)delayedSave;	// IMP=0x001000000014bfb0
- (void)persistImmediately;	// IMP=0x001000000014baf0
- (_Bool)loadAndCheckStatus;	// IMP=0x001000000014aec0
- (id)copyDictionaryRepresentation;	// IMP=0x001000000014ad10
- (void)removeAllObjects;	// IMP=0x001000000014ac50
- (id)allValues;	// IMP=0x001000000014aa80
- (id)allKeys;	// IMP=0x001000000014a8b0
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x001000000014a7c0
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x001000000014a750
- (void)_performCacheReadingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000014a630
- (void)_performCacheModifyingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000014a2f0
- (void)removeObjectForKey:(id)arg1;	// IMP=0x001000000014a190
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000149fc0
- (id)objectForKey:(id)arg1;	// IMP=0x0010000000149d80
- (id)debugDescription;	// IMP=0x0010000000149a90
- (id)initWithIdentifier:(id)arg1 versionNumber:(long long)arg2 decodableClasses:(id)arg3 mergePolicy:(id)arg4 writeCoalescingDelay:(double)arg5 writeCoalescingLeeway:(double)arg6 persister:(id)arg7 migrationBlock:(CDUnknownBlockType)arg8 allowBackup:(_Bool)arg9;	// IMP=0x00100000001495c0
- (id)initWithIdentifier:(id)arg1 versionNumber:(long long)arg2 decodableClasses:(id)arg3 dataProtectionClass:(long long)arg4 mergePolicy:(id)arg5 migrationBlock:(CDUnknownBlockType)arg6;	// IMP=0x0010000000149420
- (id)initWithIdentifier:(id)arg1 versionNumber:(long long)arg2 decodableClasses:(id)arg3 persister:(id)arg4 migrationBlock:(CDUnknownBlockType)arg5;	// IMP=0x00100000001492e0
- (id)initWithIdentifier:(id)arg1 versionNumber:(long long)arg2 decodableClasses:(id)arg3 persister:(id)arg4 migrationBlock:(CDUnknownBlockType)arg5 allowBackup:(_Bool)arg6;	// IMP=0x0010000000149190
- (id)initWithIdentifier:(id)arg1 versionNumber:(long long)arg2 decodableClasses:(id)arg3 migrationBlock:(CDUnknownBlockType)arg4;	// IMP=0x0010000000149090
- (id)init;	// IMP=0x0010000000148f90

@end

