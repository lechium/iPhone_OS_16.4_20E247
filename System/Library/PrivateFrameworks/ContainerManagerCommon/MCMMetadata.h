//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCMConcreteContainerIdentityForLibsystem, MCMContainerPath, MCMFSNode, MCMUserIdentity, NSArray, NSDictionary, NSNumber, NSString, NSURL, NSUUID;

__attribute__((visibility("hidden")))
@interface MCMMetadata
{
    int _dataProtectionClass;	// 40 = 0x28
    NSDictionary *_info;	// 48 = 0x30
    NSString *_userManagedAssetsDirName;	// 56 = 0x38
    MCMFSNode *_fsNode;	// 64 = 0x40
    NSURL *_fileURL;	// 72 = 0x48
    NSArray *_links;	// 80 = 0x50
    NSDictionary *_identityLinkMap;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000496e8
@property(readonly, nonatomic) NSDictionary *identityLinkMap; // @synthesize identityLinkMap=_identityLinkMap;
@property(readonly, nonatomic) NSArray *links; // @synthesize links=_links;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, nonatomic) int dataProtectionClass; // @synthesize dataProtectionClass=_dataProtectionClass;
@property(readonly, nonatomic) MCMFSNode *fsNode; // @synthesize fsNode=_fsNode;
@property(readonly, nonatomic) NSString *userManagedAssetsDirName; // @synthesize userManagedAssetsDirName=_userManagedAssetsDirName;
@property(readonly, nonatomic) NSDictionary *info; // @synthesize info=_info;
- (_Bool)_writeFileURL:(id)arg1 dictionary:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x0000000000049354
- (_Bool)_persisted;	// IMP=0x00000000000492fe
- (void)_clearPersistedStatus;	// IMP=0x0000000000049235
- (void)_initIdentityMap;	// IMP=0x0000000000048f72
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *shortDescription;
@property(readonly, copy) NSString *debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000048d4e
- (id)linkForContainerIdentity:(id)arg1;	// IMP=0x0000000000048c62
- (id)metadataBySettingUserManagedAssetsDirName:(id)arg1;	// IMP=0x0000000000048bb9
- (id)metadataByChangingDataProtectionClass:(int)arg1;	// IMP=0x0000000000048b4b
- (id)metadataByReplacingLinks:(id)arg1;	// IMP=0x0000000000048a95
- (id)metadataByRemovingLink:(id)arg1 attributes:(unsigned long long)arg2 updatedLink:(id *)arg3 error:(id *)arg4;	// IMP=0x00000000000482bd
- (id)metadataByAddingLink:(id)arg1 updatedLink:(id *)arg2 error:(id *)arg3;	// IMP=0x0000000000047bc8
- (struct container_object_s *)createLibsystemContainerWithError:(id *)arg1;	// IMP=0x0000000000047aa7
- (id)metadataBySettingInfoValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000004786f
- (_Bool)verifyWithError:(id *)arg1;	// IMP=0x0000000000046ecd
- (_Bool)writeMetadataToFileURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000004613c
- (_Bool)writeMetadataToDiskWithError:(id *)arg1;	// IMP=0x0000000000046051
- (_Bool)_initFromMetadataInDictionary:(id)arg1 containerPath:(id)arg2 userIdentity:(id)arg3 containerClass:(unsigned long long)arg4 fsNode:(id)arg5 fileURL:(id)arg6 userIdentityCache:(id)arg7 error:(id *)arg8;	// IMP=0x00000000000456fb
- (id)initByReadingAndValidatingMetadataAtFileURL:(id)arg1 containerPath:(id)arg2 userIdentity:(id)arg3 containerClass:(unsigned long long)arg4 userIdentityCache:(id)arg5 error:(id *)arg6;	// IMP=0x0000000000045605
- (id)initWithContainerIdentity:(id)arg1 info:(id)arg2 containerPath:(id)arg3 userManagedAssetsDirName:(id)arg4 schemaVersion:(id)arg5 dataProtectionClass:(int)arg6 fsNode:(id)arg7 links:(id)arg8 userIdentityCache:(id)arg9;	// IMP=0x0000000000045471
- (id)initWithContainerIdentity:(id)arg1 info:(id)arg2 containerPath:(id)arg3 userManagedAssetsDirName:(id)arg4 schemaVersion:(id)arg5 dataProtectionClass:(int)arg6 userIdentityCache:(id)arg7;	// IMP=0x0000000000045411
- (id)initWithContainerIdentity:(id)arg1 containerPath:(id)arg2 schemaVersion:(id)arg3 userIdentityCache:(id)arg4;	// IMP=0x00000000000453aa

// Remaining properties
@property(readonly, nonatomic) unsigned long long containerClass;
@property(readonly, nonatomic) MCMConcreteContainerIdentityForLibsystem *containerIdentity;
@property(readonly, nonatomic) MCMContainerPath *containerPath;
@property(readonly, nonatomic) _Bool existed;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) unsigned int platform;
@property(readonly, nonatomic) NSNumber *schemaVersion;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool transient;
@property(readonly, nonatomic) MCMUserIdentity *userIdentity;
@property(readonly, nonatomic) NSUUID *uuid;

@end

