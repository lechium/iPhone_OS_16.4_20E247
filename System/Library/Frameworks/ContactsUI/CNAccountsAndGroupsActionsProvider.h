//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNAccountsAndGroupsDataSource, CNUIGroupsAndContainersSaveManager, NSMutableArray;
@protocol CNAccountsAndGroupsActionsProviderDelegate;

__attribute__((visibility("hidden")))
@interface CNAccountsAndGroupsActionsProvider : NSObject
{
    id <CNAccountsAndGroupsActionsProviderDelegate> _delegate;	// 8 = 0x8
    NSMutableArray *_issuedSaveRequestIdentifiers;	// 16 = 0x10
    CNAccountsAndGroupsDataSource *_dataSource;	// 24 = 0x18
    CNUIGroupsAndContainersSaveManager *_groupsAndContainersSaveManager;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001a5732
@property(retain, nonatomic) CNUIGroupsAndContainersSaveManager *groupsAndContainersSaveManager; // @synthesize groupsAndContainersSaveManager=_groupsAndContainersSaveManager;
@property(retain, nonatomic) CNAccountsAndGroupsDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSMutableArray *issuedSaveRequestIdentifiers; // @synthesize issuedSaveRequestIdentifiers=_issuedSaveRequestIdentifiers;
@property(nonatomic) __weak id <CNAccountsAndGroupsActionsProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isAuthorizedToEditItem:(id)arg1;	// IMP=0x00000000001a55fb
- (_Bool)addGroupToStoreForGroupItem:(id)arg1 withName:(id)arg2;	// IMP=0x00000000001a51da
- (void)authorizedCreateGroupActionForContainerItem:(id)arg1;	// IMP=0x00000000001a4f93
- (void)createGroupActionForContainerItem:(id)arg1 isCollectionViewEditing:(_Bool)arg2;	// IMP=0x00000000001a4e65
- (void)updateItem:(id)arg1 withNewName:(id)arg2;	// IMP=0x00000000001a4952
- (_Bool)authorizedEditGroupNameForCell:(id)arg1;	// IMP=0x00000000001a4893
- (_Bool)editGroupNameActionForItem:(id)arg1 cell:(id)arg2;	// IMP=0x00000000001a47b1
- (_Bool)authorizedDeleteGroupForItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001a43f6
- (void)deleteGroupForItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001a42ed
- (_Bool)deleteGroupActionForItem:(id)arg1 sourceView:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001a3ea2
- (_Bool)exportGroupForItem:(id)arg1 sourceView:(id)arg2;	// IMP=0x00000000001a3c98
- (_Bool)messageGroupForItem:(id)arg1;	// IMP=0x00000000001a399e
- (_Bool)emailGroupForItem:(id)arg1;	// IMP=0x00000000001a36fe
- (id)actionsForItem:(id)arg1 cell:(id)arg2;	// IMP=0x00000000001a2f9d
- (id)contextMenuConfigurationForItem:(id)arg1 cell:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000001a2e9d
- (id)trailingActionsForItem:(id)arg1 cell:(id)arg2 isCollectionViewEditing:(_Bool)arg3;	// IMP=0x00000000001a2c0e
- (id)leadingActionsForItem:(id)arg1 cell:(id)arg2;	// IMP=0x00000000001a2975
- (id)initWithDataSource:(id)arg1 saveManager:(id)arg2;	// IMP=0x00000000001a28cd

@end
