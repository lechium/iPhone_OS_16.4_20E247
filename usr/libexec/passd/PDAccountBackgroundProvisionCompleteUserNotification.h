//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PDAccountBackgroundProvisionCompleteUserNotification
{
    unsigned long long _feature;	// 152 = 0x98
}

+ (_Bool)supportsSecureCoding;	// IMP=0x004000000026476f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x002000000026482d
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000264777
- (id)_messageString;	// IMP=0x001000000026473c
- (id)_titleString;	// IMP=0x0010000000264709
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x001000000026464c
- (_Bool)isValid;	// IMP=0x0010000000264637
- (unsigned long long)notificationType;	// IMP=0x001000000026462c
- (id)initWithFeatureIdentifier:(unsigned long long)arg1 passUniqueIdentifier:(id)arg2;	// IMP=0x0010000000264526

@end
