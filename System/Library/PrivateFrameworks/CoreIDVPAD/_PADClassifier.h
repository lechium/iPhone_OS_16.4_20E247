//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, PADModelLoader;
@protocol PADAlgorithms, PADFaceActionSequenceClassifier, PADPrintReplayDetector, PADSelfieAnalyzer, PADTrajectoryAnalyzer;

__attribute__((visibility("hidden")))
@interface _PADClassifier : NSObject
{
    PADModelLoader *_models;	// 8 = 0x8
    id <PADAlgorithms> _algorithms;	// 16 = 0x10
    id <PADFaceActionSequenceClassifier> _facModule;	// 24 = 0x18
    id <PADTrajectoryAnalyzer> _taModule;	// 32 = 0x20
    id <PADPrintReplayDetector> _prdModule;	// 40 = 0x28
    id <PADSelfieAnalyzer> _selfieModule;	// 48 = 0x30
    _Bool _isFACProcessing;	// 56 = 0x38
    _Bool _areModelsLoading;	// 57 = 0x39
    CDUnknownBlockType _modelLoaderCompletion;	// 64 = 0x40
    NSMutableArray *_facFramesToProcess;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000003e99
- (id)_prepareResultWithLabel:(long long)arg1;	// IMP=0x000000000000381e
- (void)_performSpoofClassificationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000357e
- (void)_sendFrameProcessingCompleteNotification;	// IMP=0x000000000000352e
- (void)_refreshQueuedFACFrames;	// IMP=0x0000000000003495
- (void)_startProcessingNextFACFrameIfAvailable;	// IMP=0x00000000000033d5
- (void)_facDidFinishProcessing;	// IMP=0x0000000000003369
- (void)_addNotificationCenterObservers;	// IMP=0x000000000000326f
- (void)enableAccessibilityOptions;	// IMP=0x0000000000003259
- (void)cancelWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003130
- (void)finishLivenessWithSelfie:(id)arg1 idMatchingFaceprints:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000002de9
- (void)finishLivenessWithSelfie:(id)arg1 performIDMatching:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000002b9f
- (void)processRecordedLivenessFrame:(id)arg1 withPRD:(_Bool)arg2 FAC:(_Bool)arg3;	// IMP=0x0000000000002b04
- (void)processLivenessFrame:(id)arg1 withOptions:(struct PADClassifierFrameOptions)arg2 taOptions:(long long)arg3;	// IMP=0x0000000000002a73
- (void)resumeLiveness;	// IMP=0x0000000000002a5b
- (void)prepareToResumeLiveness;	// IMP=0x0000000000002a40
- (void)pauseLiveness;	// IMP=0x0000000000002a25
- (void)restartLivenessGesture;	// IMP=0x0000000000002a0f
- (void)skipRecordedLivenessGesture;	// IMP=0x00000000000029dc
- (void)skipLivenessGesture;	// IMP=0x00000000000029c6
- (void)startLivenessVideoProcessing:(id)arg1 onGestureStart:(CDUnknownBlockType)arg2 onGesturesFinished:(CDUnknownBlockType)arg3;	// IMP=0x0000000000002739
- (void)startLiveness:(id)arg1 onGestureStart:(CDUnknownBlockType)arg2 onIncorrectGestureDetected:(CDUnknownBlockType)arg3 onGesturesFinished:(CDUnknownBlockType)arg4;	// IMP=0x000000000000247f
- (void)waitForModelLoaderIfNeededWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000002437
- (id)init;	// IMP=0x00000000000020de

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
