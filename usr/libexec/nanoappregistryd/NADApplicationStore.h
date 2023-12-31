//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NADEntityStore, NSFileManager, NSMutableDictionary, NSURL;
@protocol OS_dispatch_queue;

@interface NADApplicationStore : NSObject
{
    NSMutableDictionary *_storeMetadata;	// 8 = 0x8
    NSMutableDictionary *_parentBundleIDToWatchAppMap;	// 16 = 0x10
    NSMutableDictionary *_bundleIDToApplicationMap;	// 24 = 0x18
    unsigned long long _stateHandle;	// 32 = 0x20
    NSURL *_applicationDirectory;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
    NSFileManager *_fileManager;	// 56 = 0x38
    NADEntityStore *_applicationStore;	// 64 = 0x40
}

+ (id)defaultURL;	// IMP=0x004000000000158c
+ (id)legacyDefaultURL;	// IMP=0x00100000000014db
+ (id)defaultStore;	// IMP=0x0010000000001460
- (void).cxx_destruct;	// IMP=0x0020000000002fe1
@property(readonly, nonatomic) NADEntityStore *applicationStore; // @synthesize applicationStore=_applicationStore;
@property(readonly, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSURL *applicationDirectory; // @synthesize applicationDirectory=_applicationDirectory;
- (struct os_state_data_s *)stateDataWithHints:(struct os_state_hints_s *)arg1;	// IMP=0x0010000000002d6d
- (void)performTransactionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000002cf3
- (id)beginTransaction;	// IMP=0x0010000000002cbd
- (void)_writeStoreMetadata;	// IMP=0x0010000000002b49
- (id)_storeMetadataURL;	// IMP=0x0010000000002af0
- (id)description;	// IMP=0x0010000000002a4e
- (id)sequenceNumber;	// IMP=0x0010000000002a31
- (void)setSequenceNumber:(id)arg1 UUID:(id)arg2;	// IMP=0x001000000000296d
- (id)UUID;	// IMP=0x0010000000002950
- (id)_allApplicationsIncludingHidden:(_Bool)arg1;	// IMP=0x0010000000002794
- (void)_removeApplicationFromCache:(id)arg1;	// IMP=0x00100000000026cc
- (void)_removeApplicationWithBundleIdentifier:(id)arg1;	// IMP=0x0010000000002663
- (id)watchAppIDsForParentBundleID:(id)arg1;	// IMP=0x00100000000025d0
- (void)_insertApplicationIntoCache:(id)arg1;	// IMP=0x0010000000002505
- (void)_insertApplication:(id)arg1;	// IMP=0x00100000000024a3
- (void)_resetStores;	// IMP=0x001000000000248d
- (void)_loadEntitiesFromDisk;	// IMP=0x0010000000002354
- (void)getAllApplications:(out id *)arg1 UUID:(out id *)arg2 sequenceNumber:(out id *)arg3 includeHidden:(_Bool)arg4;	// IMP=0x00100000000021f7
- (id)allApplicationsIncludingHidden:(_Bool)arg1;	// IMP=0x0010000000002053
- (id)_applicationBundleIdentifiersForParentApplicationBundleIdentifier:(id)arg1;	// IMP=0x0010000000001fff
- (void)removeApplicationsWithParentApplicationBundleIdentifier:(id)arg1;	// IMP=0x0010000000001e7a
- (void)removeApplicationWithBundleIdentifier:(id)arg1;	// IMP=0x0010000000001e00
- (void)insertApplication:(id)arg1;	// IMP=0x0010000000001d86
- (void)removeAllEntities;	// IMP=0x0010000000001cc4
- (id)initWithURL:(id)arg1;	// IMP=0x0010000000001759
- (id)init;	// IMP=0x00100000000014c7

@end

