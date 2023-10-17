//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtCV9PassKitUI32AccountTransferAuthorizationView11Coordinator : NSObject
{
    MISSING_TYPE *paymentRequest;	// 8 = 0x8
    MISSING_TYPE *accountModel;	// 16 = 0x10
    MISSING_TYPE *_isPresented;	// 24 = 0x18
    MISSING_TYPE *stepUpAction;	// 48 = 0x30
    MISSING_TYPE *dismissAction;	// 64 = 0x40
    MISSING_TYPE *paymentWebService;	// 80 = 0x50
    MISSING_TYPE *scheduleTransferModel;	// 88 = 0x58
    MISSING_TYPE *scheduleTransferRequest;	// 96 = 0x60
    MISSING_TYPE *authorized;	// 104 = 0x68
    MISSING_TYPE *presentFraudStepUp;	// 105 = 0x69
    MISSING_TYPE *hasReceivedTransaction;	// 106 = 0x6a
    MISSING_TYPE *hasReceivedAccountUpdate;	// 107 = 0x6b
    MISSING_TYPE *waitingForData;	// 112 = 0x70
    MISSING_TYPE *accountService;	// 120 = 0x78
    MISSING_TYPE *transactionFetcher;	// 128 = 0x80
    MISSING_TYPE *dismissalTimer;	// 689307615 = 0x2915ffdf
    MISSING_TYPE *pastUpdateLeeway;	// 2202587136 = 0x8348d000
}

- (void).cxx_destruct;	// IMP=0x0000000000207530
- (id)init;	// IMP=0x00000000002074d0
- (void)accountChanged:(id)arg1;	// IMP=0x00000000002072e0
- (void)transactionsChanged:(id)arg1;	// IMP=0x0000000000207280
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizeApplePayTrustSignature:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002071a0
- (void)paymentAuthorizationCoordinator:(id)arg1 didUpdateAccountServicePaymentMethod:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000205250
- (void)paymentAuthorizationViewController:(id)arg1 didAuthorizePayment:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002050a0
- (void)paymentAuthorizationViewControllerDidFinish:(id)arg1;	// IMP=0x0000000000205040
- (void)paymentAuthorizationViewController:(id)arg1 willFinishWithError:(id)arg2;	// IMP=0x0000000000205020

@end
