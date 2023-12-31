//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXObservable.h>

@class NSError, NSObject, NSString, PUAssetReference, PUAssetsDataSource, PUCompositeVideoGenerator, PUMergedLivePhotosVideo;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PUMergedLivePhotosVideoRequest : PXObservable
{
    unsigned long long _requestLogID;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_stateQueue;	// 24 = 0x18
    PUCompositeVideoGenerator *_workQueue_generator;	// 32 = 0x20
    long long _stateQueue_state;	// 40 = 0x28
    PUMergedLivePhotosVideo *_stateQueue_mergedVideo;	// 48 = 0x30
    NSError *_stateQueue_error;	// 56 = 0x38
    PUAssetReference *_assetReference;	// 64 = 0x40
    PUAssetsDataSource *_assetsDataSource;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000003bef7
@property(readonly, nonatomic) PUAssetsDataSource *assetsDataSource; // @synthesize assetsDataSource=_assetsDataSource;
@property(readonly, nonatomic) PUAssetReference *assetReference; // @synthesize assetReference=_assetReference;
- (id)init;	// IMP=0x000000000003be5b
- (void)_stateQueue_signalStateChange;	// IMP=0x000000000003bdfc
- (void)_workQueue_finishWithMergedVideo:(id)arg1 error:(id)arg2;	// IMP=0x000000000003bd3e
- (void)_workQueue_handleGeneratorDidChangeState;	// IMP=0x000000000003bc8f
- (void)_workQueue_generateVideoUsingAssets:(id)arg1;	// IMP=0x000000000003bbb8
- (id)_workQueue_fetchMergeableAssets;	// IMP=0x000000000003b8bb
- (void)_workQueue_start;	// IMP=0x000000000003b84e
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x000000000003b7b6
- (id)mutableChangeObject;	// IMP=0x000000000003b7ad
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) PUMergedLivePhotosVideo *mergedVideo;
@property(readonly, nonatomic) long long state;
- (void)cancel;	// IMP=0x000000000003b548
- (void)start;	// IMP=0x000000000003b4f6
- (id)initWithAssetReference:(id)arg1 dataSource:(id)arg2;	// IMP=0x000000000003b273

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

