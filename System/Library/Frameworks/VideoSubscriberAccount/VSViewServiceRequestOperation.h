//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VSAsyncOperation.h"

@class NSString, NSUUID, VSOptional, VSViewServiceHostViewController, VSViewServiceRequest;
@protocol VSViewServiceRequestOperationDelegate;

__attribute__((visibility("hidden")))
@interface VSViewServiceRequestOperation : VSAsyncOperation
{
    _Bool _isPresentingViewController;	// 8 = 0x8
    VSViewServiceRequest *_viewServiceRequest;	// 16 = 0x10
    id <VSViewServiceRequestOperationDelegate> _delegate;	// 24 = 0x18
    VSOptional *_result;	// 32 = 0x20
    VSViewServiceHostViewController *_viewServiceHostViewController;	// 40 = 0x28
    NSUUID *_requestID;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000002c718
@property(copy, nonatomic) NSUUID *requestID; // @synthesize requestID=_requestID;
@property(retain, nonatomic) VSViewServiceHostViewController *viewServiceHostViewController; // @synthesize viewServiceHostViewController=_viewServiceHostViewController;
@property(retain, nonatomic) VSOptional *result; // @synthesize result=_result;
@property(nonatomic) __weak id <VSViewServiceRequestOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) VSViewServiceRequest *viewServiceRequest; // @synthesize viewServiceRequest=_viewServiceRequest;
- (void)cancel;	// IMP=0x000000000002c587
- (void)finishExecutionIfPossible;	// IMP=0x000000000002c508
- (void)executionDidBegin;	// IMP=0x000000000002c2d0
- (_Bool)viewServiceHostViewController:(id)arg1 shouldAuthenticateAccountProviderWithIdentifier:(id)arg2;	// IMP=0x000000000002c25d
- (void)viewServiceHostViewController:(id)arg1 didCancelRequest:(id)arg2;	// IMP=0x000000000002c148
- (void)viewServiceHostViewController:(id)arg1 didChooseAdditionalProvidersForRequest:(id)arg2;	// IMP=0x000000000002c038
- (void)viewServiceHostViewController:(id)arg1 request:(id)arg2 didFailWithError:(id)arg3;	// IMP=0x000000000002bf3c
- (void)viewServiceHostViewController:(id)arg1 request:(id)arg2 didFinishWithResponse:(id)arg3;	// IMP=0x000000000002bde4
- (void)dismissViewServiceHostViewController:(id)arg1;	// IMP=0x000000000002bdc0
- (void)presentViewServiceHostViewController:(id)arg1;	// IMP=0x000000000002bd91
- (void)_dismissViewControllerIfRequired;	// IMP=0x000000000002bd09
- (void)_dismissViewController;	// IMP=0x000000000002bbbc
- (void)_presentViewController;	// IMP=0x000000000002ba6f
- (id)initWithViewServiceRequest:(id)arg1;	// IMP=0x000000000002b970
- (id)init;	// IMP=0x000000000002b901

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

