//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebHistoryPrivate : NSObject
{
    struct RetainPtr<NSMutableDictionary> _entriesByURL;	// 8 = 0x8
    struct unique_ptr<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>>, std::default_delete<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>>>> _entriesByDate;	// 16 = 0x10
    struct RetainPtr<NSMutableArray> _orderedLastVisitedDays;	// 24 = 0x18
    _Bool itemLimitSet;	// 32 = 0x20
    int itemLimit;	// 36 = 0x24
    _Bool ageInDaysLimitSet;	// 40 = 0x28
    int ageInDaysLimit;	// 44 = 0x2c
}

+ (void)initialize;	// IMP=0x0060000000104150
- (id).cxx_construct;	// IMP=0x00000000001065d0
- (void).cxx_destruct;	// IMP=0x0000000000106500
- (void)addVisitedLinksToVisitedLinkStore:(void *)arg1;	// IMP=0x00000000001063d0
- (_Bool)saveToURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000106380
- (id)data;	// IMP=0x0000000000105fd0
- (_Bool)loadFromURL:(id)arg1 collectDiscardedItemsInto:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000105fa0
- (_Bool)loadHistoryGutsFromURL:(id)arg1 savedItemsCount:(int *)arg2 collectDiscardedItemsInto:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000105b40
- (id)ageLimitDate;	// IMP=0x0000000000105ad0
- (int)historyItemLimit;	// IMP=0x0000000000105a80
- (void)setHistoryItemLimit:(int)arg1;	// IMP=0x0000000000105a70
- (int)historyAgeInDaysLimit;	// IMP=0x0000000000105a20
- (void)setHistoryAgeInDaysLimit:(int)arg1;	// IMP=0x0000000000105a10
- (id)allItems;	// IMP=0x00000000001059f0
- (id)itemForURL:(id)arg1;	// IMP=0x00000000001059b0
- (_Bool)containsURL:(id)arg1;	// IMP=0x0000000000105970
- (id)itemForURLString:(id)arg1;	// IMP=0x0000000000105950
- (id)orderedItemsLastVisitedOnDay:(id)arg1;	// IMP=0x0000000000105830
- (id)orderedLastVisitedDays;	// IMP=0x0000000000105530
- (void)addItems:(id)arg1;	// IMP=0x00000000001054b0
- (_Bool)removeAllItems;	// IMP=0x00000000001053f0
- (_Bool)removeItems:(id)arg1;	// IMP=0x0000000000105370
- (_Bool)removeItem:(id)arg1;	// IMP=0x0000000000105300
- (void)rebuildHistoryByDayIfNeeded:(id)arg1;	// IMP=0x0000000000104d90
- (_Bool)addItem:(id)arg1 discardDuplicate:(_Bool)arg2;	// IMP=0x0000000000104c60
- (id)visitedURL:(id)arg1 withTitle:(id)arg2;	// IMP=0x0000000000104b40
- (void)addItemToDateCaches:(id)arg1;	// IMP=0x00000000001048b0
- (_Bool)removeItemForURLString:(id)arg1;	// IMP=0x0000000000104830
- (_Bool)removeItemFromDateCaches:(id)arg1;	// IMP=0x0000000000104630
- (void)insertItem:(id)arg1 forDateKey:(long long)arg2;	// IMP=0x0000000000104420
- (_Bool)findKey:(long long *)arg1 forDay:(double)arg2;	// IMP=0x0000000000104290
- (id)init;	// IMP=0x0000000000104190

@end
