//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AMSUICommonButton.h"

@class AMSDialogAction, UIColor, UIFont;

__attribute__((visibility("hidden")))
@interface AMSUIMessageButton : AMSUICommonButton
{
    _Bool _isFooterButton;	// 8 = 0x8
    AMSDialogAction *_dialogAction;	// 16 = 0x10
    UIFont *_preferredFont;	// 24 = 0x18
    unsigned long long _messageStyle;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000040616
@property(nonatomic) _Bool isFooterButton; // @synthesize isFooterButton=_isFooterButton;
@property(nonatomic) unsigned long long messageStyle; // @synthesize messageStyle=_messageStyle;
@property(retain, nonatomic) UIFont *preferredFont; // @synthesize preferredFont=_preferredFont;
@property(readonly, nonatomic) AMSDialogAction *dialogAction; // @synthesize dialogAction=_dialogAction;
- (void)_axSettingsDidUpdate:(id)arg1;	// IMP=0x000000000004058c
- (id)_defaultTextFont;	// IMP=0x0000000000040426
- (id)_defaultIconColor;	// IMP=0x000000000004037d
- (id)_defaultContentColor;	// IMP=0x00000000000401fc
@property(retain, nonatomic) UIColor *preferredBackgroundColor;
@property(retain, nonatomic) UIColor *preferredForegroundColor;
- (id)_closeImage;	// IMP=0x000000000003ff6f
- (id)_chevronImage;	// IMP=0x000000000003fea2
- (id)_symbolConfiguration;	// IMP=0x000000000003fc16
- (_Bool)isDefaultCloseButton;	// IMP=0x000000000003fb29
- (void)_setAXSettings;	// IMP=0x000000000003fa65
- (void)setFooterStyle;	// IMP=0x000000000003f876
- (void)_setImagePadding;	// IMP=0x000000000003f659
- (id)_appendChevronToString:(id)arg1;	// IMP=0x000000000003f432
- (void)_endObservations;	// IMP=0x000000000003f3d2
- (void)_startObservations;	// IMP=0x000000000003f36b
- (void)_refresh;	// IMP=0x000000000003f2ee
- (void)_setAccessibilityIdentifier;	// IMP=0x000000000003f28a
- (void)_setupWithDialogAction:(id)arg1;	// IMP=0x000000000003ebba
- (void)_setLocalOverrideTraitCollection:(id)arg1;	// IMP=0x000000000003ea51
- (void)layoutSubviews;	// IMP=0x000000000003ea10
- (void)dealloc;	// IMP=0x000000000003e9d2
- (id)initWithDialogAction:(id)arg1 messageStyle:(unsigned long long)arg2;	// IMP=0x000000000003e8fa

@end
