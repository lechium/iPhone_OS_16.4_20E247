//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray, OITSUProgressContext, TCProgressStage;

__attribute__((visibility("hidden")))
@interface TCProgressContext : NSObject
{
    OITSUProgressContext *m_parentProgressContext;	// 8 = 0x8
    TCProgressStage *m_currentStage;	// 16 = 0x10
    NSDate *m_lastReportTime;	// 24 = 0x18
    NSMutableArray *m_stackOfBranches;	// 32 = 0x20
}

+ (double)currentPosition;	// IMP=0x00600000002db430
+ (void)setMessage:(id)arg1;	// IMP=0x00600000002db34c
+ (void)setProgress:(double)arg1;	// IMP=0x00600000002db2e9
+ (void)advanceProgressInContext:(id)arg1 progress:(double)arg2;	// IMP=0x00600000002db283
+ (void)advanceProgress:(double)arg1;	// IMP=0x00600000002db220
+ (void)popBranch;	// IMP=0x00600000002db1a3
+ (void)pushBranch:(id)arg1;	// IMP=0x00600000002db102
+ (void)endBranch:(id)arg1;	// IMP=0x00600000002db0ec
+ (id)createBranchWithSteps:(double)arg1 takingSteps:(double)arg2 name:(id)arg3;	// IMP=0x00600000002db02b
+ (void)endStage;	// IMP=0x00600000002daf87
+ (void)createStageWithSteps:(double)arg1 takingSteps:(double)arg2 name:(id)arg3;	// IMP=0x00600000002daec6
+ (void)createStageWithSteps:(double)arg1 takingSteps:(double)arg2;	// IMP=0x00600000002daeb2
+ (void)removeProgressObserver:(id)arg1;	// IMP=0x00600000002dadde
+ (void)addProgressObserver:(id)arg1 selector:(SEL)arg2;	// IMP=0x00600000002dad04
+ (void)removeContextForCurrentThread;	// IMP=0x00600000002dac69
+ (void)createContextForCurrentThreadWithParentContext:(id)arg1;	// IMP=0x00600000002dab6f
+ (id)stageForCurrentThread;	// IMP=0x00600000002db6cc
+ (id)contextForCurrentThread;	// IMP=0x00600000002db621
- (void).cxx_destruct;	// IMP=0x00000000002db494
- (void)reportProgress:(double)arg1;	// IMP=0x00000000002db7cc
- (id)rootStage;	// IMP=0x00000000002db73e
- (id)currentStage;	// IMP=0x00000000002db730
- (void)dealloc;	// IMP=0x00000000002db5b2
- (id)initWithParentContext:(id)arg1;	// IMP=0x00000000002db4d2

@end

