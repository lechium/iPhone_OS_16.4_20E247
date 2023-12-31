//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AMSHashable-Protocol.h"

@class AMSPromise, NSArray, NSString;
@protocol AMSCloudDataChangeToken, AMSCloudDataRecord, AMSCloudDataRecordIdentifier, AMSCloudDataRecordZone, AMSCloudDataRecordZoneIdentifier, AMSCloudDataShare;

@protocol AMSCloudDataDatabase <AMSHashable>
@property(readonly, nonatomic) unsigned long long type;
@property(readonly, nonatomic, getter=isSharedDatabase) _Bool sharedDatabase;
@property(readonly, nonatomic, getter=isPublicDatabase) _Bool publicDatabase;
@property(readonly, nonatomic, getter=isPrivateDatabase) _Bool privateDatabase;
- (AMSPromise *)subscribeWithIdentifier:(NSString *)arg1 recordZoneIdentifier:(id <AMSCloudDataRecordZoneIdentifier>)arg2;
- (AMSPromise *)subscribeWithIdentifier:(NSString *)arg1;
- (id <AMSCloudDataShare>)shareForRecordZoneIdentifier:(id <AMSCloudDataRecordZoneIdentifier>)arg1;
- (AMSPromise *)saveRecordZone:(id <AMSCloudDataRecordZone>)arg1;
- (AMSPromise *)saveRecord:(id <AMSCloudDataRecord>)arg1;
- (void)persistChangedRecordsChangeToken:(id <AMSCloudDataChangeToken>)arg1 forRecordZoneIdentifier:(id <AMSCloudDataRecordZoneIdentifier>)arg2;
- (void)persistChangedRecordZonesChangeToken:(id <AMSCloudDataChangeToken>)arg1;
- (AMSPromise *)fetchRecordZones;
- (AMSPromise *)fetchRecordWithRecordIdentifier:(id <AMSCloudDataRecordIdentifier>)arg1;
- (AMSPromise *)fetchRecordWithName:(NSString *)arg1 zoneIdentifier:(id <AMSCloudDataRecordZoneIdentifier>)arg2;
- (AMSPromise *)fetchChangedRecordZones;
- (AMSPromise *)fetchChangedRecordsInRecordZonesWithRecordZoneIdentifiers:(NSArray *)arg1;
- (AMSPromise *)deleteRecordZonesWithRecordZoneIdentifiers:(NSArray *)arg1;
- (AMSPromise *)deleteRecordWithRecordIdentifier:(id <AMSCloudDataRecordIdentifier>)arg1 missingEncryptionIdentity:(_Bool)arg2;
- (AMSPromise *)deleteRecordWithRecordIdentifier:(id <AMSCloudDataRecordIdentifier>)arg1;
- (id <AMSCloudDataRecordZone>)createRecordZoneWithRecordZoneName:(NSString *)arg1;
- (id <AMSCloudDataRecord>)createRecordWithRecordName:(NSString *)arg1 recordType:(NSString *)arg2 recordZone:(id <AMSCloudDataRecordZone>)arg3;
- (AMSPromise *)addRecordsToSave:(NSArray *)arg1 recordIdentifiersToDelete:(NSArray *)arg2;
@end

