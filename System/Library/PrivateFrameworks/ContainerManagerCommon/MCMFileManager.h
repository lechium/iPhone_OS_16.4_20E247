//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MCMFileManager : NSObject
{
    CDUnknownFunctionPointerType _mkstemp_dprotected_np;	// 8 = 0x8
}

+ (id)defaultManager;	// IMP=0x006000000003255d
- (id)fsSanitizedStringFromString:(id)arg1;	// IMP=0x0000000000030e7b
- (id)fsNodeOfURL:(id)arg1 followSymlinks:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000000030d06
- (id)copyDescriptionOfURL:(id)arg1;	// IMP=0x0000000000030abf
- (_Bool)removeExclusionFromBackupFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000030a0c
- (_Bool)fixUserPermissionsAtURL:(id)arg1 limitToTopLevelURL:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000307b2
- (unsigned long long)dataWritingOptionsForFileAtURL:(id)arg1;	// IMP=0x00000000000304b4
- (_Bool)stripACLFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000030470
- (_Bool)_enumeratePOSIX1eACLEntriesAtURL:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000030255
- (_Bool)checkFileSystemAtURL:(id)arg1 supportsPerFileKeys:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x00000000000300c8
- (_Bool)checkFileSystemAtURL:(id)arg1 isCaseSensitive:(_Bool *)arg2 canAtomicSwap:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x000000000002fe69
- (_Bool)compareVolumeForURL:(id)arg1 versusURL:(id)arg2 isSameVolume:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x000000000002f9f6
- (_Bool)writeData:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 mode:(unsigned short)arg4 error:(id *)arg5;	// IMP=0x000000000002f201
- (id)readDataFromURL:(id)arg1 options:(unsigned long long)arg2 fsNode:(id *)arg3 error:(id *)arg4;	// IMP=0x000000000002eaeb
- (id)readDataFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000002eaa8
- (id)realPathForURL:(id)arg1 isDirectory:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000002e91f
- (id)realPathForURL:(id)arg1 ifChildOfURL:(id)arg2;	// IMP=0x000000000002cfb4
- (_Bool)_validateSymlink:(id)arg1 withStartingDepth:(unsigned int)arg2 andEndingDepth:(unsigned int *)arg3;	// IMP=0x000000000002cd76
- (id)_realPathForURL:(id)arg1 allowNonExistentPathComponents:(_Bool)arg2;	// IMP=0x000000000002caba
- (id)_realPathWhatExistsInPath:(id)arg1;	// IMP=0x000000000002c8a6
- (CDStruct_4bcfbbae)diskUsageForURL:(id)arg1;	// IMP=0x000000000002c46a
- (CDStruct_4bcfbbae)fastDiskUsageForURL:(id)arg1;	// IMP=0x000000000002c42d
- (void)printDirectoryStructureAtURL:(id)arg1;	// IMP=0x000000000002c0fa
- (_Bool)setDataProtectionClassOfItemAtURL:(id)arg1 toClass:(int)arg2 ifPredicate:(CDUnknownBlockType)arg3 error:(id *)arg4;	// IMP=0x000000000002bd07
- (_Bool)dataProtectionClassOfItemAtURL:(id)arg1 class:(int *)arg2 error:(id *)arg3;	// IMP=0x000000000002bb81
- (_Bool)itemDoesNotExistAtURL:(id)arg1;	// IMP=0x000000000002bb41
- (_Bool)itemAtURL:(id)arg1 followSymlinks:(_Bool)arg2 exists:(_Bool *)arg3 isDirectory:(_Bool *)arg4 fsNode:(id *)arg5 error:(id *)arg6;	// IMP=0x000000000002b734
- (_Bool)itemAtURL:(id)arg1 followSymlinks:(_Bool)arg2 exists:(_Bool *)arg3 isDirectory:(_Bool *)arg4 error:(id *)arg5;	// IMP=0x000000000002b6eb
- (_Bool)itemAtURL:(id)arg1 exists:(_Bool *)arg2 isDirectory:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x000000000002b69e
- (_Bool)itemExistsAtURL:(id)arg1 isDirectory:(_Bool *)arg2;	// IMP=0x000000000002b64c
- (_Bool)itemAtURL:(id)arg1 exists:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x000000000002b609
- (_Bool)itemExistsAtURL:(id)arg1;	// IMP=0x000000000002b5ca
- (id)urlsForItemsInDirectoryAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002b177
- (_Bool)standardizeOwnershipAtURL:(id)arg1 toPOSIXUser:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002ad2d
- (_Bool)standardizeAllSystemContainerACLsAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002a6ea
- (_Bool)standardizeACLsForSystemContainerAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002a6a5
- (_Bool)standardizeACLsAtURL:(id)arg1 isSystemContainer:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000002a672
- (_Bool)setTopLevelSystemContainerACLAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002a63f
- (struct _acl *)_CopyTopLevelSystemContainerACLWithError:(id *)arg1;	// IMP=0x000000000002a527
- (struct _acl *)_CopySystemContainerACLWithNumACEs:(int)arg1 isDir:(_Bool)arg2 inheritOnly:(_Bool)arg3 withError:(id *)arg4;	// IMP=0x000000000002a3dd
- (_Bool)_CreateSystemUserACEInACL:(struct _acl **)arg1 withPermissions:(int)arg2 andFlags:(int)arg3 withError:(id *)arg4;	// IMP=0x0000000000029f8a
- (_Bool)_traverseDirectory:(id)arg1 error:(id *)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000029bc0
- (id)createTemporaryDirectoryInDirectoryURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000029b79
- (id)createTemporaryDirectoryInDirectoryURL:(id)arg1 withNamePrefix:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000029961
- (_Bool)moveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002991b
- (_Bool)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000298d5
- (_Bool)moveItemIfExistsAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000029892
- (_Bool)copyItemIfExistsAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002984f
- (_Bool)_moveItemAtURL:(id)arg1 toURL:(id)arg2 failIfSrcMissing:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00000000000293cf
- (_Bool)_copyItemAtURL:(id)arg1 toURL:(id)arg2 failIfSrcMissing:(_Bool)arg3 error:(id *)arg4;	// IMP=0x000000000002912c
- (id)targetOfSymbolicLinkAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000028ecd
- (_Bool)symbolicallyLinkURL:(id)arg1 toSymlinkTarget:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000028bab
- (_Bool)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(_Bool)arg2 mode:(unsigned short)arg3 error:(id *)arg4;	// IMP=0x0000000000028aec
- (_Bool)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(_Bool)arg2 mode:(unsigned short)arg3 class:(int)arg4 error:(id *)arg5;	// IMP=0x0000000000028a2c
- (_Bool)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(_Bool)arg2 mode:(unsigned short)arg3 owner:(id)arg4 error:(id *)arg5;	// IMP=0x00000000000289e3
- (_Bool)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(_Bool)arg2 mode:(unsigned short)arg3 owner:(id)arg4 class:(int)arg5 fsNode:(id *)arg6 error:(id *)arg7;	// IMP=0x0000000000028371
- (_Bool)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(_Bool)arg2 mode:(unsigned short)arg3 owner:(id)arg4 class:(int)arg5 error:(id *)arg6;	// IMP=0x000000000002831e
- (_Bool)removeItemAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000027ebe
- (id)init;	// IMP=0x0000000000027e48

@end
