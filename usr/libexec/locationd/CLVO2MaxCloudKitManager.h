//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class CKContainer, CKRecordZoneID, CKSyncEngine, CLTimer, NSString;

@interface CLVO2MaxCloudKitManager : CLIntersiloService
{
    struct shared_ptr<CLVO2MaxInputCache> fInputCache;	// 8 = 0x8
    struct shared_ptr<CLVO2MaxInputStore> fInputStore;	// 24 = 0x18
    struct unique_ptr<CLVO2MaxStagingOutputStore, std::default_delete<CLVO2MaxStagingOutputStore>> fStagingOutputStore;	// 40 = 0x28
    struct unique_ptr<CLVO2MaxRetrocomputeRecorderDb, std::default_delete<CLVO2MaxRetrocomputeRecorderDb>> fRetrocomputeDb;	// 48 = 0x30
    _Bool fFetchChangesForInputZone;	// 56 = 0x38
    struct unique_ptr<CLDataProtectionManager_Type::Client, std::default_delete<CLDataProtectionManager_Type::Client>> fDataProtectionClient;	// 64 = 0x40
    _Bool fDeviceUnlocked;	// 72 = 0x48
    int fMaxSessionsForUploadThrottling;	// 76 = 0x4c
    double fMinTimeBetweenForcedFetches;	// 80 = 0x50
    CKRecordZoneID *fOutputZoneID;	// 88 = 0x58
    CKRecordZoneID *fInputZoneID;	// 96 = 0x60
    struct CLVO2MaxCloudKitStats fDailyStats;	// 104 = 0x68
    CLTimer *fDailyStatsTimer;	// 168 = 0xa8
    double fDailyStatsTimerInterval;	// 176 = 0xb0
    double fDailyStatsStartTime;	// 184 = 0xb8
    CKContainer *_container;	// 192 = 0xc0
    CKSyncEngine *_syncEngine;	// 200 = 0xc8
}

