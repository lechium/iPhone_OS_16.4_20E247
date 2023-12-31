//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray;
@protocol EVOnboardingWelcomeViewControllerDelegate;

@interface EVOnboardingWelcomeViewController : UIViewController
{
    NSArray *_vehicles;	// 8 = 0x8
    id <EVOnboardingWelcomeViewControllerDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000089fd57
- (void)_setUpLaterPressed;	// IMP=0x001000000089fc75
- (void)_connectPressed;	// IMP=0x001000000089fb93
- (id)_obViewController;	// IMP=0x001000000089eba6
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x001000000089eafc
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000089ea0c
- (void)viewDidLoad;	// IMP=0x001000000089e858
- (id)initWithVehicles:(id)arg1 delegate:(id)arg2;	// IMP=0x001000000089e7a6

@end

