//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BridgePreferences/BPSListController.h>

@class HKHealthStore, NSArray, NSDateFormatter, NSNumber, NSNumberFormatter;

@interface COSHeadphoneHearingProtectionController : BPSListController
{
    _Bool _localChange;	// 192 = 0xc0
    int _weeklyNotificationCount;	// 196 = 0xc4
    HKHealthStore *_healthStore;	// 200 = 0xc8
    NSArray *_weeklyNotificationData;	// 208 = 0xd0
    NSNumberFormatter *_numberFormatter;	// 216 = 0xd8
    NSDateFormatter *_monthFormatter;	// 224 = 0xe0
    NSDateFormatter *_monthNumberFormatter;	// 232 = 0xe8
    NSNumber *_levelLimitThreshold;	// 240 = 0xf0
}

- (void).cxx_destruct;	// IMP=0x002000000009db60
@property(retain, nonatomic) NSNumber *levelLimitThreshold; // @synthesize levelLimitThreshold=_levelLimitThreshold;
@property(nonatomic, getter=isLocalChange) _Bool localChange; // @synthesize localChange=_localChange;
@property(retain, nonatomic) NSDateFormatter *monthNumberFormatter; // @synthesize monthNumberFormatter=_monthNumberFormatter;
@property(retain, nonatomic) NSDateFormatter *monthFormatter; // @synthesize monthFormatter=_monthFormatter;
@property(retain, nonatomic) NSNumberFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
@property(nonatomic) int weeklyNotificationCount; // @synthesize weeklyNotificationCount=_weeklyNotificationCount;
@property(retain, nonatomic) NSArray *weeklyNotificationData; // @synthesize weeklyNotificationData=_weeklyNotificationData;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
- (id)creatNotificationDataStructure:(id)arg1 toDate:(id)arg2;	// IMP=0x001000000009d707
- (id)hkQueryForSampleType:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 notificationData:(id)arg4;	// IMP=0x001000000009d0b7
- (void)queryNotificationCountsFromDate:(id)arg1 toDate:(id)arg2;	// IMP=0x001000000009cf47
- (id)endDate;	// IMP=0x001000000009cf2e
- (id)startDate;	// IMP=0x001000000009ce21
- (void)updateNotificationCountsForData:(id)arg1;	// IMP=0x001000000009c92d
- (id)weeklyNotificationCount:(id)arg1;	// IMP=0x001000000009c89f
- (id)getHeadphoneNotificationsEnabled;	// IMP=0x001000000009c897
- (void)setHeadphoneNotificationsEnabled:(id)arg1 forSpecifier:(id)arg2;	// IMP=0x001000000009c880
- (id)getHeadphoneLevelLimitSetting;	// IMP=0x001000000009c878
- (void)setHeadphoneLevelLimitValue:(id)arg1 forSpecifier:(id)arg2;	// IMP=0x001000000009c861
- (id)getHeadphoneLevelLimitEnabled;	// IMP=0x001000000009c859
- (void)setHeadphoneLevelLimitEnabled:(id)arg1 forSpecifier:(id)arg2;	// IMP=0x001000000009c842
- (void)openHealthArticleSafeListening;	// IMP=0x001000000009c7df
- (void)dismiss;	// IMP=0x001000000009c7c6
- (void)openAboutHeadphoneNotifications;	// IMP=0x001000000009c4f0
- (void)openHealthPrivacySettings;	// IMP=0x001000000009c46f
- (id)updateHeadphoneLevelLimitDescriptionText;	// IMP=0x001000000009c462
- (id)updateHeadphoneLevelLimitText;	// IMP=0x001000000009c455
- (id)headphoneLevelLimitSliderSpecifier;	// IMP=0x001000000009c1de
- (id)headphoneLevelLimitDescriptionSpecifier;	// IMP=0x001000000009c11b
- (id)headphoneLevelLimitSwitchSpecifier;	// IMP=0x001000000009c032
- (id)headphoneLevelLimitGroupSpecifier;	// IMP=0x001000000009bd16
- (id)headphoneWeeklyNotificationDescriptionSpecifier;	// IMP=0x001000000009bbed
- (id)headphoneNotificationsSwitchSpecifier;	// IMP=0x001000000009bb04
- (id)headphoneNotificationsGroupSpecifier;	// IMP=0x001000000009bae4
- (id)specifiers;	// IMP=0x001000000009ba18
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000009b980
- (void)loadView;	// IMP=0x001000000009b715
- (void)dealloc;	// IMP=0x001000000009b6e6
- (id)init;	// IMP=0x001000000009b6b7

@end
