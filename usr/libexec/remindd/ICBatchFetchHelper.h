//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSManagedObjectContext, NSMutableArray, NSMutableSet;
@protocol OS_dispatch_queue;

@interface ICBatchFetchHelper : NSObject
{
    long long _batchSize;	// 8 = 0x8
    NSMutableSet *_ckIdentifierAccountPairs;	// 16 = 0x10
    NSManagedObjectContext *_managedObjectContext;	// 24 = 0x18
    NSMutableArray *_dispatchBlocks;	// 32 = 0x20
    NSCache *_managedObjectIDCache;	// 40 = 0x28
    NSCache *_missingCKIdentifierAccountPairCache;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000009e970
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSCache *missingCKIdentifierAccountPairCache; // @synthesize missingCKIdentifierAccountPairCache=_missingCKIdentifierAccountPairCache;
@property(retain, nonatomic) NSCache *managedObjectIDCache; // @synthesize managedObjectIDCache=_managedObjectIDCache;
@property(retain, nonatomic) NSMutableArray *dispatchBlocks; // @synthesize dispatchBlocks=_dispatchBlocks;
@property(nonatomic) __weak NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(retain, nonatomic) NSMutableSet *ckIdentifierAccountPairs; // @synthesize ckIdentifierAccountPairs=_ckIdentifierAccountPairs;
@property long long batchSize; // @synthesize batchSize=_batchSize;
- (void)dealloc;	// IMP=0x001000000009e7f5
- (void)removeCachedManagedObjectForCKIdentifier:(id)arg1 accountIdentifier:(id)arg2;	// IMP=0x001000000009e713
- (void)setCachedManagedObject:(id)arg1 forCKIdentifier:(id)arg2 accountIdentifier:(id)arg3;	// IMP=0x001000000009e570
- (id)cachedManagedObjectForCKIdentifier:(id)arg1 accountIdentifier:(id)arg2;	// IMP=0x001000000009dfd5
- (_Bool)isMissingCKIdentifier:(id)arg1 accountIdentifier:(id)arg2;	// IMP=0x001000000009dedf
- (void)flushOnCurrentQueue:(_Bool)arg1;	// IMP=0x001000000009dd1b
- (void)flush;	// IMP=0x001000000009dd07
- (void)addDispatchBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000009db9f
- (void)addCKIdentifiers:(id)arg1 accountIdentifier:(id)arg2 onCurrentQueue:(_Bool)arg3 dispatchBlock:(CDUnknownBlockType)arg4;	// IMP=0x001000000009d7c5
- (void)addCKIdentifiers:(id)arg1 accountIdentifier:(id)arg2 dispatchBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000009d7ad
- (void)_dispatchBlockApplyingBackPressureIfNeeded:(CDUnknownBlockType)arg1;	// IMP=0x001000000009d5e3
- (void)_flush;	// IMP=0x001000000009c38b
- (_Bool)_canObtainPermanentIDForObject:(id)arg1 context:(id)arg2 ckIdentifierAccountIdentifierPair:(id)arg3;	// IMP=0x001000000009bfc2
- (id)initWithQueue:(id)arg1 managedObjectContext:(id)arg2 batchSize:(unsigned long long)arg3 cacheCountLimit:(unsigned long long)arg4;	// IMP=0x001000000009be53

@end
