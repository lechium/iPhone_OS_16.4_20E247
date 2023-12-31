//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, SKUIComposeReviewViewController, ServiceAlertController;

@interface ServiceComposeReviewViewController : UIViewController
{
    ServiceAlertController *_alertController;	// 8 = 0x8
    _Bool _dismissAfterDialog;	// 16 = 0x10
    SKUIComposeReviewViewController *_underlyingViewController;	// 24 = 0x18
}

+ (id)_remoteViewControllerInterface;	// IMP=0x002000000002875b
+ (id)_exportedInterface;	// IMP=0x001000000002873b
- (void).cxx_destruct;	// IMP=0x0020000000029013
- (void)_presentAlertForDialog:(id)arg1;	// IMP=0x0010000000028f4f
- (void)_dismissWithError:(id)arg1;	// IMP=0x0010000000028ebf
- (id)_clientViewControllerProxy;	// IMP=0x0010000000028ead
- (void)clientKeyboardFrameChanged:(struct CGRect)arg1;	// IMP=0x0010000000028d99
- (void)loadReviewWithURL:(id)arg1;	// IMP=0x0010000000028bc0
- (void)finishStarRatingPromptWithRating:(id)arg1;	// IMP=0x0010000000028b68
- (void)composeReviewViewControllerDidSubmit:(id)arg1;	// IMP=0x0010000000028af0
- (void)composeReviewViewControllerDidCancel:(id)arg1;	// IMP=0x0010000000028adc
- (_Bool)composeReviewViewController:(id)arg1 shouldSubmitReview:(id)arg2;	// IMP=0x0010000000028a5b
- (void)composeReviewViewController:(id)arg1 presentDialog:(id)arg2;	// IMP=0x0010000000028a46
- (void)composeReviewViewController:(id)arg1 didFailWithDialog:(id)arg2;	// IMP=0x0010000000028a11
- (void)alertController:(id)arg1 alertDidFinishWithButton:(id)arg2;	// IMP=0x00100000000289ea
- (void)_willAppearInRemoteViewController;	// IMP=0x00100000000288d1
- (void)loadView;	// IMP=0x001000000002877b
- (void)dealloc;	// IMP=0x00100000000286ce

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

