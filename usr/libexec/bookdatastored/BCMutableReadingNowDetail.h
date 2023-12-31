//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKRecord, NSData, NSDate, NSString;
@protocol BCCloudDataPrivacyDelegate;

@interface BCMutableReadingNowDetail
{
    _Bool _isTrackedAsRecent;	// 8 = 0x8
    NSString *_assetID;	// 16 = 0x10
    NSDate *_lastEngagedDate;	// 24 = 0x18
    NSString *_cloudAssetType;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000005c30c
- (void).cxx_destruct;	// IMP=0x002000000005c5c6
@property(copy, nonatomic) NSString *cloudAssetType; // @synthesize cloudAssetType=_cloudAssetType;
@property(copy, nonatomic) NSDate *lastEngagedDate; // @synthesize lastEngagedDate=_lastEngagedDate;
@property(nonatomic) _Bool isTrackedAsRecent; // @synthesize isTrackedAsRecent=_isTrackedAsRecent;
@property(copy, nonatomic) NSString *assetID; // @synthesize assetID=_assetID;
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000005c40c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000005c314
- (id)configuredRecordFromAttributes;	// IMP=0x001000000005c107
- (id)zoneName;	// IMP=0x001000000005c0f3
- (id)identifier;	// IMP=0x001000000005c0e1
- (id)recordType;	// IMP=0x001000000005c0d4
@property(readonly, copy) NSString *description;
- (id)initWithRecord:(id)arg1;	// IMP=0x001000000005be33
- (id)initWithCloudData:(id)arg1;	// IMP=0x001000000005bc67
- (id)initWithAssetID:(id)arg1;	// IMP=0x001000000005bba5

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

