//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIButton.h"

@class NSString, UIVisualEffectView, _UIContextMenuSeparatorView;

__attribute__((visibility("hidden")))
@interface _UIEditMenuPageButton : UIButton
{
    _UIContextMenuSeparatorView *_separatorView;	// 144 = 0x90
    UIVisualEffectView *_backgroundView;	// 152 = 0x98
    UIVisualEffectView *_selectedBackgroundView;	// 160 = 0xa0
    struct NSDirectionalEdgeInsets _defaultInsets;	// 168 = 0xa8
    long long _direction;	// 200 = 0xc8
    struct UIEdgeInsets _arrowEdgeInsets;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x0000000000d63370
@property(nonatomic) struct UIEdgeInsets arrowEdgeInsets; // @synthesize arrowEdgeInsets=_arrowEdgeInsets;
@property(readonly, nonatomic) long long direction; // @synthesize direction=_direction;
- (void)layoutSubviews;	// IMP=0x0000000000d6319e
- (id)selectedBackgroundView;	// IMP=0x0000000000d63074
- (id)backgroundView;	// IMP=0x0000000000d62fda
- (void)_configureButton;	// IMP=0x0000000000d62b02
- (id)_imageNameForCurrentDirection;	// IMP=0x0000000000d62ada
@property(retain, nonatomic) NSString *backgroundGroupName;
- (id)initWithDirection:(long long)arg1;	// IMP=0x0000000000d628e7

@end
