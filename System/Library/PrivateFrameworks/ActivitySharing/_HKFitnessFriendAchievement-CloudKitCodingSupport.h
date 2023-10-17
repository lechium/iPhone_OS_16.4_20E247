//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/_HKFitnessFriendAchievement.h>

@class ASCodableCloudKitAchievement, NSString;

@interface _HKFitnessFriendAchievement (CloudKitCodingSupport)
+ (id)_fitnessFriendAchievementWithCodableAchievement:(id)arg1 friendUUID:(id)arg2;	// IMP=0x0010000000004732
+ (id)fitnessFriendAchievementWithCodableAchievement:(id)arg1 friendUUID:(id)arg2;	// IMP=0x0010000000004720
+ (id)fitnessFriendAchievementWithCodableAchievement:(id)arg1;	// IMP=0x001000000000470c
+ (id)fitnessFriendAchievementWithRecord:(id)arg1 friendUUID:(id)arg2;	// IMP=0x0010000000004547
- (id)recordWithZoneID:(id)arg1;	// IMP=0x0010000000004389
@property(readonly, nonatomic) ASCodableCloudKitAchievement *codableAchievement;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
