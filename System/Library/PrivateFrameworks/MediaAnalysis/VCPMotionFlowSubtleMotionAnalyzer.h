//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCPImageMotionFlowAnalyzer, VCPMotionFlowRequest;

__attribute__((visibility("hidden")))
@interface VCPMotionFlowSubtleMotionAnalyzer
{
    float *_flow;	// 8 = 0x8
    float *_block;	// 16 = 0x10
    _Bool _scale;	// 24 = 0x18
    struct Scaler _scaler;	// 32 = 0x20
    VCPImageMotionFlowAnalyzer *_motionFlowAnalyzer;	// 88 = 0x58
    VCPMotionFlowRequest *_moflowRequest;	// 96 = 0x60
    struct vector<__CVBuffer *, std::allocator<__CVBuffer *>> _frameArray;	// 104 = 0x68
    struct OpaqueVTPixelTransferSession *_transferSession;	// 128 = 0x80
    int _frameWidth;	// 136 = 0x88
    int _frameHeight;	// 140 = 0x8c
    int _downScaleWidth;	// 144 = 0x90
    int _downScaleHeight;	// 148 = 0x94
    int _flowWidth;	// 152 = 0x98
    int _flowHeight;	// 156 = 0x9c
    int _blockSize;	// 160 = 0xa0
    int _frameNum;	// 164 = 0xa4
    int _sceneType;	// 168 = 0xa8
    _Bool _initialized;	// 172 = 0xac
    _Bool _useR2D2;	// 173 = 0xad
    float _subtleMotionScore;	// 176 = 0xb0
}

+ (_Bool)enableR2D2;	// IMP=0x00600000001e880a
- (id).cxx_construct;	// IMP=0x00000000001e9e52
- (void).cxx_destruct;	// IMP=0x00000000001e9df8
@property(readonly) float subtleMotionScore; // @synthesize subtleMotionScore=_subtleMotionScore;
- (int)analyzePixelBuffer:(struct __CVBuffer *)arg1 withFrame:(void *)arg2 withTimestamp:(CDStruct_1b6d18a9)arg3 andDuration:(CDStruct_1b6d18a9)arg4 hasSubtleScene:(int)arg5 cancel:(CDUnknownBlockType)arg6;	// IMP=0x00000000001e9bda
- (int)generateSubleMotionScore:(void *)arg1;	// IMP=0x00000000001e96ed
- (int)generateMotionFlow;	// IMP=0x00000000001e9321
- (int)preProcessing:(struct __CVBuffer *)arg1;	// IMP=0x00000000001e90e5
- (int)convertPixelBuffer:(struct __CVBuffer *)arg1 toPixelBuffer:(struct __CVBuffer **)arg2 withPixelFormat:(int)arg3;	// IMP=0x00000000001e9041
- (int)createPixelBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(int)arg3 pixelBuffer:(struct __CVBuffer **)arg4;	// IMP=0x00000000001e8f5f
- (int)convertFlow:(struct __CVBuffer *)arg1;	// IMP=0x00000000001e8d5a
- (int)prepareAnalyzerWithCVPixelBuffer:(struct __CVBuffer *)arg1 cancel:(CDUnknownBlockType)arg2;	// IMP=0x00000000001e894b
- (void)dealloc;	// IMP=0x00000000001e882c
- (id)init;	// IMP=0x00000000001e86a0

@end

