//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADCommunalDeviceUser, ADHomeInfoManager, ADPreferences, AFInstanceContext, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSXPCListener, SAHomeMemberInfo, SAMultiUserInfo, SSRVoiceProfileManager;
@protocol OS_dispatch_queue;

@interface ADMultiUserService : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    unsigned long long multiUserSignpost;	// 16 = 0x10
    unsigned long long multiUserDownloadSignpost;	// 24 = 0x18
    SAHomeMemberInfo *_saUnknownUser;	// 32 = 0x20
    NSMutableDictionary *_sharedUsersByHomeUserUUID;	// 40 = 0x28
    NSMutableDictionary *_sharedUsersByiCloudAltDSID;	// 48 = 0x30
    NSMutableDictionary *_homeUserSettings;	// 56 = 0x38
    NSArray *_pitchesForHomeMembers;	// 64 = 0x40
    SAMultiUserInfo *_multiUserInfo;	// 72 = 0x48
    NSMutableSet *_ghostVoiceProfileSharedUserIDs;	// 80 = 0x50
    NSMutableSet *_inFlightVoiceProfilesByUUID;	// 88 = 0x58
    NSXPCListener *_multiUserListener;	// 96 = 0x60
    int _liveOnToken;	// 104 = 0x68
    _Bool _primaryUserIsFromLiveOnApp;	// 108 = 0x6c
    NSMutableArray *_usersWithAvailableVoiceProfiles;	// 112 = 0x70
    NSString *_userWithRMVEnabledDuringBuddy;	// 120 = 0x78
    NSString *_currentLanguage;	// 128 = 0x80
    double _lastProfilesDownloadAttemptTime;	// 136 = 0x88
    unsigned long long _outOfSyncDownloadAttemptCount;	// 144 = 0x90
    AFInstanceContext *_instanceContext;	// 152 = 0x98
    SSRVoiceProfileManager *_voiceProfileManager;	// 160 = 0xa0
    ADPreferences *_adPreferences;	// 168 = 0xa8
    ADHomeInfoManager *_homeInfoManager;	// 176 = 0xb0
    NSMutableDictionary *_iCloudAltDSIDByHomeUserID;	// 184 = 0xb8
    NSMutableSet *_useriCloudAltDSIDsSettingRmVFromTV;	// 192 = 0xc0
    NSMutableSet *_homeUserIDsToBeOnboarded;	// 200 = 0xc8
    _Bool _isMultiUserInfoDirty;	// 208 = 0xd0
    NSMutableDictionary *_sharedUsersBySharedUserID;	// 216 = 0xd8
    ADCommunalDeviceUser *_primaryUser;	// 224 = 0xe0
    ADCommunalDeviceUser *_deviceOwner;	// 232 = 0xe8
    NSString *_cachedAssistantDataUnredactedAnchor;	// 240 = 0xf0
    NSDictionary *_rawScores;	// 248 = 0xf8
}

