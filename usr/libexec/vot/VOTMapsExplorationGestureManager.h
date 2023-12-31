//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSArray;
@protocol VOTMapsExplorationGestureManagerDelegate;

@interface VOTMapsExplorationGestureManager
{
    NSArray *_explorationSegments;	// 8 = 0x8
    long long _currentIndex;	// 16 = 0x10
    long long _selectionIndex;	// 24 = 0x18
    double _movedAngle;	// 32 = 0x20
    double _lastAngle;	// 40 = 0x28
    _Bool _recentlyMoved;	// 48 = 0x30
    struct CGPoint _currentLocation;	// 56 = 0x38
    struct CGPoint _currentCenter;	// 72 = 0x48
    MISSING_TYPE *_mapsExplorationGestureManagerDelegate;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x002000000005cb7e
@property(nonatomic) __weak id <VOTMapsExplorationGestureManagerDelegate> mapsExplorationGestureManagerDelegate; // @synthesize mapsExplorationGestureManagerDelegate=_mapsExplorationGestureManagerDelegate;
- (_Bool)isWordBackspaceEvent:(id)arg1;	// IMP=0x001000000005cb49
- (_Bool)isSpaceEvent:(id)arg1;	// IMP=0x001000000005cb41
- (_Bool)isReturnKeyEvent:(id)arg1;	// IMP=0x001000000005cb39
- (_Bool)isPreviousSuggestionEvent:(id)arg1;	// IMP=0x001000000005cb31
- (_Bool)isNextSuggestionEvent:(id)arg1;	// IMP=0x001000000005cb29
- (_Bool)isNextBrailleTableEvent:(id)arg1;	// IMP=0x001000000005cb21
- (_Bool)isNextKeyboardLanguageEvent:(id)arg1;	// IMP=0x001000000005cb19
- (_Bool)isLaunchAppEvent:(id)arg1;	// IMP=0x001000000005cb11
- (_Bool)isBackspaceEvent:(id)arg1;	// IMP=0x001000000005cb09
- (void)applyPreviousSuggestionToElement:(id)arg1;	// IMP=0x001000000005cb03
- (void)applyNextSuggestionToElement:(id)arg1;	// IMP=0x001000000005cafd
- (_Bool)processTouchLocations:(id)arg1 isFirstTouch:(_Bool)arg2;	// IMP=0x001000000005caf5
- (_Bool)processTapWithFingerCount:(unsigned long long)arg1;	// IMP=0x001000000005caed
- (void)_playSound:(id)arg1;	// IMP=0x001000000005ca77
- (void)_speakText:(id)arg1 doesNotInterrupt:(_Bool)arg2 cannotBeInterrupted:(_Bool)arg3;	// IMP=0x001000000005c9de
- (long long)indexForPoint:(struct CGPoint)arg1;	// IMP=0x001000000005c6fa
- (void)processTouch:(struct CGPoint)arg1;	// IMP=0x001000000005c588
- (id)explorationSegmentsForRoadsWithAngles:(id)arg1;	// IMP=0x001000000005c1da
- (_Bool)processEvent:(id)arg1;	// IMP=0x001000000005bfce
- (_Bool)handleVerbosityChangeIncreasing:(_Bool)arg1;	// IMP=0x001000000005bf4a
- (_Bool)handleSelection;	// IMP=0x001000000005bd13
- (_Bool)handleTracking:(struct CGPoint)arg1;	// IMP=0x001000000005bb44
- (void)setActive:(_Bool)arg1;	// IMP=0x001000000005b99c
- (void)endExploration;	// IMP=0x001000000005b95f
- (void)beginExploration;	// IMP=0x001000000005b8d9
- (_Bool)explorationIsPending;	// IMP=0x001000000005b895
- (_Bool)explorationIsActive;	// IMP=0x001000000005b851
- (id)currentIntersectionInformation;	// IMP=0x001000000005b801
- (void)updateCurrentLocation;	// IMP=0x001000000005b7a5
- (void)updateExplorationSegments;	// IMP=0x001000000005b679
- (id)currentMap;	// IMP=0x001000000005b54a
- (id)init;	// IMP=0x001000000005b423

@end

