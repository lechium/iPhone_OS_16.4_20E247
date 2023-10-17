//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class CNAccountsAndGroupsActionsProvider, CNAccountsAndGroupsAuthorizationContext, CNAccountsAndGroupsDataSource, CNContainerDataSource, CNManagedConfiguration, CNUIEditAuthorizationController, CNUIGroupsAndContainersSaveManager, CNUIUserActivityManager, NSString, UIBarButtonItem, UICollectionView, UICollectionViewDiffableDataSource, UIKeyCommand, _UIDiffableDataSourceOutlineSectionController;
@protocol CNAccountsAndGroupsViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNAccountsAndGroupsViewController : UIViewController
{
    _Bool _allowsEditing;	// 8 = 0x8
    _Bool _allowsCanceling;	// 9 = 0x9
    _Bool _allowsDone;	// 10 = 0xa
    _Bool _needsReload;	// 11 = 0xb
    _Bool _isVisible;	// 12 = 0xc
    CNAccountsAndGroupsDataSource *_dataSource;	// 16 = 0x10
    CNManagedConfiguration *_managedConfiguration;	// 24 = 0x18
    id <CNAccountsAndGroupsViewControllerDelegate> _delegate;	// 32 = 0x20
    CNUIGroupsAndContainersSaveManager *_groupsAndContainersSaveManager;	// 40 = 0x28
    CNUIEditAuthorizationController *_editAuthorizationController;	// 48 = 0x30
    CNContainerDataSource *_containerDataSource;	// 56 = 0x38
    CNAccountsAndGroupsAuthorizationContext *_currentAuthorizationContext;	// 64 = 0x40
    CNAccountsAndGroupsActionsProvider *_actionsProvider;	// 72 = 0x48
    CNUIUserActivityManager *_activityManager;	// 80 = 0x50
    long long _buttonBehavior;	// 88 = 0x58
    UIKeyCommand *_addGroupKeyCommand;	// 96 = 0x60
    UIViewController *_potentiallyPresentedViewController;	// 104 = 0x68
    UICollectionView *_collectionView;	// 112 = 0x70
    _UIDiffableDataSourceOutlineSectionController *_sectionController;	// 120 = 0x78
    UICollectionViewDiffableDataSource *_diffableDataSource;	// 128 = 0x80
    UIBarButtonItem *_addGroupBarButtonItem;	// 136 = 0x88
    UIBarButtonItem *_cancelBarButtonItem;	// 144 = 0x90
}

