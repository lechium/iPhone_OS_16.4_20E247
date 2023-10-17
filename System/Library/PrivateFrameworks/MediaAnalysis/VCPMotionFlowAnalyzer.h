//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCPMotionFlowRequest;

__attribute__((visibility("hidden")))
@interface VCPMotionFlowAnalyzer
{
    float *_flow;	// 8 = 0x8
    _Bool _scale;	// 16 = 0x10
    struct Scaler _scaler;	// 24 = 0x18
    VCPMotionFlowRequest *_moflowRequest;	// 80 = 0x50
    struct vector<__CVBuffer *, std::allocator<__CVBuffer *>> _frameArray;	// 88 = 0x58
    struct OpaqueVTPixelTransferSession *_transferSession;	// 112 = 0x70
    int _frameWidth;	// 120 = 0x78
    int _frameHeight;	// 124 = 0x7c
    int _downScaleWidth;	// 128 = 0x80
    int _downScaleHeight;	// 132 = 0x84
    int _flowWidth;	// 136 = 0x88
    int _flowHeight;	// 140 = 0x8c
    int _frameNum;	// 144 = 0x90
    _Bool _initialized;	// 148 = 0x94
}

- (id).cxx_construct;	// IMP=0x000000000029bb9f
- (void).cxx_destruct;	// IMP=0x000000000029bb56
- (int)analyzePixelBuffer:(struct __CVBuffer *)arg1 withFrame:(void *)arg2 withTimestamp:(CDStruct_1b6d18a9)arg3 andDuration:(CDStruct_1b6d18a9)arg4 cancel:(CDUnknownBlockType)arg5;	// IMP=0x000000000029ba84
- (int)generateMotionFlow;	// IMP=0x000000000029b871
- (int)preProcessing:(struct __CVBuffer *)arg1;	// IMP=0x000000000029b635
- (int)convertPixelBuffer:(struct __CVBuffer *)arg1 toPixelBuffer:(struct __CVBuffer **)arg2 withPixelFormat:(int)arg3;	// IMP=0x000000000029b591
- (int)createPixelBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(int)arg3 pixelBuffer:(struct __CVBuffer **)arg4;	// IMP=0x000000000029b4af
- (int)convertFlow:(struct __CVBuffer *)arg1;	// IMP=0x000000000029b2bd
- (int)prepareAnalyzerWithCVPixelBuffer:(struct __CVBuffer *)arg1 cancel:(CDUnknownBlockType)arg2;	// IMP=0x000000000029afbb
- (void)dealloc;	// IMP=0x000000000029aec5
- (id)init;	// IMP=0x000000000029ade0

@end
