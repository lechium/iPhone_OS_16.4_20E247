//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LUIPaneFooterView, LUIPaneHeaderView, LUIPrivacyView, NSArray, NSString, UITableView, UITableViewCell, UITextField_CustomEditMenu;
@protocol LUILoginDelegate;

@interface LUIAppleIDSignInViewController
{
    _Bool _isUIUpdateAllowed;	// 8 = 0x8
    id <LUILoginDelegate> _delegate;	// 16 = 0x10
    UITableView *_tableView;	// 24 = 0x18
    LUIPaneHeaderView *_headerView;	// 32 = 0x20
    LUIPrivacyView *_privacyView;	// 40 = 0x28
    UITableViewCell *_usernameCell;	// 48 = 0x30
    UITextField_CustomEditMenu *_usernameField;	// 56 = 0x38
    LUIPaneFooterView *_progressView;	// 64 = 0x40
    NSArray *_defaultDomains;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000016b53
@property(retain, nonatomic) NSArray *defaultDomains; // @synthesize defaultDomains=_defaultDomains;
@property(nonatomic) _Bool isUIUpdateAllowed; // @synthesize isUIUpdateAllowed=_isUIUpdateAllowed;
@property(retain, nonatomic) LUIPaneFooterView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UITextField_CustomEditMenu *usernameField; // @synthesize usernameField=_usernameField;
@property(retain, nonatomic) UITableViewCell *usernameCell; // @synthesize usernameCell=_usernameCell;
@property(retain, nonatomic) LUIPrivacyView *privacyView; // @synthesize privacyView=_privacyView;
@property(retain, nonatomic) LUIPaneHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property __weak id <LUILoginDelegate> delegate; // @synthesize delegate=_delegate;
- (void)presentPasscodeViewControllerForUser:(id)arg1 passcodeViewDidAppearAction:(CDUnknownBlockType)arg2 passcodeCanceledAction:(CDUnknownBlockType)arg3 passcodeEnteredAction:(CDUnknownBlockType)arg4;	// IMP=0x0010000000016984
- (void)authenticationCanceled;	// IMP=0x00100000000168c0
- (void)_updateDefaultDomainSetting;	// IMP=0x001000000001680d
- (_Bool)_validateUsername:(id)arg1;	// IMP=0x0010000000016777
- (void)_clearTextFields;	// IMP=0x0010000000016738
@property(readonly, nonatomic) long long viewType;
- (void)textFieldDidChange:(id)arg1;	// IMP=0x0010000000016202
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x0010000000016197
- (double)_maxLabelWidth;	// IMP=0x0010000000016056
- (id)_username;	// IMP=0x0010000000015ca4
- (void)setUsername:(id)arg1;	// IMP=0x0010000000015c32
- (id)_subtitleAttributedString;	// IMP=0x0010000000015553
- (void)setHeaderTitle;	// IMP=0x0010000000015460
- (double)heightForHeaderInTableView:(id)arg1;	// IMP=0x0010000000015297
- (id)viewForHeaderInTableView:(id)arg1;	// IMP=0x0010000000015285
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000015206
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00100000000151fb
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00100000000151f0
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00100000000151de
- (void)bottomLeftVibrantButtonTapped:(id)arg1;	// IMP=0x0010000000015140
- (id)titleForBottomRightVibrantButton;	// IMP=0x00100000000150d8
- (id)titleForBottomLeftVibrantButton;	// IMP=0x00100000000150a7
- (long long)imageTypeForBottomRightVibrantButton;	// IMP=0x001000000001509c
- (long long)imageTypeForBottomLeftVibrantButton;	// IMP=0x0010000000015091
- (_Bool)shouldShowBottomRightVibrantButton;	// IMP=0x0010000000015046
- (_Bool)shouldShowBottomLeftVibrantButton;	// IMP=0x001000000001502d
- (id)_bottomLeftButtonTitleForViewType:(long long)arg1;	// IMP=0x0010000000014f7c
- (double)heightForFooterInTableView:(id)arg1;	// IMP=0x0010000000014ecc
- (id)viewForFooterInTableView:(id)arg1;	// IMP=0x0010000000014eba
- (void)signInButtonPressed:(id)arg1;	// IMP=0x0010000000014db9
- (void)_fetchAuthMode;	// IMP=0x0010000000014a32
- (id)_tableViewConstraints;	// IMP=0x00100000000146b6
- (void)_activateLayoutConstraints;	// IMP=0x00100000000145cc
- (long long)preferredStatusBarStyle;	// IMP=0x0010000000014336
- (void)viewDidLoad;	// IMP=0x00100000000140a0
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0010000000014058
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000013fd4

// Remaining properties
// Error: Property attributes should begin with the type ('T') attribute, property name: debugDescription
// Property attributes: (null)

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
