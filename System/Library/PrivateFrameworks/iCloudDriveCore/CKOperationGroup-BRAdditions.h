//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKOperationGroup.h>

@interface CKOperationGroup (BRAdditions)
+ (id)br_operationGroupWithName:(id)arg1;	// IMP=0x0060000000290bd0
+ (id)br_logout;	// IMP=0x0060000000290b71
+ (id)br_aggressiveChaining;	// IMP=0x0060000000290b12
+ (id)br_osUpgradeMigration;	// IMP=0x0060000000290ab3
+ (id)br_fetchNonLocalVersions;	// IMP=0x0060000000290a54
+ (id)br_purge;	// IMP=0x00600000002909f5
+ (id)br_fetchIdentityXPC;	// IMP=0x0060000000290996
+ (id)br_sharingMisc;	// IMP=0x0060000000290937
+ (id)br_syncUpAndDownShareDB;	// IMP=0x00600000002908d8
+ (id)br_publishingRequest;	// IMP=0x0060000000290879
+ (id)br_zoneHealthSimulation;	// IMP=0x006000000029081a
+ (id)br_zoneConsolidationManual;	// IMP=0x00600000002907bb
+ (id)br_zoneConsolidation;	// IMP=0x006000000029075c
+ (id)br_quotaUpdateTelemetry;	// IMP=0x00600000002906fd
+ (id)br_quotaUpdateXPC;	// IMP=0x006000000029069e
+ (id)br_quotaUpdateUploader;	// IMP=0x006000000029063f
+ (id)br_upload;	// IMP=0x00600000002905e0
+ (id)br_downloadConflictingVersions;	// IMP=0x0060000000290581
+ (id)br_downloadUpdatedDocuments;	// IMP=0x0060000000290522
+ (id)br_downloadOptimizeStorageOff;	// IMP=0x00600000002904c3
+ (id)br_downloadOpportunistic;	// IMP=0x0060000000290464
+ (id)br_downloadUserInitiated;	// IMP=0x0060000000290405
+ (id)br_downloadThumbnailsUserInitiated;	// IMP=0x00600000002903a6
+ (id)br_downloadThumbnails;	// IMP=0x0060000000290347
+ (id)br_syncUpZoneHealth;	// IMP=0x00600000002902e8
+ (id)br_syncUpAppLibraryMetadata;	// IMP=0x0060000000290289
+ (id)br_syncUp;	// IMP=0x006000000029022a
+ (id)br_fetchRecents;	// IMP=0x00600000002901cb
+ (id)br_locateRecord;	// IMP=0x006000000029016c
+ (id)br_fetchParentChain;	// IMP=0x006000000029010d
+ (id)br_listDirectoryContents;	// IMP=0x00600000002900ae
+ (id)br_syncDownZoneHealth;	// IMP=0x006000000029004f
+ (id)br_syncDownAppLibraryMetadata;	// IMP=0x006000000028fff0
+ (id)br_syncDownAppLaunch;	// IMP=0x006000000028ff91
+ (id)br_syncDownPushTriggered;	// IMP=0x006000000028ff32
+ (id)br_syncDownInitial;	// IMP=0x006000000028fed3
+ (id)br_syncDownPeriodic;	// IMP=0x006000000028fe74
+ (id)br_syncDown;	// IMP=0x006000000028fe15
@end
