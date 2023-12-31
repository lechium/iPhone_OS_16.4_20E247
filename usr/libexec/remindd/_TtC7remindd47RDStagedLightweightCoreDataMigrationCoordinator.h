//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC7remindd47RDStagedLightweightCoreDataMigrationCoordinator : NSObject
{
    MISSING_TYPE *modelName;	// 8 = 0x8
    MISSING_TYPE *bundle;	// 24 = 0x18
    MISSING_TYPE *allModelVersionIdentifiers;	// 32 = 0x20
    MISSING_TYPE *postMigrationDataUpdateByModelVersionIdentifier;	// 40 = 0x28
}

+ (id)stagedMigrationsInfoForPersistentStoreAt:(id)arg1;	// IMP=0x00200000003b8780
+ (id)createCoordinatorForMigratingReminderDataWithClientNamesOfREMCDChangeTrackingStateWhichShouldNotBeResetUponPersistentHistoryTruncation:(id)arg1;	// IMP=0x00100000005b8a30
- (void).cxx_destruct;	// IMP=0x00400000003b8ad0
- (id)init;	// IMP=0x00100000003b8a70
- (_Bool)cloneStoreAtSourceStoreURL:(id)arg1 destinationStoreURL:(id)arg2 error:(id *)arg3;	// IMP=0x00100000003b8680
- (_Bool)performStagedLightweightMigrationForStoreAtStoreURL:(id)arg1 persistentStoreDescriptionOptionsOverride:(id)arg2 postMigrationDataUpdatesTransactionAuthor:(id)arg3 error:(id *)arg4;	// IMP=0x00100000003b75e0
- (_Bool)shouldPerformStagedLightweightMigrationForStoreAtStoreURL:(id)arg1;	// IMP=0x00100000003b5740

@end

