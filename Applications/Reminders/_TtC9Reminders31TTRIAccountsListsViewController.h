//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE;

@interface _TtC9Reminders31TTRIAccountsListsViewController : UIViewController
{
    MISSING_TYPE *searchSelection;	// 8 = 0x8
    MISSING_TYPE *presenter;	// 240 = 0xf0
    MISSING_TYPE *viewModel;	// 256 = 0x100
    MISSING_TYPE *currentEditModeTransition;	// 264 = 0x108
    MISSING_TYPE *searchController;	// 272 = 0x110
    MISSING_TYPE *searchResultContainerViewController;	// 280 = 0x118
    MISSING_TYPE *pendingSearchTerm;	// 288 = 0x120
    MISSING_TYPE *$__lazy_storage_$_addListButton;	// 304 = 0x130
    MISSING_TYPE *$__lazy_storage_$_addReminderButton;	// 312 = 0x138
    MISSING_TYPE *$__lazy_storage_$_addGroupButton;	// 320 = 0x140
    MISSING_TYPE *$__lazy_storage_$_editButton;	// 328 = 0x148
    MISSING_TYPE *$__lazy_storage_$_actionMenuButton;	// 336 = 0x150
    MISSING_TYPE *needsWorkaround51600172;	// 344 = 0x158
    MISSING_TYPE *accountSpinnerVisibleByAccountID;	// 352 = 0x160
    MISSING_TYPE *currentBarButtonItemConfiguration;	// 360 = 0x168
    MISSING_TYPE *dropExceedsMaximumNumberOfPinnedListsTracker;	// 368 = 0x170
    MISSING_TYPE *isInExpandedSplitViewSnapshot;	// 376 = 0x178
}

- (void).cxx_destruct;	// IMP=0x0040000000055b70
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x001000000005dac0
- (void)showListAction:(id)arg1;	// IMP=0x001000000005d290
- (void)beginSearchAction:(id)arg1;	// IMP=0x001000000005cbd0
- (void)newListAction:(id)arg1;	// IMP=0x001000000005cb40
- (void)didTapDone:(id)arg1;	// IMP=0x001000000005cad0
- (void)didTapEdit:(id)arg1;	// IMP=0x001000000005cac0
- (void)didTapNewGroup:(id)arg1;	// IMP=0x001000000005ca40
- (void)didTapNewList:(id)arg1;	// IMP=0x001000000005ca20
- (void)didTapNewReminder:(id)arg1;	// IMP=0x001000000005c960
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000059070
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000058e40
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0010000000058a00
- (void)viewDidLayoutSubviews;	// IMP=0x0010000000058650
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00100000000584f0
- (void);	// IMP=0x0010000000058340
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000000580b0
- (void)viewDidLoad;	// IMP=0x0010000000057ca0
- (void)loadView;	// IMP=0x0010000000055d20
- (void)dealloc;	// IMP=0x0010000000055b50
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000055a50

@end

