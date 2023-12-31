//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNContactAction.h"

@class CNContactStore, CNGroup, CNManagedConfiguration, CNUIGroupsAndContainersSaveManager, NSArray, NSString, UINavigationController;

__attribute__((visibility("hidden")))
@interface CNContactAddToGroupAction : CNContactAction
{
    CNContactStore *_contactStore;	// 8 = 0x8
    NSArray *_contactParentGroups;	// 16 = 0x10
    CNGroup *_selectedGroup;	// 24 = 0x18
    CNManagedConfiguration *_managedConfiguration;	// 32 = 0x20
    NSArray *_contactParentGroupIdentifiers;	// 40 = 0x28
    UINavigationController *_groupPickerNavigationViewController;	// 48 = 0x30
    CNUIGroupsAndContainersSaveManager *_groupsAndContainersSaveManager;	// 56 = 0x38
}

+ (id)os_log;	// IMP=0x0010000000090988
- (void).cxx_destruct;	// IMP=0x0000000000091100
@property(retain, nonatomic) CNUIGroupsAndContainersSaveManager *groupsAndContainersSaveManager; // @synthesize groupsAndContainersSaveManager=_groupsAndContainersSaveManager;
@property(retain, nonatomic) UINavigationController *groupPickerNavigationViewController; // @synthesize groupPickerNavigationViewController=_groupPickerNavigationViewController;
@property(retain, nonatomic) NSArray *contactParentGroupIdentifiers; // @synthesize contactParentGroupIdentifiers=_contactParentGroupIdentifiers;
@property(retain, nonatomic) CNManagedConfiguration *managedConfiguration; // @synthesize managedConfiguration=_managedConfiguration;
@property(retain, nonatomic) CNGroup *selectedGroup; // @synthesize selectedGroup=_selectedGroup;
@property(retain, nonatomic) NSArray *contactParentGroups; // @synthesize contactParentGroups=_contactParentGroups;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (_Bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 propertyKey:(id)arg3 labeledValue:(id)arg4;	// IMP=0x000000000009102b
- (void)groupPickerDidCancel:(id)arg1;	// IMP=0x0000000000090fb7
- (void)groupPicker:(id)arg1 didSelectGroup:(id)arg2;	// IMP=0x0000000000090efc
- (_Bool)groupPicker:(id)arg1 shouldEnableGroupWithIdentifier:(id)arg2;	// IMP=0x0000000000090e8f
- (id)sourceAccountExternalIdentifiers;	// IMP=0x0000000000090dd5
- (void)performActionWithSender:(id)arg1;	// IMP=0x00000000000909e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

