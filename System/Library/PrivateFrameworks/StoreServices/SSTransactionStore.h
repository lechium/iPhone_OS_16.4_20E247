//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SSTransactionStore : NSObject
{
    NSCountedSet *_transactionCount;	// 8 = 0x8
    NSMutableDictionary *_transactionStore;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
}

+ (id)defaultStore;	// IMP=0x006000000008bfe3
- (void).cxx_destruct;	// IMP=0x000000000008c7e9
- (void)releaseKeepAliveWithTransactionID:(id)arg1;	// IMP=0x000000000008c435
- (void)takeKeepAliveWithTransactionID:(id)arg1;	// IMP=0x000000000008c070
- (id)init;	// IMP=0x000000000008bf33

@end

