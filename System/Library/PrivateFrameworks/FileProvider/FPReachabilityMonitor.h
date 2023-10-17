//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSNumber;
@protocol NSObject, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPReachabilityMonitor : NSObject
{
    NSHashTable *_reachabilityObservers;	// 8 = 0x8
    struct __SCNetworkReachability *_reachabilityRef;	// 16 = 0x10
    unsigned int _reachabilityFlags;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    id <NSObject> _accountDidChangeNotificationObserver;	// 40 = 0x28
    NSNumber *_isCellularEnabledForDocumentsAndData;	// 48 = 0x30
}

+ (id)_notifAccountStore;	// IMP=0x006000000010aead
+ (id)sharedReachabilityMonitor;	// IMP=0x006000000010ad43
+ (_Bool)isNetworkReachableForFlags:(unsigned int)arg1;	// IMP=0x006000000010a609
- (void).cxx_destruct;	// IMP=0x000000000010b571
@property(nonatomic) unsigned int reachabilityFlags; // @synthesize reachabilityFlags=_reachabilityFlags;
- (void)invalidate;	// IMP=0x000000000010b55a
- (void)removeObserver:(id)arg1;	// IMP=0x000000000010b4af
- (void)addObserver:(id)arg1;	// IMP=0x000000000010b397
- (_Bool)isNetworkReachableForBundle:(id)arg1;	// IMP=0x000000000010b089
- (_Bool)_isCellularAllowedForBR;	// IMP=0x000000000010af02
- (void)_accountDidChange;	// IMP=0x000000000010ad98
- (void)dealloc;	// IMP=0x000000000010ad09
- (id)init;	// IMP=0x000000000010a633

@end
