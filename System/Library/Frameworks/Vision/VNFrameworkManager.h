//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSNotificationCenter, NSRecursiveLock, NSString, VNMTLDeviceWisdomParameters, _VNWeakSessionsCollection;
@protocol NSLocking;

__attribute__((visibility("hidden")))
@interface VNFrameworkManager : NSObject
{
    NSNotificationCenter *_notificationCenter;	// 8 = 0x8
    NSRecursiveLock *_detectorAccessingLock;	// 16 = 0x10
    NSRecursiveLock *_trackerResourcesAccessingLock;	// 24 = 0x18
    struct os_unfair_lock_s _sessionsAccessLock;	// 32 = 0x20
    _VNWeakSessionsCollection *_sessions;	// 40 = 0x28
    struct os_unfair_lock_s _wisdomParametersLock;	// 48 = 0x30
    VNMTLDeviceWisdomParameters *_wisdomParameters;	// 56 = 0x38
}

+ (id)manager;	// IMP=0x001000000008d78d
- (void).cxx_destruct;	// IMP=0x000000000008d744
- (void)legacyForcedCleanupOfJunkPipelineWithLevel:(id)arg1;	// IMP=0x000000000008d5ad
- (void)legacyForcedCleanupOfSmartCamPipelineWithLevel:(id)arg1;	// IMP=0x000000000008d416
- (void)legacyForcedCleanupOfScenePipelineWithLevel:(id)arg1;	// IMP=0x000000000008d27f
- (void)legacyForcedCleanupOfFacePipelineWithLevel:(id)arg1;	// IMP=0x000000000008d0e8
- (void)legacyForcedCleanupWithOptions:(id)arg1;	// IMP=0x000000000008cf51
- (id)wisdomParameterForMTLDeviceWithName:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008ce8a
- (id)wisdomParameterForMTLDevice:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008cdc3
- (void)releaseMetalDeviceWisdomParameters;	// IMP=0x000000000008cd8f
- (id)loadedDetectors;	// IMP=0x000000000008cb42
- (id)trackerResourcesConfiguredWithOptions:(id)arg1 forSession:(id)arg2 error:(id *)arg3;	// IMP=0x000000000008ca50
- (id)detectorOfClass:(Class)arg1 configuredWithOptions:(id)arg2 forSession:(id)arg3 error:(id *)arg4;	// IMP=0x000000000008c7d2
@property(readonly) id <NSLocking> trackerResourcesAccessingLock;
@property(readonly) id <NSLocking> detectorAccessingLock;
@property(readonly, copy) NSArray *allSessions;
- (void)registerSession:(id)arg1;	// IMP=0x000000000008c691
@property(readonly) NSNotificationCenter *notificationCenter;
- (id)_locateTrackerResourcesConfiguredWithOptions:(id)arg1 inSessions:(id)arg2 excludingSession:(id)arg3;	// IMP=0x000000000008c49e
- (id)_locateDetectorOfClass:(Class)arg1 configuredWithOptions:(id)arg2 inSessions:(id)arg3 excludingSession:(id)arg4;	// IMP=0x000000000008c2ab
- (id)init;	// IMP=0x000000000008c1ce

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
