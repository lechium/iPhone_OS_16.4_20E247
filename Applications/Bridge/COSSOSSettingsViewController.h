//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BridgePreferences/BPSListController.h>

@class HKHealthStore, NSArray, NSCalendar, NSSet, NSString, _HKMedicalIDData;
@protocol COSSOSSettingsViewControllerDelegate;

@interface COSSOSSettingsViewController : BPSListController
{
    _Bool _deviceSupportsMedicalContacts;	// 192 = 0xc0
    _Bool _useMedicalEmergencyContacts;	// 193 = 0xc1
    _Bool _haveSetUseMedicalEmergencyContacts;	// 194 = 0xc2
    _Bool _needsReloadSpecifiers;	// 195 = 0xc3
    _Bool _wristDetectionEnabled;	// 196 = 0xc4
    _Bool _isTinker;	// 197 = 0xc5
    id <COSSOSSettingsViewControllerDelegate> _navBarDelegate;	// 200 = 0xc8
    HKHealthStore *_healthStore;	// 208 = 0xd0
    _HKMedicalIDData *_medicalIDData;	// 216 = 0xd8
    NSCalendar *_calendar;	// 224 = 0xe0
    NSSet *_tccAppIDs;	// 232 = 0xe8
    NSArray *_kappaAPISpecifiers;	// 240 = 0xf0
    NSString *_kappaApiAppName;	// 248 = 0xf8
}

- (void).cxx_destruct;	// IMP=0x00200000000f1504
@property(retain, nonatomic) NSString *kappaApiAppName; // @synthesize kappaApiAppName=_kappaApiAppName;
@property(retain, nonatomic) NSArray *kappaAPISpecifiers; // @synthesize kappaAPISpecifiers=_kappaAPISpecifiers;
@property(retain, nonatomic) NSSet *tccAppIDs; // @synthesize tccAppIDs=_tccAppIDs;
@property(readonly, nonatomic) _Bool isTinker; // @synthesize isTinker=_isTinker;
@property(nonatomic) _Bool wristDetectionEnabled; // @synthesize wristDetectionEnabled=_wristDetectionEnabled;
@property(retain, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(retain, nonatomic) _HKMedicalIDData *medicalIDData; // @synthesize medicalIDData=_medicalIDData;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(nonatomic) __weak id <COSSOSSettingsViewControllerDelegate> navBarDelegate; // @synthesize navBarDelegate=_navBarDelegate;
- (void)presentConfirmationWithTitle:(id)arg1 message:(id)arg2 cancelTitle:(id)arg3 cancelHandler:(CDUnknownBlockType)arg4 confirmTitle:(id)arg5 confirmHandler:(CDUnknownBlockType)arg6;	// IMP=0x00100000000f13d7
- (void)medicalIDViewControllerDidFinish:(id)arg1;	// IMP=0x00100000000f13bb
- (void);	// IMP=0x00100000000f1335
- (void)medicalIDViewControllerDidCancel:(id)arg1;	// IMP=0x00100000000f1319
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x00100000000f1311
- (void)learnMore;	// IMP=0x00100000000f11fc
- (void)_editMedicalID;	// IMP=0x00100000000f0ee4
- (id)longPressTriggersEmergencySOS:(id)arg1;	// IMP=0x00100000000f0edc
- (id)newtonTriggersEmergencySOS:(id)arg1;	// IMP=0x00100000000f0ed4
- (void)setNewtonTriggersEmergencySOS:(id)arg1 forSpecifier:(id)arg2;	// IMP=0x00100000000f0ece
- (void)setLongPressTriggersEmergencySOS:(id)arg1 forSpecifier:(id)arg2;	// IMP=0x00100000000f0ec8
- (id)getContactDestination:(id)arg1;	// IMP=0x00100000000f0ec0
@property(readonly, nonatomic) _Bool canEditMedicalIDContacts;
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000000f0e1d
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000000f0d77
- (struct _NSRange)rangeOfReplacementString:(id)arg1 inFormatString:(id)arg2;	// IMP=0x00100000000f0d14
- (void)_addFooterFormat:(id)arg1 footerLink:(id)arg2 toSpecifier:(id)arg3 withAction:(id)arg4;	// IMP=0x00100000000f0b3b
- (void)_didSelectFallDetectionDataSharing:(id)arg1;	// IMP=0x00100000000f0acd
- (id)_descriptionOfNumberOfFallDetectionApps:(id)arg1;	// IMP=0x00100000000f09e9
- (id)_createNewtonSpecifiers;	// IMP=0x00100000000f09d0
- (id)specifiers;	// IMP=0x00100000000f0743
- (void)addSOSContactsToSpecifiers:(id)arg1;	// IMP=0x00100000000f073d
- (void)addEmergencyContactsToSpecifiers:(id)arg1;	// IMP=0x00100000000f0737
- (id)kappaTriggersEmergencySOS:(id)arg1;	// IMP=0x00100000000f072f
- (void)setKappaTriggersEmergencySOS:(id)arg1 forSpecifier:(id)arg2;	// IMP=0x00100000000f0729
- (id)kappaThirdPartyName:(id)arg1;	// IMP=0x00100000000f0714
- (void)_createKappaAPISpecifiers;	// IMP=0x00100000000f070e
- (id)_createKappaSpecifiers;	// IMP=0x00100000000f06f5
- (_Bool)showKappaInfo;	// IMP=0x00100000000f06ed
@property(readonly, nonatomic) _Bool showNewtonInfo;
- (void)_updateSOSContactsList;	// IMP=0x00100000000f04db
- (void)sosContactsChanged:(id)arg1;	// IMP=0x00100000000f04d5
- (void)dealloc;	// IMP=0x00100000000f0459
- (id)init;	// IMP=0x00100000000f0345
- (_Bool)useMedicalEmergencyContacts;	// IMP=0x00100000000f0320

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

