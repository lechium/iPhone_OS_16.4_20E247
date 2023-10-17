//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCNotifier, NSFileManager;

@interface MCMigrator : NSObject
{
    _Bool _systemProfileStorageWasMigratedFromLegacyStorage;	// 8 = 0x8
    NSFileManager *_fileManager;	// 16 = 0x10
    MCNotifier *_notifier;	// 24 = 0x18
}

+ (id)stringWithContext:(int)arg1;	// IMP=0x004000000002d67f
+ (_Bool)payloadHasHardwareBoundKey:(id)arg1;	// IMP=0x001000000002d628
- (void).cxx_destruct;	// IMP=0x002000000003c069
@property(nonatomic) _Bool systemProfileStorageWasMigratedFromLegacyStorage; // @synthesize systemProfileStorageWasMigratedFromLegacyStorage=_systemProfileStorageWasMigratedFromLegacyStorage;
@property(retain, nonatomic) MCNotifier *notifier; // @synthesize notifier=_notifier;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
- (void)_checkForStaleAPNCarrierFile;	// IMP=0x001000000003bcb6
- (void)_wakeDaemonsPostMigration;	// IMP=0x001000000003bc69
- (void)_correctCloudConfigurationIfNecessary;	// IMP=0x001000000003bc57
- (void)_validateCloudConfiguration;	// IMP=0x001000000003b9c8
- (void)_tagIMAPAccountsWithProfileAndPayloadProperties;	// IMP=0x001000000003b964
- (void)_tagManagedAccounts;	// IMP=0x001000000003b5d5
- (void)_correctInstallOptionsOnProfileStubs;	// IMP=0x001000000003b0e8
- (void)_removeUnmanageableApps;	// IMP=0x001000000003ac04
- (void)_cleanUpAppConfiguration;	// IMP=0x001000000003a240
- (void)_removeSupervisionProfiles;	// IMP=0x0010000000039f2d
- (id)_generatedManifestIfNeededFromOrderedProfiles:(id)arg1 hiddenProfiles:(id)arg2 existingManifest:(id)arg3;	// IMP=0x0010000000039d5b
- (void)_profilesFromStubsAtPath:(id)arg1 orderedProfiles:(id *)arg2 hiddenProfiles:(id *)arg3;	// IMP=0x0010000000039866
- (id)_profilesFromManifestAtPath:(id)arg1;	// IMP=0x00100000000394f5
- (void)_fixManifestFromStubsIfNecessaryWithStubPath:(id)arg1 manifestPath:(id)arg2;	// IMP=0x001000000003925e
- (void)_fixManifestFromStubsIfNecessary;	// IMP=0x00100000000391a3
- (void)_migrateLostModeLastLocationRequestDate;	// IMP=0x0010000000038c2c
- (void)_migrateSharedDeviceConfiguration;	// IMP=0x0010000000038b05
- (void)_applyImpliedSettings;	// IMP=0x00100000000389c5
- (void)_updateProfileRestrictions;	// IMP=0x0010000000038649
- (id)_updateProfileRestrictionsForProfileRestrictions:(id)arg1;	// IMP=0x00100000000383c8
- (void)_updateClientRestrictions;	// IMP=0x0010000000037ff9
- (void)_migrateClientRestrictions;	// IMP=0x0010000000037868
- (void)_migrateSettings;	// IMP=0x00100000000363cd
- (void)_migrateBoolValueToFeature:(id)arg1 withAppID:(id)arg2 forKey:(id)arg3 synchronize:(_Bool)arg4;	// IMP=0x00100000000362e9
- (void)_migrateValueRestrictions:(id)arg1 withAppID:(id)arg2 forKey:(id)arg3 keysToRestricitons:(id)arg4 currentValueUserSettings:(id)arg5;	// IMP=0x0010000000035f49
- (void)_migrateBoolRestrictions:(id)arg1 withAppID:(id)arg2 forKey:(id)arg3 valuesToRestrictions:(id)arg4 currentBoolUserSettings:(id)arg5;	// IMP=0x0010000000035b86
- (void)_applyDefaultSettings;	// IMP=0x00100000000352a0
- (void)_removeOriginalCopies;	// IMP=0x0010000000034f7f
- (void)_transferTagsToProfileStubs;	// IMP=0x0010000000034b97
- (_Bool)_applyAccountTagsToProfile:(id)arg1;	// IMP=0x00100000000347c0
- (void)_transferInstallationDatesFromOriginalProfiles;	// IMP=0x00100000000341d4
- (void)_migrateOTAProfiles;	// IMP=0x0010000000033267
- (void)_transferRemovalPasswordsFromOriginalProfiles;	// IMP=0x0010000000032b09
- (void)_transferSignerCertificates;	// IMP=0x00100000000321ce
- (void)_moveSignerCertificatesInProfileStubDictionary:(id)arg1;	// IMP=0x0010000000031f03
- (id)_removeOrphanedManifestEntriesFromManifestInDirectory:(id)arg1;	// IMP=0x00100000000318b0
- (void)_removeOrphanedManifestEntries;	// IMP=0x001000000003171d
- (void)_createStubs;	// IMP=0x0010000000030f1b
- (void)_removeDuplicatedHiddenIdentifiers;	// IMP=0x0010000000030ba7
- (void)_removeUnusedManifestArrays;	// IMP=0x0010000000030a44
- (void)_migrateManifestLocation;	// IMP=0x001000000003050a
- (void)_moveFilesToPublicDirectories;	// IMP=0x0010000000030318
- (void)_removeLegacyProfileStorageDirectory;	// IMP=0x00100000000301a5
- (_Bool)_isDirectoryEmptyAtPath:(id)arg1;	// IMP=0x0010000000030103
- (_Bool)_isLegacyProfileStoragePresent;	// IMP=0x0010000000030087
- (_Bool)_shouldAttemptToMigrateLegacyProfileStorage;	// IMP=0x0010000000030030
- (_Bool)_copyAlmostAtomicallyItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;	// IMP=0x001000000002fcff
- (id)_attributeDictionaryForProfileStorageWithPosixPermissions:(unsigned long long)arg1;	// IMP=0x001000000002fc38
- (id)_attributesForUserProfileStorageItem;	// IMP=0x001000000002fc21
- (id)_attributesForSystemProfileStorageItems;	// IMP=0x001000000002fc0a
- (void)_setAttributesOnSystemProfileStorageDirectory;	// IMP=0x001000000002fadd
- (void)_removeExistingSystemProfileStorageDirectoryBlockingMigration;	// IMP=0x001000000002f9a5
- (void)_migrateLegacySystemProfileStorage;	// IMP=0x001000000002f810
- (void)_createSystemProfileStorageDirectoryMigratingFromLegacyStorageIfNecessary;	// IMP=0x001000000002f70c
- (void)_sendCloudConfigurationChangedNotificationIfWeMigratedLegacyProfileStorage;	// IMP=0x001000000002f6b3
- (void)_fixPermissionsOnTheSystemProfileLibraryDirectoryAndContents;	// IMP=0x001000000002f59f
- (void)_createSystemGroupContainerAndMoveFiles;	// IMP=0x001000000002f3dc
- (void)_removeInvalidOptionsFromLegacyCloudConfiguration;	// IMP=0x001000000002f249
- (void)_createDirectories;	// IMP=0x001000000002f109
- (void)_fixDirectoryAtPath:(id)arg1 permissions:(id)arg2;	// IMP=0x001000000002f03c
- (void)_createDirectoryAtPath:(id)arg1 attributes:(id)arg2;	// IMP=0x001000000002eec2
- (void)_createDirectoryAtPath:(id)arg1;	// IMP=0x001000000002ee12
- (void)migrateWithPostMigrationTaskQueue:(id)arg1;	// IMP=0x001000000002e4af
- (void)migrateCleanupMigratorWithContext:(int)arg1;	// IMP=0x001000000002ddd0
- (void)_removeMDMProfileIfUserEnrollment;	// IMP=0x001000000002daae
- (void)migratePostDataMigratorWithContext:(int)arg1 passcodeWasSetInBackup:(_Bool)arg2;	// IMP=0x001000000002d6a0
- (void)_removeHardwareBoundPayloads;	// IMP=0x001000000002d622
- (void)_removeOSXServerPayloadAccount;	// IMP=0x001000000002d5d5
- (void)_removeiPCUCertificates;	// IMP=0x001000000002d329
- (_Bool)_isMultiUserMode;	// IMP=0x001000000002d28e
- (void)_migratePasscodeDidRestore:(_Bool)arg1 passcodeWasSet:(_Bool)arg2 historyRequired:(_Bool)arg3;	// IMP=0x001000000002d201
- (id)_lastUserMigratedBuildVersion;	// IMP=0x001000000002d1a7
- (id)_lastSystemMigratedBuildVersion;	// IMP=0x001000000002d14d
- (void)setUserMetadataDictionary:(id)arg1;	// IMP=0x001000000002d0f5
- (id)userMetadataDictionary;	// IMP=0x001000000002d00d
- (void)setSystemMetadataDictionary:(id)arg1;	// IMP=0x001000000002cfb5
- (id)systemMetadataDictionary;	// IMP=0x001000000002cecd
- (id);	// IMP=0x001000000002ce54

@end
