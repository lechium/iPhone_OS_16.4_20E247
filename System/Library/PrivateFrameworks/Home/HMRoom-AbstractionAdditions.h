//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMRoom.h>

@class HMCameraProfile, HMHome, NSArray, NSDate, NSSet, NSString, NSUUID, UIImage;

@interface HMRoom (AbstractionAdditions)
@property(readonly, nonatomic) NSSet *hf_accessoryLikeObjects;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;	// IMP=0x00200000000a9c81
- (id)hf_updateWallpaperImage:(id)arg1;	// IMP=0x0020000000161e59
@property(readonly, nonatomic) UIImage *hf_wallpaperImage;
- (id)hf_accessoryRepresentableUsageCountsWithFilter:(CDUnknownBlockType)arg1;	// IMP=0x0020000000171420
- (id)hf_allNonEmptyActionSets;	// IMP=0x002000000017123a
- (id)hf_roomsSortDescriptorUsingDashboardSectionOrder;	// IMP=0x00200000001711a4
- (CDUnknownBlockType)hf_dashboardSectionReorderableUUIDStringComparator;	// IMP=0x0020000000171073
- (id)hf_reorderableDashboardSectionList;	// IMP=0x0020000000171036
- (id)hf_reorderableServicesList;	// IMP=0x0020000000170ff9
@property(readonly, nonatomic) _Bool hf_hasAtleastOneReachableHomePod;
- (_Bool)hf_atleastOneMediaAccessorySupportsAndHasAnnounceEnabled;	// IMP=0x0020000000170c21
- (_Bool)hf_atleastOneHomePodSupportsAnnounce;	// IMP=0x0020000000170b86
@property(readonly, nonatomic) _Bool hf_shouldShowAnnounceFeatureForThisRoom;
@property(readonly, nonatomic) _Bool hf_shouldShowAnnounceButtonForThisRoom;
@property(readonly, nonatomic) _Bool hf_hasVisibleAccessories;
@property(readonly, nonatomic) NSArray *hf_visibleAccessories;
@property(readonly, nonatomic) NSSet *hf_allVisibleServices;
@property(readonly, nonatomic) _Bool hf_hasAtleastOneHomePod;
- (id)availableHomePodsSupportingStereoPairingVersions:(unsigned long long)arg1;	// IMP=0x0020000000170864
- (id)availableHomeTheaterMediaPartnerFor:(id)arg1;	// IMP=0x002000000017042d
@property(readonly, nonatomic) NSArray *hf_homePodsNotInHomeTheaterGroup;
@property(readonly, nonatomic) NSArray *hf_homePodPairsNotInHomeTheaterGroup;
@property(readonly, nonatomic) NSArray *hf_pairedHomePods;
@property(readonly, nonatomic) NSSet *hf_allUniqueMediaProfileContainersExcludingMediaGroups;
@property(readonly, nonatomic) NSArray *hf_allZones;
@property(readonly, nonatomic) NSArray *hf_allServices;
@property(readonly, nonatomic) __weak HMCameraProfile *hf_unitaryCameraProfile;
@property(readonly, nonatomic) NSArray *hf_allCameraProfiles;
@property(readonly, nonatomic) NSArray *hf_demoModeAccessories;
- (void)hf_updateApplicationData:(id)arg1 handleError:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00200000002482dd
- (void)_hf_updateApplicationData:(id)arg1;	// IMP=0x002000000024818d
- (id)hf_updateDateAdded:(id)arg1;	// IMP=0x0020000000318a1c
@property(readonly, copy, nonatomic) NSDate *hf_dateAdded;
@property(readonly, copy, nonatomic) NSString *hf_displayName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak HMHome *home; // @dynamic home;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@end

