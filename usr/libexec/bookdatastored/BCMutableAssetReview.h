//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKRecord, NSData, NSDate, NSString;
@protocol BCCloudDataPrivacyDelegate;

@interface BCMutableAssetReview
{
    short _starRating;	// 8 = 0x8
    NSString *_assetReviewID;	// 16 = 0x10
    NSString *_reviewTitle;	// 24 = 0x18
    NSString *_reviewBody;	// 32 = 0x20
    NSString *_userID;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000005ff12
- (void).cxx_destruct;	// IMP=0x00200000000601f1
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString *reviewBody; // @synthesize reviewBody=_reviewBody;
@property(copy, nonatomic) NSString *reviewTitle; // @synthesize reviewTitle=_reviewTitle;
@property(nonatomic) short starRating; // @synthesize starRating=_starRating;
@property(copy, nonatomic) NSString *assetReviewID; // @synthesize assetReviewID=_assetReviewID;
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000060012
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000005ff1a
- (id)configuredRecordFromAttributes;	// IMP=0x001000000005fdfb
- (id)zoneName;	// IMP=0x001000000005fde7
@property(nonatomic) double normalizedStarRating;
- (id)identifier;	// IMP=0x001000000005fcf2
- (id)recordType;	// IMP=0x001000000005fce5
@property(readonly, copy) NSString *description;
- (id)initWithRecord:(id)arg1;	// IMP=0x001000000005fa89
- (id)initWithCloudData:(id)arg1;	// IMP=0x001000000005f8bc
- (id)initWithAssetReviewID:(id)arg1;	// IMP=0x001000000005f7fa

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
