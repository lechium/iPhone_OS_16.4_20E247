//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (TRIServer)
+ (id)triDiskUsageForDirectory:(id)arg1;	// IMP=0x0080000000140d22
+ (unsigned long long)triCompressedSizeForFileAtPath:(id)arg1 shouldFault:(_Bool *)arg2;	// IMP=0x0080000000140bde
+ (_Bool)triRemoveFileProtectionIfPresentForPath:(id)arg1;	// IMP=0x00800000001408d5
+ (id)triTargetPathForSymlink:(id)arg1;	// IMP=0x008000000014073d
+ (_Bool)triForceRenameWithSourcePath:(id)arg1 destPath:(id)arg2;	// IMP=0x008000000014061b
+ (_Bool)triRenameOrFaultWithSourcePath:(id)arg1 destPath:(id)arg2;	// IMP=0x0080000000140544
+ (id)triPostOrderDescendantDirectoryPathsAtPath:(id)arg1;	// IMP=0x008000000013ffb9
- (_Bool)triRemoveCachedANEBinariesForModelsFromPath:(id)arg1 error:(id *)arg2;	// IMP=0x001000000014053c
- (_Bool)triRemoveNestedEmptyDirectoriesAtPath:(id)arg1;	// IMP=0x0010000000140391
- (_Bool)triForceRemoveItemAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x001000000013feeb
- (_Bool)triRemoveDirectoryForPath:(id)arg1 isDirectory:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000013fe48
@end

