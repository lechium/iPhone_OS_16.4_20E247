//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AKTapToSignInViewController, CNFRegSigninLearnMoreView, NSString;

__attribute__((visibility("hidden")))
@interface CNFRegSplashSignInController
{
    CNFRegSigninLearnMoreView *_signInView;	// 376 = 0x178
    AKTapToSignInViewController *_akSignInVC;	// 384 = 0x180
}

- (void).cxx_destruct;	// IMP=0x00000000000221f7
- (void)tapToSignInViewController:(id)arg1 didAuthenticateWithResults:(id)arg2 error:(id)arg3;	// IMP=0x0000000000021ee1
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x0000000000021e10
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x0000000000021b02
- (id)_existingLearnMoreViewForSection:(long long)arg1;	// IMP=0x0000000000021a72
- (id)_existingLearnMoreViewForSpecifier:(id)arg1;	// IMP=0x00000000000219c7
- (void)_handleTimeout;	// IMP=0x000000000002197c
- (id)specifierList;	// IMP=0x0000000000021724
- (void)viewDidLoad;	// IMP=0x0000000000021539
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000214a5
- (void)dealloc;	// IMP=0x000000000002145a
- (id)_controllerToPresentOn;	// IMP=0x000000000002134e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

