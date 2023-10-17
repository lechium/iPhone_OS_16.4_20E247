//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileManager, NSString;

@interface APStorageManager : NSObject
{
    NSString *_pathPrefix;	// 8 = 0x8
    NSFileManager *_fileManager;	// 16 = 0x10
    NSString *_rootPath;	// 24 = 0x18
}

+ (void)sendAnalyticError:(id)arg1 domain:(id)arg2 code:(long long)arg3;	// IMP=0x001000000002e461
+ (_Bool)_removeStorageForSubdirectory:(id)arg1;	// IMP=0x001000000002dedc
+ (_Bool)removeStorage;	// IMP=0x001000000002de82
+ (_Bool)areThereStoredItems;	// IMP=0x001000000002dd60
+ (id)_applicationSupportSubdirectory:(id)arg1;	// IMP=0x001000000002d96a
+ (void)setRootPath:(id)arg1;	// IMP=0x001000000002d838
+ (id)_validatedPath:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002d1f4
+ (id)_rootSubdirectory;	// IMP=0x001000000002bd90
+ (void)cleanupOldStorage;	// IMP=0x001000000002704c
- (void).cxx_destruct;	// IMP=0x002000000002e63e
@property(readonly, nonatomic) NSString *rootPath; // @synthesize rootPath=_rootPath;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(retain, nonatomic) NSString *pathPrefix; // @synthesize pathPrefix=_pathPrefix;
- (_Bool)_createDirectoriesForURL:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002dc6d
- (id)_makeApplicationSupportSubdirectory:(id)arg1;	// IMP=0x001000000002daa9
- (id)_rootURL;	// IMP=0x001000000002d84c
- (_Bool)moveItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;	// IMP=0x001000000002d755
- (id)contentsOfDirectoryAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002d6e6
- (id)subpathsOfDirectoryAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002d677
- (id)_validatedFullURLForPath:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002d503
- (id)_validatedFullPathForPath:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002d3f0
- (id)_validatedPath:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002d043
- (void)getStorageSize:(unsigned long long *)arg1 allocatedSize:(unsigned long long *)arg2 files:(unsigned long long *)arg3;	// IMP=0x001000000002ca4a
- (CDUnknownBlockType)iterateObjectsIncludingFolders:(_Bool)arg1;	// IMP=0x001000000002c710
- (_Bool)touchFileAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002c67f
- (id)createdDateForFileAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002c5fe
- (id)lastModifiedDateForFileAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002c57d
- (id)fileAtKeyPath:(id)arg1 forMode:(long long)arg2 error:(id *)arg3;	// IMP=0x001000000002c4fd
- (id)fileForAppendingAtKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002c3b3
- (id)fileForWritingAtKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002c269
- (id)fileForReadingAtKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002bfd4
- (_Bool)removeObjectAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002bf71
- (_Bool)_fileExistsAtPath:(id)arg1 isDirectory:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x001000000002bf0b
- (_Bool)directoryExistsAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002bd9d
- (_Bool)fileExistsAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002bc21
- (Class)_classForEncryptedFile;	// IMP=0x001000000002bc10
- (id)dataStoredAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002bb87
- (_Bool)storeData:(id)arg1 atPath:(id)arg2 error:(id *)arg3;	// IMP=0x001000000002baf3
- (id)objectStoredAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002ba59
- (_Bool)storeObject:(id)arg1 atPath:(id)arg2 error:(id *)arg3;	// IMP=0x001000000002b9ca
- (void)_initWithPathPrefix:(id)arg1 rootPath:(id)arg2;	// IMP=0x001000000002b905
- (id)initWithPathPrefix:(id)arg1 rootPath:(id)arg2;	// IMP=0x001000000002b83b
- (id)initWithPathPrefix:(id)arg1;	// IMP=0x001000000002b827
- (void)_initWithSubdirectory:(id)arg1;	// IMP=0x001000000002b7b3
- (id)init;	// IMP=0x001000000002b738

@end
