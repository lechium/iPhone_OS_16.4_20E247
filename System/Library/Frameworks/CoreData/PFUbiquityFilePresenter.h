//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSOperationQueue, NSSet, NSString, NSURL, PFUbiquityLocation;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PFUbiquityFilePresenter : NSObject
{
    PFUbiquityLocation *_ubiquityRootLocation;	// 8 = 0x8
    NSString *_localPeerID;	// 16 = 0x10
    NSString *_storeName;	// 24 = 0x18
    NSURL *_presentedItemURL;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_processingQueue;	// 40 = 0x28
    _Bool _scheduledProcessingBlock;	// 48 = 0x30
    NSMutableArray *_pendingURLs;	// 56 = 0x38
    int _pendingURLsLock;	// 64 = 0x40
    NSMutableDictionary *_locationToSafeSaveFile;	// 72 = 0x48
    NSMutableDictionary *_locationToStatus;	// 80 = 0x50
}

+ (void)initialize;	// IMP=0x001000000028ada6
- (void)printStatus:(id)arg1;	// IMP=0x000000000028d086
- (void)setupAssistantDiscoveredPathsFromMetadataQuery:(id)arg1;	// IMP=0x000000000028cec0
- (void)logsWereScheduled:(id)arg1;	// IMP=0x000000000028cc49
- (void)logImportWasCancelled:(id)arg1;	// IMP=0x000000000028cb2c
- (void)logWasImported:(id)arg1;	// IMP=0x000000000028ca0f
- (void)logWasExported:(id)arg1;	// IMP=0x000000000028c8ad
- (void)exporterDidMoveLog:(id)arg1;	// IMP=0x000000000028c813
- (void)presentedSubitemDidChangeAtURL:(id)arg1;	// IMP=0x000000000028b5c0
- (void)relinquishPresentedItemToWriter:(CDUnknownBlockType)arg1;	// IMP=0x000000000028b5b0
- (void)relinquishPresentedItemToReader:(CDUnknownBlockType)arg1;	// IMP=0x000000000028b5a0
@property(readonly) NSOperationQueue *presentedItemOperationQueue;
@property(readonly, copy) NSURL *presentedItemURL;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000000028b458
- (id)initWithUbiquityRootLocation:(id)arg1 localPeerID:(id)arg2 storeName:(id)arg3 processingQueue:(id)arg4;	// IMP=0x000000000028b2e3
- (id)init;	// IMP=0x000000000028b264

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;

@end
