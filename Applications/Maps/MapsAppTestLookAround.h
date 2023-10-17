//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MapsAppTestLookAround
{
    unsigned long long _waitingTests;	// 8 = 0x8
    _Bool _savedDebugDrawContinuously;	// 16 = 0x10
}

@property(nonatomic) _Bool savedDebugDrawContinuously; // @synthesize savedDebugDrawContinuously=_savedDebugDrawContinuously;
- (void)runExitTest;	// IMP=0x0010000000324648
- (void)runPanTest;	// IMP=0x0010000000324642
- (void)zoom:(struct CGPoint)arg1 countdown:(int)arg2 oldFactor:(double)arg3 mapView:(id)arg4;	// IMP=0x001000000032405b
- (void)runZoomTest;	// IMP=0x0010000000323a2b
- (void)tap:(struct CGPoint)arg1 countdown:(int)arg2 mapView:(id)arg3 totalTimeInMS:(double)arg4 firstTap:(_Bool)arg5;	// IMP=0x0010000000323286
- (void)runNavTest;	// IMP=0x00100000003228ab
- (void)runExploreTest;	// IMP=0x001000000032266e
- (void)runEnterTestWithContinuationBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000322387
- (void)runEnterTest;	// IMP=0x0010000000322373
- (void)runBrowseTestWithContinuationBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000321ce2
- (void)runBrowseTest;	// IMP=0x0010000000321cce
- (void)expandLookAroundToFullscreen:(_Bool)arg1 withLookAroundView:(id)arg2 mapItem:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x0010000000321a8d
- (void)enterLookAroundWithLookAroundView:(id)arg1 mapItem:(id)arg2 showsFullScreen:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x001000000032179d
- (void)storefrontWillMoveBlock:(CDUnknownBlockType)arg1 didMoveBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000321568
- (void)selectSearchResult:(id)arg1;	// IMP=0x001000000032140b
- (void)displayPlacecardPhotosWithSearchString:(id)arg1 resultShortAddress:(id)arg2 didShowPreviewBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000320ed4
- (void)addObserverWithSearchString:(id)arg1 forDidShowPreviewBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000320bb4
- (void)onLookAroundView:(id)arg1 didCompletionPostTransitionAnimation:(CDUnknownBlockType)arg2;	// IMP=0x0010000000320af9
- (void)onLookAroundView:(id)arg1 didBecomeAdequatelyDrawnCallback:(CDUnknownBlockType)arg2;	// IMP=0x00100000003208f4
- (void)jumpToOptionsCoord:(CDUnknownBlockType)arg1;	// IMP=0x0010000000320623
- (_Bool)runTest;	// IMP=0x001000000032019c
- (void)cleanup:(_Bool)arg1;	// IMP=0x001000000032000d

@end
