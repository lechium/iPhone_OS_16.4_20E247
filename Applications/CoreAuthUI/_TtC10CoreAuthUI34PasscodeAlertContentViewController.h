//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE;

@interface _TtC10CoreAuthUI34PasscodeAlertContentViewController : UIViewController
{
    MISSING_TYPE *log;	// 324096 = 0x4f200
    MISSING_TYPE *passcodeController;	// 0 = 0x0
    MISSING_TYPE *userId;	// 3 = 0x3
    MISSING_TYPE *policy;	// 63 = 0x3f
    MISSING_TYPE *options;	// 2162821 = 0x210085
    MISSING_TYPE *backoffCounter;	// 25 = 0x19
    MISSING_TYPE *delegate;	// 1095786335 = 0x41505f5f
    MISSING_TYPE *failures;	// 20306 = 0x4f52
}

- (void).cxx_destruct;	// IMP=0x0040000000026f80
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000026f20
- (void)verifyPasscode:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000026dc0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000026d80
- (void)loadView;	// IMP=0x00100000000263e0
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000025e30

@end

