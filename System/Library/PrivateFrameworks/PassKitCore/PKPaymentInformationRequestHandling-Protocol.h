//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKBarcodeEventConfigurationRequest, PKBarcodeEventMetadataRequest, PKBarcodeEventSignatureRequest;

@protocol PKPaymentInformationRequestHandling
- (void)handleConfigurationRequest:(PKBarcodeEventConfigurationRequest *)arg1 completion:(void (^)(void))arg2;
- (void)handleSignatureRequest:(PKBarcodeEventSignatureRequest *)arg1 completion:(void (^)(PKBarcodeEventSignatureResponse *))arg2;
- (void)handleInformationRequest:(PKBarcodeEventMetadataRequest *)arg1 completion:(void (^)(PKBarcodeEventMetadataResponse *))arg2;
@end
