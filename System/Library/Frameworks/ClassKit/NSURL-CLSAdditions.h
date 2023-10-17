//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@interface NSURL (CLSAdditions)
+ (id)cls_draftsURLAndReturnError:(id *)arg1;	// IMP=0x002000000001a320
+ (id)cls_draftsURL;	// IMP=0x002000000001a30c
+ (id)cls_documentsURLAndReturnError:(id *)arg1;	// IMP=0x002000000001a224
+ (id)cls_documentsURL;	// IMP=0x002000000001a210
+ (void)cls_getUbiquitousContainerURLWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x002000000001a0ee
+ (id)cls_ubiquitousContainerURL;	// IMP=0x002000000001a034
+ (id)cls_configURL;	// IMP=0x0020000000019f65
+ (id)cls_libraryURL;	// IMP=0x0020000000019e39
+ (_Bool)cls_deleteFileAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x002000000001c492
+ (void)cls_deleteFileAtExpectedURL:(id)arg1 containerURL:(id)arg2 itemID:(id)arg3 ownerName:(id)arg4 zoneName:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x002000000001c327
+ (void)cls_urlSuitableForOpeningForExpectedURL:(id)arg1 containerURL:(id)arg2 itemID:(id)arg3 ownerName:(id)arg4 zoneName:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x002000000001aede
+ (id)cls_ubiquitousContainerURL_Imp:(id *)arg1;	// IMP=0x002000000001ac7e
- (unsigned long long)_cls_stableHash;	// IMP=0x001000000001ac3a
- (void)cls_removeCachedResourceValueForKeys:(id)arg1;	// IMP=0x001000000001ab10
- (id)cls_createDirectoryIfNeeded:(id *)arg1;	// IMP=0x001000000001a941
- (_Bool)cls_isParentOfURL:(id)arg1;	// IMP=0x001000000001a8a1
@property(readonly, nonatomic) _Bool cls_fileExists;
@property(readonly, nonatomic) _Bool cls_isUploaded;
@property(readonly, nonatomic) _Bool cls_isUbiquitous;
- (id)cls_pathRelativeToURL:(id)arg1;	// IMP=0x001000000001a408
- (id)deleteContent;	// IMP=0x001000000001e234
- (long long)totalAllocatedSizeIncludingSubDirectories:(_Bool)arg1 error:(id *)arg2;	// IMP=0x001000000001dc03
- (void)attachSandboxExtensionToken:(id)arg1;	// IMP=0x001000000001dbf6
- (id)sandboxExtensionTokenForProcess:(CDStruct_6ad76789)arg1;	// IMP=0x001000000001db51
- (id)sandboxExtensionTokenForAnyProcess;	// IMP=0x001000000001dac5
- (void)cls_performWithSandboxAccess:(CDUnknownBlockType)arg1;	// IMP=0x001000000001da5a
- (void)cls_checkForCKShareWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000001d4d7
- (void)cls_createShareIfNeededWithOrgAdminUserRecordID:(id)arg1 userRecordID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000001c770
@end
