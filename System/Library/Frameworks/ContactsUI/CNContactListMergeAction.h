//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNUIGroupsAndContainersSaveManager, _TtC10ContactsUI33ContactListMergeUnifyActionHelper;

__attribute__((visibility("hidden")))
@interface CNContactListMergeAction
{
    _TtC10ContactsUI33ContactListMergeUnifyActionHelper *_mergeUnifyActionHelper;	// 8 = 0x8
    CNUIGroupsAndContainersSaveManager *_groupsAndContainersSaveManager;	// 16 = 0x10
}

+ (id)descriptorForRequiredKeys;	// IMP=0x0060000000182d7e
+ (id)log;	// IMP=0x0060000000182d4e
- (void).cxx_destruct;	// IMP=0x0000000000183f09
@property(retain, nonatomic) CNUIGroupsAndContainersSaveManager *groupsAndContainersSaveManager; // @synthesize groupsAndContainersSaveManager=_groupsAndContainersSaveManager;
@property(retain, nonatomic) _TtC10ContactsUI33ContactListMergeUnifyActionHelper *mergeUnifyActionHelper; // @synthesize mergeUnifyActionHelper=_mergeUnifyActionHelper;
- (void)showMergeFailureAlert;	// IMP=0x0000000000183d42
- (void)performUndoAction;	// IMP=0x0000000000183a1e
- (_Bool)mergeWillRequireLinkingForContacts:(id)arg1;	// IMP=0x000000000018396c
- (_Bool)executeAction;	// IMP=0x000000000018325f
- (void)performAction;	// IMP=0x0000000000182e4b
- (_Bool)shouldReloadListOnCompletion;	// IMP=0x0000000000182e43

@end

