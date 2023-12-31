//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSManagedObjectModel, NSMappingModel, NSMigrationManager, NSPersistentStoreCoordinator, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface NSStoreMigrationPolicy : NSObject
{
    NSPersistentStoreCoordinator *_coordinator;	// 8 = 0x8
    NSURL *_sourceURL;	// 16 = 0x10
    NSString *_sourceConfiguration;	// 24 = 0x18
    NSDictionary *_sourceOptions;	// 32 = 0x20
    NSManagedObjectModel *_sourceModel;	// 40 = 0x28
    NSDictionary *_sourceMetadata;	// 48 = 0x30
    NSMappingModel *_mappingModel;	// 56 = 0x38
    NSURL *_destinationURL;	// 64 = 0x40
    NSString *_destinationType;	// 72 = 0x48
    NSString *_destinationConfiguration;	// 80 = 0x50
    NSDictionary *_destinationOptions;	// 88 = 0x58
    NSMigrationManager *_migrationManager;	// 96 = 0x60
    NSArray *_resourceBundles;	// 104 = 0x68
    long long _workingWithSkewedSource;	// 112 = 0x70
    _Bool _forcedMigration;	// 120 = 0x78
    void *_reserved2;	// 128 = 0x80
    void *_reserved3;	// 136 = 0x88
    void *_reserved4;	// 144 = 0x90
}

+ (id)migrationStoreOptionsFromStoreOptions:(id)arg1;	// IMP=0x0060000000211cda
+ (id)destinationURLForMigrationSourceURL:(id)arg1 createDocumentReplacementDirectory:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0060000000213129
+ (void)setMigrationDebugLevel:(int)arg1;	// IMP=0x0060000000213005
+ (int)migrationDebugLevel;	// IMP=0x0060000000212fec
- (id)migrateStoreAtURL:(id)arg1 withManager:(id)arg2 metadata:(id)arg3 options:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000212eab
- (id)createMigrationManagerForSourceModel:(id)arg1 destinationModel:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000212d29
- (id)sourceModelForStoreAtURL:(id)arg1 metadata:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002124dd
- (void)dealloc;	// IMP=0x0000000000211eb5

@end

