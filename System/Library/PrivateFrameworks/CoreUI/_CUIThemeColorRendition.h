//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CUIThemeRendition.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _CUIThemeColorRendition : CUIThemeRendition
{
    struct CGColor *_cgColor;	// 216 = 0xd8
    const struct _csicolor *_csiColor;	// 224 = 0xe0
    NSString *_colorName;	// 232 = 0xe8
}

- (void)dealloc;	// IMP=0x0000000000012c38
- (_Bool)substituteWithSystemColor;	// IMP=0x0000000000012c20
- (id)systemColorName;	// IMP=0x0000000000012c0f
- (const struct _csicolor *)csiColor;	// IMP=0x0000000000012bfe
- (struct CGColor *)cgColor;	// IMP=0x0000000000012b4c
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;	// IMP=0x0000000000012968

@end
