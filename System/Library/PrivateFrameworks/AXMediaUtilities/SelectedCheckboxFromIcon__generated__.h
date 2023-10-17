//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel;

__attribute__((visibility("hidden")))
@interface SelectedCheckboxFromIcon__generated__ : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (id)urlOfModelInThisBundle;	// IMP=0x00600000000a700f
- (void).cxx_destruct;	// IMP=0x00000000000a776e
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000a7514
- (id)predictionFromImage:(struct __CVBuffer *)arg1 error:(id *)arg2;	// IMP=0x00000000000a74a3
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000a739f
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a7320
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000a7251
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a71cc
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a711a
- (id)init;	// IMP=0x00000000000a70bd

@end
