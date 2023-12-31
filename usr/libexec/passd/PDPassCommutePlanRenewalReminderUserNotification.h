//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PDPassCommutePlanRenewalReminderUserNotification
{
    NSString *_title;	// 128 = 0x80
    NSString *_message;	// 136 = 0x88
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000255a51
- (void).cxx_destruct;	// IMP=0x0020000000255c3e
@property(readonly, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (id)_messageString;	// IMP=0x0010000000255c07
- (id)_titleString;	// IMP=0x0010000000255bf2
- (unsigned long long)notificationType;	// IMP=0x0010000000255be7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000255b48
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000255a59
- (id)initWithPaymentPass:(id)arg1 commutePlan:(id)arg2;	// IMP=0x0010000000255753

@end

