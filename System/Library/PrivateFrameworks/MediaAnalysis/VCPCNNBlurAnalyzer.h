//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VCPCNNBlurAnalyzer
{
    unsigned long long _revision;	// 8 = 0x8
    _Bool _sdof;	// 16 = 0x10
}

+ (id)analyzer;	// IMP=0x00600000001c8b58
+ (id)analyzerWithRevision:(unsigned long long)arg1;	// IMP=0x00600000001c8ad0
@property _Bool sdof; // @synthesize sdof=_sdof;
- (int)computeCNNBasedSharpness:(struct __CVBuffer *)arg1 sharpnessScore:(float *)arg2 textureScore:(float *)arg3 contrast:(float)arg4 cancel:(CDUnknownBlockType)arg5;	// IMP=0x00000000001c943d
- (float)calculateScoreFromNetworkOutput:(float *)arg1 outChannel:(int)arg2 outHeight:(int)arg3 outWidth:(int)arg4 textureness:(char *)arg5 contrast:(float)arg6 imgWidth:(int)arg7;	// IMP=0x00000000001c8ee3
- (int)scaleRegion:(struct CGRect *)arg1 ofImage:(struct __CVBuffer *)arg2 toData:(float *)arg3 withWidth:(int)arg4 andHeight:(int)arg5;	// IMP=0x00000000001c8c5b
- (void)copyBufferFrom:(char *)arg1 fromStride:(long long)arg2 toPtr:(float *)arg3 toStride:(long long)arg4 toWidth:(int)arg5 toHeight:(int)arg6;	// IMP=0x00000000001c8c04
- (int)computeSharpnessScore:(float *)arg1 textureness:(char *)arg2 contrast:(float)arg3 imgWidth:(int)arg4 cancel:(CDUnknownBlockType)arg5;	// IMP=0x00000000001c8bf9
- (float *)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int *)arg3 cnnInputWidth:(int *)arg4;	// IMP=0x00000000001c8bf1
- (int)prepareModelForSourceWidth:(int)arg1 andSourceHeight:(int)arg2;	// IMP=0x00000000001c8be6
- (unsigned long long)getRevision;	// IMP=0x00000000001c8bd5
- (id)init;	// IMP=0x00000000001c8bb8
- (id)initWithRevision:(unsigned long long)arg1;	// IMP=0x00000000001c8b74

@end

