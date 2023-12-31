//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface TransactionStore : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    unsigned long long _handle;	// 16 = 0x10
    long long _holdTime;	// 24 = 0x18
    NSCountedSet *_transactionCount;	// 32 = 0x20
    NSMutableDictionary *_transactionStore;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000001a0e7f
- (void)dealloc;	// IMP=0x00100000001a09bc
- (id)init;	// IMP=0x00100000001a0861

@end

