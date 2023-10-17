//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NSXPCConnection, NTKDCollectionStore;
@protocol OS_dispatch_queue;

@interface NTKDCollectionClient : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NTKDCollectionStore *_collectionStore;	// 24 = 0x18
    NSMutableArray *_actionsEnqueuedWhileWaitingForStore;	// 32 = 0x20
    CDUnknownBlockType _invalidationHandler;	// 40 = 0x28
}

+ (id)_sharedCollectionStoreQueue;	// IMP=0x00200000000066d3
- (void).cxx_destruct;	// IMP=0x002000000000a36d
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
- (void)resetCollectionStore:(id)arg1 acknowledge:(CDUnknownBlockType)arg2;	// IMP=0x001000000000a048
- (void)collectionStore:(id)arg1 didRemoveFaceOfStyle:(long long)arg2 forUUID:(id)arg3 seqId:(id)arg4 acknowledge:(CDUnknownBlockType)arg5;	// IMP=0x0010000000009cda
- (void)collectionStore:(id)arg1 didAddFace:(id)arg2 forUUID:(id)arg3 seqId:(id)arg4;	// IMP=0x0010000000009a35
- (void)collectionStore:(id)arg1 didUpgradeFace:(id)arg2 forUUID:(id)arg3 seqId:(id)arg4;	// IMP=0x0010000000009790
- (void)collectionStore:(id)arg1 didUpdateFaceForUUID:(id)arg2 withResourceDirectory:(id)arg3 seqId:(id)arg4 acknowledge:(CDUnknownBlockType)arg5;	// IMP=0x0010000000009369
- (void)collectionStore:(id)arg1 didUpdateFaceForUUID:(id)arg2 withConfiguration:(id)arg3 seqId:(id)arg4;	// IMP=0x0010000000009019
- (void)collectionStore:(id)arg1 didUpdateOrderedUUIDs:(id)arg2 seqId:(id)arg3;	// IMP=0x0010000000008dd5
- (void)collectionStore:(id)arg1 didUpdateSelectedUUID:(id)arg2 seqId:(id)arg3;	// IMP=0x0010000000008b91
- (void)collectionStore:(id)arg1 loadOrderedUUIDs:(id)arg2 selectedUUID:(id)arg3 facesByUUID:(id)arg4 seqId:(id)arg5 acknowledge:(CDUnknownBlockType)arg6;	// IMP=0x00100000000084c8
- (void)flushUpdatesWithIdentifier:(id)arg1;	// IMP=0x00100000000081f4
- (void)resetCollection;	// IMP=0x001000000000805d
- (void)removeFaceForUUID:(id)arg1;	// IMP=0x0010000000007e9a
- (void)addFaceInstanceDescriptor:(id)arg1 forUUID:(id)arg2;	// IMP=0x0010000000007c71
- (void)upgradeFaceInstanceDescriptor:(id)arg1 forUUID:(id)arg2;	// IMP=0x0010000000007a48
- (void)updateFaceForUUID:(id)arg1 withResourceDirectory:(id)arg2;	// IMP=0x001000000000784b
- (void)updateFaceForUUID:(id)arg1 withConfigurationJSONRepresentation:(id)arg2;	// IMP=0x001000000000751f
- (void)setOrderedFaceUUIDs:(id)arg1;	// IMP=0x001000000000733e
- (void)setSelectedFaceUUID:(id)arg1 suppressingCallback:(_Bool)arg2;	// IMP=0x0010000000007155
- (void)_onQueue:(CDUnknownBlockType)arg1;	// IMP=0x00100000000070a7
- (void)_performOrEnqueueAction:(CDUnknownBlockType)arg1;	// IMP=0x0010000000006f33
- (void)registerForCollectionIdentifier:(id)arg1 deviceUUID:(id)arg2 withSeqId:(id)arg3;	// IMP=0x0010000000006a90
- (void)_handleInvalidation;	// IMP=0x0010000000006965
- (id)initWithConnection:(id)arg1;	// IMP=0x001000000000677d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