+ (_Bool)isSupported;	// IMP=0x002000000013ac6f
+ (id)getSilo;	// IMP=0x001000000013abd6
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x001000000013abbd
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x001000000013ab60
- (id).cxx_construct;	// IMP=0x0020000000142da0
- (void).cxx_destruct;	// IMP=0x0010000000142d17
@property(readonly, nonatomic) CKSyncEngine *syncEngine; // @synthesize syncEngine=_syncEngine;
@property(readonly, nonatomic) CKContainer *container; // @synthesize container=_container;
- (void)syncEngine:(id)arg1 didUpdateMetadata:(id)arg2;	// IMP=0x0010000000142bad
- (void)syncEngine:(id)arg1 recordWithIDWasDeleted:(id)arg2 recordType:(id)arg3;	// IMP=0x0010000000142ab5
- (void)syncEngine:(id)arg1 didFetchRecord:(id)arg2;	// IMP=0x0010000000142810
- (_Bool)syncEngine:(id)arg1 shouldFetchChangesForZoneID:(id)arg2;	// IMP=0x0010000000142573
- (void)syncEngine:(id)arg1 failedToDeleteRecordWithID:(id)arg2 error:(id)arg3;	// IMP=0x0010000000142406
- (void)syncEngine:(id)arg1 didDeleteRecordWithID:(id)arg2;	// IMP=0x0010000000142324
- (void)syncEngine:(id)arg1 failedToSaveRecord:(id)arg2 error:(id)arg3;	// IMP=0x001000000014203a
- (void)syncEngine:(id)arg1 didSaveRecord:(id)arg2;	// IMP=0x0010000000141d9f
- (id)syncEngine:(id)arg1 recordToSaveForRecordID:(id)arg2;	// IMP=0x00100000001419a8
- (void)syncEngine:(id)arg1 zoneWithIDWasPurged:(id)arg2;	// IMP=0x001000000014189b
- (void)syncEngine:(id)arg1 zoneWithIDWasDeleted:(id)arg2;	// IMP=0x001000000014178e
- (void)syncEngine:(id)arg1 zoneWithIDChanged:(id)arg2;	// IMP=0x00100000001416ac
- (void)syncEngine:(id)arg1 failedToDeleteRecordZoneWithID:(id)arg2 error:(id)arg3;	// IMP=0x00100000001415b4
- (void)syncEngine:(id)arg1 failedToSaveRecordZone:(id)arg2 error:(id)arg3;	// IMP=0x001000000014144c
- (void)syncEngine:(id)arg1 didDeleteRecordZoneWithID:(id)arg2;	// IMP=0x001000000014133f
- (void)syncEngine:(id)arg1 didSaveRecordZone:(id)arg2;	// IMP=0x001000000014125d
- (void)receiveVO2MaxCloudKitDailyStatsFromWatch:(id)arg1;	// IMP=0x00100000001408b0
- (void)resetDailyStats;	// IMP=0x0010000000140871
- (void)stopSyncing:(_Bool)arg1;	// IMP=0x001000000014080f
- (void)handleZonePurge:(id)arg1;	// IMP=0x001000000014064b
- (void)handleZoneDeleted:(id)arg1;	// IMP=0x001000000014044f
- (void)handleZoneNotFound:(id)arg1;	// IMP=0x0010000000140204
- (void)handleUnknownItem:(id)arg1;	// IMP=0x0010000000140034
- (void)handleServerRecordChanged:(id)arg1;	// IMP=0x001000000013fd96
- (void)handleFetchedInputRecord:(id)arg1;	// IMP=0x001000000013fb04
- (void)updateInputSystemFields:(id)arg1 inputRecord:(id)arg2;	// IMP=0x001000000013f7a5
- (id)createCKRecordForInput:(id)arg1;	// IMP=0x001000000013f209
- (void)handleFetchedOutputRecord:(id)arg1;	// IMP=0x001000000013ef8b
- (void)updateOutputSystemFields:(id)arg1 outputRecord:(id)arg2;	// IMP=0x001000000013ec2c
- (id)createCKRecordForOutput:(id)arg1;	// IMP=0x001000000013e6b3
- (id)getSystemFieldsFromCKRecord:(id)arg1;	// IMP=0x001000000013e640
- (void)bulkUploadRecordIDsShouldReupload:(_Bool)arg1 shouldUploadToOutputZone:(_Bool)arg2 shouldUploadToInputZone:(_Bool)arg3 shouldThrottle:(_Bool)arg4;	// IMP=0x001000000013e0e6
- (void)addRecordIDsForSessionId:(id)arg1 shouldUploadToOutputZone:(_Bool)arg2 shouldUploadToInputZone:(_Bool)arg3;	// IMP=0x001000000013dd6e
- (void)deleteZone:(id)arg1;	// IMP=0x001000000013dc3d
- (void)createVO2MaxInputZone;	// IMP=0x001000000013daeb
- (void)createVO2MaxOutputZone;	// IMP=0x001000000013d999
- (void)initializeSyncEngine;	// IMP=0x001000000013d5e3
- (struct VO2MaxCloudKitSyncEngineMetadata)getCKSyncEngineMetadata;	// IMP=0x001000000013d4b4
- (void)updateDeviceUnlocked:(_Bool)arg1;	// IMP=0x001000000013d3be
- (id)getUserRecordIDName;	// IMP=0x001000000013d2fe
- (void)setUserRecordIDName:(id)arg1;	// IMP=0x001000000013d1da
- (_Bool)shouldKeepLocalDataOnAccountChange;	// IMP=0x001000000013d143
- (void)validateAccount;	// IMP=0x001000000013c927
- (void)cloudKitAccountDidChange:(id)arg1;	// IMP=0x001000000013c915
- (void)handleSyncUpload:(id)arg1;	// IMP=0x001000000013c3c7
- (void)onSyncActivity:(id)arg1;	// IMP=0x001000000013c1f2
- (void)resetSyncActivity:(id)arg1 withDelay:(long long)arg2;	// IMP=0x001000000013bf6f
- (void)setUpSyncActivity;	// IMP=0x001000000013b7f7
- (void)onDataProtectionNotification:(const int *)arg1 data:(const NotificationData_6933e140 *)arg2;	// IMP=0x001000000013b796
- (void)saveRetrocomputedOutputs;	// IMP=0x001000000013b573
- (void)saveInputsAndOutputsForSessionId:(id)arg1;	// IMP=0x001000000013b52b
- (void)endService;	// IMP=0x001000000013b3c2
- (void)beginService;	// IMP=0x001000000013acc3
- (id)init;	// IMP=0x001000000013ac32

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

