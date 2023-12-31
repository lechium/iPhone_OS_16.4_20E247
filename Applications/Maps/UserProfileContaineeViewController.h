//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount, ContainerHeaderView, NSObject, NSString, UserProfileCollectionViewController, UserProfileHeaderView;
@protocol UserProfileContaineeDelegate;

@interface UserProfileContaineeViewController
{
    UserProfileCollectionViewController *_contentViewController;	// 8 = 0x8
    ContainerHeaderView *_headerView;	// 16 = 0x10
    NSObject<UserProfileContaineeDelegate> *_delegate;	// 24 = 0x18
    long long _numberOfRows;	// 32 = 0x20
    ACAccount *_account;	// 40 = 0x28
    UserProfileHeaderView *_userProfileHeaderView;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000836a75
@property(retain, nonatomic) UserProfileHeaderView *userProfileHeaderView; // @synthesize userProfileHeaderView=_userProfileHeaderView;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
@property(nonatomic) long long numberOfRows; // @synthesize numberOfRows=_numberOfRows;
- (void)userDataDidUpdate;	// IMP=0x00100000008369db
- (void)_proceedToTravelPreferences;	// IMP=0x001000000083694c
- (void)_proceedToVirtualGarage;	// IMP=0x00100000008368a4
- (void)_proceedToRatings;	// IMP=0x00100000008367fc
- (void)_proceedToReports;	// IMP=0x0010000000836754
- (void)_proceedToMyGuides;	// IMP=0x00100000008365be
- (void)_proceedToFavorites;	// IMP=0x00100000008364ed
- (void)userProfileLinkTapped:(id)arg1 availableActions:(id)arg2;	// IMP=0x0010000000836429
- (void)profileContentDidUpdate;	// IMP=0x0010000000836247
- (void)handleDismissAction:(id)arg1;	// IMP=0x0010000000836185
- (void)headerViewLinkTapped:(id)arg1;	// IMP=0x00100000008360f1
- (void)headerViewButtonTapped:(id)arg1;	// IMP=0x00100000008360df
- (double)_calculateHeight;	// IMP=0x0010000000836004
- (double)heightForLayout:(unsigned long long)arg1;	// IMP=0x0010000000835e63
- (void)_retrieveUserInformation;	// IMP=0x0010000000835b04
- (void)_setupConstraints;	// IMP=0x0010000000835762
- (void)_setupViews;	// IMP=0x0010000000834cea
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000834cbb
- (void)viewDidLoad;	// IMP=0x0010000000834b9b
- (id)initWithAccount:(id)arg1 delegate:(id)arg2;	// IMP=0x0010000000834a6e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

