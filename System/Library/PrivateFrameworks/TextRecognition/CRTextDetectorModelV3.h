//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel;

__attribute__((visibility("hidden")))
@interface CRTextDetectorModelV3 : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (id)defaultURLOfModelInThisBundle;	// IMP=0x00600000000750b2
- (void).cxx_destruct;	// IMP=0x0000000000075a73
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000075772
- (id)predictionFromImg_input:(struct __CVBuffer *)arg1 error:(id *)arg2;	// IMP=0x0000000000075701
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000075578
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000754f9
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000075338
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000075262
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000751b0
- (id)init;	// IMP=0x0000000000075153

@end

