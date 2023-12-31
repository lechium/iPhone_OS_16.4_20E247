//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface QLPXObservable : NSObject
{
    long long _nestedChanges;	// 8 = 0x8
    NSMutableArray *_pendingChangeBlocks;	// 16 = 0x10
    long long _numAppliedPendingChanges;	// 24 = 0x18
    unsigned long long _currentChange;	// 32 = 0x20
    _Bool _isEnumeratingObservers;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_observersQueue;	// 48 = 0x30
    _Bool _observersQueue_shouldCopyChangeObserversOnWrite;	// 56 = 0x38
    NSMapTable *_observersQueue_changeObserversWithContexts;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000001875b
- (void)_observersQueue_copyChangeObserversForWriteIfNeeded;	// IMP=0x0000000000018535
- (void)_applyPendingChanges;	// IMP=0x000000000001834e
- (void)_publishChanges;	// IMP=0x00000000000182d7
- (void)_didChange;	// IMP=0x000000000001825d
- (void)_willChange;	// IMP=0x0000000000018229
- (void)enumerateObserversUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000017dfb
@property(readonly, nonatomic) unsigned long long currentChanges;
- (void)signalChange:(unsigned long long)arg1;	// IMP=0x0000000000017de7
- (void)didPublishChanges;	// IMP=0x0000000000017de1
- (void)didPerformChanges;	// IMP=0x0000000000017ddb
- (void)willPerformChanges;	// IMP=0x0000000000017dd5
- (id)mutableChangeObject;	// IMP=0x0000000000017dcc
- (void)unregisterChangeObserver:(id)arg1 context:(void *)arg2;	// IMP=0x0000000000017c55
- (void)registerChangeObserver:(id)arg1 context:(void *)arg2;	// IMP=0x0000000000017a7d
- (void)performChanges:(CDUnknownBlockType)arg1;	// IMP=0x0000000000017967
- (id)init;	// IMP=0x0000000000017907

@end

