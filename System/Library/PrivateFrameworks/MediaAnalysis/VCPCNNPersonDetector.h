//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, VCPCNNModelEspresso;

__attribute__((visibility("hidden")))
@interface VCPCNNPersonDetector : NSObject
{
    int _maxNumRegions;	// 8 = 0x8
    float *_inputData;	// 16 = 0x10
    NSArray *_outputNames;	// 24 = 0x18
    vector_aebc2d99 _outputsData;	// 32 = 0x20
    VCPCNNModelEspresso *_modelEspresso;	// 56 = 0x38
    int _inputWidth;	// 64 = 0x40
    int _inputHeight;	// 68 = 0x44
}

- (id).cxx_construct;	// IMP=0x000000000025c4a6
- (void).cxx_destruct;	// IMP=0x000000000025c46c
- (int)personDetection:(struct __CVBuffer *)arg1 personRegions:(id)arg2 cancel:(CDUnknownBlockType)arg3;	// IMP=0x000000000025c171
- (int)generatePersonRegions:(const void *)arg1 boxes:(id)arg2 maxNumRegions:(int)arg3;	// IMP=0x000000000025be13
- (int)retrieveBoxes:(float *)arg1 outHeight:(int)arg2 outWidth:(int)arg3 boxes:(id)arg4 anchorBox:(float [3][2])arg5;	// IMP=0x000000000025bac8
- (void)nonMaxSuppression:(id)arg1;	// IMP=0x000000000025b890
- (int)generatePersonBoxes:(id)arg1;	// IMP=0x000000000025b7bd
- (int)createInput:(float *)arg1 withBuffer:(struct __CVBuffer *)arg2 inputHeight:(int)arg3 inputWidth:(int)arg4;	// IMP=0x000000000025b6eb
- (int)copyImage:(struct __CVBuffer *)arg1 toData:(float *)arg2;	// IMP=0x000000000025b4b2
- (id)initWithMaxNumRegions:(int)arg1 forceCPU:(_Bool)arg2 sharedModel:(_Bool)arg3 inputConfig:(id)arg4;	// IMP=0x000000000025ae30

@end

