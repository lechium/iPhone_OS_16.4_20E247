//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel;

__attribute__((visibility("hidden")))
@interface CRTextDetectorModel : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (id)defaultURLOfModelInThisBundle;	// IMP=0x0060000000019938
- (void).cxx_destruct;	// IMP=0x000000000001a149
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000019efc
- (id)predictionFromData:(struct __CVBuffer *)arg1 error:(id *)arg2;	// IMP=0x0000000000019e8b
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000019d88
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000019d09
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000019bbe
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000019ae8
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000019a36
- (id)init;	// IMP=0x00000000000199d9

@end

