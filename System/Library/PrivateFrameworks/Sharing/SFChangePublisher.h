//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPointerArray;

__attribute__((visibility("hidden")))
@interface SFChangePublisher : NSObject
{
    NSPointerArray *_observers;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000027946
@property(readonly, nonatomic) NSPointerArray *observers; // @synthesize observers=_observers;
- (void)publishChangeDescriptor:(unsigned long long)arg1 forObservable:(id)arg2;	// IMP=0x0000000000027831
- (void)unregisterChangeObserver:(id)arg1;	// IMP=0x0000000000027729
- (void)registerChangeObserver:(id)arg1;	// IMP=0x0000000000027713
- (id)init;	// IMP=0x00000000000276ad

@end
