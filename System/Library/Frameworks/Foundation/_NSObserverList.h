//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSObserverList : NSObject
{
    id _owner;	// 8 = 0x8
    id _observers;	// 16 = 0x10
    _Atomic unsigned int _observerCount;	// 24 = 0x18
    struct os_unfair_lock_s _observersLock;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x00000000005dc65d
- (id)description;	// IMP=0x00000000005dc498
- (id)debugDescription;	// IMP=0x00000000005dc486
- (void)dealloc;	// IMP=0x00000000005dc42d
- (void)_receiveBox:(id)arg1;	// IMP=0x00000000005dbf31
- (void)removeObservation:(id)arg1;	// IMP=0x00000000005dbf1c
- (void)finishObserving;	// IMP=0x00000000005dbd89
- (id)init;	// IMP=0x00000000005dbac5

@end
