//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue;
@protocol OS_dispatch_queue;

@interface ICDServerOperationsManager : NSObject
{
    _Bool _networkActivityIndicatorVisible;	// 8 = 0x8
    NSOperationQueue *_operationQueue;	// 16 = 0x10
    NSOperationQueue *_backgroundOperationQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_serialQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000006a200
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(readonly, nonatomic) NSOperationQueue *backgroundOperationQueue; // @synthesize backgroundOperationQueue=_backgroundOperationQueue;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void)_tearDownKVO;	// IMP=0x001000000006a187
- (void)_setupKVO;	// IMP=0x001000000006a126
- (void)_setupInternalQueues;	// IMP=0x001000000006a062
@property(nonatomic, getter=isNetworkActivityIndicatorVisible) _Bool networkActivityIndicatorVisible; // @synthesize networkActivityIndicatorVisible=_networkActivityIndicatorVisible;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000069e54
- (id)listCloudServerOperations;	// IMP=0x0010000000069825
- (_Bool)cancelOperationsByClass:(Class)arg1;	// IMP=0x00100000000696a5
- (_Bool)hasOperationsOfClass:(Class)arg1;	// IMP=0x0010000000069572
- (void)enumerateBackgroundOperationsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000693f8
- (void)enumerateOperationsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000006927e
- (void)addBackgroundOperation:(id)arg1 priority:(int)arg2;	// IMP=0x001000000006912d
- (void)addOperation:(id)arg1 priority:(int)arg2;	// IMP=0x0010000000068fdc
- (void)dealloc;	// IMP=0x0010000000068f9e
- (id)init;	// IMP=0x0010000000068f3d

@end

