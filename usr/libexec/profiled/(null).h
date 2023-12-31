//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;

@interface (null) : NSObject
{
    NSXPCConnection *_xpcConnection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000005ac25
@property(nonatomic) __weak NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)debugRescheduleBackgroundActivity:(long long)arg1 startDate:(id)arg2 gracePeriod:(id)arg3 repeatingInterval:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000005ab29
- (void)managingOrganizationInformationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000005aa5f
- (void)monitorEnrollmentStateWithPersonaID:(id)arg1;	// IMP=0x001000000005a9a0
- (void)createMDMUnlockTokenIfNeededWithPasscode:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005a8b1
- (void)mayShareToAirDropForOriginatingAppBundleID:(id)arg1 originatingAccountIsManaged:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000005a6d9
- (void)mayShareToMessagesForOriginatingAppBundleID:(id)arg1 originatingAccountIsManaged:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000005a501
- (id)prefixedFeaturePromptIdentifierForIdentifier:(id)arg1;	// IMP=0x001000000005a4c7
- (void)cancelFeaturePromptWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005a214
- (void)showFeaturePromptForSetting:(id)arg1 configurationUUID:(id)arg2 promptOptions:(id)arg3 promptIdentifier:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000059cde
- (void)shutDownWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000059b15
- (void)recomputeProfileRestrictionsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000059a51
- (void)validateAppBundleIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000598f0
- (void)setupAssistantDidFinishCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000593d9
- (void)hasMailAccountsWithFilteringEnabled:(_Bool)arg1 sourceAccountManagement:(int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000059256
- (void)allowedKeyboardBundleIDsAfterApplyingFilterToBundleIDs:(id)arg1 hostAppBundleID:(id)arg2 accountIsManaged:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000005903b
- (void)setUserBookmarks:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000058eef
- (void)storeActivationRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000058e00
- (void)createActivationLockBypassCodeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000058d36
- (void)restoreCloudConfigAndMDMProfileFromSetAsideDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000058c22
- (void)cloudConfigurationStoreDetails:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000058b33
- (void)cloudConfigurationMachineInfoDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000058a69
- (void)reducedMachineInfoDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000005899f
- (void)rereadManagedAppAttributesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000588d7
- (void)markStoredProfileForPurposeAsInstalled:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000058807
- (void)profileDataStoredForPurpose:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000058735
- (void)storeProfileData:(id)arg1 configurationSource:(int)arg2 purpose:(int)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000005863c
- (void)removeExpiredProfilesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000058574
- (void)setUserInfo:(id)arg1 forClientUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000058438
- (void)resetAllSettingsToDefaultsIsUserInitiated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005833c
- (void)recomputePerClientUserComplianceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000058278
- (void)recomputeUserComplianceWarningWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000581b4
- (void)notifyHaveSeenComplianceMessageWithLastLockDate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000580cc
- (void)notifyStartComplianceTimer:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000057fe4
- (void)areBundlesBlocked:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000057ba4
- (void)isBundleBlocked:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000057a5e
- (void)removeProvisioningProfileWithUUID:(id)arg1 managingProfileIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000005794f
- (void)installProvisioningProfileData:(id)arg1 managingProfileIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000057842
- (void)storeCertificateData:(id)arg1 forIPCUIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000057735
- (void)openSensitiveURL:(id)arg1 unlock:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000575e9
- (void)removeValueSetting:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000574cb
- (void)removeBoolSetting:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000573ad
- (void)setParametersForSettingsByType:(id)arg1 configurationUUID:(id)arg2 toSystem:(_Bool)arg3 user:(_Bool)arg4 passcode:(id)arg5 credentialSet:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x0010000000056bc9
- (void)migrateCleanupMigratorWithContext:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000056afb
- (void)migrateWithContext:(int)arg1 passcodeWasSetInBackup:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000056a27
- (void)managedWiFiNetworkNamesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000005695d
- (void)managedSystemConfigurationServiceIDsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000056893
- (void)removeOrphanedClientRestrictionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000567cb
- (void)resetPasscodeMetadataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000056703
- (void)isPasscodeCompliantWithNamedPolicy:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000056612
- (void)clearPasscodeWithEscrowKeybagData:(id)arg1 secret:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000056505
- (void)changePasscode:(id)arg1 oldPasscode:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000563c7
- (void)applyRestrictionDictionary:(id)arg1 appsAndOptions:(id)arg2 clientType:(id)arg3 clientUUID:(id)arg4 localizedClientDescription:(id)arg5 localizedWarningMessage:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x001000000005622c
- (_Bool)remoteProcessCanRemoveProfilesOutError:(id *)arg1;	// IMP=0x00100000000561d6
- (_Bool)isCloudLockedProfileWithIdentifier:(id)arg1;	// IMP=0x001000000005611a
- (void)removeProtectedProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000055f13
- (void)removeUninstalledProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 targetDeviceType:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000055d35
- (void)removeProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000055b1a
- (id)_invalidValue:(id)arg1 forArgument:(id)arg2;	// IMP=0x0010000000055a96
- (void)updateProfileIdentifier:(id)arg1 interactive:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000558c3
- (void)popProvisioningProfileFromHeadOfInstallationQueueWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000557f9
- (void)peekProfileDataFromPurgatoryForDeviceType:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005568f
- (void)popProfileDataFromHeadOfInstallationQueueWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000555c5
- (void)queueProfileDataForInstallation:(id)arg1 originalFileName:(id)arg2 originatingBundleID:(id)arg3 transitionToUI:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000005545e
- (void)appleConnect_installMDMAssociatedProfileData:(id)arg1 interactive:(_Bool)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000552d1
- (void)installProfileData:(id)arg1 interactive:(_Bool)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000054f2c
- (void)isProfileInstalledWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000054dd1
- (void)verifiedMDMProfileIdentifierWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000054d0b
- (_Bool)remoteProcessHasEntitlementArray:(id)arg1 containingString:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000054c3d
- (_Bool)remoteProcessHasBooleanEntitlement:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000054b90
- (id)lacksArrayEntitlementError:(id)arg1 withMemberString:(id)arg2;	// IMP=0x0010000000054b09
- (id)lacksBooleanEntitlementError:(id)arg1;	// IMP=0x0010000000054a85
- (id)remoteProcessBundleID;	// IMP=0x00100000000549b9
- (_Bool)remoteProcessHasEntitlementArray:(id)arg1 containingString:(id)arg2;	// IMP=0x001000000005483c
- (id)remoteProcessEntitlementStringArrayForKey:(id)arg1;	// IMP=0x0010000000054634
- (_Bool)remoteProcessHasBooleanEntitlement:(id)arg1;	// IMP=0x001000000005450d
- (void)setAllowedURLStrings:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005441c
- (void)setSpellCheckAllowed:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000054348
- (void)setKeyboardShortcutsAllowed:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000054274
- (void)setContinuousPathKeyboardAllowed:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000541a0
- (void)setPredictiveKeyboardAllowed:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000540cc
- (void)setSmartPunctuationAllowed:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000053ff8
- (void)setAutoCorrectionAllowed:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000053f24
- (void)defaultAppBundleIDForCommunicationServiceType:(id)arg1 forAccountWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000053e8b
- (void)allowedImportFromAppBundleIDs:(id)arg1 importingAppBundleID:(id)arg2 importingIsManaged:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000053ddf
- (void)allowedOpenInAppBundleIDs:(id)arg1 originatingAppBundleID:(id)arg2 originatingIsManaged:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000053d33
- (void)notifyDeviceUnlockedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000053cbd
- (void)notifyDeviceUnlockedAndPasscodeRequiredWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000053c47
- (void)waitForMigrationIncludingPostRestoreMigration:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000053bcb
- (void)checkCarrierProfileAndForceReinstallation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000053b4f
- (void)checkInWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000053a57

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

