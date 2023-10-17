//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCPCNNData;

__attribute__((visibility("hidden")))
@interface VCPCNNConvBlock
{
    int _filterSize;	// 52 = 0x34
    int _filterNum;	// 56 = 0x38
    VCPCNNData *_filter;	// 64 = 0x40
    VCPCNNData *_bias;	// 72 = 0x48
    int _chunk;	// 80 = 0x50
    _Bool _reLU;	// 84 = 0x54
    int _padding;	// 88 = 0x58
    int _padSize;	// 92 = 0x5c
    int _stride;	// 96 = 0x60
    int _groups;	// 100 = 0x64
    _Bool _batchNorm;	// 104 = 0x68
}

+ (id)convBlockWithFilterSize:(int)arg1 filterNum:(int)arg2 chunk:(int)arg3 reLU:(_Bool)arg4 padding:(_Bool)arg5 groups:(int)arg6 stride:(int)arg7 batchNorm:(_Bool)arg8;	// IMP=0x006000000020431c
+ (id)convBlockWithFilterSize:(int)arg1 filterNum:(int)arg2 chunk:(int)arg3 reLU:(_Bool)arg4 padding:(_Bool)arg5;	// IMP=0x006000000020428d
+ (Class)convBlockClass:(int)arg1;	// IMP=0x006000000020421f
- (void).cxx_destruct;	// IMP=0x0000000000204d9d
- (_Bool)useGPU;	// IMP=0x0000000000204d85
- (_Bool)supportGPU;	// IMP=0x0000000000204d7d
- (int)constructBlock:(id)arg1 context:(id)arg2;	// IMP=0x00000000002044b7
- (id)initWithParameters:(int)arg1 filterNum:(int)arg2 chunk:(int)arg3 reLU:(_Bool)arg4 padding:(_Bool)arg5 groups:(int)arg6 stride:(int)arg7 batchNorm:(_Bool)arg8;	// IMP=0x00000000002043c0

@end
