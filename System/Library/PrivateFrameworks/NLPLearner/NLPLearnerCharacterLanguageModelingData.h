//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CVNLPTokenIDConverter;

__attribute__((visibility("hidden")))
@interface NLPLearnerCharacterLanguageModelingData
{
    CVNLPTokenIDConverter *_tokenConverter;	// 24 = 0x18
}

+ (unsigned long long)defaultMaxSequenceLength;	// IMP=0x006000000000941b
+ (void)initialize;	// IMP=0x00600000000093cd
- (void).cxx_destruct;	// IMP=0x0000000000009dd9
- (_Bool)loadFromCoreDuet:(id)arg1 limitSamplesTo:(unsigned long long)arg2;	// IMP=0x00000000000095dc
- (void)addResource:(id)arg1;	// IMP=0x00000000000094db
- (id)initWithLocale:(id)arg1;	// IMP=0x0000000000009426

@end
