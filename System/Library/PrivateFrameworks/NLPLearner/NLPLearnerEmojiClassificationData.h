//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSMutableArray, NSNumber;

__attribute__((visibility("hidden")))
@interface NLPLearnerEmojiClassificationData
{
    NSMutableArray *_labels;	// 8 = 0x8
    NSDictionary *_labelClasses;	// 16 = 0x10
    NSNumber *_noneClassProbability;	// 24 = 0x18
    struct CFScopedPtr<void *> _embedding;	// 32 = 0x20
    unsigned long long _embeddingDimension;	// 40 = 0x28
}

+ (void)initialize;	// IMP=0x0060000000002220
- (id).cxx_construct;	// IMP=0x0000000000003b18
- (void).cxx_destruct;	// IMP=0x0000000000003ac5
@property(readonly, nonatomic) NSDictionary *labelClasses; // @synthesize labelClasses=_labelClasses;
@property(readonly, nonatomic) unsigned long long embeddingDimension; // @synthesize embeddingDimension=_embeddingDimension;
- (void)addResource:(id)arg1;	// IMP=0x0000000000003515
@property(readonly, nonatomic) unsigned long long numOutputClasses;
- (id)nextEvaluationDataPoint;	// IMP=0x00000000000030ea
- (id)nextTrainingDataBatch:(unsigned long long)arg1;	// IMP=0x0000000000002df3
- (_Bool)loadFromCoreDuet:(id)arg1 limitSamplesTo:(unsigned long long)arg2;	// IMP=0x000000000000270e
- (void)sampleNoneClassExample:(id)arg1;	// IMP=0x0000000000002552
- (id)initWithLocale:(id)arg1;	// IMP=0x000000000000226e
- (_Bool)addExamples:(id)arg1;	// IMP=0x0000000000003b30

@end