+ (id)allowedDropTypes;	// IMP=0x00100000000bd6b8
+ (id)log;	// IMP=0x00100000000bd688
- (void).cxx_destruct;	// IMP=0x00000000000bbae0
@property(retain, nonatomic) UIBarButtonItem *cancelBarButtonItem; // @synthesize cancelBarButtonItem=_cancelBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *addGroupBarButtonItem; // @synthesize addGroupBarButtonItem=_addGroupBarButtonItem;
@property(retain) UICollectionViewDiffableDataSource *diffableDataSource; // @synthesize diffableDataSource=_diffableDataSource;
@property(retain) _UIDiffableDataSourceOutlineSectionController *sectionController; // @synthesize sectionController=_sectionController;
@property(retain) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIViewController *potentiallyPresentedViewController; // @synthesize potentiallyPresentedViewController=_potentiallyPresentedViewController;
@property(retain, nonatomic) UIKeyCommand *addGroupKeyCommand; // @synthesize addGroupKeyCommand=_addGroupKeyCommand;
@property(nonatomic) long long buttonBehavior; // @synthesize buttonBehavior=_buttonBehavior;
@property(readonly, nonatomic) CNUIUserActivityManager *activityManager; // @synthesize activityManager=_activityManager;
@property(retain, nonatomic) CNAccountsAndGroupsActionsProvider *actionsProvider; // @synthesize actionsProvider=_actionsProvider;
@property(retain, nonatomic) CNAccountsAndGroupsAuthorizationContext *currentAuthorizationContext; // @synthesize currentAuthorizationContext=_currentAuthorizationContext;
@property(retain, nonatomic) CNContainerDataSource *containerDataSource; // @synthesize containerDataSource=_containerDataSource;
@property(retain, nonatomic) CNUIEditAuthorizationController *editAuthorizationController; // @synthesize editAuthorizationController=_editAuthorizationController;
@property(retain, nonatomic) CNUIGroupsAndContainersSaveManager *groupsAndContainersSaveManager; // @synthesize groupsAndContainersSaveManager=_groupsAndContainersSaveManager;
@property(nonatomic) _Bool isVisible; // @synthesize isVisible=_isVisible;
@property(nonatomic) _Bool needsReload; // @synthesize needsReload=_needsReload;
@property(nonatomic) _Bool allowsDone; // @synthesize allowsDone=_allowsDone;
@property(nonatomic) _Bool allowsCanceling; // @synthesize allowsCanceling=_allowsCanceling;
@property(nonatomic) _Bool allowsEditing; // @synthesize allowsEditing=_allowsEditing;
@property(nonatomic) __weak id <CNAccountsAndGroupsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CNManagedConfiguration *managedConfiguration; // @synthesize managedConfiguration=_managedConfiguration;
@property(retain, nonatomic) CNAccountsAndGroupsDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)_updateUserActivity;	// IMP=0x00000000000bb4c2
- (id)presentingViewControllerForActions;	// IMP=0x00000000000bb4b9
- (void)actionDidFinish:(id)arg1;	// IMP=0x00000000000bb4b3
- (void)action:(id)arg1 presentViewController:(id)arg2;	// IMP=0x00000000000bb336
- (void)expandLargeTitle;	// IMP=0x00000000000bb1b8
- (void)expandLargeTitleIfNeeded;	// IMP=0x00000000000bb144
- (void)keyboardWillHide:(id)arg1;	// IMP=0x00000000000bb0d2
- (void)keyboardWillShow:(id)arg1;	// IMP=0x00000000000bae9d
- (void)dismissKeyboard;	// IMP=0x00000000000bae5b
- (void)didTapCollectionView:(id)arg1;	// IMP=0x00000000000bacfd
- (void)showEditAuthorizationPaneWithAuthorizationContext:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000babba
- (void)presentErrorAlertWithTitle:(id)arg1 message:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000000baabd
- (void)presentErrorAlertWithMessage:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000baaa3
- (void)presentController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000baa3c
- (void)editAuthorizationController:(id)arg1 authorizationDidFinishWithResult:(long long)arg2;	// IMP=0x00000000000ba691
- (void)authorizedAddContacts:(id)arg1 toDestinationItem:(id)arg2;	// IMP=0x00000000000ba43d
- (void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;	// IMP=0x00000000000ba099
- (id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;	// IMP=0x00000000000b9ee7
- (_Bool)collectionView:(id)arg1 canHandleDropSession:(id)arg2;	// IMP=0x00000000000b9e74
- (id)multitaskingDragExclusionRects;	// IMP=0x00000000000b9d85
- (void)collectionView:(id)arg1 willEndContextMenuInteractionWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x00000000000b9c1d
- (id)collectionView:(id)arg1 contextMenuConfiguration:(id)arg2 dismissalPreviewForItemAtIndexPath:(id)arg3;	// IMP=0x00000000000b993d
- (id)collectionView:(id)arg1 contextMenuConfiguration:(id)arg2 highlightPreviewForItemAtIndexPath:(id)arg3;	// IMP=0x00000000000b9698
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemsAtIndexPaths:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x00000000000b938f
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x00000000000b9250
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00000000000b91c9
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000000b8f86
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000000b8ea6
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x00000000000b8e94
- (void)item:(id)arg1 didEndEditingWithName:(id)arg2;	// IMP=0x00000000000b8d48
- (void)cellTextViewDidChangeHeight;	// IMP=0x00000000000b8cb7
- (_Bool)isCollectionViewEditing;	// IMP=0x00000000000b8c73
- (void)selectAllContacts;	// IMP=0x00000000000b89f4
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000000b8942
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000b887a
- (_Bool)shouldEnableItem:(id)arg1;	// IMP=0x00000000000b87b8
- (void)configureDataSource;	// IMP=0x00000000000b84d6
- (id)layout;	// IMP=0x00000000000b83a3
- (id)groupsStyle;	// IMP=0x00000000000b8340
- (void)contentSizeCategoryDidChange:(id)arg1;	// IMP=0x00000000000b832e
- (_Bool)viewCanReload;	// IMP=0x00000000000b824c
- (_Bool)isNotificationInternalSave:(id)arg1;	// IMP=0x00000000000b806b
- (void)contactStoreDidChange:(id)arg1;	// IMP=0x00000000000b7f67
- (void)deselectAllItems;	// IMP=0x00000000000b7da2
- (_Bool)isAnyListCellCurrentlyEditing;	// IMP=0x00000000000b7cf8
- (void)setEditingForGroupItem:(id)arg1;	// IMP=0x00000000000b7b7c
- (void)restoreCurrentlyEditingGroupIfNeeded;	// IMP=0x00000000000b7b0d
- (id)currentlySelectedItem;	// IMP=0x00000000000b7a35
- (void)selectCurrentItemIfNeeded;	// IMP=0x00000000000b791c
- (void)resignAllFirstRespondersSavingCurrentlyEditing:(_Bool)arg1;	// IMP=0x00000000000b7844
- (void)expandSectionForAccountWithIdentifier:(id)arg1;	// IMP=0x00000000000b7689
- (void)reloadData;	// IMP=0x00000000000b6e7b
- (void)reloadCollectionViewForSectionWithIdentifier:(id)arg1 settingFilterForEditingItem:(_Bool)arg2 allowsReloadWhenEditing:(_Bool)arg3;	// IMP=0x00000000000b6d1d
- (void)reloadCollectionViewAddingPlaceholderItem:(id)arg1 inSectionWithIdentifier:(id)arg2;	// IMP=0x00000000000b6b5b
- (void)cleanUpItemIfNeeded:(id)arg1;	// IMP=0x00000000000b69f0
- (void)reloadCollectionViewDeletingItem:(id)arg1;	// IMP=0x00000000000b6799
- (void)cancel:(id)arg1;	// IMP=0x00000000000b66fc
- (void)updateToolbarVisibility;	// IMP=0x00000000000b665b
- (void)updateNavigationButtons;	// IMP=0x00000000000b61ec
- (_Bool)shouldShowCancelButton;	// IMP=0x00000000000b6153
- (id)menuForContainers;	// IMP=0x00000000000b606d
- (void)reloadAddGroupButton;	// IMP=0x00000000000b5c40
- (void)addDefaultGroup:(id)arg1;	// IMP=0x00000000000b5a8a
- (void)authorizedSetCollectionViewEditing:(_Bool)arg1;	// IMP=0x00000000000b569e
- (void)authorizedSetViewEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000b5653
- (_Bool)editingCollectionViewRequiresAuthorization;	// IMP=0x00000000000b5454
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000b53b9
- (void)setUpCollectionView;	// IMP=0x00000000000b4e1b
- (void)dealloc;	// IMP=0x00000000000b4da6
- (_Bool)canBecomeFirstResponder;	// IMP=0x00000000000b4d9e
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000000b4d5b
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000b4c66
- (_Bool)shouldSetFirstResponder;	// IMP=0x00000000000b4b51
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000b4a64
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000b491d
- (void)viewDidLoad;	// IMP=0x00000000000b486f
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000b4413

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
