//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPointerArray;

__attribute__((visibility("hidden")))
@interface ARUIObserverStore : NSObject
{
    NSPointerArray *_observers;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000004e77
- (void)enumerateObserversWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000004d35
- (void)removeObserver:(id)arg1;	// IMP=0x0000000000004c67
- (void)addObserver:(id)arg1;	// IMP=0x0000000000004c51
@property(readonly, nonatomic) unsigned long long count;
- (id)init;	// IMP=0x0000000000004bb8

@end

