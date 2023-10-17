//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, VOTBrailleGestureHalfPattern;

@interface VOTBrailleGestureDataRepository : NSObject
{
    NSString *_recordedDriftsFilePath;	// 8 = 0x8
    NSString *_calibratedDotPositionsFilePath;	// 16 = 0x10
    long long _typingMode;	// 24 = 0x18
    struct CGSize _keyboardSize;	// 32 = 0x20
    _Bool _shouldUseEightDotBraille;	// 48 = 0x30
    _Bool _areDotNumberPositionsCalibrated;	// 49 = 0x31
    VOTBrailleGestureHalfPattern *_leftDotPositions;	// 56 = 0x38
    VOTBrailleGestureHalfPattern *_rightDotPositions;	// 64 = 0x40
    NSMutableArray *_leftDrifts;	// 72 = 0x48
    NSMutableArray *_rightDrifts;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000011294e
@property(retain, nonatomic) NSMutableArray *rightDrifts; // @synthesize rightDrifts=_rightDrifts;
@property(retain, nonatomic) NSMutableArray *leftDrifts; // @synthesize leftDrifts=_leftDrifts;
@property(retain, nonatomic) VOTBrailleGestureHalfPattern *rightDotPositions; // @synthesize rightDotPositions=_rightDotPositions;
@property(retain, nonatomic) VOTBrailleGestureHalfPattern *leftDotPositions; // @synthesize leftDotPositions=_leftDotPositions;
- (void)_loadAllDataFromFiles;	// IMP=0x0010000000112012
- (id)_loadDataFromFile:(id)arg1;	// IMP=0x0010000000111f43
- (void)_repairFileProtectionClassOnPathIfNecessary:(id)arg1;	// IMP=0x0010000000111ce3
- (id)_arrayOfDictionariesFromPointValues:(id)arg1;	// IMP=0x0010000000111b39
- (id)_mutableArrayOfPointValuesFromDictionaries:(id)arg1;	// IMP=0x001000000011198f
- (id)_mutableArrayOfZeroPointValues:(unsigned long long)arg1;	// IMP=0x00100000001118d9
- (void)_generateInitialData;	// IMP=0x00100000001118b4
- (void)_generateScreenAwayInitialData;	// IMP=0x00100000001115e7
- (void)_getMiddleDotsForSixDotTableTopInitialDataForLeft:(struct CGPoint *)arg1 right:(struct CGPoint *)arg2 angleFromXAxisToLineOfHand:(double)arg3 topLeftDot:(struct CGPoint)arg4;	// IMP=0x0010000000111574
- (void)_getEightDotTableTopMiddleLeftDot:(struct CGPoint *)arg1 middleRightDot:(struct CGPoint *)arg2 bottomLeftDot:(struct CGPoint *)arg3 bottomRightDot:(struct CGPoint *)arg4 angleFromXAxisToLineOfHand:(double)arg5 topLeftDot:(struct CGPoint)arg6;	// IMP=0x001000000011149c
- (void)_generateTableTopInitialData;	// IMP=0x0010000000110ecd
- (id)_recordedDriftsFilePath;	// IMP=0x0010000000110dfa
- (id)_calibratedDotPositionsFilePath;	// IMP=0x0010000000110d27
- (id)_gestureDataDirectory;	// IMP=0x0010000000110b1c
- (id)_filenameSuffix;	// IMP=0x0010000000110ab1
- (void)_deleteCalibratedData;	// IMP=0x001000000011096c
- (void)_resetLearnedData;	// IMP=0x00100000001107e9
- (unsigned long long)_totalNumberOfDots;	// IMP=0x00100000001107d8
- (id)_adjustPointValue:(id)arg1 withDrift:(struct CGPoint)arg2;	// IMP=0x0010000000110776
- (struct CGPoint)_averageRightDrift;	// IMP=0x0010000000110712
- (struct CGPoint)_averageLeftDrift;	// IMP=0x00100000001106ae
- (struct CGPoint)_averageRecentDriftFromDrifts:(id)arg1;	// IMP=0x00100000001105e4
- (void)_removeInstanceOfDriftFromArray:(id)arg1;	// IMP=0x001000000011051c
- (void)_addInstanceOfDrift:(struct CGPoint)arg1 toArray:(id)arg2 forPattern:(id)arg3;	// IMP=0x001000000011036a
- (struct CGPoint)_driftOfHalfPattern:(id)arg1 relativeToDotPositions:(id)arg2;	// IMP=0x0010000000110093
- (struct CGPoint)_driftByAddingDisplacementOfPointValue:(id)arg1 fromPointValue:(id)arg2 toDrift:(struct CGPoint)arg3;	// IMP=0x001000000010ffba
- (_Bool)areDotNumberPositionsCalibrated;	// IMP=0x001000000010ffb1
- (void)calibrateWithDotNumberPositions:(id)arg1;	// IMP=0x001000000010fbbd
- (_Bool)_allDotsAreOnScreen:(id)arg1 withDrift:(struct CGPoint)arg2;	// IMP=0x001000000010f903
- (void)_appendDots:(id)arg1 toPositionsArray:(id)arg2 withDrift:(struct CGPoint)arg3;	// IMP=0x001000000010f742
- (void)_orderedLeftDots:(id *)arg1 rightDots:(id *)arg2;	// IMP=0x001000000010f636
- (id)dotNumberPositions;	// IMP=0x001000000010f550
- (_Bool)saveDrift;	// IMP=0x001000000010f24e
- (void)removeDriftAddedByPattern:(id)arg1;	// IMP=0x001000000010f025
- (void)updateDriftWithPattern:(id)arg1;	// IMP=0x001000000010ec68
- (id)halfPatternsForNumberOfDots:(unsigned long long)arg1 side:(unsigned long long)arg2;	// IMP=0x001000000010e853
- (id)initWithTypingMode:(long long)arg1 keyboardSize:(struct CGSize)arg2 shouldUseEightDotBraille:(_Bool)arg3;	// IMP=0x001000000010e7d3

@end
