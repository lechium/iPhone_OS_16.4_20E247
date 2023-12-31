//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AddressBookManager, EditLocationViewController, EditShortcutTitleCell, ModalCardHeaderView, NSArray, NSString, ShortcutEditSession;
@protocol ShortcutEditSessionController;

@interface EditShortcutViewController
{
    ModalCardHeaderView *_modalHeaderView;	// 8 = 0x8
    EditShortcutTitleCell *_editTitleCell;	// 16 = 0x10
    NSArray *_sections;	// 24 = 0x18
    EditLocationViewController *_refineCoordinateViewController;	// 32 = 0x20
    _Bool _dismissed;	// 40 = 0x28
    AddressBookManager *_sharedManager;	// 48 = 0x30
    NSArray *_actions;	// 56 = 0x38
    _Bool _openingContactController;	// 64 = 0x40
    ShortcutEditSession *_shortcutEditSession;	// 72 = 0x48
    id <ShortcutEditSessionController> _sessionController;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000045f373
@property(nonatomic) _Bool openingContactController; // @synthesize openingContactController=_openingContactController;
@property(nonatomic) __weak id <ShortcutEditSessionController> sessionController; // @synthesize sessionController=_sessionController;
@property(readonly, nonatomic) ShortcutEditSession *shortcutEditSession; // @synthesize shortcutEditSession=_shortcutEditSession;
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x001000000045f258
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x001000000045f1be
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x001000000045f034
- (id)_cellForOpenMeCard;	// IMP=0x001000000045eea2
- (id)_cellForAddress;	// IMP=0x001000000045ebad
- (id)_configureCellForAddSharingContactAction:(id)arg1;	// IMP=0x001000000045ea57
- (id)_cellForContactsAtIndexPath:(id)arg1;	// IMP=0x001000000045e814
- (id)_cellForTypeAtIndexPath:(id)arg1;	// IMP=0x001000000045e717
- (id)_cellForLabel;	// IMP=0x001000000045e669
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;	// IMP=0x001000000045e635
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x001000000045e252
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x001000000045e18c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x001000000045df94
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x001000000045dd04
- (id)_titleForSection:(long long)arg1;	// IMP=0x001000000045dac8
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x001000000045da10
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x001000000045d718
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x001000000045d61b
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x001000000045d5fe
- (void)_openContact;	// IMP=0x001000000045d538
- (void)_addPersonAction;	// IMP=0x001000000045d4c4
- (void)_refineAction;	// IMP=0x001000000045d450
- (void)_removeAction;	// IMP=0x001000000045d3dc
- (void)_doneAction:(id)arg1;	// IMP=0x001000000045d26e
- (void)_cancelAction:(id)arg1;	// IMP=0x001000000045d25c
- (void)_close;	// IMP=0x001000000045d205
- (id)_meCardTextForType:(long long)arg1;	// IMP=0x001000000045d121
- (void)_removeContact:(id)arg1 fromSection:(long long)arg2;	// IMP=0x001000000045cfa0
- (unsigned long long)_typeForIndex:(unsigned long long)arg1;	// IMP=0x001000000045cf25
- (id)_sectionForIndex:(unsigned long long)arg1;	// IMP=0x001000000045cec6
- (void)_buildContent;	// IMP=0x001000000045c734
- (_Bool)_isMapUserShortcut;	// IMP=0x001000000045c6eb
- (id)_editShortcutTypeForIndex:(unsigned long long)arg1;	// IMP=0x001000000045c665
- (id)_shortcutTypes;	// IMP=0x001000000045c4be
- (id)shortcut;	// IMP=0x001000000045c4a1
- (long long)tableViewStyle;	// IMP=0x001000000045c487
- (_Bool)headerNeeded;	// IMP=0x001000000045c47f
- (double)preferredWidth;	// IMP=0x001000000045c439
- (void)_save;	// IMP=0x001000000045c2f8
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x001000000045c295
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000045c249
- (void)_updateWithType:(long long)arg1;	// IMP=0x001000000045c075
- (void)didEditContactWithAddressAdded:(_Bool)arg1;	// IMP=0x001000000045bfe5
- (void)resetToMapItemType;	// IMP=0x001000000045bfce
- (void)didBecomeCurrent;	// IMP=0x001000000045bf3b
- (void)handleDismissAction:(id)arg1;	// IMP=0x001000000045bf29
- (void)shoulDismissForVerticalSwipe_nonUIKitCardsOnly;	// IMP=0x001000000045bedb
- (void)setupSubviews;	// IMP=0x001000000045b7b2
- (void)viewDidLoad;	// IMP=0x001000000045b6e1
- (id)preferredFocusEnvironments;	// IMP=0x001000000045b656
- (id)keyCommands;	// IMP=0x001000000045b2ee
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x001000000045b208
@property(readonly, nonatomic) _Bool allowsRemoveAction;
@property(readonly, nonatomic) _Bool allowsRefineAction;
@property(readonly, nonatomic) _Bool allowsOpenContactAction;
@property(readonly, nonatomic) _Bool allowsAddPersonAction;
- (id)initWithShortcutEditSession:(id)arg1;	// IMP=0x001000000045b088

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

