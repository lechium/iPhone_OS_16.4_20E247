//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DESDebugRecord, DESDodMLServer, DESDodMLTaskSchedulingPolicy, DESRecordSet, MLRDodMLSchedulingRecord, NSMutableArray, NSString;
@protocol DESPluginManaging, OS_dispatch_queue;

@interface MLRDodMLTaskWorker : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    id <DESPluginManaging> _plugin;	// 16 = 0x10
    DESDodMLTaskSchedulingPolicy *_policy;	// 24 = 0x18
    _Bool _requestedToStop;	// 32 = 0x20
    NSMutableArray *_results;	// 40 = 0x28
    _Bool _alwaysRun;	// 48 = 0x30
    DESRecordSet *_recordSet;	// 56 = 0x38
    NSString *_bundleIdentifier;	// 64 = 0x40
    NSString *_localeIdentifier;	// 72 = 0x48
    DESDodMLServer *_server;	// 80 = 0x50
    MLRDodMLSchedulingRecord *_schedulingRecord;	// 88 = 0x58
    DESDebugRecord *_debugRecord;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0020000000012f78
@property(readonly, nonatomic) DESDebugRecord *debugRecord; // @synthesize debugRecord=_debugRecord;
@property(readonly, nonatomic) MLRDodMLSchedulingRecord *schedulingRecord; // @synthesize schedulingRecord=_schedulingRecord;
@property(readonly, nonatomic) DESDodMLServer *server; // @synthesize server=_server;
@property(readonly, nonatomic) NSString *localeIdentifier; // @synthesize localeIdentifier=_localeIdentifier;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) DESRecordSet *recordSet; // @synthesize recordSet=_recordSet;
- (void)stop;	// IMP=0x0010000000012e58
- (void)runWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000012291
- (_Bool)updateTaskAfterCompletion:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000120fd
- (_Bool)canRun;	// IMP=0x0010000000011f92
- (_Bool)_ensureEvaluatorWithError:(id *)arg1;	// IMP=0x0010000000011e48
- (void)_downloadAttachments:(id)arg1 recipe:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000011bd4
- (void)_handleRecipe:(id)arg1 matchingRecordSet:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000010be0
- (id)_taskDeferByDASError;	// IMP=0x0010000000010b15
- (_Bool)taskIsDeferred;	// IMP=0x0010000000010b0c
- (void)_fetchRecipe:(id)arg1 matchingRecordSet:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000103d6
- (void)_attemptRecipeMatchWithRecipeIDs:(id)arg1 keepGoing:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000fbb5
- (_Bool)_rollDieWithRecipeID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000f867
- (id)_matchedRecordSetforRecipeID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000f757
@property(readonly, nonatomic) _Bool isPFLPlugin;
- (void)_handleTelemetryInPolicy:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000f02f
- (id)telemetryResponse;	// IMP=0x001000000000ee57
- (id)initWithBaseURL:(id)arg1 recordSet:(id)arg2 bundleIdentifier:(id)arg3 localeIdentifier:(id)arg4 pluginOverride:(id)arg5 protocolClass:(Class)arg6 alwaysRun:(_Bool)arg7;	// IMP=0x001000000000ebed
- (id)initWithBaseURL:(id)arg1 recordSet:(id)arg2 bundleIdentifier:(id)arg3 localeIdentifier:(id)arg4 pluginOverride:(id)arg5 protocolClass:(Class)arg6;	// IMP=0x001000000000ebc2
- (id)initWithBaseURL:(id)arg1 recordSet:(id)arg2 bundleIdentifier:(id)arg3 localeIdentifier:(id)arg4 pluginOverride:(id)arg5;	// IMP=0x001000000000eba6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

