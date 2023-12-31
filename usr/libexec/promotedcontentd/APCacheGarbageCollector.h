//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSOperation, NSOperationQueue, NSString;
@protocol APPersistentCachedStoreTransactionalProtocol;

@interface APCacheGarbageCollector : NSObject
{
    _Atomic unsigned int _removedObjectsCount;	// 8 = 0x8
    _Atomic unsigned int _ancientObjectsCount;	// 12 = 0xc
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
    id <APPersistentCachedStoreTransactionalProtocol> _cacheStore;	// 24 = 0x18
    NSOperationQueue *_operationQueue;	// 32 = 0x20
    NSString *_objectKind;	// 40 = 0x28
    NSDate *_expirationDate;	// 48 = 0x30
    long long _maxObjectLifeTimeDays;	// 56 = 0x38
    NSOperation *_activeCleanupOperation;	// 64 = 0x40
    double _timeSincePrevLaunch;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000000e830d
@property(nonatomic) double timeSincePrevLaunch; // @synthesize timeSincePrevLaunch=_timeSincePrevLaunch;
@property(nonatomic) __weak NSOperation *activeCleanupOperation; // @synthesize activeCleanupOperation=_activeCleanupOperation;
@property(nonatomic) long long maxObjectLifeTimeDays; // @synthesize maxObjectLifeTimeDays=_maxObjectLifeTimeDays;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) NSString *objectKind; // @synthesize objectKind=_objectKind;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) id <APPersistentCachedStoreTransactionalProtocol> cacheStore; // @synthesize cacheStore=_cacheStore;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)_reportStatisticsForDuration:(double)arg1 storageInfo:(id)arg2 cancelled:(_Bool)arg3;	// IMP=0x00100000000e7e96
- (void)_removeItemInBlockForKey:(id)arg1;	// IMP=0x00100000000e7be6
- (void)_removeItem:(id)arg1;	// IMP=0x00100000000e7ab3
- (void)_handleAncientItem:(id)arg1;	// IMP=0x00100000000e79e0
- (void)stop;	// IMP=0x00100000000e79a3
- (void)collect;	// IMP=0x00100000000e73b0
- (id);	// IMP=0x00100000000e72a8

@end

