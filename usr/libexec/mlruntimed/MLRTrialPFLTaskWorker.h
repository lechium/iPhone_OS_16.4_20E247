//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DESDebugRecord, DESDodMLTaskSchedulingPolicy, DESRecordSet, MLRDodMLSchedulingRecord, MLRTrialManager, NSString, TRIClient;
@protocol DESPluginManaging, OS_dispatch_queue;

@interface MLRTrialPFLTaskWorker : NSObject
{
    _Bool _alwaysRun;	// 8 = 0x8
    id <DESPluginManaging> _plugin;	// 16 = 0x10
    DESDodMLTaskSchedulingPolicy *_policy;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    _Bool _requestedToStop;	// 40 = 0x28
    MLRTrialManager *_trialManager;	// 48 = 0x30
    TRIClient *_trialClient;	// 56 = 0x38
    DESRecordSet *_recordSet;	// 64 = 0x40
    NSString *_pluginID;	// 72 = 0x48
    MLRDodMLSchedulingRecord *_schedulingRecord;	// 80 = 0x50
    DESDebugRecord *_debugRecord;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0020000000005d41
@property(readonly, nonatomic) DESDebugRecord *debugRecord; // @synthesize debugRecord=_debugRecord;
@property(readonly, nonatomic) MLRDodMLSchedulingRecord *schedulingRecord; // @synthesize schedulingRecord=_schedulingRecord;
@property(readonly, nonatomic) NSString *pluginID; // @synthesize pluginID=_pluginID;
@property(readonly, nonatomic) DESRecordSet *recordSet; // @synthesize recordSet=_recordSet;
- (id)telemetryResponse;	// IMP=0x0010000000005d11
- (void)stop;	// IMP=0x0010000000005c84
- (void)runWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000577c
- (void)runSynchronouslyWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000004bcb
- (void)addSkippedRecordForRecipe:(id)arg1 description:(id)arg2;	// IMP=0x0010000000004b20
- (_Bool)loadPluginIfNecessary:(id *)arg1;	// IMP=0x0010000000004a69
- (id)attachmentsWithError:(id *)arg1;	// IMP=0x00100000000049cc
- (id)attachmentsDirURL;	// IMP=0x00100000000049b3
- (id)recipeWithError:(id *)arg1;	// IMP=0x00100000000046d5
- (id)recipeURL;	// IMP=0x00100000000046bc
- (id)policyWithError:(id *)arg1;	// IMP=0x001000000000462d
- (id)policyURL;	// IMP=0x0010000000004614
- (id)URLForfactor:(id)arg1;	// IMP=0x001000000000412e
- (_Bool)updateTaskAfterCompletion:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000004028
- (_Bool)canRunWithSchedulingRecord:(id)arg1;	// IMP=0x0010000000003ea4
- (id)_taskDeferByDASError;	// IMP=0x0010000000003dd9
- (_Bool)taskIsDeferred;	// IMP=0x0010000000003dd0
@property(readonly, copy) NSString *description;
- (id)initWithPluginID:(id)arg1 recordSet:(id)arg2 trialManager:(id)arg3 alwaysRun:(_Bool)arg4 pluginOverride:(id)arg5;	// IMP=0x0010000000003af1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

