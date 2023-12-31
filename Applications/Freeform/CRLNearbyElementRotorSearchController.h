//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRLCanvasRep;

@interface CRLNearbyElementRotorSearchController
{
}

+ (id)searchTargetSearchSelectors;	// IMP=0x00400000004e356d
+ (id)nearbyDescriptionForLayoutFrame:(struct CGRect)arg1 andSelectedLayoutFrame:(struct CGRect)arg2;	// IMP=0x00100000004e2baa
- (void)_editorControllerSelectionPathDidChange:(id)arg1;	// IMP=0x00200000004e3ca8
- (id)focusedRep;	// IMP=0x00100000004e3c2c
@property(readonly, nonatomic) CRLCanvasRep *selectedRep;
- (void)_addObservers;	// IMP=0x00100000004e3aa4
- (void)sortLayoutSearchResultsArray:(id)arg1;	// IMP=0x00100000004e3849
- (id)searchReferenceAfterReference:(id)arg1 inDirection:(unsigned long long)arg2;	// IMP=0x00100000004e3606
- (_Bool)shouldChangeSelectionPath;	// IMP=0x00100000004e3565
- (id)nearbyDescriptionForSearchReference:(id)arg1;	// IMP=0x00100000004e344c
- (unsigned long long)distanceToSelectedSearchReference:(id)arg1;	// IMP=0x00100000004e32a5

@end

