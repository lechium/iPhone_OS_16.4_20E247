//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface AutocompleteAnalyticsManager : NSObject
{
    struct {
        int action;
        NSString *value;
        NSNumber *collectionId;
        NSArray *publisherIds;
        NSNumber *collectionCurrentlySaved;
        NSNumber *verticalIndex;
        int target;
    } _curatedCollectionsEvent;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000acd456
- (void)addAPlaceTappedWithNumberOfResults:(unsigned long long)arg1;	// IMP=0x0010000000acd3c8
- (void)resultRefinementTappedWithKey:(id)arg1;	// IMP=0x0010000000acd348
- (void)tappableEntryUnitTappedWithMuid:(unsigned long long)arg1;	// IMP=0x0010000000acd2ba
- (void)containmentParentUnitTappedWithMuid:(unsigned long long)arg1;	// IMP=0x0010000000acd22c
- (void)userGeneratedGuideUnitTapped;	// IMP=0x0010000000acd186
- (void)logCuratedCollectionsEvent;	// IMP=0x0010000000acd124
- (void)cleanupCuratedCollectionsEvent;	// IMP=0x0010000000acd0c3
- (void)guidesHomeChildItemButtonTappedWithVerticalIndex:(long long)arg1;	// IMP=0x0010000000acd058
- (void)placeContextMultipleCollectionsTappedWithMuids:(id)arg1 verticalIndex:(long long)arg2;	// IMP=0x0010000000accdb0
- (void)placeContextSingleCollectionTappedWithMuid:(unsigned long long)arg1 isCurrentlySaved:(_Bool)arg2 verticalIndex:(long long)arg3;	// IMP=0x0010000000accc93
- (void)publisherChildItemButtonTappedWithPublisherMuid:(unsigned long long)arg1 verticalIndex:(long long)arg2;	// IMP=0x0010000000accb9f
- (void)publisherTappedWithMuid:(unsigned long long)arg1 verticalIndex:(long long)arg2;	// IMP=0x0010000000accaab
- (void)curatedCollectionTappedWithMUID:(unsigned long long)arg1 isCurrentlySaved:(_Bool)arg2 verticalIndex:(long long)arg3;	// IMP=0x0010000000acc9e0
- (id)init;	// IMP=0x0010000000acc9a5

@end
