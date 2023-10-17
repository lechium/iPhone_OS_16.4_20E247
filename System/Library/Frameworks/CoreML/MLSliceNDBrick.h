//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MLSliceNDBrick : NSObject
{
    _Bool _shapeInfoNeeded;	// 8 = 0x8
    int _rank;	// 12 = 0xc
    NSArray *_begin_ids;	// 16 = 0x10
    NSArray *_begin_masks;	// 24 = 0x18
    NSArray *_end_ids;	// 32 = 0x20
    NSArray *_end_masks;	// 40 = 0x28
    NSArray *_strides;	// 48 = 0x30
    NSArray *_inputRanks;	// 56 = 0x38
    NSArray *_outputRanks;	// 64 = 0x40
    NSArray *_inputShapes;	// 72 = 0x48
    NSArray *_outputShapes;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000f6cf9
@property(readonly, nonatomic) NSArray *outputShapes; // @synthesize outputShapes=_outputShapes;
@property(readonly, nonatomic) NSArray *inputShapes; // @synthesize inputShapes=_inputShapes;
@property(readonly, nonatomic) NSArray *outputRanks; // @synthesize outputRanks=_outputRanks;
@property(readonly, nonatomic) NSArray *inputRanks; // @synthesize inputRanks=_inputRanks;
@property(readonly, nonatomic) NSArray *strides; // @synthesize strides=_strides;
@property(readonly, nonatomic) NSArray *end_masks; // @synthesize end_masks=_end_masks;
@property(readonly, nonatomic) NSArray *end_ids; // @synthesize end_ids=_end_ids;
@property(readonly, nonatomic) NSArray *begin_masks; // @synthesize begin_masks=_begin_masks;
@property(readonly, nonatomic) NSArray *begin_ids; // @synthesize begin_ids=_begin_ids;
@property(readonly, nonatomic) _Bool shapeInfoNeeded; // @synthesize shapeInfoNeeded=_shapeInfoNeeded;
@property(readonly, nonatomic) int rank; // @synthesize rank=_rank;
- (void)computeOnCPUWithInputTensors:(id)arg1 outputTensors:(id)arg2;	// IMP=0x00000000000f600c
- (_Bool)hasGPUSupport;	// IMP=0x00000000000f6004
- (id)initWithParameters:(id)arg1;	// IMP=0x00000000000f5ca7
- (id)setupForInputShapes:(id)arg1 withParameters:(id)arg2;	// IMP=0x00000000000f55fb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
