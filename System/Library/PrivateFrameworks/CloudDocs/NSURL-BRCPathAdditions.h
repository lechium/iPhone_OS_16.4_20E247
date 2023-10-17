//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@class NSPersonNameComponents, NSString;

@interface NSURL (BRCPathAdditions)
+ (id)brc_ciconiaDumpDirForCurrentPersona;	// IMP=0x00200000000098d7
+ (id)brc_ciconiaWorkDirForCurrentPersona;	// IMP=0x002000000000956c
+ (id)brc_fileURLWithVolumeDeviceID:(id)arg1 fileID:(id)arg2 isDirectory:(_Bool)arg3;	// IMP=0x00200000000092f6
+ (id)brc_fileURLWithFileDescriptor:(int)arg1;	// IMP=0x00200000000091be
+ (void)br_containerIDsWithExternalReferencesTo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0020000000052484
+ (id)br_documentURLFromBookmarkableString:(id)arg1 error:(id *)arg2;	// IMP=0x0020000000051f53
+ (void)br_documentURLFromBookmarkableString:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0020000000051d7f
+ (id)br_documentURLFromFileObjectID:(id)arg1 error:(id *)arg2;	// IMP=0x0020000000051bb2
- (id)brc_issueSandboxExtensionOfClass:(const char *)arg1 error:(id *)arg2;	// IMP=0x00100000000093e4
- (void)_br_fetchItemServiceSyncProxy:(CDUnknownBlockType)arg1;	// IMP=0x0010000000041ffb
- (id)_br_itemServiceSyncProxy;	// IMP=0x0010000000041fdf
- (_Bool)br_setTagNames:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000434d4
- (_Bool)br_getTagNames:(id *)arg1 error:(id *)arg2;	// IMP=0x0010000000042bbc
- (id)br_addFakeConflictLoserFromItemAtURL:(id)arg1 lastEditorDeviceName:(id)arg2 error:(id *)arg3;	// IMP=0x001000000004fdbb
- (id)br_addFakeConflictLoserFromItemAtURL:(id)arg1 lastEditorDeviceName:(id)arg2 lastEditorUserName:(id)arg3 error:(id *)arg4;	// IMP=0x001000000004fda6
@property(readonly, nonatomic) NSPersonNameComponents *br_lastEditorNameComponents;
@property(readonly, nonatomic) NSString *br_lastEditorName;
@property(readonly, nonatomic) NSString *br_lastEditorDeviceName;
- (id)br_creatorNameComponentsWithError:(id *)arg1;	// IMP=0x00100000000552e8
- (_Bool)br_isModifiedSinceShared;	// IMP=0x0010000000055286
- (_Bool)br_isTopLevelSharedItem;	// IMP=0x0010000000055224
- (unsigned short)br_capabilityToMoveToURL:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000055061
- (_Bool)br_isSymLink;	// IMP=0x0010000000054fd9
- (_Bool)br_wouldBeExcludedFromSync;	// IMP=0x0010000000054f90
- (id)br_typeIdentifierWithError:(id *)arg1;	// IMP=0x0010000000054f25
- (_Bool)br_setAccessTime:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0010000000054d46
- (void)br_addPhysicalProperty;	// IMP=0x0010000000054cbf
- (_Bool)br_isPromiseURL;	// IMP=0x0010000000054caf
- (id)br_logicalURL;	// IMP=0x0010000000054c67
- (id)br_documentRecordIDWithError:(id *)arg1;	// IMP=0x0010000000054c46
- (id)br_itemID;	// IMP=0x0010000000054b74
- (id)br_URLByResolvingExternalDocumentReferenceWithError:(id *)arg1;	// IMP=0x0010000000054499
- (id)br_URLByResolvingInProcessExternalDocumentReferenceWithProperties:(id)arg1;	// IMP=0x0010000000054008
- (id)br_externalDocumentPropertiesWithError:(id *)arg1;	// IMP=0x0010000000053eb2
- (_Bool)br_isExternalDocumentReference;	// IMP=0x0010000000053daf
- (id)br_cloudDocsContainer;	// IMP=0x0010000000053bc7
- (_Bool)br_mightBeBRAlias;	// IMP=0x0010000000053b32
- (_Bool)br_isDocumentsContainer;	// IMP=0x0010000000053aff
- (id)br_containerIDIfIsDesktopOrDocumentsURL;	// IMP=0x0010000000053af7
- (id)br_containerIDIfIsDocumentsContainerURL;	// IMP=0x00100000000535d9
- (id)br_containerID;	// IMP=0x00100000000534c1
- (_Bool)br_isInSharedDocsContainer;	// IMP=0x00100000000534b9
- (void)br_isConflictedWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000533ee
- (_Bool)br_isInCloudDocsPrivateStoragesForRemoteDocumentVersions;	// IMP=0x0010000000053248
- (_Bool)br_isInCloudDocsPrivateStorages;	// IMP=0x00100000000530ce
- (_Bool)_br_isInSyncedLocationStrictly:(_Bool)arg1;	// IMP=0x0010000000052ff7
- (_Bool)_br_isInSyncedLocationWithCurrentPersonaID:(id)arg1 strictly:(_Bool)arg2 foundHomeDirectory:(_Bool)arg3 adoptionError:(id)arg4;	// IMP=0x0010000000052fe5
- (_Bool)_br_mightBeInSyncedLocationUnderCurrentPersonaID:(id)arg1 strictly:(_Bool)arg2;	// IMP=0x0010000000052e7e
- (_Bool)br_isStrictlyInSyncedLocation;	// IMP=0x0010000000052e67
- (_Bool)br_isInSyncedLocation;	// IMP=0x0010000000052e53
- (_Bool)br_isInSyncedDocuments;	// IMP=0x0010000000052df7
- (_Bool)br_isInSyncedDesktop;	// IMP=0x0010000000052cf0
- (_Bool)br_isInMobileDocuments;	// IMP=0x0010000000052cde
- (_Bool)br_isInTrash;	// IMP=0x0010000000052bb2
- (id)br_debugDescription;	// IMP=0x0010000000052887
- (id)br_pathRelativeToMobileDocuments;	// IMP=0x001000000005270b
- (id)br_pathRelativeToSyncedRootURLForContainerID:(id)arg1;	// IMP=0x00100000000525e0
- (void)br_containerIDsWithExternalReferencesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000052313
- (void)br_bookmarkableStringForRemoteOpeningAppWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000051b06
- (void)br_bookmarkableStringWithEtag:(_Bool)arg1 onlyAllowItemKnowByServer:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000517fc
- (void)br_bookmarkableStringWithEtag:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000517e5
- (void)_br_bookmarkableStringForRemoteOpeningAppWithBundleID:(id)arg1 onlyAllowItemKnowByServer:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000005136f
- (id)br_cachedBookmarkData;	// IMP=0x001000000005132d
- (void)br_preCacheBookmarkData:(id)arg1 versionEtag:(id)arg2;	// IMP=0x00100000000512a8
- (_Bool)br_isParentOfURL:(id)arg1;	// IMP=0x0010000000051294
- (_Bool)br_isParentOfURL:(id)arg1 strictly:(_Bool)arg2;	// IMP=0x0010000000050ef4
- (_Bool)br_isInLocalHomeDirectory;	// IMP=0x0010000000050e15
- (id)br_realpathURL;	// IMP=0x0010000000050d91
- (id)_br_getAttributeValue:(id)arg1 withSecondaryConnection:(_Bool)arg2 withError:(id *)arg3;	// IMP=0x001000000005573f
- (_Bool)br_mightBeOnDataSeparatedVolume;	// IMP=0x00100000000560f9
- (id)br_containerIDWithCurrentPersonaID:(id)arg1 needsPersonaSwitch:(_Bool)arg2;	// IMP=0x0010000000055f8a
- (id)br_containerIDWithCurrentPersonaID:(id)arg1;	// IMP=0x0010000000055f76
- (id)br_pathRelativeToSyncedRootURL:(id)arg1 currentPersonaID:(id)arg2;	// IMP=0x0010000000055e0a
- (_Bool)_br_isInLocalHomeDirectoryUnderCurrentPersona;	// IMP=0x0010000000055dac
- (_Bool)_br_isInLocalHomeDirectoryUnderPersona:(id)arg1 needsPersonaSwitch:(_Bool)arg2;	// IMP=0x0010000000055cde
- (_Bool)_br_isInPersonaRoot:(id)arg1;	// IMP=0x0010000000055b1b
- (id)br_physicalURL;	// IMP=0x001000000006ec56
@end
