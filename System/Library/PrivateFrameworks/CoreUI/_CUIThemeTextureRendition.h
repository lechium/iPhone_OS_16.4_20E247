//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CUIThemeRendition.h"

@class CUIStructuredThemeStore, NSMutableArray, TXRTextureInfo;

__attribute__((visibility("hidden")))
@interface _CUIThemeTextureRendition : CUIThemeRendition
{
    CUIStructuredThemeStore *_sourceProvider;	// 216 = 0xd8
    long long _textureInterpretation;	// 224 = 0xe0
    _Bool _textureSourceImageOpaque;	// 232 = 0xe8
    TXRTextureInfo *_textureInfo;	// 240 = 0xf0
    NSMutableArray *_textureMipLevels;	// 248 = 0xf8
}

- (void).cxx_destruct;	// IMP=0x00000000000703e3
- (id)provideImageInfoAtLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 face:(unsigned long long)arg3 withBufferAllocator:(id)arg4;	// IMP=0x0000000000070009
- (long long)textureIntepretation;	// IMP=0x000000000006fff8
- (id)provideTextureInfo;	// IMP=0x000000000006ffe7
- (id)_texturedImageWithKey:(id)arg1;	// IMP=0x000000000006ff53
- (void)_setStructuredThemeStore:(id)arg1;	// IMP=0x000000000006ff3f
- (id)mipLevels;	// IMP=0x000000000006ff2e
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;	// IMP=0x000000000006fbc3
- (void)dealloc;	// IMP=0x000000000006fb6b
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2;	// IMP=0x000000000006fb59

@end

