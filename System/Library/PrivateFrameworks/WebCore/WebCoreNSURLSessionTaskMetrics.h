//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface WebCoreNSURLSessionTaskMetrics : NSObject
{
    struct RetainPtr<WebCoreNSURLSessionTaskTransactionMetrics> _transactionMetrics;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x0000000002744a90
- (void).cxx_destruct;	// IMP=0x0000000002744a70
@property(readonly, copy) NSArray *transactionMetrics; // @dynamic transactionMetrics;
- (void)dealloc;	// IMP=0x0000000002744950
- (id)_initWithMetrics:(void *)arg1;	// IMP=0x00000000027448d0

@end

