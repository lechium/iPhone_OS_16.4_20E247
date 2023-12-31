//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VCPCNNModelEspresso;

__attribute__((visibility("hidden")))
@interface VCPCNNPersonKeypointsDetector : NSObject
{
    int _maxNumRegions;	// 8 = 0x8
    float *_inputData;	// 16 = 0x10
    VCPCNNModelEspresso *_modelEspresso;	// 24 = 0x18
    int _inputWidth;	// 32 = 0x20
    int _inputHeight;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x00000000001e3ff0
- (int)parseKeypoints:(id)arg1;	// IMP=0x00000000001e3c5f
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withBox:(id)arg2 keypoints:(id)arg3;	// IMP=0x00000000001e3b9b
- (int)createInput:(float *)arg1 withBuffer:(struct __CVBuffer *)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4 box:(id)arg5;	// IMP=0x00000000001e39d3
- (int)copyImage:(struct __CVBuffer *)arg1 toData:(float *)arg2;	// IMP=0x00000000001e374d
- (void)dealloc;	// IMP=0x00000000001e370e
- (id)initWithForceCPU:(_Bool)arg1 sharedModel:(_Bool)arg2;	// IMP=0x00000000001e32b0

@end

