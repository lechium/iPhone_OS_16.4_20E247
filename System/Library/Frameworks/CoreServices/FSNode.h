//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface FSNode : NSObject
{
    NSURL *_url;	// 8 = 0x8
    unsigned long long _cacheExpiration;	// 16 = 0x10
    unsigned int _isDirectory:2;	// 24 = 0x18
    unsigned int _hasReferringAliasNode:1;	// 24 = 0x18
    unsigned int _canUseFileCache:1;	// 24 = 0x18
    unsigned int _isInitialized:1;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000000ef2b
+ (id)_resolvedNodeFromAliasFile:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x00100000000108d5
+ (id)_resolvedURLFromAliasFile:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x001000000001076d
+ (id)userDataVolumeNode;	// IMP=0x0010000000011b93
+ (id)systemDataVolumeNode;	// IMP=0x0010000000011ac5
+ (id)prebootVolumeNode;	// IMP=0x00100000000119f7
+ (id)rootVolumeNode;	// IMP=0x0010000000011929
+ (_Bool)canReadMetadataOfURL:(id)arg1 fromSandboxWithAuditToken:(const CDStruct_4c969caf *)arg2;	// IMP=0x001000000001340c
+ (_Bool)canWriteURL:(id)arg1 fromSandboxWithAuditToken:(const CDStruct_4c969caf *)arg2;	// IMP=0x00100000000133f3
+ (_Bool)canReadURL:(id)arg1 fromSandboxWithAuditToken:(const CDStruct_4c969caf *)arg2;	// IMP=0x00100000000133da
+ (_Bool)canReadMetadataOfURL:(id)arg1 withAuditToken:(const CDStruct_4c969caf *)arg2;	// IMP=0x00100000000131d6
+ (_Bool)canWriteURL:(id)arg1 withAuditToken:(const CDStruct_4c969caf *)arg2;	// IMP=0x00100000000131bd
+ (_Bool)canReadURL:(id)arg1 withAuditToken:(const CDStruct_4c969caf *)arg2;	// IMP=0x00100000000131a4
+ (_Bool)canAccessURL:(id)arg1 fromSandboxWithAuditToken:(const CDStruct_4c969caf *)arg2 operation:(const char *)arg3;	// IMP=0x0010000000012fac
+ (_Bool)canAccessURL:(id)arg1 withAuditToken:(const CDStruct_4c969caf *)arg2 operation:(const char *)arg3;	// IMP=0x0010000000012e7f
+ (_Bool)getFileSystemRepresentation:(char [1024])arg1 forBookmarkData:(id)arg2;	// IMP=0x0010000000014a15
+ (_Bool)isBookmarkDataFull:(id)arg1;	// IMP=0x001000000001498d
+ (_Bool)getVolumeIdentifier:(unsigned long long *)arg1 forBookmarkData:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000014905
+ (id)nameForBookmarkData:(id)arg1 error:(id *)arg2;	// IMP=0x001000000001477b
+ (id)pathForBookmarkData:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000014560
+ (unsigned char)compareBookmarkData:(id)arg1 toBookmarkData:(id)arg2;	// IMP=0x0010000000014310
+ (id)injectSimulatorRootIntoBookmarkData:(id)arg1;	// IMP=0x0010000000013f1f
+ (id)removeSimulatorRootFromBookmarkData:(id)arg1;	// IMP=0x0010000000013d8b
+ (id)simulatorRootPath;	// IMP=0x0010000000013c45
- (void).cxx_destruct;	// IMP=0x000000000000ef33
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000ed1a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000ec52
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000ea3c
- (id)redactedDescription;	// IMP=0x000000000000e9e7
- (id)description;	// IMP=0x000000000000e903
- (unsigned long long)hash;	// IMP=0x000000000000e88d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000e6a9
- (void)prepareForReuse;	// IMP=0x000000000000e5e2
- (id)initWithURL:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x000000000000e0af
- (id)initTemporaryNodeOnVolume:(id)arg1 flags:(unsigned int)arg2 fileDescriptor:(int *)arg3 error:(id *)arg4;	// IMP=0x000000000000f5fb
- (id)initWithConfigurationString:(int)arg1 flags:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x000000000000f51a
- (id)initWithDirectory:(unsigned long long)arg1 inDomain:(unsigned long long)arg2 lastPathComponent:(id)arg3 createIntermediateDirectories:(_Bool)arg4 flags:(unsigned int)arg5 error:(id *)arg6;	// IMP=0x000000000000f23c
- (id)initWithFileSystemRepresentation:(const char *)arg1 flags:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x000000000000f0be
- (id)initWithPath:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x000000000000ef43
- (_Bool)checkResourceIsReachableAndReturnError:(id *)arg1;	// IMP=0x0000000000010303
- (id)sideFaultResourceValuesReturningError:(id *)arg1;	// IMP=0x00000000000101d2
- (void)setTemporaryResourceValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000010165
- (_Bool)getTemporaryResourceValue:(id *)arg1 forKey:(id)arg2;	// IMP=0x000000000001014d
- (void)removeCachedResourceValueForKey:(id)arg1;	// IMP=0x00000000000100f5
- (_Bool)setResourceValue:(id)arg1 forKey:(id)arg2 options:(unsigned char)arg3 error:(id *)arg4;	// IMP=0x000000000000ff59
- (_Bool)getResourceValue:(id *)arg1 forKey:(id)arg2 options:(unsigned char)arg3 error:(id *)arg4;	// IMP=0x000000000000fc04
- (void)clearURLPropertyCacheIfStale;	// IMP=0x000000000000fb65
@property(readonly, nonatomic) NSURL *URL;
- (id)temporaryDirectoryNodeWithFlags:(unsigned int)arg1 error:(id *)arg2;	// IMP=0x0000000000010ba1
- (id)resolvedNodeWithFlags:(unsigned int)arg1 error:(id *)arg2;	// IMP=0x0000000000010aab
- (void)setReferringAliasNode:(id)arg1;	// IMP=0x000000000001072e
@property(readonly, nonatomic) FSNode *referringAliasNode;
- (id)diskImageURLWithFlags:(unsigned int)arg1 error:(id *)arg2;	// IMP=0x0000000000010699
- (id)volumeNodeWithFlags:(unsigned int)arg1 error:(id *)arg2;	// IMP=0x00000000000105fc
- (id)childNodeWithRelativePath:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x000000000001032c
@property(readonly, nonatomic) _Bool hasHiddenExtension;
@property(readonly, nonatomic, getter=isHidden) _Bool hidden;
@property(readonly, nonatomic, getter=isRegularFile) _Bool regularFile;
@property(readonly, nonatomic) _Bool hasPackageBit;
@property(readonly, nonatomic, getter=isSideFault) _Bool sideFault;
@property(readonly, nonatomic, getter=isAliasFile) _Bool aliasFile;
@property(readonly, nonatomic, getter=isSymbolicLink) _Bool symbolicLink;
@property(readonly, nonatomic, getter=isResolvable) _Bool resolvable;
@property(readonly, nonatomic, getter=isExecutable) _Bool executable;
@property(readonly, nonatomic, getter=isExecutableModeFile) _Bool executableModeFile;
@property(readonly, nonatomic, getter=isBusyDirectory) _Bool busyDirectory;
@property(readonly, nonatomic, getter=isDirectory) _Bool directory;
- (_Bool)getIsDirectory_NoIO:(_Bool *)arg1;	// IMP=0x0000000000010c9d
- (id)extensionWithError:(id *)arg1;	// IMP=0x000000000001172d
- (id)nameWithError:(id *)arg1;	// IMP=0x00000000000115d0
- (id)canonicalPathWithError:(id *)arg1;	// IMP=0x00000000000115b6
- (id)pathWithError:(id *)arg1;	// IMP=0x000000000001159f
- (_Bool)getFileSystemRepresentation:(char [1024])arg1 error:(id *)arg2;	// IMP=0x00000000000114e9
- (id)canonical:(_Bool)arg1 pathWithError:(id *)arg2;	// IMP=0x0000000000011309
@property(readonly, nonatomic, getter=isOnLocalVolume) _Bool onLocalVolume;
@property(readonly, nonatomic, getter=isOnDiskImage) _Bool onDiskImage;
- (_Bool)getVolumeIdentifier:(unsigned long long *)arg1 error:(id *)arg2;	// IMP=0x0000000000011cd6
@property(readonly, nonatomic, getter=isMountTrigger) _Bool mountTrigger;
@property(readonly, nonatomic, getter=isVolume) _Bool volume;
- (_Bool)getOwnerUID:(unsigned int *)arg1 error:(id *)arg2;	// IMP=0x0000000000011f2c
- (_Bool)getFileIdentifier:(unsigned long long *)arg1 error:(id *)arg2;	// IMP=0x0000000000011ea4
- (_Bool)getInodeNumber:(unsigned long long *)arg1 error:(id *)arg2;	// IMP=0x0000000000011e1c
- (_Bool)getDeviceNumber:(int *)arg1 error:(id *)arg2;	// IMP=0x0000000000011d94
- (id)bundleIdentifierWithContext:(struct LSContext *)arg1 error:(id *)arg2;	// IMP=0x000000000001225c
- (id)bundleIdentifierWithError:(id *)arg1;	// IMP=0x0000000000012245
- (id)bundleInfoDictionaryWithError:(id *)arg1;	// IMP=0x00000000000120ea
- (struct __CFBundle *)copyCFBundleWithError:(id *)arg1;	// IMP=0x0000000000011fb4
- (_Bool)getWriterBundleIdentifier:(id *)arg1 error:(id *)arg2;	// IMP=0x0000000000012b3a
- (_Bool)getHFSType:(unsigned int *)arg1 creator:(unsigned int *)arg2 error:(id *)arg3;	// IMP=0x0000000000012834
- (_Bool)getLength:(unsigned long long *)arg1 error:(id *)arg2;	// IMP=0x00000000000127ac
- (_Bool)getContentModificationDate:(double *)arg1 error:(id *)arg2;	// IMP=0x0000000000012798
- (_Bool)getCreationDate:(double *)arg1 error:(id *)arg2;	// IMP=0x000000000001252d
- (_Bool)setFinderInfo:(const CDUnion_739f5cf2 *)arg1 error:(id *)arg2;	// IMP=0x0000000000012ce1
- (_Bool)getFinderInfo:(CDUnion_739f5cf2 *)arg1 error:(id *)arg2;	// IMP=0x0000000000012b89
- (_Bool)canReadMetadataFromSandboxWithAuditToken:(const CDStruct_4c969caf *)arg1;	// IMP=0x0000000000013363
- (_Bool)canWriteFromSandboxWithAuditToken:(const CDStruct_4c969caf *)arg1;	// IMP=0x00000000000132ec
- (_Bool)canReadFromSandboxWithAuditToken:(const CDStruct_4c969caf *)arg1;	// IMP=0x0000000000013275
- (_Bool)canReadMetadataWithAuditToken:(const CDStruct_4c969caf *)arg1;	// IMP=0x000000000001312d
- (_Bool)canWriteWithAuditToken:(const CDStruct_4c969caf *)arg1;	// IMP=0x00000000000130b6
- (_Bool)canReadWithAuditToken:(const CDStruct_4c969caf *)arg1;	// IMP=0x000000000001303f
- (_Bool)setExtendedAttribute:(id)arg1 name:(id)arg2 options:(int)arg3 error:(id *)arg4;	// IMP=0x0000000000013968
- (id)extendedAttributeWithName:(id)arg1 options:(int)arg2 error:(id *)arg3;	// IMP=0x00000000000134ab
- (id)initByResolvingBookmarkData:(id)arg1 relativeToNode:(id)arg2 bookmarkDataIsStale:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x0000000000014533
- (id)initByResolvingBookmarkData:(id)arg1 options:(unsigned long long)arg2 relativeToNode:(id)arg3 bookmarkDataIsStale:(_Bool *)arg4 error:(id *)arg5;	// IMP=0x000000000001432e
- (id)bookmarkDataWithOptions:(unsigned long long)arg1 relativeToNode:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000140a1
- (id)bookmarkDataRelativeToNode:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000014084

@end
