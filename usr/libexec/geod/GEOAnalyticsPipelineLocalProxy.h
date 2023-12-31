//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface GEOAnalyticsPipelineLocalProxy : NSObject
{
}

- (void)processMapsDeletionWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x002000000001d41b
- (void)reportRRLogMessage:(id)arg1;	// IMP=0x001000000001d3a5
- (void)runAggregationTasks;	// IMP=0x001000000001d361
- (void)showEvalDataWithVisitorBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000001d2eb
- (void)flushEvalData;	// IMP=0x001000000001d2a7
- (void)setEvalMode:(_Bool)arg1;	// IMP=0x001000000001d254
- (void)updateSharedStateType:(int)arg1 state:(id)arg2 completion:(CDUnknownBlockType)arg3 completionQueue:(id)arg4;	// IMP=0x001000000001d159
- (void)reportDailySettings:(id)arg1 completion:(CDUnknownBlockType)arg2 completionQueue:(id)arg3;	// IMP=0x001000000001d0c0
- (void)reportCuratedCollectionActionType:(unsigned long long)arg1 collectionId:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3 completionQueue:(id)arg4;	// IMP=0x001000000001d024
- (void)reportMonthlyUsageCountType:(int)arg1 usageString:(id)arg2 usageBool:(id)arg3 appId:(id)arg4 completion:(CDUnknownBlockType)arg5 completionQueue:(id)arg6;	// IMP=0x001000000001cf30
- (void);	// IMP=0x001000000001ce3c
- (void)reportLogMsg:(id)arg1 uploadBatchId:(unsigned long long)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000001cd90

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

