//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProxy.h>

__attribute__((visibility("hidden")))
@interface WebMainThreadInvoker : NSProxy
{
    id target;	// 8 = 0x8
    struct RetainPtr<id> exception;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x0000000000113f40
- (void).cxx_destruct;	// IMP=0x0000000000113f10
- (void)handleException:(id)arg1;	// IMP=0x0000000000113ec0
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000000113ea0
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000000113dc0
- (id)initWithTarget:(id)arg1;	// IMP=0x0000000000113da0

@end

