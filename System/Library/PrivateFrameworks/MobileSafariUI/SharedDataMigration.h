//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SharedDataMigration : NSObject
{
}

+ (void)migrateTabDatabaseIfNeeded;	// IMP=0x00800000000ed90e
+ (_Bool)migrateThumbnails;	// IMP=0x00800000000ed898
+ (_Bool)migrateRecentSearches;	// IMP=0x00800000000ed825
+ (void)migratePersistentStorageDefaults;	// IMP=0x00800000000ed6f7
+ (_Bool)_migrateCacheFileFromSubpath:(id)arg1 toSubpath:(id)arg2 ensureIsDirectory:(_Bool)arg3;	// IMP=0x00800000000ed23a
+ (id)_userCachesDirectoryPath;	// IMP=0x00800000000ed1c8

@end

