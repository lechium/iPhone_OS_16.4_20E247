//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class BSAction, NSNumber, NSString, UIViewController;

@interface ServiceBackgroundAssetConsentViewController : SBUIRemoteAlertServiceViewController
{
    UIViewController *_childViewController;	// 8 = 0x8
    BSAction *_didProvideConsentAction;	// 16 = 0x10
    NSNumber *_consentProvided;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000008e96
@property(retain, nonatomic) NSNumber *consentProvided; // @synthesize consentProvided=_consentProvided;
@property(retain, nonatomic) BSAction *didProvideConsentAction; // @synthesize didProvideConsentAction=_didProvideConsentAction;
@property(retain, nonatomic) UIViewController *childViewController; // @synthesize childViewController=_childViewController;
- (void)_dismissViewService;	// IMP=0x0010000000008c1c
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;	// IMP=0x0010000000008bc0
- (void)prepareForActivationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000008bae
- (void)handleHomeButtonPressed;	// IMP=0x0010000000008b9c
- (void)handleButtonActions:(id)arg1;	// IMP=0x0010000000008a49
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000086c6
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x001000000000866a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
