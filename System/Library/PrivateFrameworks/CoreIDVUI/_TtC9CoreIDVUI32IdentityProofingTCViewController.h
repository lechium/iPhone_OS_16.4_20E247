//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9CoreIDVUI32IdentityProofingTCViewController : UIViewController
{
    MISSING_TYPE *agreeButtonName;	// 8 = 0x8
    MISSING_TYPE *disagreeButtonName;	// 24 = 0x18
    MISSING_TYPE *activityIndicator;	// 40 = 0x28
    MISSING_TYPE *proofingFlowManager;	// 48 = 0x30
    MISSING_TYPE *agreeClicked;	// 56 = 0x38
    MISSING_TYPE *uiConfigFactory;	// 72 = 0x48
    MISSING_TYPE *config;	// 80 = 0x50
    MISSING_TYPE *onAppearance;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000589e0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000058980
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000058800
- (void)remoteUIController:(id)arg1 didPresentObjectModel:(id)arg2 modally:(_Bool)arg3;	// IMP=0x00000000000585d0
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(_Bool)arg3;	// IMP=0x0000000000058560
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000057830

@end
