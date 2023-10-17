//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNSuspendableSchedulerDecorator, NSString;

__attribute__((visibility("hidden")))
@interface CNUIAfterCACommitScheduler : NSObject
{
    CNSuspendableSchedulerDecorator *_scheduler;	// 8 = 0x8
    struct __CFRunLoopObserver *_runLoopObserver;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000189ae1
@property(readonly, nonatomic) struct __CFRunLoopObserver *runLoopObserver; // @synthesize runLoopObserver=_runLoopObserver;
@property(readonly, nonatomic) CNSuspendableSchedulerDecorator *scheduler; // @synthesize scheduler=_scheduler;
@property(readonly) double timestamp;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2 qualityOfService:(unsigned long long)arg3;	// IMP=0x000000000018999d
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001898c2
- (id)performCancelableBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;	// IMP=0x00000000001897ec
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000018971b
- (void)performBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;	// IMP=0x0000000000189657
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000189598
- (void)dealloc;	// IMP=0x0000000000189534
- (id)initWithSchedulerProvider:(id)arg1;	// IMP=0x0000000000189418
- (id)init;	// IMP=0x00000000001893be

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
