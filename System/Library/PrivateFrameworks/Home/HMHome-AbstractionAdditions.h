//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMHome.h>

@class NSArray, NSDate, NSSet, NSString, NSUUID, UIImage;

@interface HMHome (AbstractionAdditions)
+ (_Bool)hf_prefersAutoSynthesizedDescription;	// IMP=0x00100000000a7e7c
+ (id)_hf_appDataKeyForColorPaletteOfType:(unsigned long long)arg1;	// IMP=0x001000000010b896
+ (id)_hf_standaloneTopicNameLocalizationKeyForPrimaryServiceType:(id)arg1;	// IMP=0x0010000000209b8f
+ (id)_hf_groupedServiceTypeTopics;	// IMP=0x0010000000209363
@property(readonly, nonatomic) NSSet *hf_accessoryLikeObjects;
- (id)hf_handleForUser:(id)arg1;	// IMP=0x0010000000091930
- (id)hf_userForHandle:(id)arg1;	// IMP=0x0010000000091746
- (id)hf_stateDumpBuilderWithContext:(id)arg1;	// IMP=0x00100000000a7e84
- (id)hf_home;	// IMP=0x00100000000b21e4
- (unsigned long long)hf_favoriteCameraCountExcludingHomeKitObjects:(id)arg1;	// IMP=0x00100000000c3f26
- (id)hf_accessoryRepresentableUsageCountsByRoomWithFilter:(CDUnknownBlockType)arg1;	// IMP=0x0010000000110e54
- (id)hf_shortcutsComponentActionSetWithActions:(id)arg1;	// IMP=0x0010000000110e35
- (_Bool)hf_canUpdateToHH2;	// IMP=0x0010000000110d91
- (_Bool)hf_hasFavorites;	// IMP=0x0010000000110d31
- (id)hf_setShowPredictedScenesOnDashboard:(_Bool)arg1;	// IMP=0x0010000000110ab6
- (_Bool)hf_showPredictedScenesOnDashboard;	// IMP=0x0010000000110a2c
- (id)hf_ecosystemAccessoryUUIDMapFuture;	// IMP=0x0010000000110a0c
- (id)hf_fetchExistingWalletKeyEncodedPKPass;	// IMP=0x00100000001106fa
- (id)hf_fetchAvailableWalletKeyEncodedPKPass;	// IMP=0x00100000001103e8
- (void)hf_clearCachedWalletKeyDeviceStateForCurrentDevice;	// IMP=0x00100000001103b0
- (id)hf_walletKeyDeviceStatesOfCompatiblePairedWatches;	// IMP=0x001000000010fe66
- (id)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;	// IMP=0x001000000010fb31
- (id)hf_hasWalletKeyCompatibleDevice;	// IMP=0x001000000010f7be
- (_Bool)hf_hasHomeHubSupportingAccessCodes;	// IMP=0x001000000010f757
- (id)hf_setHasOnboardedForAccessCode;	// IMP=0x001000000010f47f
- (_Bool)hf_canAddAccessCode;	// IMP=0x001000000010f415
- (id)hf_accessoriesSupportingAccessCodes;	// IMP=0x001000000010f3a9
- (id)hf_walletKeyColorToDisplay;	// IMP=0x001000000010f25c
- (id)_hf_existingWalletKeyColorForCurrentDevice;	// IMP=0x001000000010f077
- (id)_hf_fetchWalletKeyColorFromAccessories;	// IMP=0x001000000010eded
- (id)hf_fetchWalletKeyDeviceStateForPairedWatches;	// IMP=0x001000000010eafd
- (id)hf_formattedErrorForWalletKeyDeviceStateForCurrentDevice;	// IMP=0x001000000010e6cf
- (_Bool)hf_hasHomeHubSupportingWalletKey;	// IMP=0x001000000010e668
- (id)hf_setHasOnboardedForWalletKey;	// IMP=0x001000000010e390
- (id)hf_addWalletKeyToPairedWatchesWithOptions:(long long)arg1;	// IMP=0x001000000010df43
- (id)hf_addWalletKeyWithOptions:(long long)arg1;	// IMP=0x001000000010da25
- (id)hf_enableExpressModeForWalletKeyWithAuthData:(id)arg1;	// IMP=0x001000000010d5a4
- (id)hf_walletKeyInWalletAppURL;	// IMP=0x001000000010ce68
- (id)hf_walletKeyUUID;	// IMP=0x001000000010ccd2
- (id)hf_hasWalletKey;	// IMP=0x001000000010caee
- (id)hf_fetchWalletKeyDeviceStateForCurrentDeviceIfNecessary;	// IMP=0x001000000010ca73
- (id)_hf_cachedWalletKeyDeviceStateForCurrentDevice;	// IMP=0x001000000010ca62
- (id)hf_fetchWalletKeyDeviceStateForCurrentDevice;	// IMP=0x001000000010c621
- (id)hf_walletKeyAccessories;	// IMP=0x001000000010c5b5
- (id)hf_updateAccessControlDescriptor:(id)arg1;	// IMP=0x001000000010bbf2
- (id)hf_accessControlDescriptor;	// IMP=0x001000000010bb49
- (id)hf_updateColorPalette:(id)arg1 type:(unsigned long long)arg2;	// IMP=0x001000000010b9ab
- (id)hf_colorPaletteOfType:(unsigned long long)arg1;	// IMP=0x001000000010b8b0
@property(readonly, nonatomic) _Bool hf_hasAutomatableProfiles;
@property(readonly, nonatomic) _Bool hf_hasAutomatableServices;
- (_Bool)hf_isAutomatable;	// IMP=0x001000000010b6ce
- (_Bool)hf_userCanCreateTrigger;	// IMP=0x001000000010b58c
- (_Bool)hf_userIsAllowedToEditTrigger;	// IMP=0x001000000010b57a
- (_Bool)hf_userIsAllowedToCreateTrigger;	// IMP=0x001000000010b568
@property(readonly, nonatomic) _Bool hf_isAbleToAddTrigger;
- (_Bool)hf_hasAnyVisibleTriggers;	// IMP=0x001000000010b302
- (_Bool)hf_hasEnabledResident;	// IMP=0x001000000010b166
- (void)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;	// IMP=0x001000000010b09b
- (_Bool)hf_cameraRecordingHasBeenOnboarded;	// IMP=0x001000000010b089
- (_Bool)hf_hasAtleastOneOasisEnabledHomePod;	// IMP=0x001000000010afa7
- (_Bool)hf_canEnableAudioAnalysisAfterHH2Upgrade;	// IMP=0x001000000010ae12
- (_Bool)hf_hasAtleastOneSafetyAndSecuritySupportedAccessory;	// IMP=0x001000000010adca
- (id)hf_safetyAndSecuritySupportedAccessories;	// IMP=0x001000000010adb8
- (_Bool)hf_hasAtleastOneAudioAnalysisSupportedAccessory;	// IMP=0x001000000010ad70
- (id)hf_audioAnalysisSupportedAccessories;	// IMP=0x001000000010ad04
- (_Bool)hf_hasAtleastOneReachableHomePod;	// IMP=0x001000000010aca4
- (_Bool)hf_atleastOneMediaAccessorySupportsAndHasAnnounceEnabled;	// IMP=0x001000000010a9ce
- (_Bool)hf_atleastOneHomePodSupportsAnnounce;	// IMP=0x001000000010a96e
- (_Bool)hf_shouldShowAnnounceFeatureForThisHome;	// IMP=0x001000000010a966
- (_Bool)hf_shouldShowAnnounceButtonForThisHome;	// IMP=0x001000000010a95e
- (void)hf_startReprovisioningAccessory:(id)arg1;	// IMP=0x001000000010a790
- (_Bool)hf_supportsReachabilityNotifications;	// IMP=0x001000000010a729
- (_Bool)hf_hasCameraRecordingResident;	// IMP=0x001000000010a6c2
- (_Bool)hf_hasRMVCapableAppleTV;	// IMP=0x001000000010a6ba
- (_Bool)hf_hasAppleTVs;	// IMP=0x001000000010a65a
- (unsigned long long)hf_numberOfHomePods;	// IMP=0x001000000010a560
- (_Bool)hf_hasHomePods;	// IMP=0x001000000010a500
- (_Bool)hf_hasMediaAccessories;	// IMP=0x001000000010a4a0
- (_Bool)hf_supportsSharedEventAutomation;	// IMP=0x001000000010a410
- (_Bool)hf_isMediaAccessoryProfileValid:(id)arg1;	// IMP=0x001000000010a2e9
- (_Bool)hf_isPresenceAuthorizedForUser:(id)arg1;	// IMP=0x001000000010a219
- (id)hf_allNonOwnerUsers;	// IMP=0x001000000010a13f
- (id)hf_allNonAdminUsers;	// IMP=0x001000000010a000
- (id)hf_allUsersIncludingCurrentUser;	// IMP=0x0010000000109f53
- (_Bool)hf_hasEnabledResidentSupportingThirdPartySoftwareUpdate;	// IMP=0x0010000000109f4b
- (_Bool)hf_enabledResidentsSupportsNaturalLight;	// IMP=0x0010000000109ee4
- (_Bool)hf_enabledResidentsSupportsMediaActions;	// IMP=0x0010000000109e7d
- (_Bool)hf_supportsRemoteAccessRestrictions;	// IMP=0x0010000000109e16
- (_Bool)hf_supportsPerUserRemoteAccess;	// IMP=0x0010000000109db0
- (id)hf_markTermsAndConditionsAsAcceptedForHomePodWithLicenseAgreementVersion:(id)arg1;	// IMP=0x0010000000109b18
- (_Bool)hf_hasAcceptedTermsAndConditionsForHomePodVersion:(id)arg1;	// IMP=0x00100000001097a6
- (id)hf_setHomeHasMigratedForRedesign:(_Bool)arg1;	// IMP=0x0010000000109655
- (_Bool)hf_homeHasMigratedForRedesign;	// IMP=0x00100000001095bd
- (id)hf_setHomeHasMigratedServicesToAccessories:(_Bool)arg1;	// IMP=0x001000000010946c
- (_Bool)hf_homeHasMigratedServicesToAccessories;	// IMP=0x00100000001093d4
- (id)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:(_Bool)arg1;	// IMP=0x0010000000109283
- (_Bool)hf_homeHasMigratedIntoHomeApp;	// IMP=0x00100000001091eb
- (id)hf_setNotesApplicationData:(id)arg1;	// IMP=0x0010000000109037
- (id)hf_notesApplicationData;	// IMP=0x0010000000108f74
- (CDUnknownBlockType)hf_dashboardSectionReorderableHomeKitObjectComparator;	// IMP=0x0010000000108dad
- (CDUnknownBlockType)hf_dashboardSectionReorderableItemComparator;	// IMP=0x0010000000108c7c
- (CDUnknownBlockType)hf_dashboardSectionReorderableUUIDStringComparator;	// IMP=0x0010000000108b4b
- (id)hf_reorderableDashboardSectionList;	// IMP=0x0010000000108b0e
- (CDUnknownBlockType)hf_accessoryCategoriesReorderableItemComparator;	// IMP=0x00100000001089dd
- (id)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;	// IMP=0x00100000001089a0
- (id)hf_reorderableCamerasList;	// IMP=0x0010000000108963
- (id)hf_reorderableActionSetsList;	// IMP=0x0010000000108926
- (id)hf_reorderableServicesList;	// IMP=0x00100000001088e9
- (id)hf_reorderableRoomsList;	// IMP=0x00100000001088ac
- (id)hf_allSiriEndPointProfileContainersThatWillChime;	// IMP=0x001000000010877e
- (id)hf_allSiriEndPointProfileContainers;	// IMP=0x0010000000108632
- (id)hf_siriEndPointAccessories;	// IMP=0x00100000001085a5
- (id)hf_tvViewingProfilesAccessories;	// IMP=0x0010000000108532
- (id)hf_personalRequestAccessories;	// IMP=0x00100000001084bf
- (id)hf_allResidentAccessories;	// IMP=0x0010000000108432
- (id)hf_siriEndpointCapableAccessoriesToOnboard;	// IMP=0x001000000010837b
- (id)hf_homePods;	// IMP=0x001000000010830f
- (id)hf_appleTVs;	// IMP=0x00100000001082a3
- (id)hf_mediaAccessories;	// IMP=0x0010000000108237
- (id)hf_updateAutomaticThirdPartyAccessorySoftwareUpdateEnabled:(_Bool)arg1;	// IMP=0x001000000010821e
- (id)hf_updateAutomaticSoftwareUpdateEnabled:(_Bool)arg1;	// IMP=0x0010000000108193
- (id)hf_accessoriesRequiringManualWiFiReconfiguration;	// IMP=0x00100000001080d9
- (id)hf_resetAllNetworkConfigurationProfiles;	// IMP=0x0010000000108040
- (id)hf_setPhotosLibrarySettingsForUser:(id)arg1 importPhotosLibraryEnabled:(_Bool)arg2 shareFacesEnabled:(_Bool)arg3;	// IMP=0x0010000000107ac2
- (id)hf_setSharePhotosLibraryEnabled:(_Bool)arg1 forUser:(id)arg2;	// IMP=0x00100000001079a7
- (id)hf_setImportPhotosLibraryEnabled:(_Bool)arg1 forUser:(id)arg2;	// IMP=0x001000000010798b
- (id)hf_personWithIdentifier:(id)arg1;	// IMP=0x00100000001076d6
- (id)hf_allPersons;	// IMP=0x00100000001074b4
- (id)hf_personManagerWithIdentifier:(id)arg1;	// IMP=0x001000000010738d
- (id)hf_allPhotosPersonManagers;	// IMP=0x0010000000107321
- (id)hf_allPersonManagers;	// IMP=0x0010000000107274
- (id)hf_setFaceRecognitionEnabled:(_Bool)arg1;	// IMP=0x00100000001069f4
- (_Bool)hf_isFaceRecognitionAvailable;	// IMP=0x00100000001067dd
- (id)hf_allHomePodsOrStereoPairsThatWillChime;	// IMP=0x001000000010676a
- (id)hf_allHomePodProfileContainers;	// IMP=0x001000000010661e
- (id)hf_allHomePodsOrStereoPairs;	// IMP=0x00100000001063f2
- (id)hf_allUniqueMediaProfileContainers;	// IMP=0x00100000001061e6
- (id)hf_allUniqueMediaProfileContainersExcludingMediaGroups;	// IMP=0x00100000001060a6
- (id)hf_allMediaProfileContainers;	// IMP=0x0010000000105f6b
- (_Bool)hf_hasSecureRecordingCameras;	// IMP=0x0010000000105e17
- (id)hf_unitaryCameraProfile;	// IMP=0x0010000000105dac
- (id)hf_allCameraProfilesWithSmartMotionRecordingEnabled;	// IMP=0x0010000000105b3d
- (id)hf_allCameraProfilesWithDoorbellService;	// IMP=0x0010000000105a76
- (id)hf_allCameraProfilesSupportingRecording;	// IMP=0x00100000001059d6
- (id)hf_allCameraProfiles;	// IMP=0x001000000010596a
- (id)hf_cameraProfileForSignificantEvent:(id)arg1;	// IMP=0x0010000000105822
- (id)hf_cameraProfileWithIdentifier:(id)arg1;	// IMP=0x0010000000105593
- (id)hf_allLightProfilesSupportingNaturalLighting;	// IMP=0x00100000001054cc
- (id)hf_allLightProfiles;	// IMP=0x0010000000105422
- (id)hf_allNetworkRouterProfiles;	// IMP=0x001000000010535b
- (id)hf_allNetworkConfigurationProfiles;	// IMP=0x0010000000105294
- (id)hf_accessoryProfilesWithClass:(Class)arg1;	// IMP=0x00100000001051ed
- (id)hf_allAccessoryProfiles;	// IMP=0x0010000000105181
- (id)hf_allVisibleServices;	// IMP=0x00100000001050e1
- (_Bool)hf_hasVisibleServies;	// IMP=0x001000000010504b
- (id)hf_allServices;	// IMP=0x0010000000104ea8
- (id)hf_serviceWithIdentifier:(id)arg1;	// IMP=0x0010000000104b8d
- (_Bool)hf_containsActionableAccessories;	// IMP=0x0010000000104a87
- (id)hf_homeKitObjectsSupportingNaturalLighting;	// IMP=0x00100000001048e2
- (id)hf_accessoriesSupportingNaturalLighting;	// IMP=0x001000000010481c
- (id)hf_accessoriesWithValidSoftwareOrFirmwareUpdates;	// IMP=0x001000000010477c
- (_Bool)hf_isAutomaticThirdPartyAccessorySoftwareUpdateEnabled;	// IMP=0x0010000000104774
- (_Bool)hf_shouldShowSoftwareUpdateSettings;	// IMP=0x001000000010470f
- (_Bool)hf_hasThirdPartyAccessoriesSupportingSoftwareUpdate;	// IMP=0x0010000000104674
- (_Bool)hf_hasFirstPartyAccessoriesSupportingSoftwareUpdate;	// IMP=0x0010000000104614
- (_Bool)hf_hasAccessoriesSupportingSoftwareUpdate;	// IMP=0x00100000001045b4
- (id)accessoriesSupportingSoftwareUpdate;	// IMP=0x0010000000104514
- (id)hf_appleTVsSupportingHomeTheater;	// IMP=0x0010000000104448
- (id)hf_relatedHomeTheaterMediaProfileContainerFor:(id)arg1;	// IMP=0x0010000000103fea
- (id)hf_appleTVUsingAudioDestination:(id)arg1;	// IMP=0x0010000000103e7b
- (id)hf_mediaSystemWithIdentifier:(id)arg1;	// IMP=0x0010000000103d54
- (id)hf_mediaSystemForAccessory:(id)arg1;	// IMP=0x0010000000103b68
- (id)hf_serviceGroupWithIdentifier:(id)arg1;	// IMP=0x0010000000103a41
- (id)hf_serviceGroupsForService:(id)arg1;	// IMP=0x00100000001038ea
- (_Bool)hasReachableResidents;	// IMP=0x0010000000103773
- (unsigned long long)hf_blockCurrentUserFromHomeReason;	// IMP=0x00100000001036ff
- (_Bool)hf_shouldBlockCurrentUserFromHome;	// IMP=0x00100000001035b6
- (_Bool)hf_hasResidentDeviceCapableOfSupportingEnhancedDetectionModes;	// IMP=0x001000000010354f
- (_Bool)hf_hasResidentDeviceCapableOfSupportingActivityZones;	// IMP=0x00100000001034e8
- (_Bool)hf_hasResidentDeviceCapableOfSupportingCHIP;	// IMP=0x0010000000103481
- (_Bool)hf_hasResidentDeviceCapableOfSupportingThreadBorderRouter;	// IMP=0x001000000010341a
- (id)hf_actionSetWithUUID:(id)arg1;	// IMP=0x00100000001032f3
- (id)hf_enabledResidentDevices;	// IMP=0x001000000010324b
- (id)hf_primaryResidentDevice;	// IMP=0x00100000001031d9
- (id)hf_allTargetControlAccessories;	// IMP=0x001000000010316d
- (id)hf_allProgrammableSwitchAccessories;	// IMP=0x0010000000102f98
- (id)hf_allBridgeAccessories;	// IMP=0x0010000000102e10
- (id)hf_accessoriesMatchingCategoryType:(id)arg1;	// IMP=0x0010000000102bd2
- (id)hf_mediaProfileContainerForSymptomsHandler:(id)arg1;	// IMP=0x0010000000102b3a
- (_Bool)hf_hasVisibleAccessories;	// IMP=0x0010000000102ada
- (id)hf_visibleAccessories;	// IMP=0x0010000000102a6e
- (id)hf_mediaSystemForSymptomsHandler:(id)arg1;	// IMP=0x00100000001028a3
- (id)hf_accessoryForSymptomsHandler:(id)arg1;	// IMP=0x00100000001026d0
- (id)hf_accessoryWithDeviceIdentifier:(id)arg1;	// IMP=0x0010000000102461
- (id)hf_accessoryWithIdentifier:(id)arg1;	// IMP=0x001000000010228e
- (id)hf_allNonEmptyActionSets;	// IMP=0x001000000010208a
- (id)hf_updateNetworkProtection:(long long)arg1;	// IMP=0x0010000000101d1a
- (_Bool)hf_isNetworkRouterSupported;	// IMP=0x0010000000101d02
- (_Bool)hf_isNetworkCredentialManagementEnabled;	// IMP=0x0010000000101cba
- (_Bool)hf_isNetworkProtectionEnabled;	// IMP=0x0010000000101c4e
- (id)hf_localizedDescriptionForNetworkProtectionSupport;	// IMP=0x0010000000101be6
- (_Bool)hf_isNetworkProtectionSupportedForHome;	// IMP=0x0010000000101bce
- (_Bool)hf_isNetworkProtectionSupportedForAccessories;	// IMP=0x0010000000101bb6
- (id)hf_zoneWithIdentifier:(id)arg1;	// IMP=0x0010000000101a8f
- (id)hf_orderedActionSets;	// IMP=0x00100000001019d8
- (void)hf_setSelectedRoom:(id)arg1;	// IMP=0x001000000010171d
- (id)hf_orderedRooms;	// IMP=0x0010000000101684
- (id)hf_selectedRoom;	// IMP=0x001000000010155a
- (id)hf_roomWithName:(id)arg1;	// IMP=0x0010000000101433
- (id)hf_roomWithIdentifier:(id)arg1;	// IMP=0x001000000010130c
- (_Bool)hf_userIsOwner:(id)arg1;	// IMP=0x00100000001012c8
- (_Bool)hf_userIsAdministrator:(id)arg1;	// IMP=0x0010000000101284
- (_Bool)hf_canAddHomeMember;	// IMP=0x00100000001011ab
- (_Bool)hf_currentUserIsOwner;	// IMP=0x001000000010110f
- (_Bool)hf_currentUserIsAdministrator;	// IMP=0x0010000000101073
- (_Bool)hf_isEmpty;	// IMP=0x0010000000100fde
- (_Bool)hf_isUserAtHome;	// IMP=0x0010000000100fcc
- (_Bool)hf_isCurrentLocationHome;	// IMP=0x0010000000100e51
- (unsigned long long)hf_remoteAccessState;	// IMP=0x0010000000100c81
- (id)hf_suspendedStateOverrideValueProvider;	// IMP=0x0010000000100c21
- (id)hf_characteristicValueManager;	// IMP=0x0010000000100b00
- (id)hf_activeRooms;	// IMP=0x0010000000100a05
- (id)hf_allRooms;	// IMP=0x0010000000100958
- (id)hf_updateWallpaperImage:(id)arg1;	// IMP=0x0010000000161c6c
@property(readonly, nonatomic) UIImage *hf_wallpaperImage;
- (id)hf_allObjectsAffectedByServiceTopic:(id)arg1;	// IMP=0x001000000020b230
- (id)hf_safetyAndSecurityAccessoriesAffectedByServiceTopic:(id)arg1;	// IMP=0x001000000020b08d
- (id)hf_cameraProfilesAffectedByServiceTopic:(id)arg1;	// IMP=0x001000000020adfe
- (id)hf_servicesAffectedByServiceTopic:(id)arg1;	// IMP=0x001000000020ab9e
- (id)hf_userNotificationTopicForObject:(id)arg1;	// IMP=0x001000000020aa71
- (id)hf_userNotificationTopicForCameraProfile:(id)arg1;	// IMP=0x001000000020a872
- (id)hf_userNotificationTopicForService:(id)arg1;	// IMP=0x001000000020a704
@property(readonly, copy, nonatomic) NSArray *hf_userNotificationServiceTopics;
- (id)_hf_accessoryTopics:(_Bool)arg1;	// IMP=0x0010000000209c89
@property(readonly, nonatomic) NSArray *hf_demoModeAccessories;
- (void)hf_updateApplicationData:(id)arg1 handleError:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000247d3c
- (void)_hf_updateApplicationData:(id)arg1;	// IMP=0x0010000000247c1d
- (id)hf_updateDateAdded:(id)arg1;	// IMP=0x00100000003189f3
@property(readonly, copy, nonatomic) NSDate *hf_dateAdded;
@property(readonly, copy, nonatomic) NSString *hf_displayName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@end

