//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, PKCurrencyAmount;

@interface PDPassPaymentDailyDailyCashWithAmountUserNotification
{
    PKCurrencyAmount *_amount;	// 152 = 0x98
    NSSet *_rewardTypesForPeriod;	// 160 = 0xa0
}

+ (_Bool)supportsSecureCoding;	// IMP=0x004000000025fc7a
- (void).cxx_destruct;	// IMP=0x0020000000260050
@property(readonly, nonatomic) NSSet *rewardTypesForPeriod; // @synthesize rewardTypesForPeriod=_rewardTypesForPeriod;
@property(readonly, nonatomic) PKCurrencyAmount *amount; // @synthesize amount=_amount;
- (id)_firstRedemptionInMonthMessageBody;	// IMP=0x001000000025ff28
- (id)_runningTotalInMonthMessageBodyWithPeriodAmount:(id)arg1;	// IMP=0x001000000025fdeb
- (unsigned long long)notificationType;	// IMP=0x001000000025fde0
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x001000000025fc82
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000025fbdb
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000025faad
- (id)initWithAmount:(id)arg1 periodAmount:(id)arg2 date:(id)arg3 hasRedemptions:(_Bool)arg4 forPassUniqueIdentifier:(id)arg5 redemptionType:(unsigned long long)arg6 rewardTypesForPeriod:(id)arg7;	// IMP=0x001000000025f91f

@end

