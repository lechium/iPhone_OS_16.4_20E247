//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

__attribute__((visibility("hidden")))
@interface UIAssistantBarSeparatorView : UIView
{
    UIView *_innerSeparatorView;	// 8 = 0x8
}

+ (double)preferredWidth;	// IMP=0x00000000007b3a9c
- (void).cxx_destruct;	// IMP=0x00000000007b3efb
@property(retain, nonatomic) UIView *innerSeparatorView; // @synthesize innerSeparatorView=_innerSeparatorView;
- (void)layoutSubviews;	// IMP=0x00000000007b3d2a
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000007b3cfb
- (void)didMoveToWindow;	// IMP=0x00000000007b3cba
- (void)_updateVisualStyle;	// IMP=0x00000000007b3bcf
- (_Bool)_usesLightStyle;	// IMP=0x00000000007b3b8b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000007b3aaa

@end

