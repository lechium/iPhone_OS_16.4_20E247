//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccountStore, COSAppleIDAuthController, NRDevice, NSMutableDictionary, NSString, UIActivityIndicatorView, UILabel;
@protocol COSBuddyControllerDelegate;

@interface COSAppleIDLoginViewController
{
    _Bool _hasUpdatedAppleAccountProperties;	// 8 = 0x8
    _Bool _watchSupportsAuthKit;	// 9 = 0x9
    _Bool _holdingForAppleAccountPropertyUpdateToComplete;	// 10 = 0xa
    _Bool _recoveringCredentials;	// 11 = 0xb
    NRDevice *_device;	// 16 = 0x10
    ACAccountStore *_accountStore;	// 24 = 0x18
    NSString *_username;	// 32 = 0x20
    UIActivityIndicatorView *_activityIndicator;	// 40 = 0x28
    UILabel *_verifyingLabel;	// 48 = 0x30
    COSAppleIDAuthController *_authController;	// 56 = 0x38
    NSMutableDictionary *_automation;	// 64 = 0x40
}

+ (void)showAlertForLoginFailureWithError:(id)arg1 presentingViewController:(id)arg2;	// IMP=0x0020000000100150
+ (_Bool)showAlertIfLackingConnectivityAndPresentAlertWithPresentingViewController:(id)arg1;	// IMP=0x00100000000ffdcb
- (void).cxx_destruct;	// IMP=0x0020000000102578
@property(retain, nonatomic) NSMutableDictionary *automation; // @synthesize automation=_automation;
@property(nonatomic) _Bool recoveringCredentials; // @synthesize recoveringCredentials=_recoveringCredentials;
@property(nonatomic) _Bool holdingForAppleAccountPropertyUpdateToComplete; // @synthesize holdingForAppleAccountPropertyUpdateToComplete=_holdingForAppleAccountPropertyUpdateToComplete;
@property(nonatomic) _Bool watchSupportsAuthKit; // @synthesize watchSupportsAuthKit=_watchSupportsAuthKit;
@property(retain, nonatomic) COSAppleIDAuthController *authController; // @synthesize authController=_authController;
@property(retain, nonatomic) UILabel *verifyingLabel; // @synthesize verifyingLabel=_verifyingLabel;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, nonatomic) _Bool hasUpdatedAppleAccountProperties; // @synthesize hasUpdatedAppleAccountProperties=_hasUpdatedAppleAccountProperties;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(readonly, nonatomic) NRDevice *device; // @synthesize device=_device;
- (id)appleIDAuthControllerRequestsPresentingViewController:(id)arg1;	// IMP=0x0010000000102421
- (void)appleIDAuthController:(id)arg1 didSignInWithSuccess:(_Bool)arg2 error:(id)arg3;	// IMP=0x0010000000101fc9
- (void)_successfullySignedIn;	// IMP=0x0010000000101fc3
- (void)_signInToAccountWithPassword:(id)arg1;	// IMP=0x0010000000101fbd
- (void)saveiTunesStoreAccountToPairedDeviceIfForSameAppleIDWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000101df2
- (void)signInToAccountWithPassword:(id)arg1;	// IMP=0x0010000000101b34
- (void)updatedAppleAccountPropertiesWithAuthenticated:(_Bool)arg1 error:(id)arg2;	// IMP=0x00100000001018bd
- (void)updateAppleAccountProperties;	// IMP=0x0010000000101638
- (void)_finishedActivating;	// IMP=0x0010000000101533
- (void)setAwaitingActivationIfNotActivated;	// IMP=0x0010000000101475
- (_Bool)registerActivationObserver;	// IMP=0x00100000001012bb
- (void)recoverCredentials;	// IMP=0x00100000000ffc4f
- (void)allowUserInteractions:(_Bool)arg1;	// IMP=0x00100000000ffae0
- (void)stopNetworkRequest;	// IMP=0x00100000000ff9d6
- (void)startNetworkRequest;	// IMP=0x00100000000ff828
- (void)viewDidLoad;	// IMP=0x00100000000ff4c0
- (id)appendUsernameToDetailText:(id)arg1;	// IMP=0x00100000000ff434
- (void)signInFailedWithError:(id)arg1;	// IMP=0x00100000000ff422
- (void)loggedInSuccessfullyWithBuddyControllerDoneBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ff410
- (void)finishedActivating;	// IMP=0x00100000000ff407
- (void)finishedUpdatingAppleAccountProperties;	// IMP=0x00100000000ff3fe
- (void)tappedSkipButton:(id)arg1;	// IMP=0x00100000000ff3a1
- (void)alternateButtonPressed:(id)arg1;	// IMP=0x00100000000ff345
- (void)suggestedButtonPressed:(id)arg1;	// IMP=0x00100000000fee51
- (id)activationHoldActivityIdentifier;	// IMP=0x00100000000fee48
- (id)holdActivityIdentifier;	// IMP=0x00100000000fee3f
- (unsigned long long)performanceMonitorCATiming;	// IMP=0x00100000000fee36
- (id)performanceMonitorActivityName;	// IMP=0x00100000000fee2d
- (_Bool)allowSkipping;	// IMP=0x00100000000fee24
- (id)account;	// IMP=0x00100000000fee12
- (id)okayButtonTitle;	// IMP=0x00100000000fed93
- (id)alternateButtonTitle;	// IMP=0x00100000000fed27
- (id)suggestedButtonTitle;	// IMP=0x00100000000fecbb
- (id)detailString;	// IMP=0x00100000000fecb2
- (id)titleString;	// IMP=0x00100000000feca9
- (void)dealloc;	// IMP=0x00100000000fec34
- (id)init;	// IMP=0x00100000000feb84
- (_Bool)controllerAllowsNavigatingBackTo;	// IMP=0x00100000000feb7c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <COSBuddyControllerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