+ (id)sharedService;	// IMP=0x0020000000203a57
- (void).cxx_destruct;	// IMP=0x002000000021a2ac
@property(copy, nonatomic) NSDictionary *rawScores; // @synthesize rawScores=_rawScores;
@property(retain) NSString *cachedAssistantDataUnredactedAnchor; // @synthesize cachedAssistantDataUnredactedAnchor=_cachedAssistantDataUnredactedAnchor;
@property _Bool isMultiUserInfoDirty; // @synthesize isMultiUserInfoDirty=_isMultiUserInfoDirty;
@property(readonly, nonatomic) ADCommunalDeviceUser *deviceOwner; // @synthesize deviceOwner=_deviceOwner;
@property(retain, nonatomic) ADCommunalDeviceUser *primaryUser; // @synthesize primaryUser=_primaryUser;
@property(retain, nonatomic) NSMutableDictionary *sharedUsersBySharedUserID; // @synthesize sharedUsersBySharedUserID=_sharedUsersBySharedUserID;
- (id)_confidenceScoreForSharedUserID:(id)arg1 expectedSpeakerSharedUserID:(id)arg2 expectedSpeakerConfidenceScore:(long long)arg3 confidenceScores:(id)arg4;	// IMP=0x001000000021a0a6
- (id)confidenceScoresForMultiUserTestingExpectedSpeakerSharedUserID:(id)arg1 expectedSpeakerConfidenceScore:(long long)arg2 nonspeakerConfidenceScores:(id)arg3;	// IMP=0x0010000000219cc8
- (oneway void)getSharedUserInfoForSharedUserID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002199b4
- (id)currentOwnerSharedUserID;	// IMP=0x00100000002198b6
- (void)getIDSIdentifierForAssistantId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002193c4
- (oneway void)getPreferredMediaUserHomeUserIDWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000021916d
- (oneway void)homeUserIdToNames:(CDUnknownBlockType)arg1;	// IMP=0x00100000002190c1
- (oneway void)getMultiUserAudioAppSignalsForSharedUserID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000218df2
- (oneway void)getMultiUserSettingsForSharedUserID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000218865
- (oneway void)getiCloudAltDSIDOfRecognizedUserWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002184e0
- (oneway void)getHomeUserIdOfRecognizedUserWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000218176
- (oneway void)getConformingSharedUserIds:(CDUnknownBlockType)arg1;	// IMP=0x0010000000217abc
- (oneway void)getConformingSharedUserIdForHomeUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000217797
- (oneway void)getFirstNameForSharedUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000217456
- (oneway void)getSharedUserIdForHomeUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000217150
- (oneway void)getHomeUserIdForSharedUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000216d9f
- (_Bool)getAllowExplicitContentSettingForRecognizedUser;	// IMP=0x0010000000216ae3
- (id)getSharedUserIdForHomeUserId:(id)arg1;	// IMP=0x00100000002168a0
- (id)getSyncableSharedUserIdsForSharedUserIds:(id)arg1;	// IMP=0x00100000002165bf
- (id)getSyncableSharedUserIdForSharedUserId:(id)arg1;	// IMP=0x00100000002163d0
- (id)getSharedUserIdForShareOwnerName:(id)arg1;	// IMP=0x0010000000216020
- (_Bool)_profileLimitReached;	// IMP=0x0010000000215fe3
- (void)setShareOwnerName:(id)arg1 homeMemberSettings:(id)arg2 audioAppSignals:(id)arg3 loggingAllowed:(_Bool)arg4 forSharedUserId:(id)arg5;	// IMP=0x0010000000215cf8
- (void)setEnrollmentName:(id)arg1 forHomeUser:(id)arg2;	// IMP=0x0010000000215bdc
- (void)updateMultiUserWithSharedUserId:(id)arg1 companionInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000214569
- (void)triggerMultiUserMetricsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000213e8b
- (void)updateVoiceProfiles;	// IMP=0x0010000000213dd9
- (void)_removeGhostVoiceProfiles;	// IMP=0x0010000000213cc7
- (void)_trackGhostVoiceProfile:(id)arg1;	// IMP=0x0010000000213c3b
- (void)voiceProfilesOutOfSync;	// IMP=0x0010000000213958
- (void)resetAllUsers;	// IMP=0x00100000002137ee
- (id);	// IMP=0x0010000000212a66
- (id)sharedRemoteDevices;	// IMP=0x00100000002127c1
- (id)_generateDeviceUserWithHomeUserUUID:(id)arg1 sharedUserId:(id)arg2 loggableSharedUserId:(id)arg3 adaccount:(id)arg4;	// IMP=0x001000000021232b
- (void)fetchDeviceOwnerAsSAMultiUserInfo:(CDUnknownBlockType)arg1;	// IMP=0x0010000000211f4a
- (id)multiUserSAObject;	// IMP=0x0010000000211e57
- (void)dumpAssistantStateChunk:(CDUnknownBlockType)arg1;	// IMP=0x0010000000211aa3
- (void)showMultiUserSharedUserIDsCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002117b6
- (void)showPrimaryUserSharedUserIDWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002116cd
- (void)showMultiUserCompanionInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000021119e
- (void)showMultiUsersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000021093e
- (id)homeUserIdToNames;	// IMP=0x00100000002104a3
- (void)removeUserWithSharedUserID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000210295
- (void)removeUserWithHomeUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000210089
- (void)_postRemovalStateCleanup;	// IMP=0x001000000021004e
- (_Bool)_removeUser:(id)arg1 homeUserID:(id)arg2 sharedUserID:(id)arg3 iCloudAltDSID:(id)arg4 error:(id *)arg5;	// IMP=0x001000000020f4f5
- (void)_logRelevantAnalyticsOnUserAddedWithSharedUserID:(id)arg1 isPrimary:(_Bool)arg2;	// IMP=0x001000000020f2e7
- (void)removeUserWithShareOwnerNames:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000020ecd5
- (void)removeDeviceOwner;	// IMP=0x001000000020ec1c
- (void)_addUser:(id)arg1 sharedUserId:(id)arg2 loggableSharedUserId:(id)arg3 iCloudAltDSID:(id)arg4 enrollmentName:(id)arg5 isPrimary:(_Bool)arg6 nonCloudSyncedUser:(_Bool)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x001000000020dc16
- (void)addUser:(id)arg1 sharedUserId:(id)arg2 loggableSharedUserId:(id)arg3 iCloudAltDSID:(id)arg4 enrollmentName:(id)arg5 isPrimary:(_Bool)arg6 nonCloudSyncedUser:(_Bool)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x001000000020d797
- (void)addUser:(id)arg1 sharedUserId:(id)arg2 loggableSharedUserId:(id)arg3 iCloudAltDSID:(id)arg4 enrollmentName:(id)arg5 isPrimary:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x001000000020d771
- (void)_addDeviceOwner:(id)arg1 sharedUserId:(id)arg2 loggableSharedUserId:(id)arg3 iCloudAltDSID:(id)arg4 audioAppSignals:(id)arg5 enrollmentName:(id)arg6 companionInfo:(id)arg7 shareOwnerName:(id)arg8 homeMemberSettings:(id)arg9 loggingAllowed:(_Bool)arg10 completion:(CDUnknownBlockType)arg11;	// IMP=0x001000000020d0b4
- (_Bool)_updateDeviceOwner:(id)arg1 sharedUserId:(id)arg2 enrollmentName:(id)arg3 companionInfo:(id)arg4 shareOwnerName:(id)arg5 homeMemberSettings:(id)arg6 loggingAllowed:(_Bool)arg7;	// IMP=0x001000000020bc08
- (void)addDeviceOwner:(id)arg1 sharedUserId:(id)arg2 loggableSharedUserId:(id)arg3 iCloudAltDSID:(id)arg4 audioAppSignals:(id)arg5 enrollmentName:(id)arg6 companionInfo:(id)arg7 shareOwnerName:(id)arg8 homeMemberSettings:(id)arg9 loggingAllowed:(_Bool)arg10 completion:(CDUnknownBlockType)arg11;	// IMP=0x001000000020b83c
- (void)_deleteShareForUser:(id)arg1;	// IMP=0x001000000020b836
- (void)_allowVoiceIdentificationForThisUser:(id)arg1 iCloudAltDSID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000020ae76
- (_Bool)_updateNonHomeUserSettings:(id)arg1;	// IMP=0x001000000020ac41
- (_Bool)_updateHomeKitSettings:(id)arg1;	// IMP=0x001000000020ab0d
- (void)_updateHomeKitSettingsForDeviceOwner;	// IMP=0x001000000020a983
- (_Bool)_homeKitSettingsDidChangeForDeviceOwner;	// IMP=0x001000000020a89a
- (void)_updateCommunalDeviceUser:(id)arg1 withSettings:(id)arg2;	// IMP=0x001000000020a4f1
- (_Bool)personalDomainSettingsDidChange:(id)arg1 newUserSettings:(id)arg2;	// IMP=0x001000000020a3a5
- (void)_saveSharedUsers;	// IMP=0x0010000000209c94
- (void)_savePrimaryAndDeviceOwner;	// IMP=0x0010000000209ae3
- (void)_updateSAMultiUserInfo;	// IMP=0x001000000020881b
- (void)_describeSAMultiUserInfo:(id)arg1;	// IMP=0x0010000000208551
- (unsigned long long)countVoiceProfiles;	// IMP=0x0010000000208498
- (unsigned long long)_countVoiceProfiles;	// IMP=0x0010000000208411
- (_Bool)_updateVoiceProfileInfo;	// IMP=0x0010000000207e9b
- (void)_untrackAllHomeUserUUIDsForInFlightVoiceProfile;	// IMP=0x0010000000207d9b
- (_Bool)_isTrackingUUIDForInFlightVoiceProfile:(id)arg1;	// IMP=0x0010000000207c25
- (void)_untrackUUIDsForUser:(id)arg1;	// IMP=0x0010000000207b57
- (void)_untrackHomeUserUUIDForInFlightVoiceProfile:(id)arg1;	// IMP=0x00100000002079ea
- (void)_trackHomeUserUUIDForInFlightVoiceProfile:(id)arg1;	// IMP=0x001000000020787d
- (id)_inFlightVoiceProfilesByUUID;	// IMP=0x0010000000207842
- (id)getDeviceOwnerSharedUserId;	// IMP=0x00100000002077f2
- (_Bool)_isCurrentLanguageMultiUserCompatible;	// IMP=0x0010000000207761
- (_Bool)_isHostingMultiUserLanguage;	// IMP=0x001000000020774f
- (_Bool)isMultiUserAvailable;	// IMP=0x0010000000207747
- (void)_forceCloudSyncedUserDownload:(CDUnknownBlockType)arg1;	// IMP=0x0010000000207671
- (void)_resetAllUsers;	// IMP=0x00100000002073f9
- (void)_resetPrimaryUser;	// IMP=0x001000000020733a
- (void)_loadCloudSyncedUsersFromCache;	// IMP=0x0010000000206bbd
- (void)_updateMappingsForSharedUser:(id)arg1;	// IMP=0x0010000000206a7d
- (void)_refreshUsersAndVoiceProfiles:(_Bool)arg1;	// IMP=0x0010000000205aaf
- (void)refreshHomeKitOnboardedUsers;	// IMP=0x0010000000204cd4
- (void)_homeInfoDidChange:(id)arg1;	// IMP=0x0010000000204cc2
- (void)_primaryUserSharedUserIdentifierDidChangeNotification:(id)arg1;	// IMP=0x00100000002049a5
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000204986
- (_Bool)_multiUserListenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x0010000000204658
- (void)_setupMultiUserListener;	// IMP=0x00100000002044f4
- (id)_allUsersBySharedUserID;	// IMP=0x00100000002043aa
- (id)allUsersBySharedUserID;	// IMP=0x0010000000204270
- (void)_languageCodeDidChange;	// IMP=0x00100000002040b5
- (void)dealloc;	// IMP=0x0010000000204006
- (id)_initWithPreferences:(id)arg1 ssrManager:(id)arg2 homeInfoManager:(id)arg3;	// IMP=0x0010000000203b65

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

