//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable, NSMutableArray, NSMutableSet, NSString, UIFocusSystem, UIScreen, _UIFocusMapRect, _UIFocusMapSnapshotDebugInfo, _UIFocusMovementInfo, _UIFocusRegion, _UIFocusSearchInfo;
@protocol UICoordinateSpace, _UIFocusRegionContainer;

__attribute__((visibility("hidden")))
@interface _UIFocusMapSnapshot : NSObject
{
    NSMutableArray *_mutableUnoccludedRegions;	// 8 = 0x8
    NSHashTable *_filteredOriginalRegions;	// 16 = 0x10
    struct __CFDictionary *_subregionToRegionMap;	// 24 = 0x18
    struct __CFDictionary *_regionToOccludingRegionsMap;	// 32 = 0x20
    struct __CFDictionary *_regionToFocusItemCache;	// 40 = 0x28
    struct __CFDictionary *_regionFrameCache;	// 48 = 0x30
    NSMutableArray *_stateStack;	// 56 = 0x38
    NSHashTable *_eligibleEnvironments;	// 64 = 0x40
    NSHashTable *_ineligibleEnvironments;	// 72 = 0x48
    NSHashTable *_uncachableEnvironments;	// 80 = 0x50
    NSArray *_regions;	// 88 = 0x58
    NSMutableSet *_visitedRegionContainers;	// 96 = 0x60
    struct {
        unsigned int didCaptureSnapshot:1;
        unsigned int isSearchingRegionsOfInterestContainer:1;
        unsigned int clipToSnapshotRect:1;
        unsigned int ignoresRootContainerClippingRect:1;
    } _flags;	// 104 = 0x68
    UIFocusSystem *_focusSystem;	// 112 = 0x70
    id <_UIFocusRegionContainer> _rootContainer;	// 120 = 0x78
    _UIFocusMapRect *_mapArea;	// 128 = 0x80
    _UIFocusRegion *_focusedRegion;	// 136 = 0x88
    id <_UIFocusRegionContainer> _regionsContainer;	// 144 = 0x90
    _UIFocusSearchInfo *_searchInfo;	// 152 = 0x98
    _UIFocusMovementInfo *_movementInfo;	// 160 = 0xa0
    _UIFocusMapRect *_searchArea;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x000000000073ea88
@property(readonly, nonatomic, getter=_searchArea) _UIFocusMapRect *searchArea; // @synthesize searchArea=_searchArea;
@property(retain, nonatomic) _UIFocusMovementInfo *movementInfo; // @synthesize movementInfo=_movementInfo;
@property(retain, nonatomic) _UIFocusSearchInfo *searchInfo; // @synthesize searchInfo=_searchInfo;
@property(readonly, nonatomic) __weak id <_UIFocusRegionContainer> regionsContainer; // @synthesize regionsContainer=_regionsContainer;
@property(readonly, copy, nonatomic) _UIFocusRegion *focusedRegion; // @synthesize focusedRegion=_focusedRegion;
@property(readonly, nonatomic) _UIFocusMapRect *mapArea; // @synthesize mapArea=_mapArea;
@property(readonly, nonatomic) __weak id <_UIFocusRegionContainer> rootContainer; // @synthesize rootContainer=_rootContainer;
@property(readonly, nonatomic) __weak UIFocusSystem *focusSystem; // @synthesize focusSystem=_focusSystem;
- (void)addRegionsInContainers:(id)arg1;	// IMP=0x000000000073e814
- (void)addRegionsInContainer:(id)arg1;	// IMP=0x000000000073d198
- (void)addRegions:(id)arg1;	// IMP=0x000000000073cfd2
- (void)addRegion:(id)arg1;	// IMP=0x000000000073cadf
- (id)searchArea;	// IMP=0x000000000073cacd
@property(readonly, nonatomic) id <UICoordinateSpace> coordinateSpace;
@property(readonly, nonatomic) __weak UIScreen *screen;
- (void)_capture;	// IMP=0x000000000073c578
@property(readonly, nonatomic) _Bool hasOnlyStaticContent;
- (void)markContainerAsProvidingDynamicContent;	// IMP=0x000000000073c3fe
- (struct CGRect)snapshotFrameForRegion:(id)arg1;	// IMP=0x000000000073c2b7
- (id)_cachedNextFocusedItemForRegion:(id)arg1 withFocusMovementRequest:(id)arg2 inMap:(id)arg3;	// IMP=0x000000000073c08e
- (void)consumeRegionInformationForRegions:(id)arg1 fromSnapshot:(id)arg2;	// IMP=0x000000000073be83
- (id)occludingRegionsForRegion:(id)arg1;	// IMP=0x000000000073bd6b
- (void)_trackOccludingRegion:(id)arg1 forRegion:(id)arg2;	// IMP=0x000000000073bca5
- (id)originalRegionForRegion:(id)arg1;	// IMP=0x000000000073bb72
- (void)_trackSubregion:(id)arg1 forRegion:(id)arg2;	// IMP=0x000000000073b9b9
- (id)regionsForOriginalRegion:(id)arg1;	// IMP=0x000000000073b739
@property(readonly, copy, nonatomic) NSArray *originalRegions;
@property(readonly, copy, nonatomic) NSArray *regions;
- (void)dealloc;	// IMP=0x000000000073b18b
- (id)_initWithSnapshotter:(id)arg1 mapArea:(id)arg2 searchArea:(id)arg3;	// IMP=0x000000000073ad51
- (id)init;	// IMP=0x000000000073acca
- (id)_debugInfoWithFocusMapSearchInfo:(id)arg1;	// IMP=0x000000000070be91
@property(readonly, nonatomic, getter=_debugInfo) _UIFocusMapSnapshotDebugInfo *debugInfo;
- (id)debugQuickLookObject;	// IMP=0x000000000070bdcc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
