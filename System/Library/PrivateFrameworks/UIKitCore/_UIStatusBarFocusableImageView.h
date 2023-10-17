//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIStatusBarImageView.h"

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UIStatusBarFocusableImageView : _UIStatusBarImageView
{
    UIColor *_unfocusedTintColor;	// 40 = 0x28
    UIColor *_focusedImageTintColor;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000f9b08f
@property(retain, nonatomic) UIColor *focusedImageTintColor; // @synthesize focusedImageTintColor=_focusedImageTintColor;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000f9afd5
- (void)applyStyleAttributes:(id)arg1;	// IMP=0x0000000000f9af49
- (_Bool)canBecomeFocused;	// IMP=0x0000000000f9af41
- (_Bool)isUserInteractionEnabled;	// IMP=0x0000000000f9af39

@end
