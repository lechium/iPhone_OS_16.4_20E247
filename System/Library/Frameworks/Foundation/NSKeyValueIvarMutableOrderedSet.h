//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface NSKeyValueIvarMutableOrderedSet
{
    struct objc_ivar *_ivar;	// 24 = 0x18
}

- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;	// IMP=0x00000000005c2b3b
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x00000000005c2af8
- (void)removeObjectsAtIndexes:(id)arg1;	// IMP=0x00000000005c2ac4
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000005c2a90
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;	// IMP=0x00000000005c289a
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000005c27a8
- (id)objectsAtIndexes:(id)arg1;	// IMP=0x00000000005c2774
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000005c2740
- (unsigned long long)indexOfObject:(id)arg1;	// IMP=0x00000000005c26ef
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000005c26a7
- (id)_nonNilMutableOrderedSetValueWithSelector:(SEL)arg1;	// IMP=0x00000000005c2652
- (void)_raiseNilValueExceptionWithSelector:(SEL)arg1;	// IMP=0x00000000005c25dc
- (unsigned long long)count;	// IMP=0x00000000005c25a4
- (void)_proxyNonGCFinalize;	// IMP=0x00000000005c2541
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;	// IMP=0x00000000005c24bd

@end

