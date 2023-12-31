//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface SearchHomeAnalyticsManager : NSObject
{
    struct {
        int action;
        NSString *value;
        NSNumber *collectionId;
        NSArray *publisherIds;
        NSNumber *verticalIndex;
        NSNumber *collectionCurrentlySaved;
        int target;
        NSNumber *horizontalIndex;
    } _curatedCollectionEvent;	// 8 = 0x8
    struct {
        int action;
        int target;
        NSArray *suggestions;
        NSNumber *selectedIndex;
    } _recentEvent;	// 72 = 0x48
    struct {
        int action;
        int target;
    } _browseCategoryEvent;	// 96 = 0x60
    struct {
        NSArray *suggestions;
    } _noTypingACEvent;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00200000002b4de9
- (void)logNoTypingACEvent;	// IMP=0x00100000002b4d9f
- (void)autocompleteSessionsStartedWithVisibleSuggestions:(id)arg1;	// IMP=0x00100000002b4d3f
- (void)browseCategoryTapped:(id)arg1;	// IMP=0x00100000002b4d1a
- (void)logRecentEvent;	// IMP=0x00100000002b4cab
- (void)recentTappedAtIndex:(unsigned long long)arg1 visibleSuggestions:(id)arg2;	// IMP=0x00100000002b4c08
- (id)curatedCollectionEventDebugDescription;	// IMP=0x00100000002ad94f
- (void)logCuratedCollectionsEvent;	// IMP=0x00100000002ad8de
- (void)cityGuidesMoreButtonTapped;	// IMP=0x00100000002ad8a9
- (void)exploreGuidesButtonTapped;	// IMP=0x00100000002ad874
- (void)guideLocationTappedWithMuid:(unsigned long long)arg1 horizontalIndex:(unsigned long long)arg2;	// IMP=0x00100000002ad7b5
- (void)publisherTappedWithMuid:(unsigned long long)arg1 verticalIndex:(unsigned long long)arg2;	// IMP=0x00100000002ad6c1
- (void)showAllCollectionsTapped;	// IMP=0x00100000002ad68c
- (void)curatedCollectionsTappedWithMuid:(unsigned long long)arg1 horizontalIndex:(unsigned long long)arg2 isCurrentlySaved:(_Bool)arg3;	// IMP=0x00100000002ad5af
- (void)cleanup;	// IMP=0x00100000002ad522
- (id)initWithSearchAlongRoute:(_Bool)arg1;	// IMP=0x00100000002ad4c4

@end

