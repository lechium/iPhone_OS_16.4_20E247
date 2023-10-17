//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UIColor;

__attribute__((visibility("hidden")))
@interface UITextFieldBackgroundView : UIView
{
    _Bool _active;	// 144 = 0x90
    _Bool _enabled;	// 145 = 0x91
    float _progress;	// 148 = 0x94
    UIColor *_fillColor;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x0000000001237aad
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
- (void)setProgress:(float)arg1;	// IMP=0x00000000012379d9
- (void)setActive:(_Bool)arg1;	// IMP=0x0000000001237997
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x00000000012378fb
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000123785f
- (id)initWithFrame:(struct CGRect)arg1 active:(_Bool)arg2;	// IMP=0x00000000012377b7
- (void)setEnabled:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000012377a7
- (void)_updateImages;	// IMP=0x00000000012377a1

@end
