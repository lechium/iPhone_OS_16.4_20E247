//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PDAccountPaymentScheduledUserNotification
{
    unsigned long long _featureIdentifier;	// 128 = 0x80
    NSString *_messageString;	// 136 = 0x88
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000258b41
- (void).cxx_destruct;	// IMP=0x00200000002595bf
@property(readonly, nonatomic) NSString *messageString; // @synthesize messageString=_messageString;
@property(readonly, nonatomic) unsigned long long featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
- (unsigned long long)notificationType;	// IMP=0x0010000000259592
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x00100000002594bd
- (_Bool)isValid;	// IMP=0x001000000025944c
- (id)_messageStringForPayment:(id)arg1 account:(id)arg2 reminderOffset:(unsigned long long)arg3;	// IMP=0x0010000000258cc7
- (id)_titleString;	// IMP=0x0010000000258cab
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000258c0b
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000258b49
- (id)initWithAccount:(id)arg1 payment:(id)arg2 reminderOffset:(unsigned long long)arg3;	// IMP=0x00100000002586d2

@end

