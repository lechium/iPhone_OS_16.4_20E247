//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSMutableDictionary, NSOperationQueue, NSString;

__attribute__((visibility("hidden")))
@interface AMSUIAssetQueue : NSObject
{
    struct os_unfair_lock_s _stateLock;	// 8 = 0x8
    NSOperationQueue *_underlyingQueue;	// 16 = 0x10
    NSMutableDictionary *_pendingOperations;	// 24 = 0x18
    NSCountedSet *_priorityCounts;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000fa82
@property(nonatomic) struct os_unfair_lock_s stateLock; // @synthesize stateLock=_stateLock;
@property(retain, nonatomic) NSCountedSet *priorityCounts; // @synthesize priorityCounts=_priorityCounts;
@property(retain, nonatomic) NSMutableDictionary *pendingOperations; // @synthesize pendingOperations=_pendingOperations;
@property(retain, nonatomic) NSOperationQueue *underlyingQueue; // @synthesize underlyingQueue=_underlyingQueue;
- (id)operationWithKey:(id)arg1;	// IMP=0x000000000000f967
- (void)addOperation:(id)arg1 withKey:(id)arg2;	// IMP=0x000000000000f75e
- (void)_didFetchAssetWithKey:(id)arg1 producingImage:(id)arg2 orError:(id)arg3;	// IMP=0x000000000000f369
- (void)_prepareToAddOperation:(id)arg1 withKey:(id)arg2;	// IMP=0x000000000000edcf
- (void)_operationDidCancel:(id)arg1;	// IMP=0x000000000000e904
- (void)_operationDidChangePriority:(id)arg1;	// IMP=0x000000000000e41e
- (void)_removeObserverForOperation:(id)arg1;	// IMP=0x000000000000e37c
- (void)_addObserverForOperation:(id)arg1;	// IMP=0x000000000000e2cc
- (void)_didFinishFetchingAllAssets;	// IMP=0x000000000000e198
- (void)_didFetchAllAssetsAtPriority:(long long)arg1;	// IMP=0x000000000000e04f
- (void)_didBeginFetchingAssets;	// IMP=0x000000000000df1b
- (void)_decrementCountAt:(long long)arg1;	// IMP=0x000000000000ddfb
- (void)_incrementCountAt:(long long)arg1;	// IMP=0x000000000000dd32
@property(nonatomic, getter=isSuspended) _Bool suspended;
@property(nonatomic) long long maxConcurrentOperationCount;
@property(nonatomic) long long qualityOfService;
@property(retain, nonatomic) NSString *name;
- (void)dealloc;	// IMP=0x000000000000da18
- (id)init;	// IMP=0x000000000000d960

@end

