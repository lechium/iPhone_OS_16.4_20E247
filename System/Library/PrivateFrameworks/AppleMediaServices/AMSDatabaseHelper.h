//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AMSDatabaseHelper : NSObject
{
}

+ (id)_databaseNameForType:(long long)arg1;	// IMP=0x00800000001dc393
+ (id)_dataVaultURLForDataVaultPath:(id)arg1;	// IMP=0x00800000001dbfa6
+ (id)_cachesURLForCachePath:(id)arg1;	// IMP=0x00800000001dbce1
+ (void)_applyProtectionClassForDirectoryAtURL:(id)arg1;	// IMP=0x00800000001dbc64
+ (_Bool)_addSkipBackupAttribute:(_Bool)arg1 forURL:(id)arg2;	// IMP=0x00800000001db9da
+ (id)databaseFolderNameForType:(long long)arg1;	// IMP=0x00800000001db85e
+ (_Bool)removeDatabaseForDataVaultPath:(id)arg1;	// IMP=0x00800000001db3d0
+ (_Bool)removeDatabaseForCachePath:(id)arg1;	// IMP=0x00800000001db10f
+ (id)databaseURLForDataVaultPath:(id)arg1 type:(long long)arg2;	// IMP=0x00800000001daf65
+ (id)databaseURLForCachePath:(id)arg1 type:(long long)arg2;	// IMP=0x00800000001dadbb
+ (id)databasePathForDataVaultPath:(id)arg1 type:(long long)arg2;	// IMP=0x00800000001dad6b
+ (id)databasePathForCachePath:(id)arg1 type:(long long)arg2;	// IMP=0x00800000001dad1b

@end
