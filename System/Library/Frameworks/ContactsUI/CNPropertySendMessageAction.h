//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNActionMenuHelper, CNContactActionsController, CNUIUserActionListDataSource, NSString, UIContextMenuInteraction;

__attribute__((visibility("hidden")))
@interface CNPropertySendMessageAction
{
    CNContactActionsController *_actionsController;	// 8 = 0x8
    CNUIUserActionListDataSource *_actionsDataSource;	// 16 = 0x10
    CNActionMenuHelper *_actionMenuHelper;	// 24 = 0x18
    UIContextMenuInteraction *_contextMenuInteraction;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001b68e6
@property(retain, nonatomic) UIContextMenuInteraction *contextMenuInteraction; // @synthesize contextMenuInteraction=_contextMenuInteraction;
@property(retain, nonatomic) CNActionMenuHelper *actionMenuHelper; // @synthesize actionMenuHelper=_actionMenuHelper;
@property(retain, nonatomic) CNUIUserActionListDataSource *actionsDataSource; // @synthesize actionsDataSource=_actionsDataSource;
@property(retain, nonatomic) CNContactActionsController *actionsController; // @synthesize actionsController=_actionsController;
- (void)contactActionsController:(id)arg1 didUpdateWithMenu:(id)arg2;	// IMP=0x00000000001b67c8
- (void)contactActionsController:(id)arg1 didSelectAction:(id)arg2;	// IMP=0x00000000001b670e
- (void)performActionForItem:(id)arg1 sender:(id)arg2;	// IMP=0x00000000001b63b4
- (void)performActionWithSender:(id)arg1;	// IMP=0x00000000001b62ff
- (CDUnknownBlockType)menuProviderForContextMenuInteraction:(id)arg1;	// IMP=0x00000000001b60ba
- (_Bool)shouldPresentDisambiguationMenu;	// IMP=0x00000000001b6071
- (id)initWithContact:(id)arg1 propertyItems:(id)arg2 actionDataSource:(id)arg3;	// IMP=0x00000000001b5fef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

