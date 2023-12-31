//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NLEmbedding, NLModelConfiguration, NSData, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface NLModelImplX
{
    struct MontrealNeuralNetwork *_montrealModel;	// 8 = 0x8
    NLModelConfiguration *_configuration;	// 16 = 0x10
    NLEmbedding *_embedding;	// 24 = 0x18
    NSData *_customEmbeddingData;	// 32 = 0x20
    NSDictionary *_labelMap;	// 40 = 0x28
    unsigned long long _numberOfTrainingInstances;	// 48 = 0x30
    NSString *_trainingLanguage;	// 56 = 0x38
    NSString *_trainingEmbeddingType;	// 64 = 0x40
    NSData *_modelData;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000004475e
- (id)predictedLabelHypothesesForTokens:(id)arg1 maximumCount:(unsigned long long)arg2;	// IMP=0x000000000004465f
- (id)predictedLabelHypothesesForString:(id)arg1 maximumCount:(unsigned long long)arg2;	// IMP=0x00000000000444a8
- (id)predictedLabelsForTokens:(id)arg1;	// IMP=0x00000000000443b0
- (id)predictedLabelForString:(id)arg1;	// IMP=0x00000000000442c6
- (float *)outputForString:(id)arg1;	// IMP=0x0000000000043ce8
- (id)trainingInfo;	// IMP=0x0000000000043c3b
- (unsigned long long)numberOfTrainingInstances;	// IMP=0x0000000000043c2a
- (id)customEmbeddingData;	// IMP=0x0000000000043c15
- (id)labelMap;	// IMP=0x0000000000043c00
- (unsigned long long)systemVersion;	// IMP=0x0000000000043bf5
- (id)configuration;	// IMP=0x0000000000043be0
- (id)modelData;	// IMP=0x0000000000043bcb
- (void)dealloc;	// IMP=0x0000000000043b85
- (id)initWithModelTrainer:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000417a3
- (id)initWithModelData:(id)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 customEmbeddingData:(id)arg6 trainingInfo:(id)arg7 error:(id *)arg8;	// IMP=0x0000000000040d35

@end

