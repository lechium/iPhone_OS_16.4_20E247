//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PKContact, PKPaymentAuthorizationController, PKPaymentMethod, PKShippingMethod;

@interface (null) (_PassKit_SwiftUI)
- (id)presentationWindowForPaymentAuthorizationController:(id)arg1;	// IMP=0x0020000000010fc0
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 didChangeCouponCode:(NSString *)arg2 handler:(void (^)(PKPaymentRequestCouponCodeUpdate *))arg3;	// IMP=0x0020000000010cb0
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 didSelectShippingMethod:(PKShippingMethod *)arg2 handler:(void (^)(PKPaymentRequestShippingMethodUpdate *))arg3;	// IMP=0x0020000000010a60
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 didSelectShippingContact:(PKContact *)arg2 handler:(void (^)(PKPaymentRequestShippingContactUpdate *))arg3;	// IMP=0x0020000000010810
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 didSelectPaymentMethod:(PKPaymentMethod *)arg2 handler:(void (^)(PKPaymentRequestPaymentMethodUpdate *))arg3;	// IMP=0x0020000000010510
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 didRequestMerchantSessionUpdate:(void (^)(PKPaymentRequestMerchantSessionUpdate *))arg2;	// IMP=0x0020000000010240
- (void)paymentAuthorizationControllerDidFinish:(id)arg1;	// IMP=0x00200000000101f0
- (void)paymentAuthorizationController:(id)arg1 didAuthorizePayment:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0020000000010120
- (void)paymentAuthorizationControllerWillAuthorizePayment:(id)arg1;	// IMP=0x00200000000100a0
@end
