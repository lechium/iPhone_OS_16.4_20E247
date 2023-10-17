//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSProgress.h"

@protocol NSProgressPublisher;

__attribute__((visibility("hidden")))
@interface _NSProgressProxy : NSProgress
{
    id <NSProgressPublisher> _forwarder;	// 120 = 0x78
    _Bool _isOld;	// 128 = 0x80
    CDUnknownBlockType _unpublishingHandler;	// 136 = 0x88
}

- (_Bool)isOld;	// IMP=0x00000000005ff3db
- (void)_acknowledgeWithSuccess:(_Bool)arg1;	// IMP=0x00000000005ff3c9
- (void)acknowledgeWithSuccess:(_Bool)arg1;	// IMP=0x00000000005ff35d
- (double)fractionCompleted;	// IMP=0x00000000005ff34b
- (void)resume;	// IMP=0x00000000005ff32e
- (void)prioritize;	// IMP=0x00000000005ff311
- (void)pause;	// IMP=0x00000000005ff2f4
- (void)cancel;	// IMP=0x00000000005ff2d7
- (void)unpublish;	// IMP=0x00000000005ff2d1
- (void)publish;	// IMP=0x00000000005ff272
- (id)byteCompletedCount;	// IMP=0x00000000005ff21c
- (id)byteTotalCount;	// IMP=0x00000000005ff1c6
- (id)fileCompletedCount;	// IMP=0x00000000005ff170
- (id)fileTotalCount;	// IMP=0x00000000005ff11a
- (id)fileURL;	// IMP=0x00000000005ff0c4
- (id)fileOperationKind;	// IMP=0x00000000005ff06e
- (id)throughput;	// IMP=0x00000000005ff018
- (id)estimatedTimeRemaining;	// IMP=0x00000000005fefc2
- (void)setByteCompletedCount:(id)arg1;	// IMP=0x00000000005fef63
- (void)setByteTotalCount:(id)arg1;	// IMP=0x00000000005fef04
- (void)setFileCompletedCount:(id)arg1;	// IMP=0x00000000005feea5
- (void)setFileTotalCount:(id)arg1;	// IMP=0x00000000005fee46
- (void)setFileURL:(id)arg1;	// IMP=0x00000000005fede7
- (void)setFileOperationKind:(id)arg1;	// IMP=0x00000000005fed88
- (void)setThroughput:(id)arg1;	// IMP=0x00000000005fed29
- (void)setEstimatedTimeRemaining:(id)arg1;	// IMP=0x00000000005fecca
- (void)setKind:(id)arg1;	// IMP=0x00000000005fec6b
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000005fec0c
- (void)setPrioritizationHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000005febad
- (void)setPrioritizable:(_Bool)arg1;	// IMP=0x00000000005feb4e
- (void)setPausingHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000005feaef
- (void)setCancellationHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000005fea90
- (void)setPausable:(_Bool)arg1;	// IMP=0x00000000005fea31
- (void)setCancellable:(_Bool)arg1;	// IMP=0x00000000005fe9d2
- (void)setLocalizedDescription:(id)arg1;	// IMP=0x00000000005fe973
- (void)setCompletedUnitCount:(long long)arg1;	// IMP=0x00000000005fe914
- (void)setTotalUnitCount:(long long)arg1;	// IMP=0x00000000005fe8b5
- (void)resignCurrent;	// IMP=0x00000000005fe856
- (void)becomeCurrentWithPendingUnitCount:(long long)arg1;	// IMP=0x00000000005fe7f7
- (void)_setRemoteValues:(id)arg1 forKeys:(id)arg2;	// IMP=0x00000000005fe6e2
- (void)_setRemoteUserInfoValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000005fe5cd
- (void)_invokeUnpublishingHandler;	// IMP=0x00000000005fe4ea
- (void)_invokePublishingHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000005fe3ee
- (void)dealloc;	// IMP=0x00000000005fe373
- (id)_initWithForwarder:(id)arg1 values:(id)arg2 isOld:(_Bool)arg3;	// IMP=0x00000000005fe2e4

@end
