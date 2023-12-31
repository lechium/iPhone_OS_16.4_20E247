//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount, MISSING_TYPE, NSString;

@interface COSiCloudLoginViewController
{
    ACAccount *_account;	// 8 = 0x8
    NSString *_detailTextKey;	// 16 = 0x10
    _Bool _hasCheckedStockholm;	// 24 = 0x18
    CDUnknownBlockType _primeBuysOnWatchCompletion;	// 32 = 0x20
}

+ (_Bool)controllerNeedsToRunForBuddyControllerDelegate:(id)arg1;	// IMP=0x0020000000006754
- (void).cxx_destruct;	// IMP=0x0020000000008163
@property(copy, nonatomic) CDUnknownBlockType primeBuysOnWatchCompletion; // @synthesize primeBuysOnWatchCompletion=_primeBuysOnWatchCompletion;
- (void)_successfullySignedIn;	// IMP=0x0010000000008109
- (void)_signInToAccountWithPassword:(id)arg1;	// IMP=0x0010000000007e34
- (id)followUpActions;	// IMP=0x0010000000007d2b
- (id)localizedInformativeText;	// IMP=0x0010000000007cbf
- (id)localizedTitle;	// IMP=0x0010000000007c53
- (id)followUpIdentifier;	// IMP=0x0010000000007c46
- (id)localizedWaitScreenDescription;	// IMP=0x0010000000007b8e
- (double)waitScreenPushGracePeriod;	// IMP=0x0010000000007b80
- (_Bool)holdWithWaitScreen;	// IMP=0x0010000000007af1
- (void)markEndOfHoldActivity;	// IMP=0x0010000000007a36
- (void)checkIfCanReleaseHold;	// IMP=0x00100000000077cc
- (void)silentSignInStateChanged:(id)arg1;	// IMP=0x001000000000771f
- (void)finishedActivating;	// IMP=0x001000000000770d
- (void)finishedUpdatingAppleAccountProperties;	// IMP=0x00100000000076fb
- (void)didEstablishHold;	// IMP=0x00100000000076cd
- (_Bool)holdBeforeDisplaying;	// IMP=0x00100000000073f8
- (void)signInFailedWithError:(id)arg1;	// IMP=0x0010000000007278
- (void)loggedInSuccessfullyWithBuddyControllerDoneBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000007083
- (MISSING_TYPE *)activationHoldActivityIdentifier;	// IMP=0x0010000000007076
- (id)holdActivityIdentifier;	// IMP=0x0010000000007069
- (unsigned long long)performanceMonitorCATiming;	// IMP=0x001000000000705e
- (id)performanceMonitorActivityName;	// IMP=0x0010000000007051
- (void)tappedSkipButton:(id)arg1;	// IMP=0x0010000000006df8
- (_Bool)allowSkipping;	// IMP=0x0010000000006df0
- (id)detailString;	// IMP=0x0010000000006d50
- (id)detailTextKeyForActivationLockEnabled:(_Bool)arg1 findMyWatchSupported:(_Bool)arg2 stockholmSupported:(_Bool)arg3;	// IMP=0x0010000000006cb0
- (void)stockholmSupportedInGizmoRegion:(_Bool)arg1;	// IMP=0x0010000000006bc3
- (id)titleString;	// IMP=0x0010000000006b57
- (id)username;	// IMP=0x0010000000006af4
- (id)accountTypeString;	// IMP=0x0010000000006ae0
- (id)account;	// IMP=0x0010000000006acb
- (void)dealloc;	// IMP=0x0010000000006a56
- (id)init;	// IMP=0x00100000000068d3
- (_Bool)controllerAllowsNavigatingBackTo;	// IMP=0x0010000000006890

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

