//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _NSFaultingMutableSetMutationMethods;

__attribute__((visibility("hidden")))
@interface _NSProxyWrapperMutableSet
{
    _NSFaultingMutableSetMutationMethods *_mutationMethods;	// 32 = 0x20
}

- (void)unionSet:(id)arg1;	// IMP=0x0000000000064804
- (void)setSet:(id)arg1;	// IMP=0x0000000000064778
- (void)removeObject:(id)arg1;	// IMP=0x00000000000646e2
- (void)removeAllObjects;	// IMP=0x0000000000064696
- (void)minusSet:(id)arg1;	// IMP=0x0000000000064663
- (void)intersectSet:(id)arg1;	// IMP=0x00000000000644ed
- (void)addObjectsFromArray:(id)arg1;	// IMP=0x0000000000064471
- (void)addObject:(id)arg1;	// IMP=0x00000000000643db
- (void)dealloc;	// IMP=0x000000000006432d

@end

