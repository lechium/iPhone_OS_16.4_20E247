//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSNumber, VCPCNNData, VCPCNNModel, VCPFrameAnalysisStats, VCPVideoActivityDescriptor;

__attribute__((visibility("hidden")))
@interface VCPVideoActivityAnalyzer
{
    VCPFrameAnalysisStats *_frameStats;	// 8 = 0x8
    VCPVideoActivityDescriptor *_activityDescriptor;	// 16 = 0x10
    NSMutableArray *_activityScores;	// 24 = 0x18
    NSMutableArray *_validActivityScores;	// 32 = 0x20
    NSMutableArray *_qualityResults;	// 40 = 0x28
    NSMutableArray *_interestingnessResults;	// 48 = 0x30
    NSMutableArray *_obstructionResults;	// 56 = 0x38
    NSMutableArray *_classificationResults;	// 64 = 0x40
    NSMutableArray *_fineActionResults;	// 72 = 0x48
    NSMutableArray *_faceResults;	// 80 = 0x50
    NSMutableArray *_results;	// 88 = 0x58
    float _sceneSwitchFrequency;	// 96 = 0x60
    long long _numOfFrames;	// 104 = 0x68
    CDStruct_1b6d18a9 _lastProcessTime;	// 112 = 0x70
    float _overallActivityLevel;	// 136 = 0x88
    VCPCNNModel *_model;	// 144 = 0x90
    VCPCNNData *_input;	// 152 = 0x98
    NSNumber *_sportsSceneId;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x00000000000d54d3
- (id)results;	// IMP=0x00000000000d544c
- (int)finishAnalysisPass:(CDStruct_e83c9415)arg1 fpsRate:(float)arg2;	// IMP=0x00000000000d4e5e
- (void)addSceneClassificationContributionToActivityLevel:(float *)arg1;	// IMP=0x00000000000d4bb6
- (float)actionScoreInTimeRange:(CDStruct_e83c9415)arg1;	// IMP=0x00000000000d4776
- (void)addSceneSwitchFrequencyConstributionToActivityLevel:(float *)arg1;	// IMP=0x00000000000d472a
- (float)scaleBasedOnFaceForTimeRange:(CDStruct_e83c9415)arg1;	// IMP=0x00000000000d4238
- (void)validateActivityScores;	// IMP=0x00000000000d3d01
- (float)validationScoreOfTimeRange:(CDStruct_e83c9415)arg1 fromResult:(id)arg2 startIdx:(int *)arg3;	// IMP=0x00000000000d3986
- (int)extractRequiredClassificationInfoFrom:(id)arg1 toArray:(id)arg2;	// IMP=0x00000000000d35e0
- (int)extractRequiredFaceInfoFrom:(id)arg1 toArray:(id)arg2;	// IMP=0x00000000000d32ae
- (int)extractRequiredInfoFrom:(id)arg1 toArray:(id)arg2;	// IMP=0x00000000000d2fe4
- (int)preProcessQualityResults:(id)arg1 interestingnessResults:(id)arg2 obstructionResults:(id)arg3 classificationResults:(id)arg4 fineActionResults:(id)arg5 faceResults:(id)arg6 sceneSwitchFrequency:(float)arg7;	// IMP=0x00000000000d2e1d
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3 flags:(unsigned long long *)arg4;	// IMP=0x00000000000d2d2b
- (int)computeActivityScoreAtTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000000d29c0
- (void)resetActivityStatsAtTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000000d297c
- (void)normalizeActivityDescriptor;	// IMP=0x00000000000d28fb
- (void)generateActivityDescriptor;	// IMP=0x00000000000d282b
- (int)prepareActivityStats;	// IMP=0x00000000000d2766
- (id)initWithFrameStats:(id)arg1;	// IMP=0x00000000000d1f7a

@end

