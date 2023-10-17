//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CloudStoreZoneShareParticipant
{
}

+ (id)_propertySettersForCloudStoreZoneShareParticipant;	// IMP=0x004000000038857e
+ (void)deleteEntitiesForCloudStoreZone:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000038826a
+ (id)_predicateForParticipantHandle:(id)arg1 cloudStoreZonePID:(long long)arg2;	// IMP=0x001000000038816f
+ (id)_predicateForCloudStoreZonePID:(long long)arg1;	// IMP=0x00100000003880fc
+ (id)_predicateForParticipantHandle:(id)arg1;	// IMP=0x00100000003880d9
+ (id)shareParticipantsForCloudStoreZonePID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000387f23
+ (id)anyInDatabase:(id)arg1 withShareParticipant:(id)arg2 inCloudStoreZone:(id)arg3;	// IMP=0x0010000000387e36
+ (id)_zoneShareParticipantWithHandle:(id)arg1 forCloudStoreZone:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000387d81
+ (void)updateShareParticipants:(id)arg1 forCloudStoreZone:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000387942
+ (id)insertOrUpdateCloudStoreZoneShareParticipant:(id)arg1 forCloudStoreZone:(id)arg2 inDatabase:(id)arg3;	// IMP=0x001000000038773e
+ (id)databaseTable;	// IMP=0x0010000000387731
- (id)_commonDictionaryForCloudStoreZoneShareParticipant:(id)arg1;	// IMP=0x0040000000388479
- (id)cloudStoreZoneShareParticipant;	// IMP=0x0010000000388310
- (void)updateWithCloudStoreZoneShareParticipant:(id)arg1;	// IMP=0x0010000000387cce
- (id)initWithCloudStoreZoneShareParticipant:(id)arg1 forCloudStoreZone:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000387844

@end
