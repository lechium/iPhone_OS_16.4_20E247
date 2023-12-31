//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableArray.h>

@class NSMutableDictionary, NSMutableOrderedSet;

__attribute__((visibility("hidden")))
@interface _FPItemList : NSMutableArray
{
    NSMutableOrderedSet *_orderedSet;	// 8 = 0x8
    NSMutableDictionary *_itemsByIDs;	// 16 = 0x10
    NSMutableDictionary *_formerIDs;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000a9bc3
- (id)itemWithItemID:(id)arg1;	// IMP=0x00000000000a9ba6
- (void)sortUsingDescriptors:(id)arg1;	// IMP=0x00000000000a9b89
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x00000000000a99ad
- (id)allObjects;	// IMP=0x00000000000a9990
- (_Bool)isObsoleteID:(id)arg1;	// IMP=0x00000000000a9952
- (void)removeLastObject;	// IMP=0x00000000000a98ec
- (void)addObject:(id)arg1;	// IMP=0x00000000000a97f7
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000a96e0
- (void)removeObjectWithID:(id)arg1;	// IMP=0x00000000000a95a9
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000a948a
- (unsigned long long)indexOfObject:(id)arg1 inSortedRange:(struct _NSRange)arg2 options:(unsigned long long)arg3 usingComparator:(CDUnknownBlockType)arg4;	// IMP=0x00000000000a946d
- (unsigned long long)indexOfItemID:(id)arg1;	// IMP=0x00000000000a9400
- (unsigned long long)indexOfObject:(id)arg1;	// IMP=0x00000000000a9339
- (id)formerIDs;	// IMP=0x00000000000a9324
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000a9307
- (unsigned long long)count;	// IMP=0x00000000000a92ea
- (id)redactedDescription;	// IMP=0x00000000000a92a0
- (id)description;	// IMP=0x00000000000a91a4
- (id)mutableCopy;	// IMP=0x00000000000a9107
- (id)init;	// IMP=0x00000000000a902d

@end

