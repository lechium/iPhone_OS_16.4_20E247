//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSRecursiveLock, NSString, NTKComplicationCollection, NTKFaceSnapshotter;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface NTKDFaceSnapshotController : NSObject
{
    NSObject<OS_dispatch_queue> *_observerCallbackQueue;	// 8 = 0x8
    NSMutableArray *_snapshotKeysWithBlankComplications;	// 16 = 0x10
    NSMutableDictionary *_snapshotContexts;	// 24 = 0x18
    NTKComplicationCollection *_complicationCollection;	// 32 = 0x20
    _Bool _needToUpdateSnapshotsForFacesWithThirdPartyComplications;	// 40 = 0x28
    NSHashTable *_observers;	// 48 = 0x30
    NSRecursiveLock *_observersLock;	// 56 = 0x38
    NSObject<OS_dispatch_semaphore> *_setImageForKeyOperationsCount;	// 64 = 0x40
    NSArray *_currentSnapshots;	// 72 = 0x48
    NSMutableArray *_currentSnapshotCompletions;	// 80 = 0x50
    NSMutableArray *_pendingSnapshots;	// 88 = 0x58
    NSMutableArray *_pendingSnapshotCompletions;	// 96 = 0x60
    NTKFaceSnapshotter *_snapshotter;	// 104 = 0x68
    NSOperationQueue *_xpcSnapshotOperationQueue;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_queue;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00200000000148a6
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_writeImageToDisk:(id)arg1 imageName:(id)arg2;	// IMP=0x00100000000147bb
- (id)_preferencesKeyForCollectionStore:(id)arg1;	// IMP=0x00100000000146e0
- (void)_endSnapshottingActivityDidTakeSnapshot:(_Bool)arg1;	// IMP=0x0010000000014569
- (void)_startSnapshottingActivity;	// IMP=0x0010000000014498
- (void)_queue_snapshotFaces:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000013cb1
- (void)_queue_updateSnapshots:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001322b
- (void)_queue_updateSnapshotForFace:(id)arg1 complicationTemplateChanged:(_Bool)arg2;	// IMP=0x0010000000013137
- (void)_queue_updateSnapshotForFace:(id)arg1 inStore:(id)arg2;	// IMP=0x001000000001302c
- (void)_updateSnapshotForFace:(id)arg1 inStore:(id)arg2;	// IMP=0x0010000000012f50
- (void)_enumerateRemoteComplicationsForFace:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0010000000012e1f
- (void)_enumerateAllFacesForDeviceUUID:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0010000000012b65
- (void)_loadComplicationCollection;	// IMP=0x0010000000012aac
- (_Bool)_snapshotExistsForKey:(id)arg1;	// IMP=0x0010000000012a25
- (void)_onObserverQueue_async:(CDUnknownBlockType)arg1;	// IMP=0x0010000000012977
- (void)_onQueue_async:(CDUnknownBlockType)arg1;	// IMP=0x00100000000128c9
- (id)_currentContext;	// IMP=0x00100000000128b0
- (_Bool)_queue_cleanCacheExcludingKeys:(id)arg1;	// IMP=0x0010000000012504
- (_Bool)_queue_cleanCache;	// IMP=0x0010000000012179
- (_Bool)_queue_cleanSnapshotKeysWithBlankComplications;	// IMP=0x001000000001204b
- (_Bool)_queue_cleanContexts;	// IMP=0x0010000000011f1d
- (id)_queue_snapshotObjectsForFace:(id)arg1 complicationTemplateChanged:(_Bool)arg2;	// IMP=0x0010000000011a18
- (id)_queue_snapshotObjectsForFace:(id)arg1;	// IMP=0x0010000000011a04
- (id)_queue_allSnapshotObjects;	// IMP=0x0010000000010e16
- (void)complicationCollectionDidLoad:(id)arg1;	// IMP=0x0010000000010c0d
- (void)complicationCollection:(id)arg1 didUpdateSampleTemplateForClient:(id)arg2;	// IMP=0x0010000000010898
- (_Bool)_modernSnapshottingEnabledForStore:(id)arg1;	// IMP=0x0010000000010890
- (void)collectionStore:(id)arg1 didUpgradeFace:(id)arg2 forUUID:(id)arg3 seqId:(id)arg4;	// IMP=0x001000000001076b
- (void)collectionStore:(id)arg1 didRemoveFaceOfStyle:(long long)arg2 forUUID:(id)arg3 seqId:(id)arg4 acknowledge:(CDUnknownBlockType)arg5;	// IMP=0x00100000000106e9
- (void)collectionStore:(id)arg1 didUpdateOrderedUUIDs:(id)arg2 seqId:(id)arg3;	// IMP=0x0010000000010690
- (void)collectionStore:(id)arg1 didUpdateSelectedUUID:(id)arg2 seqId:(id)arg3;	// IMP=0x001000000001053c
- (void)collectionStore:(id)arg1 loadOrderedUUIDs:(id)arg2 selectedUUID:(id)arg3 facesByUUID:(id)arg4 seqId:(id)arg5 acknowledge:(CDUnknownBlockType)arg6;	// IMP=0x0010000000010312
- (void)collectionStore:(id)arg1 didAddFace:(id)arg2 forUUID:(id)arg3 seqId:(id)arg4;	// IMP=0x00100000000101ed
- (void)collectionStore:(id)arg1 didUpdateFaceForUUID:(id)arg2 withResourceDirectory:(id)arg3 seqId:(id)arg4 acknowledge:(CDUnknownBlockType)arg5;	// IMP=0x0010000000010081
- (void)collectionStore:(id)arg1 didUpdateFaceForUUID:(id)arg2 withConfiguration:(id)arg3 seqId:(id)arg4;	// IMP=0x001000000000ff2d
- (void)collectionStoreWillBePurged:(id)arg1;	// IMP=0x001000000000fe1e
- (void)collectionStoreHasBeenCreated:(id)arg1;	// IMP=0x001000000000fcc9
- (void)_notifyFaceSnapshotChangedForKey:(id)arg1;	// IMP=0x001000000000fa31
- (void)performAfterCompletingCurrentlyPendingSnapshots:(CDUnknownBlockType)arg1;	// IMP=0x001000000000f916
- (void)queue_updateAddableAndGallerySnapshotsWithContinuationBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000000e6b6
- (void)updateAddableAndGallerySnapshotsWithContinuationBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000000e598
- (void)snapshotLibrarySelectedFaceForDeviceUUID:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000e16e
- (void)provideSnapshotOfFace:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000cac4
- (void)snapshotFace:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000ca10
- (void)updateSnapshotForFace:(id)arg1;	// IMP=0x001000000000c9fc
- (void)_queue_updateAllSnapshots;	// IMP=0x001000000000c6fc
- (void)updateAllSnapshots;	// IMP=0x001000000000c69a
- (void)removeObserver:(id)arg1;	// IMP=0x001000000000c5b1
- (void)addObserver:(id)arg1;	// IMP=0x001000000000c4c8
- (void)dealloc;	// IMP=0x001000000000c3b2
- (id)init;	// IMP=0x001000000000b481

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

