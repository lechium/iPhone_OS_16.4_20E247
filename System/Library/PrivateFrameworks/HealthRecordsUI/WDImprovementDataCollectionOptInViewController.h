//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKViewController.h>

@class HKClinicalAccount, NSArray, NSString, UIButton, UITableView, UIView, WDClinicalAccountOnboardingSession;

__attribute__((visibility("hidden")))
@interface WDImprovementDataCollectionOptInViewController : HKViewController
{
    WDClinicalAccountOnboardingSession *_onboardingSession;	// 8 = 0x8
    HKClinicalAccount *_account;	// 16 = 0x10
    NSArray *_sections;	// 24 = 0x18
    UIButton *_allowButton;	// 32 = 0x20
    UIButton *_doNotAllowButton;	// 40 = 0x28
    UITableView *_tableView;	// 48 = 0x30
    UIView *_footerView;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000002fb84
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIButton *doNotAllowButton; // @synthesize doNotAllowButton=_doNotAllowButton;
@property(retain, nonatomic) UIButton *allowButton; // @synthesize allowButton=_allowButton;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(readonly, nonatomic) HKClinicalAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) WDClinicalAccountOnboardingSession *onboardingSession; // @synthesize onboardingSession=_onboardingSession;
- (void)_setOptInStatus:(long long)arg1;	// IMP=0x000000000002f884
- (void)aboutPrivacyButtonTapped:(id)arg1;	// IMP=0x000000000002f7d7
- (void)_pushToNextView;	// IMP=0x000000000002f6f9
- (void)doNotAllowButtonTapped:(id)arg1;	// IMP=0x000000000002f5ae
- (void)allowButtonTapped:(id)arg1;	// IMP=0x000000000002f465
- (void)cancelButtonTapped:(id)arg1;	// IMP=0x000000000002f44c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000002f1e7
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000002f173
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x000000000002f16b
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x000000000002f162
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x000000000002f15a
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x000000000002f152
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x000000000002f149
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000000002f141
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000002f0fd
- (void)_computeSections;	// IMP=0x000000000002eff1
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000002ef76
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000002ef35
- (void)viewDidLoad;	// IMP=0x000000000002ec53
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x000000000002ec48
- (void)_setupConstraints;	// IMP=0x000000000002df9a
- (void)_setupSubviews;	// IMP=0x000000000002db49
- (void)loadView;	// IMP=0x000000000002d9cf
- (id)initWithOnboardingSession:(id)arg1 account:(id)arg2;	// IMP=0x000000000002d929

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

