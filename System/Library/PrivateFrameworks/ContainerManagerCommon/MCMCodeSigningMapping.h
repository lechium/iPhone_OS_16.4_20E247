//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCMSQLiteDB, MCMUserIdentityCache;
@protocol MCMChildParentMapCache, MCMManagedPath, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MCMCodeSigningMapping : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    id <MCMChildParentMapCache> _childParentMapCache;	// 16 = 0x10
    MCMSQLiteDB *_codeSigningMappingDB;	// 24 = 0x18
    MCMUserIdentityCache *_userIdentityCache;	// 32 = 0x20
    id <MCMManagedPath> _library;	// 40 = 0x28
}

+ (id)_moveDBIfNeededFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x0060000000063898
+ (id)codeSignMappingWithError:(id *)arg1;	// IMP=0x0060000000063345
- (void).cxx_destruct;	// IMP=0x000000000005fe3d
@property(readonly, nonatomic) id <MCMManagedPath> library; // @synthesize library=_library;
@property(readonly, nonatomic) MCMUserIdentityCache *userIdentityCache; // @synthesize userIdentityCache=_userIdentityCache;
@property(retain, nonatomic) MCMSQLiteDB *codeSigningMappingDB; // @synthesize codeSigningMappingDB=_codeSigningMappingDB;
@property(readonly, nonatomic) id <MCMChildParentMapCache> childParentMapCache; // @synthesize childParentMapCache=_childParentMapCache;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (_Bool)_onQueue_removeGroupIdentifier:(id)arg1 forIdentifier:(id)arg2 containerClass:(unsigned long long)arg3 error:(id *)arg4 reconcileHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000005f9cb
- (_Bool)_onQueue_addGroupIdentifier:(id)arg1 forIdentifier:(id)arg2 containerClass:(unsigned long long)arg3 error:(id *)arg4 reconcileHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000005f643
- (_Bool)removeGroupIdentifier:(id)arg1 forIdentifier:(id)arg2 containerClass:(unsigned long long)arg3 error:(id *)arg4 reconcileHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000005f465
- (_Bool)addGroupIdentifier:(id)arg1 forIdentifier:(id)arg2 containerClass:(unsigned long long)arg3 error:(id *)arg4 reconcileHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000005f287
- (_Bool)_onqueue_enumerateOwnersAndGroupsWithGroupClass:(unsigned long long)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000000005f105
- (_Bool)enumerateOwnersAndGroupsWithGroupClass:(unsigned long long)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000000005ef22
- (_Bool)_onQueue_registerKernelProvidedReferencesForIdentifier:(id)arg1 withAppGroupContainers:(id)arg2 systemGroupContainers:(id)arg3 error:(unsigned long long *)arg4;	// IMP=0x000000000005e708
- (_Bool)registerKernelProvidedReferencesForIdentifier:(id)arg1 withAppGroupContainers:(id)arg2 systemGroupContainers:(id)arg3 error:(unsigned long long *)arg4;	// IMP=0x000000000005e55b
- (_Bool)_onQueue_removeAllAdvanceCopiesWithError:(id *)arg1;	// IMP=0x000000000005e4b0
- (_Bool)removeAllAdvanceCopiesWithError:(id *)arg1;	// IMP=0x000000000005e3b8
- (id)_onQueue_removeReferenceForGroupIdentifiers:(id)arg1 containerClass:(unsigned long long)arg2;	// IMP=0x000000000005dc90
- (void)_onQueue_handleChangeFromOldGroupContainerIds:(id)arg1 toNewGroupContainerIds:(id)arg2 containerClass:(unsigned long long)arg3 reconcileHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000005d8ae
- (id)_onQueue_copyReferenceCountSetForContainerClass:(unsigned long long)arg1;	// IMP=0x000000000005d738
- (id)copyReferenceCountSetForContainerClass:(unsigned long long)arg1;	// IMP=0x000000000005d60e
- (_Bool)invalidateCodeSigningInfoForIdentifier:(id)arg1 withError:(id *)arg2;	// IMP=0x000000000005d4d1
- (_Bool)invalidateCodeSigningInfoForIdentifierAndItsChildren:(id)arg1 withError:(id *)arg2;	// IMP=0x000000000005d354
- (id)_onQueue_identifiersWithError:(id *)arg1;	// IMP=0x000000000005d29d
- (id)identifiersWithError:(id *)arg1;	// IMP=0x000000000005d0ec
- (unsigned long long)invalidateCodeSigningInfoForAppsWithoutDataContainer;	// IMP=0x000000000005c73a
- (id)entitlementsForIdentifier:(id)arg1;	// IMP=0x000000000005c15b
- (id)getCodeSigningInfoForIdentifier:(id)arg1;	// IMP=0x000000000005bfe0
- (id)processCodeSigningInfo:(id)arg1 identifier:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x000000000005bd31
- (id)processCallerRegisteredEntitlements:(id)arg1 identifier:(id)arg2 error:(id *)arg3;	// IMP=0x000000000005b762
- (id)systemGroupIdentifiersForIdentifier:(id)arg1;	// IMP=0x000000000005b6e7
- (id)appGroupIdentifiersForIdentifier:(id)arg1;	// IMP=0x000000000005b66c
- (unsigned long long)dataContainerTypeForIdentifier:(id)arg1;	// IMP=0x000000000005b541
- (_Bool)identifierHasSystemContainer:(id)arg1;	// IMP=0x000000000005b4d2
- (_Bool)identifierHasCallerRegisteredEntitlements:(id)arg1;	// IMP=0x000000000005b3a4
- (id)codeSigningEntryForIdentifier:(id)arg1 withError:(id *)arg2;	// IMP=0x000000000005b22e
- (id)removeCodeSigningDictionaryForIdentifier:(id)arg1;	// IMP=0x000000000005b0a8
- (id)groupContainerIdentifiersAssociatedWithIdentifier:(id)arg1 containerClass:(unsigned long long)arg2;	// IMP=0x000000000005afd8
- (void)_onQueue_iterateGroupIdsWithKey:(id)arg1 fallBackKey:(id)arg2 forAllIdentifiersUsingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000005ad89
- (_Bool)_onQueue_invalidateCodeSigningInfoForIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005acbe
- (id)_onQueue_invalidateCodeSigningInfoForIdentifierAndItsChildren:(id)arg1;	// IMP=0x000000000005abde
- (_Bool)_onQueue_processCodeSigningInfo:(id)arg1 identifier:(id)arg2 options:(id)arg3 oldEntitlements:(id)arg4 error:(id *)arg5 reconcileHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000059475
- (unsigned long long)_onQueue_dataContainerTypeForIdentifier:(id)arg1;	// IMP=0x0000000000059247
- (_Bool)_onQueue_identifierHasCallerRegisteredEntitlements:(id)arg1;	// IMP=0x0000000000059019
- (id)_onQueue_codeSigningEntryForIdentifier:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000000058dd5
- (id)_entitlementsFromCodeSigningEntry:(id)arg1;	// IMP=0x0000000000058d51
- (id)_onQueue_entitlementsForIdentifier:(id)arg1;	// IMP=0x0000000000058c4e
- (id)_codeSigningInfoForCodeSigningEntry:(id)arg1 externalRequest:(_Bool)arg2;	// IMP=0x0000000000058b86
- (id)_onQueue_codeSigningInfoForIdentifier:(id)arg1 externalRequest:(_Bool)arg2;	// IMP=0x000000000005891e
- (id)_onQueue_setCodeSigningDictionaryValues:(id)arg1 forIdentifiers:(id)arg2;	// IMP=0x00000000000580c7
- (id)_readCodeSigningMappingFromDiskAtURL:(id)arg1;	// IMP=0x0000000000057c8a
- (void)performAllCodeSigningMigrationAndReconciliationWithContext:(id)arg1;	// IMP=0x0000000000057b78
- (void)_onQueue_reconcileSystemContainersWithContext:(id)arg1;	// IMP=0x00000000000573b5
- (void)_onQueue_migrateCachedCodeSigningInfoFromBundleContainerToMappingWithInfo:(id)arg1 identifier:(id)arg2 containerClass:(unsigned long long)arg3;	// IMP=0x0000000000056db9
- (void)_onQueue_migrateCachedCodeSigningInfoFromBundleContainersToMappingWithContainersLegacy:(id)arg1 containerClass:(unsigned long long)arg2;	// IMP=0x0000000000056238
- (void)migrateCachedCodeSigningInfoFromBundleContainersToMapping;	// IMP=0x0000000000056075
- (void)_onQueue_migrateDataFromLegacyEntitlementsFileToCodeSigningFile;	// IMP=0x00000000000558b4
- (void)_onQueue_migrateAppGroupIdsFromDataContainersToFileUsingContainers:(id)arg1;	// IMP=0x0000000000054d66
- (void)migrateAppGroupIdsFromDataContainersToFile;	// IMP=0x00000000000544dd
- (void)_onQueue_migrateFromMappingFileToDBIfNecessary;	// IMP=0x0000000000053ef3
- (id)initWithUserIdentityCache:(id)arg1 queue:(id)arg2 mappingDB:(id)arg3 childParentMapCache:(id)arg4 library:(id)arg5;	// IMP=0x0000000000053d5b

@end
