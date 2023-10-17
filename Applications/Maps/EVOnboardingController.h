//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, UINavigationController, UIViewController;

@interface EVOnboardingController : NSObject
{
    NSMutableDictionary *_viewControllersByState;	// 8 = 0x8
    UIViewController *_presentingViewController;	// 16 = 0x10
    NSArray *_vehicles;	// 24 = 0x18
    UINavigationController *_navigationController;	// 32 = 0x20
    unsigned long long _onboardedVehicleCount;	// 40 = 0x28
    id _strongSelf;	// 48 = 0x30
    long long _state;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000008e6cf1
@property(nonatomic) long long state; // @synthesize state=_state;
- (void)virtualGarageDidUpdate:(id)arg1;	// IMP=0x00100000008e6b27
- (void)vehicleSelectionViewController:(id)arg1 didSelectContinueWithVehicles:(id)arg2;	// IMP=0x00100000008e678a
- (void)vehicleSelectionViewControllerDidDismiss:(id)arg1;	// IMP=0x00100000008e6778
- (void)privacyViewControllerDidSelectShare:(id)arg1;	// IMP=0x00100000008e6742
- (void)privacyViewControllerDidSelectNotNow:(id)arg1;	// IMP=0x00100000008e670f
- (void)welcomeViewControllerDidSelectConnect:(id)arg1;	// IMP=0x00100000008e66fd
- (void)welcomeViewControllerDidDismiss:(id)arg1;	// IMP=0x00100000008e66eb
- (void)_proceedToNextState;	// IMP=0x00100000008e6585
- (void)_cleanUp;	// IMP=0x00100000008e653a
- (void)_dismissOnboarding;	// IMP=0x00100000008e64cc
- (id)_viewControllerForState:(long long)arg1;	// IMP=0x00100000008e6233
- (void)presentInViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000008e5f8e
- (_Bool)_validateStateTransitionFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x00100000008e5f68
- (id)initWithUnpairedVehicles:(id)arg1;	// IMP=0x00100000008e5d04

@end
