//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKAccount;

@interface PDAccountOverdrawnBalanceUserNotification
{
    PKAccount *_account;	// 128 = 0x80
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000266c35
- (void).cxx_destruct;	// IMP=0x0020000000266d66
@property(readonly, nonatomic) PKAccount *account; // @synthesize account=_account;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000266cd8
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000266c3d
- (id)applicationMessageContent;	// IMP=0x0010000000266a8b
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x0010000000266982
- (_Bool)isValid;	// IMP=0x001000000026697a
- (unsigned long long)notificationType;	// IMP=0x001000000026696f
- (id)initWithAccount:(id)arg1;	// IMP=0x001000000026686b

@end
