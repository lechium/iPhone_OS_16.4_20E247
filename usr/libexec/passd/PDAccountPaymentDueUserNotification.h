//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PDAccountPaymentDueUserNotification
{
    _Bool _useGenericMessaging;	// 128 = 0x80
    _Bool _isTimeSensitive;	// 129 = 0x81
    unsigned long long _featureIdentifier;	// 136 = 0x88
    NSString *_messageString;	// 144 = 0x90
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000259dd7
- (void).cxx_destruct;	// IMP=0x002000000025aaa3
@property(nonatomic) _Bool isTimeSensitive; // @synthesize isTimeSensitive=_isTimeSensitive;
@property(readonly, nonatomic) NSString *messageString; // @synthesize messageString=_messageString;
@property(readonly, nonatomic) _Bool useGenericMessaging; // @synthesize useGenericMessaging=_useGenericMessaging;
@property(readonly, nonatomic) unsigned long long featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
- (unsigned long long)notificationType;	// IMP=0x001000000025aa46
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x001000000025a938
- (_Bool)isValid;	// IMP=0x001000000025a8c7
- (id)_paymentDueApplicationMessageContentWithTitleText:(id)arg1 messageText:(id)arg2;	// IMP=0x001000000025a79e
- (id)_paymentDueApplicationMessageGroupDescriptor;	// IMP=0x001000000025a742
- (id)applicationMessageContent;	// IMP=0x001000000025a6d8
- (id)_messageString;	// IMP=0x001000000025a661
- (id)_messageStringForAccount:(id)arg1 amount:(id)arg2 reminderOffset:(unsigned long long)arg3 fireDate:(id)arg4;	// IMP=0x0010000000259fc8
- (id)_titleString;	// IMP=0x0010000000259f86
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000259ec6
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000259ddf
- (id)initWithAccount:(id)arg1 estimatedRemainingMinimumPayment:(id)arg2 reminderOffset:(unsigned long long)arg3;	// IMP=0x00100000002595d2

@end

