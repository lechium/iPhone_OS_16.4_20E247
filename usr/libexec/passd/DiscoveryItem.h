//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DiscoveryItem
{
    unsigned long long _itemOrder;	// 24 = 0x18
}

+ (id)_propertySettersForAccount;	// IMP=0x00400000001eecd9
+ (id)_predicateForViewCount:(long long)arg1;	// IMP=0x00100000001eec68
+ (id)_predicateForEntitledToForceLargeCard;	// IMP=0x00100000001eec41
+ (id)_predicateForShouldBadge;	// IMP=0x00100000001eec1a
+ (id)_predicateForCheckingRelevantDate:(id)arg1;	// IMP=0x00100000001ee957
+ (id)_predicateForNonTerminalItems;	// IMP=0x00100000001ee81d
+ (id)_predicateForItemsWaitinForTrigger;	// IMP=0x00100000001ee745
+ (id)_predicateDismissedItems;	// IMP=0x00100000001ee71e
+ (id)_predicateForActiveOrActionedItems;	// IMP=0x00100000001ee608
+ (id)_predicateForActiveOrActionedRelevantItemsRequiringBadge:(id)arg1;	// IMP=0x00100000001ee4a8
+ (id)_predicateForActiveOrActionedAndRelevantItems:(id)arg1;	// IMP=0x00100000001ee38d
+ (id)_predicateForItemIdentifier:(id)arg1;	// IMP=0x00100000001ee36a
+ (void)deleteAllItemsInDatabase:(id)arg1;	// IMP=0x00100000001ee2d0
+ (void)deleteItemsNotIncludingIdentifiers:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001ee22b
+ (void)deleteItemWithIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001ee1e9
+ (id)updateItem:(id)arg1 inDatabse:(id)arg2;	// IMP=0x00100000001ed77b
+ (id)insertOrUpdateItem:(id)arg1 itemOrder:(unsigned long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000001ed153
+ (id)itemWithIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001ed0c7
+ (id)nonTerminalItemIdentifiersInDatabase:(id)arg1;	// IMP=0x00100000001eceb2
+ (id)activeItemIdentifiersWithRelevantDate:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001ecc9c
+ (_Bool)activeItemRequiringBadgeExistsForRelevantDate:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001ecc07
+ (id)discoveryItemsMatchingQuery:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001eca2d
+ (id)orderedQueryWithPredicate:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001ec8f4
+ (id)itemsWaitingForTriggerInDatabase:(id)arg1;	// IMP=0x00100000001ec844
+ (id)activeItemsRequiringBadgingForRelevantDate:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001ec78e
+ (id)dismissedDiscoveryItemsInDatabase:(id)arg1;	// IMP=0x00100000001ec6de
+ (id)activeItemsWithRelevantDate:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001ec628
+ (id)itemsWithRelevantDate:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001ec572
+ (id)itemsInDatabase:(id)arg1;	// IMP=0x00100000001ec4bb
+ (id)databaseTable;	// IMP=0x00100000001ec4ae
@property(nonatomic) unsigned long long itemOrder; // @synthesize itemOrder=_itemOrder;
- (void)setItemOrder;	// IMP=0x00100000001ef36f
- (id)item;	// IMP=0x00100000001edd18
- (void)updateWithItem:(id)arg1;	// IMP=0x00000000001ed82f
- (id)initWithItem:(id)arg1 itemOrder:(unsigned long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000001ed246

@end

