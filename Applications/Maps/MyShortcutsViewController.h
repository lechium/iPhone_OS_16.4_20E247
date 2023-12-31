//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ContainerHeaderView, MapsThemeTableView, MyShortcutsDataSource, NSString, ShortcutFooterToolBarView, UIView;

@interface MyShortcutsViewController
{
    UIView *_hideableFooterView;	// 8 = 0x8
    ContainerHeaderView *_titleHeaderView;	// 16 = 0x10
    ShortcutFooterToolBarView *_footerContentView;	// 24 = 0x18
    MapsThemeTableView *_tableView;	// 32 = 0x20
    MyShortcutsDataSource *_myShortcutsDataSource;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000002170e2
- (void)_addShortcutAction;	// IMP=0x001000000021704e
- (void)view:(id)arg1 requestsShortcutAction:(unsigned long long)arg2;	// IMP=0x0010000000216f6a
- (void)dataSource:(id)arg1 itemTapped:(id)arg2;	// IMP=0x0010000000216c4f
- (void)dataSource:(id)arg1 itemFocused:(id)arg2;	// IMP=0x0010000000216c49
- (void)dataSourceUpdated:(id)arg1;	// IMP=0x0010000000216bfc
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0010000000216bb6
- (void)headerViewButtonTapped:(id)arg1;	// IMP=0x0010000000216ba4
- (void)loadDataSource;	// IMP=0x0010000000216a9e
- (void)_updateHeaderHairlineAnimated:(_Bool)arg1;	// IMP=0x00100000002169b1
- (void)_updateFooterInset;	// IMP=0x00100000002168c0
- (void)didChangeLayout:(unsigned long long)arg1;	// IMP=0x001000000021687f
- (void)viewDidLayoutSubviews;	// IMP=0x001000000021683e
- (void)willResignCurrent:(_Bool)arg1;	// IMP=0x00100000002167f3
- (void)willBecomeCurrent:(_Bool)arg1;	// IMP=0x001000000021677d
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000021673c
- (void)viewDidLoad;	// IMP=0x0010000000215a44
- (id)preferredFocusEnvironments;	// IMP=0x00100000002159d9
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0010000000215912
- (id)keyCommands;	// IMP=0x0010000000215770
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00100000002156b3
- (_Bool)_canShowWhileLocked;	// IMP=0x00100000002156ab

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

