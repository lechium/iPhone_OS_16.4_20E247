//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKRecord, NSData, NSDate, NSString;
@protocol BCCloudDataPrivacyDelegate;

@interface BDSMutableSecureEngagementData
{
    NSString *_startTimestampString;	// 8 = 0x8
    double _durationInterval;	// 16 = 0x10
    NSData *_value;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000006b4b0
- (void).cxx_destruct;	// IMP=0x002000000006b6ef
@property(retain, nonatomic) NSData *value; // @synthesize value=_value;
@property(nonatomic) double durationInterval; // @synthesize durationInterval=_durationInterval;
@property(copy, nonatomic) NSString *startTimestampString; // @synthesize startTimestampString=_startTimestampString;
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000006b574
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000006b4b8
- (id)configuredRecordFromAttributes;	// IMP=0x001000000006b3d1
- (id)zoneName;	// IMP=0x001000000006b3bd
- (id)identifier;	// IMP=0x001000000006b3ab
- (id)recordType;	// IMP=0x001000000006b39e
@property(readonly, copy) NSString *description;
- (id)initWithRecord:(id)arg1;	// IMP=0x001000000006b196
- (id)initWithCloudData:(id)arg1;	// IMP=0x001000000006b00d
- (id)initWithStartTimestampString:(id)arg1 durationInterval:(double)arg2;	// IMP=0x001000000006af2e

// Remaining properties
@property(readonly, copy, nonatomic) NSData *ckSystemFields;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) _Bool deletedFlag;
@property(readonly, nonatomic) long long editGeneration;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSDate *modificationDate;
@property(nonatomic) __weak id <BCCloudDataPrivacyDelegate> privacyDelegate;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long syncGeneration;
@property(readonly, copy, nonatomic) CKRecord *systemFields;

@end

