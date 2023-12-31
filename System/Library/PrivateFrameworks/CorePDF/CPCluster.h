//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CPCluster : NSObject
{
    const CDStruct_1ec70fb1 *profile;	// 8 = 0x8
    unsigned int xCount;	// 16 = 0x10
    double *x;	// 24 = 0x18
    double *dx;	// 32 = 0x20
    unsigned int *dxOrderIndex;	// 40 = 0x28
    unsigned int interClusterMinIndex;	// 48 = 0x30
    double *ddx;	// 56 = 0x38
    unsigned int *ddxOrderIndex;	// 64 = 0x40
    unsigned int interLevelMinIndex;	// 72 = 0x48
    unsigned int minClusterSize;	// 76 = 0x4c
    double maxClusterSpread;	// 80 = 0x50
    double minInterClusterDiff;	// 88 = 0x58
    double minInterLevel2ndDiff;	// 96 = 0x60
    unsigned int clusterCount;	// 104 = 0x68
    CDStruct_2a61e2ef *xStats;	// 112 = 0x70
    unsigned int levels;	// 120 = 0x78
    CDStruct_2a61e2ef *dxStats;	// 128 = 0x80
    _Bool ownData;	// 136 = 0x88
    _Bool ownDifferences;	// 137 = 0x89
}

+ (unsigned int *)createOrderIndexFor:(double *)arg1 ofSize:(unsigned int)arg2;	// IMP=0x001000000004b93d
+ (void)reclusterTextLine:(id)arg1 fromWordIndex:(unsigned int)arg2 count:(unsigned int *)arg3;	// IMP=0x001000000004d687
+ (void)clusterTextLine:(id)arg1;	// IMP=0x001000000004d51e
+ (void)clusterTextLine:(id)arg1 withCluster:(id)arg2 atLevel:(unsigned int)arg3 withMaximumWordGap:(double *)arg4 andMaximumLetterGap:(double *)arg5;	// IMP=0x001000000004d401
- (CDStruct_2a61e2ef)largestClusterStatistics;	// IMP=0x000000000004d2c7
- (CDStruct_2a61e2ef)differenceClusterStatisticsAtIndex:(unsigned int)arg1;	// IMP=0x000000000004d293
- (CDStruct_2a61e2ef)clusterStatisticsAtIndex:(unsigned int)arg1;	// IMP=0x000000000004d236
- (unsigned int)levels;	// IMP=0x000000000004d22d
- (unsigned int)clusterCount;	// IMP=0x000000000004d1e3
- (_Bool)applyDifferenceHints:(CDStruct_2a61e2ef *)arg1 count:(unsigned int)arg2;	// IMP=0x000000000004cea7
- (void)findDensityClusters:(double *)arg1 count:(unsigned int)arg2;	// IMP=0x000000000004ce6d
- (void)findClustersFromDifferences:(double *)arg1 count:(unsigned int)arg2;	// IMP=0x000000000004ce52
- (void)findClusters:(double *)arg1 count:(unsigned int)arg2;	// IMP=0x000000000004ce18
- (void)analyzeDensities;	// IMP=0x000000000004cb59
- (void)assembleDensityDifferenceStats;	// IMP=0x000000000004ca24
- (void)setMinimumRecognizedInterLevel2ndDifference:(double)arg1;	// IMP=0x000000000004ca19
- (void)setMinimumRecognizedInterClusterDifference:(double)arg1;	// IMP=0x000000000004ca0e
- (void)setMaximumClusterSpread:(double)arg1;	// IMP=0x000000000004ca03
- (void)setMinimumClusterSize:(unsigned int)arg1;	// IMP=0x000000000004c9fa
- (void)assembleDataStats;	// IMP=0x000000000004c80c
- (void)analyzeDifferences;	// IMP=0x000000000004c6e3
- (void)resetAnalysis;	// IMP=0x000000000004c68c
- (_Bool)coalesceFrom:(unsigned int)arg1 to:(unsigned int)arg2;	// IMP=0x000000000004c276
- (_Bool)splitLevelAtIndex:(unsigned int)arg1 betweenValue:(double)arg2 andValue:(double)arg3;	// IMP=0x000000000004bf52
- (_Bool)joinClosestLevelPairFrom:(unsigned int)arg1 to:(unsigned int)arg2;	// IMP=0x000000000004bebf
- (_Bool)joinLevelsFrom:(unsigned int)arg1 to:(unsigned int)arg2;	// IMP=0x000000000004bde0
- (void)assembleDifferenceStats;	// IMP=0x000000000004bc57
- (void)splitSecondDifferences;	// IMP=0x000000000004b999
- (void)computeDataFromDifferences;	// IMP=0x000000000004b8c6
- (void)computeDifferencesFromData;	// IMP=0x000000000004b85a
- (void)dealloc;	// IMP=0x000000000004b81c
- (void)finalize;	// IMP=0x000000000004b7de
- (void)dispose;	// IMP=0x000000000004b76b
- (id)initWithProfile:(const CDStruct_1ec70fb1 *)arg1;	// IMP=0x000000000004b720
- (id)init;	// IMP=0x000000000004b707
- (void)makeWords:(CDStruct_2e2afed4 *)arg1 count:(unsigned int)arg2 fromCharacterSequence:(id)arg3 charOffset:(unsigned int)arg4;	// IMP=0x000000000004e248
- (void)findClustersFromCharacterSequence:(id)arg1 withSpaceHint:(_Bool)arg2;	// IMP=0x000000000004dab9
- (void)tryLevel0SplitBetween:(double)arg1 and:(double)arg2 usingHints:(CDStruct_2a61e2ef *)arg3;	// IMP=0x000000000004da7a

@end

