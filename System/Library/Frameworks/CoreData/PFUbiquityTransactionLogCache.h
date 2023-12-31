//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSRecursiveLock, NSString, PFUbiquityGlobalObjectIDCache;

__attribute__((visibility("hidden")))
@interface PFUbiquityTransactionLogCache : NSObject
{
    NSString *_localPeerID;	// 8 = 0x8
    NSMutableDictionary *_transactionLogCache;	// 16 = 0x10
    NSRecursiveLock *_transactionLogCacheLock;	// 24 = 0x18
    PFUbiquityGlobalObjectIDCache *_gidCache;	// 32 = 0x20
}

- (void)dealloc;	// IMP=0x00000000003396ee
- (id)initWithLocalPeerID:(id)arg1 andGlobalIDCache:(id)arg2;	// IMP=0x00000000003396a1
- (id)init;	// IMP=0x0000000000339636

@end

