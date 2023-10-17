//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSSet, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface ACXRemoteSystemAppList : NSObject
{
    NSArray *_availableSystemApps;	// 8 = 0x8
    NSString *_trackedOSBuildNumber;	// 16 = 0x10
    NSSet *_bundleIDsOfInstallableSystemAppsIgnoringCounterpartAvailability;	// 24 = 0x18
    NSURL *_storageBaseURL;	// 32 = 0x20
    NSMutableArray *_waitersForInstallableList;	// 40 = 0x28
}

+ (id)availableSystemAppListForStorageBaseURL:(id)arg1;	// IMP=0x00400000000025ba
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000002300
- (void).cxx_destruct;	// IMP=0x0020000000005bc2
@property(readonly, nonatomic) NSMutableArray *waitersForInstallableList; // @synthesize waitersForInstallableList=_waitersForInstallableList;
@property(retain, nonatomic) NSURL *storageBaseURL; // @synthesize storageBaseURL=_storageBaseURL;
@property(retain, nonatomic) NSSet *bundleIDsOfInstallableSystemAppsIgnoringCounterpartAvailability; // @synthesize bundleIDsOfInstallableSystemAppsIgnoringCounterpartAvailability=_bundleIDsOfInstallableSystemAppsIgnoringCounterpartAvailability;
- (void)waitForInstallableSystemAppBundleIDs:(CDUnknownBlockType)arg1;	// IMP=0x001000000000596f
- (_Bool)needsSyncForCurrentOSBuildVersion:(id)arg1;	// IMP=0x00100000000057e0
@property(readonly, copy, nonatomic) NSDictionary *installableSystemAppToCompanionAppIdentifierMap;
- (void)setInstallableSystemAppBundleIDsExcludingCompanionState:(id)arg1;	// IMP=0x0010000000005031
- (id)_onQueue_bundleIDsOfInstallableSystemAppsForLocallyAvailableApps:(id)arg1;	// IMP=0x0010000000004ddf
@property(readonly, copy, nonatomic) NSSet *bundleIDsOfInstallableSystemApps;
@property(readonly, copy, nonatomic) NSSet *bundleIDsOfAvailableSystemApps;
@property(readonly, copy, nonatomic) NSString *trackedOSBuildNumber; // @synthesize trackedOSBuildNumber=_trackedOSBuildNumber;
- (void)setAvailableSystemApps:(id)arg1 bundleIDsOfInstallableSystemAppsIgnoringCounterpartAvailability:(id)arg2 forRemoteOSBuildVersion:(id)arg3;	// IMP=0x0010000000004351
- (void)_onQueue_callWaitersForInstallableSystemAppsWithLocallyAvailableApps:(id)arg1;	// IMP=0x001000000000416f
- (_Bool)systemAppIsInstallableWithBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000003bee
- (id)installableSystemAppWithBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000358a
@property(readonly, copy, nonatomic) NSArray *installableSystemApps;
- (_Bool)_onQueue_appIsInstallable:(id)arg1 givenLocallyAvailableApps:(id)arg2;	// IMP=0x0010000000003104
@property(readonly, copy, nonatomic) NSArray *availableSystemApps; // @synthesize availableSystemApps=_availableSystemApps;
- (void)_onQueue_saveData;	// IMP=0x0010000000002c7a
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
- (id)initWithStorageBaseURL:(id)arg1;	// IMP=0x0010000000002535
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000024b2
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000002308

@end
