//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DESRecordStoreManager, MLRPluginFactory, MLRTrialManager, NSHashTable, NSMutableArray, NSString, NSURL;
@protocol DESBundleRegistryManaging, OS_dispatch_queue;

@interface MLRTaskScheduler : NSObject
{
    NSURL *_baseURL;	// 8 = 0x8
    id <DESBundleRegistryManaging> _bundleRegistry;	// 16 = 0x10
    MLRPluginFactory *factory;	// 24 = 0x18
    DESRecordStoreManager *_recordStoreManager;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_taskWorkerQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_taskStopQueue;	// 48 = 0x30
    _Bool _alwaysRun;	// 56 = 0x38
    NSString *_localeIdentifier;	// 64 = 0x40
    NSHashTable *_workers;	// 72 = 0x48
    NSMutableArray *_tasks;	// 80 = 0x50
    CDUnknownBlockType _completionAfterTaskRun;	// 88 = 0x58
    _Bool _busy;	// 96 = 0x60
    unsigned long long _numOfCompletedTasks;	// 104 = 0x68
    unsigned long long _numOfExpectedTasks;	// 112 = 0x70
    _Bool _requestedToStop;	// 120 = 0x78
    MLRTrialManager *_trialManager;	// 128 = 0x80
    MLRPluginFactory *_pluginFactory;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x00200000000198c9
- (_Bool)taskIsDeferred;	// IMP=0x00100000000198c0
- (void)stop;	// IMP=0x001000000001967e
- (void)startAllBMLTTasksWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000001938a
- (void)startAllClassBTasksWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000019315
- (id)allClassBBundleIDs;	// IMP=0x00100000000192ab
- (void)startAllClassAPluggedInTasksWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000019236
- (id)allClassAPluggedInBundleIDs;	// IMP=0x00100000000191cc
- (void)startAllClassAOnBatteryTasksWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000019157
- (id)allClassAOnBatteryBundleIDs;	// IMP=0x00100000000190ed
- (void)startTasksWithAllowedBundles:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000018e60
- (void)startAllUnrestrictedTasksWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000018dc6
- (void)startTasksForBundles:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000018c8b
- (void)startTasks:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000018b89
- (void)_startTasks:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000018910
- (id)tasksForBundles:(id)arg1;	// IMP=0x0010000000018470
- (void)addPFLSchedulingTaskToTasks:(id)arg1 withBundleID:(id)arg2;	// IMP=0x0010000000018280
- (_Bool)allowBypassDiagnosticsUsage:(id)arg1;	// IMP=0x0010000000018219
- (_Bool)diagnosticsUsageAllowed;	// IMP=0x001000000001820f
- (double)_maxTimeLimitForBundle:(id)arg1;	// IMP=0x00100000000181de
- (void)updateInterval;	// IMP=0x00100000000181aa
- (void)_completeTaskRunWithResult:(id)arg1 error:(id)arg2;	// IMP=0x001000000001810b
- (void)createTaskWorkerForTask:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000018079
- (void)createTaskWorkerBMLTTask:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000017e79
- (void)createTaskWorkerForLocalDebugTask:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000017d5e
- (void)createTaskWorkerForShadowEvaluationTask:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000017ac6
- (void)createTaskWorkerForTrialPFLTask:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000176fe
- (void)createTaskWorkerForDodMLTask:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000173ea
- (void)_scheduleNextTask;	// IMP=0x00100000000168ee
- (id)_requestedToStopError;	// IMP=0x0010000000016823
- (id)initWithBaseURL:(id)arg1 localeIdentifier:(id)arg2 fromDesTool:(_Bool)arg3 bundleRegistry:(id)arg4 recordStoreManager:(id)arg5;	// IMP=0x00100000000165cf
- (id)initWithBaseURL:(id)arg1 localeIdentifier:(id)arg2 fromDesTool:(_Bool)arg3;	// IMP=0x00100000000165a9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

