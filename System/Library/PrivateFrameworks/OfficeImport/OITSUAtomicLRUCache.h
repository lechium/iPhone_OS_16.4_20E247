//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface OITSUAtomicLRUCache
{
}

- (void)clearEvictionCallbackTarget;	// IMP=0x000000000027a9a8
- (void)setEvictionCallbackTarget:(id)arg1 selector:(SEL)arg2;	// IMP=0x000000000027a943
- (id)allKeys;	// IMP=0x000000000027a8d0
- (id)allValues;	// IMP=0x000000000027a85d
- (id)objectForKey:(id)arg1;	// IMP=0x000000000027a7eb
- (void)removeAllObjects;	// IMP=0x000000000027a796
- (void)removeObjectForKey:(id)arg1;	// IMP=0x000000000027a73b
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000027a6d6

@end
