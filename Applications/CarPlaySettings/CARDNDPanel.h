//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CARAutomaticDNDStatus, CARDoNotDisturbSpecifier, CARSettingsCellSpecifier, DNDModeConfigurationService, NSArray, NSString;

@interface CARDNDPanel
{
    CARSettingsCellSpecifier *_cellSpecifier;	// 8 = 0x8
    NSArray *_specifiers;	// 16 = 0x10
    CARDoNotDisturbSpecifier *_dndSpecifier;	// 24 = 0x18
    DNDModeConfigurationService *_dndModeService;	// 32 = 0x20
    CARAutomaticDNDStatus *_dndStatus;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000014c3e
@property(retain, nonatomic) CARAutomaticDNDStatus *dndStatus; // @synthesize dndStatus=_dndStatus;
@property(retain, nonatomic) DNDModeConfigurationService *dndModeService; // @synthesize dndModeService=_dndModeService;
@property(retain, nonatomic) CARDoNotDisturbSpecifier *dndSpecifier; // @synthesize dndSpecifier=_dndSpecifier;
@property(retain, nonatomic) NSArray *specifiers; // @synthesize specifiers=_specifiers;
- (void)_drivingToggleChanged:(_Bool)arg1;	// IMP=0x001000000001484a
- (_Bool)_isDrivingToggleOn;	// IMP=0x00100000000146ce
- (void)modeConfigurationService:(id)arg1 didReceiveAvailableModesUpdate:(id)arg2;	// IMP=0x00100000000145cb
- (id)specifierSections;	// IMP=0x00100000000144ac
- (id)cellSpecifier;	// IMP=0x0010000000014301
- (void)invalidate;	// IMP=0x00100000000142a5
- (id)initWithPanelController:(id)arg1;	// IMP=0x0010000000013f39

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

