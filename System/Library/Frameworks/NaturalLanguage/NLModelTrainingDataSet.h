//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NLDataSet.h"

@class NLDataProvider;

__attribute__((visibility("hidden")))
@interface NLModelTrainingDataSet : NLDataSet
{
    NLDataProvider *_modelTrainingDataProvider;	// 8 = 0x8
    NLDataProvider *_modelValidationDataProvider;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002615e
- (id)dataProviderOfType:(long long)arg1;	// IMP=0x0000000000026122
- (id)initWithConfiguration:(id)arg1 numberOfTrainingInstances:(unsigned long long)arg2 numberOfValidationInstances:(unsigned long long)arg3 trainingDataSource:(void *)arg4 validationDataSource:(void *)arg5 instanceDataProvider:(CDUnknownBlockType)arg6;	// IMP=0x0000000000025d46

@end

