//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UIColor, UIImageView;

__attribute__((visibility("hidden")))
@interface _UIParallaxDimmingView : UIView
{
    UIImageView *leftEdgeFade;	// 144 = 0x90
    _Bool _backgroundIsDimmed;	// 152 = 0x98
    UIColor *_dimmingColor;	// 160 = 0xa0
    UIView *_addingSubview;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x0000000000591080
@property(retain, nonatomic) UIView *addingSubview; // @synthesize addingSubview=_addingSubview;
@property(nonatomic) _Bool backgroundIsDimmed; // @synthesize backgroundIsDimmed=_backgroundIsDimmed;
@property(retain, nonatomic) UIColor *dimmingColor; // @synthesize dimmingColor=_dimmingColor;
- (void)crossFade;	// IMP=0x0000000000590fd8
- (id)_basicAnimationWithKeyPath:(id)arg1;	// IMP=0x0000000000590f76
- (void)didMoveToWindow;	// IMP=0x0000000000590e9c
- (void)_updateLeftEdgeFade:(_Bool)arg1;	// IMP=0x0000000000590cde
- (id)initViewWrappingView:(id)arg1 withLeftBorder:(double)arg2 shouldReverseLayoutDirection:(_Bool)arg3;	// IMP=0x0000000000590b86
- (id)defaultBorderColor;	// IMP=0x0000000000590af6
- (id)initWithFrame:(struct CGRect)arg1 overrideDimmingColor:(id)arg2;	// IMP=0x00000000005909ac
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000590998

@end
