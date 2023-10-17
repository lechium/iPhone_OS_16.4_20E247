//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKPayLaterFinancingPlan, PKPayLaterPayment;

@interface PDAccountFinancingPlanPaymentNotification
{
    PKPayLaterFinancingPlan *_financingPlan;	// 8 = 0x8
    PKPayLaterPayment *_payment;	// 16 = 0x10
    _Bool _requiresGenericMessaging;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000002ec1df
+ (id)notificationIdentifierForPayment:(id)arg1;	// IMP=0x00100000002ebf18
+ (void)updateNotificationContentWithGenericMessaging:(id)arg1;	// IMP=0x00100000002ebe77
- (void).cxx_destruct;	// IMP=0x00200000002ecc9e
- (void)_updateContentForPaymentRefundType:(id)arg1;	// IMP=0x00100000002ecb18
- (void)_updateContentForPaymentDeclinedType:(id)arg1;	// IMP=0x00100000002ec992
- (void)_updateContentForPaymentType:(id)arg1;	// IMP=0x00100000002ec5d8
- (id)applicationMessageContent;	// IMP=0x00100000002ec4d3
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x00100000002ec3c6
- (_Bool)isValid;	// IMP=0x00100000002ec3be
- (unsigned long long)notificationType;	// IMP=0x00100000002ec3b3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000002ec2f4
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000002ec1e7
- (id)initWithFinancingPlan:(id)arg1 payment:(id)arg2 requiresGenericMessaging:(_Bool)arg3 passUniqueIdentifier:(id)arg4;	// IMP=0x00100000002ebfd6

@end
