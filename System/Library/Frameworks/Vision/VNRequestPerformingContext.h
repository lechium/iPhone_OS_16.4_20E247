//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, VNImageBuffer, VNObservationsCache, VNRequestForensics, VNRequestPerformer, VNSession;

__attribute__((visibility("hidden")))
@interface VNRequestPerformingContext : NSObject
{
    unsigned long long _serialNumber;	// 8 = 0x8
    VNSession *_session;	// 16 = 0x10
    unsigned int _qosClass;	// 24 = 0x18
    VNRequestPerformer *_weakRequestPerformer;	// 32 = 0x20
    VNImageBuffer *_imageBuffer_DO_NOT_DIRECTLY_ACCESS;	// 40 = 0x28
    NSMapTable *_requestToObservationsCacheKeyMap;	// 48 = 0x30
    VNObservationsCache *_observationsCache;	// 56 = 0x38
    struct os_unfair_lock_s _observationsCacheLock;	// 64 = 0x40
    VNRequestForensics *_requestForensics;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000028e8e6
- (id)previousSequencedObservationsAcceptedByRequest:(id)arg1;	// IMP=0x000000000028e861
- (void)recordSequencedObservationsOfRequest:(id)arg1;	// IMP=0x000000000028e7e7
- (id)cachedObservationsAcceptedByRequest:(id)arg1;	// IMP=0x000000000028e6dc
- (_Bool)cacheObservationsOfRequest:(id)arg1;	// IMP=0x000000000028e55b
- (id)imageBufferAndReturnError:(id *)arg1;	// IMP=0x000000000028e4fe
- (unsigned int)qosClass;	// IMP=0x000000000028e4f5
- (id)requestForensics;	// IMP=0x000000000028e4e7
- (id)requestPerformerAndReturnError:(id *)arg1;	// IMP=0x000000000028e473
@property(readonly) VNSession *session;
@property(readonly) unsigned long long serialNumber;
- (id)_observationsCacheKeyForRequest:(id)arg1;	// IMP=0x000000000028e3af
- (id)initWithSession:(id)arg1 requestPerformer:(id)arg2 imageBuffer:(id)arg3 forensics:(id)arg4 observationsCache:(id)arg5 qosClass:(unsigned int)arg6;	// IMP=0x000000000028e257
- (id)initWithSession:(id)arg1 requestPerformer:(id)arg2 imageBuffer:(id)arg3 forensics:(id)arg4 observationsCache:(id)arg5;	// IMP=0x000000000028e192

@end

