//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@class NSString;

@interface NSURL (TSUAdditions)
+ (id)tsu_fileURLWithPath:(id)arg1;	// IMP=0x001000000028140f
+ (id)URLWithPackagePart:(id)arg1;	// IMP=0x0010000000190525
@property(readonly, getter=tsu_isInTrash) _Bool tsu_inTrash;
- (void)tsu_removeCachedResourceValueForKeys:(id)arg1;	// IMP=0x00100000002816f8
- (id)tsu_fileProviderBookmarkableString;	// IMP=0x0010000000281444
- (_Bool)tsu_isOnSameVolumeAs:(id)arg1;	// IMP=0x001000000028117b
- (id)tsu_reachableFileURLByDeletingUnreachablePathComponents;	// IMP=0x001000000028107c
- (_Bool)tsu_isOnAPFSVolume;	// IMP=0x0010000000281010
- (_Bool)tsu_isOnForeignVolume;	// IMP=0x0010000000281008
- (id)tsu_fileSystemTypeName;	// IMP=0x0010000000280e52
- (id)tsu_fileTypeIdentifierHandlingFileCoordinationPromises;	// IMP=0x0010000000280e0d
- (_Bool)tsu_setNeedsDocumentIdentifierAndReturnError:(out id *)arg1;	// IMP=0x0010000000280d19
- (_Bool)tsu_shareOwnerName:(out id *)arg1 error:(id *)arg2;	// IMP=0x0010000000280ca4
- (id)tsu_shareOwnerName;	// IMP=0x0010000000280c6a
- (_Bool)tsu_isDocumentUploaded:(out _Bool *)arg1 error:(id *)arg2;	// IMP=0x0010000000280865
- (_Bool)tsu_isDocumentUploaded;	// IMP=0x001000000028083d
- (_Bool)tsu_displayName:(out id *)arg1 error:(id *)arg2;	// IMP=0x00100000002806d1
- (id)tsu_displayName;	// IMP=0x0010000000280697
- (_Bool)tsu_isShareOwner:(out _Bool *)arg1 error:(id *)arg2;	// IMP=0x001000000028068f
- (_Bool)tsu_isShareOwner;	// IMP=0x0010000000280667
- (_Bool)tsu_isShareCollaborator:(out _Bool *)arg1 error:(id *)arg2;	// IMP=0x001000000028065f
- (_Bool)tsu_isShareCollaborator;	// IMP=0x0010000000280637
- (_Bool)_isShareRole:(out _Bool *)arg1 role:(id)arg2 error:(id *)arg3;	// IMP=0x00100000002805a2
- (_Bool)tsu_isShared:(out _Bool *)arg1 error:(id *)arg2;	// IMP=0x001000000028057a
- (_Bool)tsu_isShared;	// IMP=0x0010000000280552
- (_Bool)tsu_fileSize:(out unsigned long long *)arg1 error:(id *)arg2;	// IMP=0x00100000002801bc
- (unsigned long long)tsu_fileSize;	// IMP=0x001000000028018f
- (_Bool)tsu_isFileSizeTooLargeForSharing;	// IMP=0x0010000000280173
- (void)tsu_performSecurityScopedResourceAccessAsynchronouslyUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000002800d3
- (void)tsu_performSecurityScopedResourceAccessUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000280074
- (id)tsu_documentIdentifier;	// IMP=0x001000000028001a
- (_Bool)tsu_conformsToAnyUTI:(id)arg1;	// IMP=0x001000000029d023
- (_Bool)tsu_conformsToUTI:(id)arg1;	// IMP=0x001000000029cff2
@property(readonly, nonatomic) NSString *tsu_UTI;
@property(readonly) NSURL *URL;
- (_Bool)isInternalToPackage;	// IMP=0x00100000001907dc
- (id)initWithPackagePart:(id)arg1;	// IMP=0x0010000000190582

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

