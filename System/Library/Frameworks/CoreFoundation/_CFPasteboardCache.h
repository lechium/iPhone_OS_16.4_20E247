//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _CFPasteboardCache : NSObject
{
    struct __CFArray *orderedEntries;	// 8 = 0x8
    struct __CFDictionary *entriesByItemIdentifier;	// 16 = 0x10
    struct __CFDictionary *indexesByItemIdentifier;	// 24 = 0x18
    struct __CFArray *itemArray;	// 32 = 0x20
    int generation;	// 40 = 0x28
    int changeCount;	// 44 = 0x2c
}

@property(readonly) const struct __CFArray *orderedEntries; // @synthesize orderedEntries;
@property int changeCount; // @synthesize changeCount;
@property(readonly) int generation; // @synthesize generation;
- (void)bumpChangeCount;	// IMP=0x000000000006d342
- (int)indexForItem:(int)arg1;	// IMP=0x000000000006d30d
- (CDStruct_6ea78fe2)copyFlavorsForItemIdentifier:(long long)arg1;	// IMP=0x000000000006d13e
- (CDStruct_b6748e3c)flavorCountForItemIdentifier:(long long)arg1;	// IMP=0x000000000006cfbb
- (CDStruct_b6748e3c)itemAtIndex:(long long)arg1;	// IMP=0x000000000006cf46
- (CDStruct_b6748e3c)itemCount;	// IMP=0x000000000006cf08
- (CDStruct_9e943ef1)copyItemsAndFlavors;	// IMP=0x000000000006ccf8
- (id)entryForGeneration:(int)arg1 itemIdentifier:(int)arg2 flavor:(struct __CFString *)arg3 errorCode:(int *)arg4;	// IMP=0x000000000006cb6d
- (void)clearForGeneration:(int)arg1;	// IMP=0x000000000006cb33
- (id)updateEntry:(id)arg1;	// IMP=0x000000000006c8c0
- (void)addEntry:(id)arg1;	// IMP=0x000000000006c7d4
- (void)dealloc;	// IMP=0x000000000006c748
- (id)init;	// IMP=0x000000000006c65d
- (void)prepareDataForItemIdentifier:(long long)arg1 flavor:(struct __CFString *)arg2;	// IMP=0x00000000000916f0
- (void)prepareMetadata;	// IMP=0x00000000000916ef

@end

