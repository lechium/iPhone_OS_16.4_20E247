//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CARSettingsCellSpecifier, CARSettingsGroupCellSpecifier, CRSSiriPreferences, NSArray, NSString;

@interface CARAnnounceNotificationsMuteOptionsPanel
{
    CARSettingsCellSpecifier *_cellSpecifier;	// 8 = 0x8
    NSArray *_modes;	// 16 = 0x10
    CARSettingsGroupCellSpecifier *_groupSpecifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000001bf88
@property(readonly, nonatomic) CARSettingsGroupCellSpecifier *groupSpecifier; // @synthesize groupSpecifier=_groupSpecifier;
@property(readonly, nonatomic) NSArray *modes; // @synthesize modes=_modes;
- (long long)_userNotificationSettingForAnnounceType:(long long)arg1;	// IMP=0x001000000001bf4c
- (id)_modeForSiriPreferences:(id)arg1;	// IMP=0x001000000001bddb
- (void)_updateSettingsForMode:(id)arg1;	// IMP=0x001000000001bc6d
- (void)_updateCurrentMode;	// IMP=0x001000000001bb98
- (void)preferences:(id)arg1 carPlayAnnounceEnablementTypeChanged:(long long)arg2;	// IMP=0x001000000001bb06
@property(readonly, nonatomic) CRSSiriPreferences *siriPreferences;
- (id)specifierSections;	// IMP=0x001000000001b914
- (id)cellSpecifier;	// IMP=0x001000000001b79c
- (id)initWithPanelController:(id)arg1;	// IMP=0x001000000001b50e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

