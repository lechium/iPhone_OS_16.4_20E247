//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@protocol EVOnboardingPrivacyViewControllerDelegate;

@interface EVOnboardingPrivacyViewController : UIViewController
{
    id <EVOnboardingPrivacyViewControllerDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000454562
- (void)_notNowPressed;	// IMP=0x00100000004544c6
- (void)_sharePressed;	// IMP=0x001000000045442a
- (void)_aboutImproveEVRoutingPressed;	// IMP=0x0010000000454365
- (id)_obViewController;	// IMP=0x0010000000453de1
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000453d37
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000453c47
- (void)viewDidLoad;	// IMP=0x0010000000453a5f
- (id)initWithDelegate:(id)arg1;	// IMP=0x00100000004539f4

@end

