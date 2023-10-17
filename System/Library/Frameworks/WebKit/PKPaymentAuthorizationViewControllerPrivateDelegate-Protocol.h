//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebKit/NSObject-Protocol.h>

@class NSError, PKAccountServicePaymentMethod, PKApplePayTrustSignature, PKPaymentAuthorizationCoordinator, PKPaymentAuthorizationViewController;

@protocol PKPaymentAuthorizationViewControllerPrivateDelegate <NSObject>
- (void)paymentAuthorizationViewController:(PKPaymentAuthorizationViewController *)arg1 willFinishWithError:(NSError *)arg2;

@optional
- (void)paymentAuthorizationCoordinator:(PKPaymentAuthorizationCoordinator *)arg1 didAuthorizeApplePayTrustSignature:(PKApplePayTrustSignature *)arg2 handler:(void (^)(PKPaymentAuthorizationResult *))arg3;
- (void)paymentAuthorizationCoordinator:(PKPaymentAuthorizationCoordinator *)arg1 didUpdateAccountServicePaymentMethod:(PKAccountServicePaymentMethod *)arg2 handler:(void (^)(PKPaymentRequestPaymentMethodUpdate *, PKApplePayTrustSignatureRequest *))arg3;
- (void)paymentAuthorizationViewController:(PKPaymentAuthorizationViewController *)arg1 didEncounterAuthorizationEvent:(unsigned long long)arg2;
- (void)paymentAuthorizationViewController:(PKPaymentAuthorizationViewController *)arg1 didRequestMerchantSession:(void (^)(PKPaymentMerchantSession *, NSError *))arg2;
@end
