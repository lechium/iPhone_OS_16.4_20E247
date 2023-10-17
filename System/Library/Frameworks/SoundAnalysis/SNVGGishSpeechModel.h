//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel;

__attribute__((visibility("hidden")))
@interface SNVGGishSpeechModel : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x006000000009499b
+ (void)loadWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0060000000094912
+ (id)URLOfModelInThisBundle;	// IMP=0x00600000000945bd
- (void).cxx_destruct;	// IMP=0x0000000000094f30
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000094ce7
- (id)predictionFromInput1:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000094c55
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000094b32
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000094ab3
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x000000000009489a
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000094822
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x000000000009479d
- (id)init;	// IMP=0x0000000000094740
- (id)initWithMLModel:(id)arg1;	// IMP=0x00000000000946af

@end
