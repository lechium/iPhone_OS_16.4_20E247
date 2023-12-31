//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VCPCNNModelEspresso;

__attribute__((visibility("hidden")))
@interface VCPCNNGazeAnalysis : NSObject
{
    float *_inputData;	// 8 = 0x8
    VCPCNNModelEspresso *_modelEspresso;	// 16 = 0x10
}

+ (id)sharedModel:(id)arg1;	// IMP=0x00600000001d1b38
- (void).cxx_destruct;	// IMP=0x00000000001d215b
- (int)detectEyeOpennessForFace:(struct CGRect)arg1 inBuffer:(struct __CVBuffer *)arg2 eyeOpenness:(_Bool *)arg3;	// IMP=0x00000000001d2082
- (int)createInput:(float *)arg1 withBuffer:(struct __CVBuffer *)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4 faceBounds:(struct CGRect)arg5;	// IMP=0x00000000001d1f33
- (int)copyImage:(struct __CVBuffer *)arg1 toData:(float *)arg2;	// IMP=0x00000000001d1cbc
- (void)dealloc;	// IMP=0x00000000001d1c7d
- (id)init;	// IMP=0x00000000001d1820

@end

