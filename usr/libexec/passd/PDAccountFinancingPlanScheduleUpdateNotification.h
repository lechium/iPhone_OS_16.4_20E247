//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKPayLaterFinancingPlan;

@interface PDAccountFinancingPlanScheduleUpdateNotification
{
    PKPayLaterFinancingPlan *_financingPlan;	// 8 = 0x8
    long long _updateType;	// 16 = 0x10
    _Bool _requiresGenericMessaging;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000002eeefd
+ (id)notificationIdentifierForFinancingPlan:(id)arg1 updateType:(long long)arg2;	// IMP=0x00100000002eec47
- (void).cxx_destruct;	// IMP=0x00200000002ef2f0
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x00100000002ef0c9
- (_Bool)isValid;	// IMP=0x00100000002ef0b4
- (unsigned long long)notificationType;	// IMP=0x00100000002ef0a9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000002eefe9
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000002eef05
- (id)planIdentifier;	// IMP=0x00100000002eeee0
- (id)initWithFinancingPlan:(id)arg1 updateType:(long long)arg2 requiresGenericMessaging:(_Bool)arg3 passUniqueIdentifier:(id)arg4;	// IMP=0x00100000002eecce

@end
