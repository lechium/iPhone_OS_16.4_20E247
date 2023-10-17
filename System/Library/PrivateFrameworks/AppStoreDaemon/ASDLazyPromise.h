//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol ASDTaskScheduler;

__attribute__((visibility("hidden")))
@interface ASDLazyPromise
{
    CDUnknownBlockType _executor;	// 40 = 0x28
    id <ASDTaskScheduler> _scheduler;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000006715d
- (id)joinWithPromise:(id)arg1;	// IMP=0x0000000000066d28
- (void)thenPerform:(CDUnknownBlockType)arg1 orCatchError:(CDUnknownBlockType)arg2 onScheduler:(id)arg3;	// IMP=0x0000000000066c0b
- (id)initOnScheduler:(id)arg1 withExecutor:(CDUnknownBlockType)arg2;	// IMP=0x0000000000066b56

@end
