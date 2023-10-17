//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSMutableDictionary, NSString, VSOptional, VSViewControllerFactory, VSViewServiceRemoteViewController;
@protocol VSViewServiceHostViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSViewServiceHostViewController : UIViewController
{
    _Bool _hasRetriedOnce;	// 8 = 0x8
    _Bool _hasRequestedPresentation;	// 9 = 0x9
    id <VSViewServiceHostViewControllerDelegate> _delegate;	// 16 = 0x10
    NSMutableDictionary *_requestsByID;	// 24 = 0x18
    VSOptional *_currentRequest;	// 32 = 0x20
    VSViewServiceRemoteViewController *_remoteViewController;	// 40 = 0x28
    VSViewControllerFactory *_viewControllerFactory;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000004276
@property(retain, nonatomic) VSViewControllerFactory *viewControllerFactory; // @synthesize viewControllerFactory=_viewControllerFactory;
@property(nonatomic) _Bool hasRequestedPresentation; // @synthesize hasRequestedPresentation=_hasRequestedPresentation;
@property(nonatomic) _Bool hasRetriedOnce; // @synthesize hasRetriedOnce=_hasRetriedOnce;
@property(retain, nonatomic) VSViewServiceRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(retain, nonatomic) VSOptional *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(retain, nonatomic) NSMutableDictionary *requestsByID; // @synthesize requestsByID=_requestsByID;
@property(nonatomic) __weak id <VSViewServiceHostViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_addRemoteViewControllerAsChildViewController;	// IMP=0x0000000000004039
- (void)_removeRemoteViewControllerAsChildViewController;	// IMP=0x0000000000003f6f
- (void)_connectToViewServiceForRequest:(id)arg1;	// IMP=0x00000000000039df
- (void)viewServiceRemoteViewController:(id)arg1 didSelectProviderWithIdentifier:(id)arg2 vetoHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000003992
- (void)viewServiceRemoteViewController:(id)arg1 didCancelRequest:(id)arg2;	// IMP=0x000000000000393d
- (void)viewServiceRemoteViewController:(id)arg1 didChooseAdditionalProvidersForRequest:(id)arg2;	// IMP=0x00000000000038e8
- (void)viewServiceRemoteViewController:(id)arg1 request:(id)arg2 didFailWithError:(id)arg3;	// IMP=0x0000000000003884
- (void)viewServiceRemoteViewController:(id)arg1 didTerminateWithError:(id)arg2;	// IMP=0x00000000000034f8
- (void)viewServiceRemoteViewController:(id)arg1 request:(id)arg2 didFinishWithResponse:(id)arg3;	// IMP=0x0000000000003494
- (void)dismissViewServiceRemoteViewController:(id)arg1;	// IMP=0x000000000000344b
- (void)presentViewServiceRemoteViewController:(id)arg1;	// IMP=0x00000000000033f6
- (_Bool)isModalInPresentation;	// IMP=0x00000000000033ee
- (long long)modalPresentationStyle;	// IMP=0x00000000000033e3
- (void)_cancelButtonPressed:(id)arg1;	// IMP=0x000000000000321b
- (_Bool)_shouldAuthenticateAccountProviderWithIdentifier:(id)arg1;	// IMP=0x00000000000031a1
- (void)_dismissViewServiceHostViewController;	// IMP=0x0000000000003155
- (void)_presentViewServiceHostViewController;	// IMP=0x0000000000003109
- (void)_didChooseAdditionalProvidersForRequest:(id)arg1;	// IMP=0x0000000000003012
- (void)_didCancelRequest:(id)arg1;	// IMP=0x0000000000002f1b
- (void)_request:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000000002dd9
- (void)_request:(id)arg1 didFinishWithResponse:(id)arg2;	// IMP=0x0000000000002c72
- (void)_didCompleteRequest:(id)arg1;	// IMP=0x00000000000029ed
- (id)_requestForID:(id)arg1;	// IMP=0x000000000000293d
- (void)enqueueViewServiceRequest:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x00000000000027a4
- (void)dealloc;	// IMP=0x000000000000276e
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000002682

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
