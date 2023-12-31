//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableSet;

@interface VCPFaceLibraryProcessingTask : NSObject
{
    struct atomic<bool> _cancel;	// 8 = 0x8
    struct atomic<bool> _started;	// 9 = 0x9
    NSArray *_photoLibraries;	// 16 = 0x10
    NSDictionary *_options;	// 24 = 0x18
    unsigned long long _subtasks;	// 32 = 0x20
    NSMutableSet *_assetBatch;	// 40 = 0x28
    CDUnknownBlockType _progressHandler;	// 48 = 0x30
    CDUnknownBlockType _completionHandler;	// 56 = 0x38
    CDUnknownBlockType _cancelBlock;	// 64 = 0x40
}

+ (void)_logSubtasks:(unsigned long long)arg1;	// IMP=0x002000000008372e
+ (id)taskWithPhotoLibraries:(id)arg1 andOptions:(id)arg2 andProgressHandler:(CDUnknownBlockType)arg3 andCompletionHandler:(CDUnknownBlockType)arg4 andCancelBlock:(CDUnknownBlockType)arg5;	// IMP=0x001000000008363b
- (void).cxx_destruct;	// IMP=0x002000000008cfc2
- (_Bool)autoCancellable;	// IMP=0x001000000008cfba
- (int)run;	// IMP=0x001000000008c0ca
- (int)_processAutoCounterForPhotoLibrary:(id)arg1;	// IMP=0x001000000008b83f
- (int)_clusterAndProcessPersonsForPhotoLibrary:(id)arg1 withContext:(id)arg2 progressMade:(_Bool *)arg3;	// IMP=0x001000000008b239
- (int)_promotePersonsForPhotoLibrary:(id)arg1;	// IMP=0x001000000008ae28
- (int)_buildPersonsForPhotoLibrary:(id)arg1 withClusterer:(id)arg2 andContext:(id)arg3;	// IMP=0x001000000008a8e5
- (int)_clusterFacesWithClusterer:(id)arg1;	// IMP=0x001000000008a5e4
- (int)_updateQuickFaceIDModelForPhotoLibrary:(id)arg1 withContext:(id)arg2 andQuickFaceIDManager:(id)arg3;	// IMP=0x001000000008a1fb
- (int)_generateAndDetectFaceCropsForPhotoLibrary:(id)arg1 withContext:(id)arg2;	// IMP=0x0010000000089cd0
- (int)_detectFacesForPhotoLibrary:(id)arg1 withContext:(id)arg2;	// IMP=0x0010000000089a79
- (_Bool)_readyToProcessProcessLibrary:(id)arg1;	// IMP=0x001000000008988a
- (int)completeSceneProcessing;	// IMP=0x00100000000895f6
- (int)_processingLibraryWithTask:(id)arg1;	// IMP=0x0010000000088f95
- (int)_maintainProcessingStatusWithTask:(id)arg1;	// IMP=0x001000000008898c
- (int)_analyzeAssetsWithChangeToken:(id)arg1 withTask:(id)arg2;	// IMP=0x00100000000875fd
- (int)_queryChangeTokenCountSince:(id)arg1 count:(unsigned long long *)arg2 withTask:(id)arg3;	// IMP=0x0010000000087339
- (int)_processLocalIdentifiers:(id)arg1 change:(id)arg2 insert:(_Bool)arg3 withTask:(id)arg4;	// IMP=0x0010000000086c3e
- (int)_analyzeAllAssetsWithTask:(id)arg1;	// IMP=0x0010000000086294
- (int)_processFetchedAssets:(id)arg1 withProcessingTask:(id)arg2 andProgressReporter:(id)arg3;	// IMP=0x0010000000085eb8
- (int)_retryFailedAssetsWithTask:(id)arg1;	// IMP=0x0010000000085b88
- (int)_retryEligibleAssetsWithTask:(id)arg1 andStatus:(unsigned long long)arg2 andReporter:(id)arg3;	// IMP=0x0010000000085386
- (int)_streamAnalysisWithTask:(id)arg1 andProcessingStatus:(unsigned long long)arg2;	// IMP=0x0010000000084d5b
- (int)_screenLocalIdentifiers:(id)arg1 withTask:(id)arg2 andPreviousStatus:(unsigned long long)arg3 andProgressReporter:(id)arg4;	// IMP=0x001000000008420b
- (int)_addBatchWithAsset:(id)arg1 isRetry:(_Bool)arg2 withTask:(id)arg3;	// IMP=0x00100000000837f8
- (_Bool)isCancelled;	// IMP=0x00100000000837d4
- (void)cancel;	// IMP=0x00100000000837c9
- (float)resourceRequirement;	// IMP=0x00100000000837bb
- (void)dealloc;	// IMP=0x0010000000083734
- (id)initWithPhotoLibraries:(id)arg1 andOptions:(id)arg2 andProgressHandler:(CDUnknownBlockType)arg3 andCompletionHandler:(CDUnknownBlockType)arg4 andCancelBlock:(CDUnknownBlockType)arg5;	// IMP=0x001000000008339e
- (id)init;	// IMP=0x0010000000083390

@end

