//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSThread;

@interface IMThreadedInvocationTrampoline
{
    NSThread *_thread;	// 16 = 0x10
    _Bool _immediateForMatchingThread;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000bd1e
- (void)forwardInvocation:(id)arg1;	// IMP=0x000000000000bc26
- (id)initWithTarget:(id)arg1 thread:(id)arg2 immediateForMatchingThread:(_Bool)arg3;	// IMP=0x000000000000bb78

@end

