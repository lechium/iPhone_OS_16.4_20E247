//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface OITSUProgressGroup
{
    NSArray *mChildren;	// 32 = 0x20
    NSArray *mChildrenProgressObservers;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *mChildrenProgressObserversQueue;	// 48 = 0x30
}

- (void)p_updateChildrenProgressObservers;	// IMP=0x0000000000288907
- (void)removeProgressObserver:(id)arg1;	// IMP=0x00000000002888c6
- (id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000028887b
- (_Bool)isIndeterminate;	// IMP=0x0000000000288739
- (double)maxValue;	// IMP=0x00000000002885e7
- (double)value;	// IMP=0x0000000000288495
- (void)dealloc;	// IMP=0x000000000028843e
- (id)initWithChildren:(id)arg1;	// IMP=0x00000000002883c7

@end

