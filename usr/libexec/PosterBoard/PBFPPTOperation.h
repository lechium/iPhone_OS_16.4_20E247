//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSString;

@interface PBFPPTOperation : NSOperation
{
    CDUnknownBlockType _finishTestBlock;	// 8 = 0x8
    CDUnknownBlockType _startTestBlock;	// 16 = 0x10
    CDUnknownBlockType _finishSubTestBlock;	// 24 = 0x18
    CDUnknownBlockType _startSubTestBlock;	// 32 = 0x20
    double _operationStartTime;	// 40 = 0x28
    double _operationEndTime;	// 48 = 0x30
    NSString *_operationName;	// 56 = 0x38
}

+ (void)enqueueOperations:(id)arg1;	// IMP=0x0040000000007607
+ (id)operationToDeletePosters:(CDUnknownBlockType)arg1;	// IMP=0x001000000000671e
+ (id)operationToAddPosterWithProvider:(id)arg1 descriptorIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000006341
+ (id)operationToPushInToPosterSwitcher;	// IMP=0x001000000000609b
+ (id)operationToExitPosterSwitcher;	// IMP=0x001000000000602e
+ (id)operationToScrollToFirstPoster:(_Bool)arg1;	// IMP=0x0010000000005e8f
+ (id)operationToResetSwitcher;	// IMP=0x0010000000005d03
+ (id)operationToSynthesizeEventsForEventActions:(CDUnknownBlockType)arg1;	// IMP=0x0010000000005b8d
+ (id)operationToWaitForNotificationName:(id)arg1 object:(id)arg2 timeout:(double)arg3;	// IMP=0x001000000000593b
+ (id)operationToWaitForTimeInterval:(double)arg1;	// IMP=0x00100000000057d1
+ (id)operationToFinishTest:(id)arg1;	// IMP=0x00100000000056d7
+ (id)operationToStartTest:(id)arg1;	// IMP=0x00100000000055dd
- (void).cxx_destruct;	// IMP=0x00200000000076a1
@property(copy, nonatomic) NSString *operationName; // @synthesize operationName=_operationName;
- (void)operationDidFinish;	// IMP=0x00100000000074fd
- (void)operationWillStart;	// IMP=0x0010000000007413
- (id)markFinishedSubTest:(id)arg1 forTestName:(id)arg2;	// IMP=0x00100000000071f3
- (id)markStartSubTest:(id)arg1 forTestName:(id)arg2;	// IMP=0x0010000000006f63
- (id)markFinishedTest:(id)arg1;	// IMP=0x0010000000006d77
- (id)markStartedTest:(id)arg1;	// IMP=0x0010000000006b3b
- (id)init;	// IMP=0x0010000000006a8f

@end

