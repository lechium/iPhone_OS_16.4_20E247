//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCPVideoKeyFrame : NSObject
{
    float _subjectAction;	// 8 = 0x8
    float _cameraMotion;	// 12 = 0xc
    float _interestingness;	// 16 = 0x10
    float _obstruction;	// 20 = 0x14
    float _colorfulness;	// 24 = 0x18
    _Bool _isLivePhoto;	// 28 = 0x1c
    _Bool _subMb;	// 29 = 0x1d
    _Bool _isHeadingFrame;	// 30 = 0x1e
    float _score;	// 32 = 0x20
    float _semanticScore;	// 36 = 0x24
    float _sharpness;	// 40 = 0x28
    float _faceSharpness;	// 44 = 0x2c
    float _exposureScore;	// 48 = 0x30
    float _textureScore;	// 52 = 0x34
    float _expressionChangeScore;	// 56 = 0x38
    float _overallFaceQualityScore;	// 60 = 0x3c
    float _qualityScoreForLivePhoto;	// 64 = 0x40
    float _globalQualityScore;	// 68 = 0x44
    float _visualPleasingScore;	// 72 = 0x48
    float _penaltyScore;	// 76 = 0x4c
    float _contentScore;	// 80 = 0x50
    float _humanPoseScore;	// 84 = 0x54
    float _humanActionScore;	// 88 = 0x58
    unsigned long long _statsFlags;	// 96 = 0x60
    NSMutableArray *_detectedFaces;	// 104 = 0x68
    NSMutableArray *_faceQualityScores;	// 112 = 0x70
    NSMutableDictionary *_frameResults;	// 120 = 0x78
    CDStruct_1b6d18a9 _timestamp;	// 128 = 0x80
}

+ (_Bool)isLivePhotoKeyFrameEnabled;	// IMP=0x00600000000ab61f
- (void).cxx_destruct;	// IMP=0x00000000000ad8f3
@property(nonatomic) float humanActionScore; // @synthesize humanActionScore=_humanActionScore;
@property(nonatomic) float humanPoseScore; // @synthesize humanPoseScore=_humanPoseScore;
@property(nonatomic) float contentScore; // @synthesize contentScore=_contentScore;
@property(nonatomic) float penaltyScore; // @synthesize penaltyScore=_penaltyScore;
@property(nonatomic) float visualPleasingScore; // @synthesize visualPleasingScore=_visualPleasingScore;
@property(nonatomic) float globalQualityScore; // @synthesize globalQualityScore=_globalQualityScore;
@property(nonatomic) float qualityScoreForLivePhoto; // @synthesize qualityScoreForLivePhoto=_qualityScoreForLivePhoto;
@property(nonatomic) float overallFaceQualityScore; // @synthesize overallFaceQualityScore=_overallFaceQualityScore;
@property(retain, nonatomic) NSMutableDictionary *frameResults; // @synthesize frameResults=_frameResults;
@property(retain, nonatomic) NSMutableArray *faceQualityScores; // @synthesize faceQualityScores=_faceQualityScores;
@property(retain, nonatomic) NSMutableArray *detectedFaces; // @synthesize detectedFaces=_detectedFaces;
@property(nonatomic) unsigned long long statsFlags; // @synthesize statsFlags=_statsFlags;
@property(nonatomic) float expressionChangeScore; // @synthesize expressionChangeScore=_expressionChangeScore;
@property(nonatomic) float textureScore; // @synthesize textureScore=_textureScore;
@property(nonatomic) _Bool isHeadingFrame; // @synthesize isHeadingFrame=_isHeadingFrame;
@property(nonatomic) float exposureScore; // @synthesize exposureScore=_exposureScore;
@property(nonatomic) float faceSharpness; // @synthesize faceSharpness=_faceSharpness;
@property(nonatomic) float sharpness; // @synthesize sharpness=_sharpness;
@property(nonatomic) float semanticScore; // @synthesize semanticScore=_semanticScore;
@property(nonatomic) float score; // @synthesize score=_score;
@property(nonatomic) CDStruct_1b6d18a9 timestamp; // @synthesize timestamp=_timestamp;
- (void)printStats;	// IMP=0x00000000000ad596
- (_Bool)hasGoodSubjectAction;	// IMP=0x00000000000ad56a
- (float)computeScoreFromExposure;	// IMP=0x00000000000ad537
- (float)computeScoreFromColorfulness;	// IMP=0x00000000000ad50d
- (float)computeExpressionScore;	// IMP=0x00000000000ad208
- (float)computeScoreFromAction;	// IMP=0x00000000000ad1c1
- (void)computeCurationScore;	// IMP=0x00000000000ad130
- (void)computeCurationScoreComponents;	// IMP=0x00000000000ad0a6
- (void)storeFrameResults;	// IMP=0x00000000000ac7b3
- (float)computePenaltyScore;	// IMP=0x00000000000ac41c
- (float)computeContentScore;	// IMP=0x00000000000ac3b4
- (float)computeVisualPleasingScore;	// IMP=0x00000000000ac34a
- (float)computeGlobalQuality;	// IMP=0x00000000000ac2d3
- (void)computeGlobalQualityForLivePhoto;	// IMP=0x00000000000ac285
- (void)setMotionStatsFlag:(_Bool)arg1 cameraMotion:(float)arg2 subjectAction:(float)arg3 interestingness:(float)arg4 obstruction:(float)arg5 colorfulness:(float)arg6 exposureScore:(float)arg7 humanActionStatsFlag:(_Bool)arg8 humanPoseScore:(float)arg9 humanActionScore:(float)arg10 subMb:(_Bool)arg11;	// IMP=0x00000000000ac224
- (void)setFaceStatsFlag:(_Bool)arg1 detectedFaces:(id)arg2;	// IMP=0x00000000000ac07f
- (void)resetStatsFlag;	// IMP=0x00000000000ac071
- (int)loadKeyFrameResult:(id)arg1 timestamp:(CDStruct_1b6d18a9)arg2;	// IMP=0x00000000000ab80a
- (void)copyFrom:(id)arg1;	// IMP=0x00000000000ab627
- (id)initWithLivePhoto:(_Bool)arg1;	// IMP=0x00000000000ab4c2

@end

