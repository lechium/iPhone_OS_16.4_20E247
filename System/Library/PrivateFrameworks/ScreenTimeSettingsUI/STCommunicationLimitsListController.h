//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNUIFamilyMemberContactsController, NSString, PSSpecifier, STCommunicationLimits;

__attribute__((visibility("hidden")))
@interface STCommunicationLimitsListController
{
    _Bool _syncingiCloudContacts;	// 192 = 0xc0
    PSSpecifier *_duringScreenTimeSpecifier;	// 200 = 0xc8
    PSSpecifier *_duringDowntimeSpecifier;	// 208 = 0xd0
    PSSpecifier *_manageContactsGroupSpecifier;	// 216 = 0xd8
    PSSpecifier *_manageContactsSpecifier;	// 224 = 0xe0
    PSSpecifier *_iCloudContactsSpecifier;	// 232 = 0xe8
    PSSpecifier *_allowContactEditingSpecifier;	// 240 = 0xf0
    STCommunicationLimits *_communicationLimits;	// 248 = 0xf8
    CNUIFamilyMemberContactsController *_familyMemberContactsController;	// 256 = 0x100
}

- (void).cxx_destruct;	// IMP=0x000000000003082c
@property _Bool syncingiCloudContacts; // @synthesize syncingiCloudContacts=_syncingiCloudContacts;
@property(retain) CNUIFamilyMemberContactsController *familyMemberContactsController; // @synthesize familyMemberContactsController=_familyMemberContactsController;
@property(retain) STCommunicationLimits *communicationLimits; // @synthesize communicationLimits=_communicationLimits;
@property(retain) PSSpecifier *allowContactEditingSpecifier; // @synthesize allowContactEditingSpecifier=_allowContactEditingSpecifier;
@property(retain) PSSpecifier *iCloudContactsSpecifier; // @synthesize iCloudContactsSpecifier=_iCloudContactsSpecifier;
@property(retain) PSSpecifier *manageContactsSpecifier; // @synthesize manageContactsSpecifier=_manageContactsSpecifier;
@property(retain) PSSpecifier *manageContactsGroupSpecifier; // @synthesize manageContactsGroupSpecifier=_manageContactsGroupSpecifier;
@property(retain) PSSpecifier *duringDowntimeSpecifier; // @synthesize duringDowntimeSpecifier=_duringDowntimeSpecifier;
@property(retain) PSSpecifier *duringScreenTimeSpecifier; // @synthesize duringScreenTimeSpecifier=_duringScreenTimeSpecifier;
- (void)dismissPresentedViewController:(id)arg1;	// IMP=0x00000000000306b9
- (void)presentViewController:(id)arg1;	// IMP=0x0000000000030566
- (void)familyMemberContactsDidChange;	// IMP=0x000000000003052f
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000003025a
- (void)_enableAllowContactEditingSwitch:(_Bool)arg1;	// IMP=0x00000000000301b9
- (void)_indicateiCloudContactsSyncingStatus;	// IMP=0x000000000003011d
- (void)_updateManageContactsGroupFooterView;	// IMP=0x0000000000030011
- (void)_didCancelSyncingiCloudContacts;	// IMP=0x000000000002ff74
- (void)_didFinishSyncingiCloudContacts;	// IMP=0x000000000002fb58
- (void)_didStartSyncingiCloudContacts;	// IMP=0x000000000002f8ac
- (void)_startSyncingiCloudContacts;	// IMP=0x000000000002f817
- (void)_updateAllowContactEditing:(id)arg1;	// IMP=0x000000000002f726
- (void)_updateAllowContactEditingWithAlertIfNeeded:(id)arg1 forSpecifier:(id)arg2;	// IMP=0x000000000002f18d
- (void)_setAllowContactEditing:(id)arg1 specifier:(id)arg2;	// IMP=0x000000000002efa2
- (id)_allowContactEditing:(id)arg1;	// IMP=0x000000000002ef32
- (id)_manageContactsGroupFooterText;	// IMP=0x000000000002eb05
- (id)_statusPendingDetailText:(id)arg1;	// IMP=0x000000000002ea9d
- (void)_setManageContacts:(id)arg1 specifier:(id)arg2;	// IMP=0x000000000002e63b
- (id)_manageContacts:(id)arg1;	// IMP=0x000000000002e503
- (id)_totaliCloudContactsDetailText:(id)arg1;	// IMP=0x000000000002e42a
- (id)specifiers;	// IMP=0x000000000002d053
- (void)_communicationLimitsDidChangeFrom:(id)arg1 to:(id)arg2;	// IMP=0x000000000002cf8c
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000002cda4
- (void)setCoordinator:(id)arg1;	// IMP=0x000000000002cb94
- (void)dealloc;	// IMP=0x000000000002cb1f
- (void)viewDidLoad;	// IMP=0x000000000002cade
- (id)initWithRootViewModelCoordinator:(id)arg1;	// IMP=0x000000000002c690

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
