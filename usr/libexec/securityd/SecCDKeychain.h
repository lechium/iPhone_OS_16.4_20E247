//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSManagedObjectContext, NSMutableDictionary, NSPersistentStoreCoordinator, NSURL;
@protocol OS_dispatch_queue;

@interface SecCDKeychain : NSObject
{
    NSURL *_persistentStoreBaseURL;	// 8 = 0x8
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;	// 16 = 0x10
    NSManagedObjectContext *_managedObjectContext;	// 24 = 0x18
    NSMutableDictionary *_managedItemTypeDict;	// 32 = 0x20
    NSMutableDictionary *_itemTypeDict;	// 40 = 0x28
    _Bool _encryptDatabase;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    NSArray *_classAPersistentStores;	// 64 = 0x40
}

+ (id)lookupValueTypeForObject:(id)arg1;	// IMP=0x00400000000448bb
- (void).cxx_destruct;	// IMP=0x002000000003e318
- (id)managedItemWithItem:(id)arg1 withManagedObjectContext:(id)arg2 error:(id *)arg3;	// IMP=0x001000000003df13
- (id)itemTypeForItemTypeName:(id)arg1;	// IMP=0x001000000003defd
- (void)_registerItemTypeForTesting:(id)arg1;	// IMP=0x001000000003de6b
- (void)registerItemType:(id)arg1 withManagedObjectContext:(id)arg2;	// IMP=0x001000000003db3d
- (void)deleteItemWithPersistentID:(id)arg1 withConnection:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000003d9f5
- (void)fetchItemsWithValue:(id)arg1 forLookupKey:(id)arg2 ofType:(id)arg3 withConnection:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000003d85b
- (void)fetchItemForPersistentID:(id)arg1 withConnection:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000003d713
- (id)fetchManagedItemForPersistentID:(id)arg1 withManagedObjectContext:(id)arg2 error:(id *)arg3;	// IMP=0x001000000003d5d5
- (void)insertItems:(id)arg1 withConnection:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000003d48d
- (_Bool)validateItemOwner:(id)arg1 withConnection:(id)arg2 withError:(id *)arg3;	// IMP=0x001000000003d190
- (id)primaryKeyNameForItemTypeName:(id)arg1;	// IMP=0x001000000003d16b
- (void)performOnManagedObjectQueueAndWait:(CDUnknownBlockType)arg1;	// IMP=0x001000000003d0de
- (void)performOnManagedObjectQueue:(CDUnknownBlockType)arg1;	// IMP=0x001000000003d012
- (id)_queue;	// IMP=0x001000000003d004
- (void)_onQueueDropClassAPersistentStore;	// IMP=0x001000000003cdeb
- (id)_onQueueGetManagedObjectContextWithError:(id *)arg1;	// IMP=0x001000000003ca48
- (id)_onQueueGetDatabaseKeyDataWithError:(id *)arg1;	// IMP=0x001000000003c35f
- (id)initWithStorageURL:(id)arg1 modelURL:(id)arg2 encryptDatabase:(_Bool)arg3;	// IMP=0x001000000003c162

@end
