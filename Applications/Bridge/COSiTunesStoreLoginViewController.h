//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount, NSString;

@interface COSiTunesStoreLoginViewController
{
    ACAccount *_account;	// 8 = 0x8
}

+ (_Bool)controllerNeedsToRunForBuddyControllerDelegate:(id)arg1;	// IMP=0x002000000010c83b
- (void).cxx_destruct;	// IMP=0x002000000010d520
- (id)followUpActions;	// IMP=0x001000000010d417
- (id)localizedInformativeText;	// IMP=0x001000000010d3ab
- (id)localizedTitle;	// IMP=0x001000000010d33f
- (id)followUpIdentifier;	// IMP=0x001000000010d332
- (id)localizedWaitScreenDescription;	// IMP=0x001000000010d2c6
- (double)waitScreenPushGracePeriod;	// IMP=0x001000000010d2b8
- (_Bool)holdWithWaitScreen;	// IMP=0x001000000010d229
- (void)signInFailedWithError:(id)arg1;	// IMP=0x001000000010d1e8
- (void)loggedInSuccessfullyWithBuddyControllerDoneBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000010d0a2
- (void)checkIfCanReleaseHold;	// IMP=0x001000000010ce06
- (void)silentSignInStateChanged:(id)arg1;	// IMP=0x001000000010cd59
- (void)finishedActivating;	// IMP=0x001000000010cd47
- (void)didEstablishHold;	// IMP=0x001000000010cd19
- (_Bool)holdBeforeDisplaying;	// IMP=0x001000000010caaa
- (id)activationHoldActivityIdentifier;	// IMP=0x001000000010c82e
- (id)holdActivityIdentifier;	// IMP=0x001000000010c821
- (unsigned long long)performanceMonitorCATiming;	// IMP=0x001000000010c816
- (id)performanceMonitorActivityName;	// IMP=0x001000000010c809
- (void)tappedSkipButton:(id)arg1;	// IMP=0x001000000010c5c6
- (_Bool)allowSkipping;	// IMP=0x001000000010c5be
- (_Bool)controllerAllowsNavigatingBackTo;	// IMP=0x001000000010c57b
- (id)detailString;	// IMP=0x001000000010c4df
- (id)titleString;	// IMP=0x001000000010c473
- (id)username;	// IMP=0x001000000010c410
- (id)accountTypeString;	// IMP=0x001000000010c3fc
- (id)account;	// IMP=0x001000000010c3e7
- (void)dealloc;	// IMP=0x001000000010c372
- (id)init;	// IMP=0x001000000010c2cd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
