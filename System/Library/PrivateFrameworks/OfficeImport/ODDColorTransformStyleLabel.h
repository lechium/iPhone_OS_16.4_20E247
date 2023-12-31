//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ODDFillColorList;

__attribute__((visibility("hidden")))
@interface ODDColorTransformStyleLabel : NSObject
{
    ODDFillColorList *mFillColors;	// 8 = 0x8
    ODDFillColorList *mLineColors;	// 16 = 0x10
    ODDFillColorList *mEffectColors;	// 24 = 0x18
    ODDFillColorList *mTextLineColors;	// 32 = 0x20
    ODDFillColorList *mTextFillColors;	// 40 = 0x28
    ODDFillColorList *mTextEffectColors;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000032de8d
- (void)applyToShapeStyle:(id)arg1 index:(unsigned int)arg2 count:(unsigned int)arg3 state:(id)arg4;	// IMP=0x00000000001e7f6d
- (void)setTextEffectColors:(id)arg1;	// IMP=0x00000000001e1fc6
- (id)textEffectColors;	// IMP=0x000000000032de7f
- (void)setTextFillColors:(id)arg1;	// IMP=0x00000000001e1fb5
- (id)textFillColors;	// IMP=0x00000000001e83f1
- (void)setTextLineColors:(id)arg1;	// IMP=0x00000000001e1fa4
- (id)textLineColors;	// IMP=0x000000000032de71
- (void)setEffectColors:(id)arg1;	// IMP=0x00000000001e1f93
- (id)effectColors;	// IMP=0x00000000001e83e3
- (void)setLineColors:(id)arg1;	// IMP=0x00000000001e1f82
- (id)lineColors;	// IMP=0x00000000001e83c7
- (void)setFillColors:(id)arg1;	// IMP=0x00000000001e1f71
- (id)fillColors;	// IMP=0x00000000001e829c

@end

