//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor, _UIUCBKBSelectionBackground;
@protocol _UIButtonBarAppearanceDelegate;

__attribute__((visibility("hidden")))
@interface _UIUCBGroupBarButtonVisualProviderIOS
{
    _UIUCBKBSelectionBackground *_selectionBackgroundView;	// 56 = 0x38
    id <_UIButtonBarAppearanceDelegate> _appearanceDelegate;	// 64 = 0x40
    _Bool _lightKeyboard;	// 72 = 0x48
    UIColor *_tintColor;	// 80 = 0x50
}

+ (id)darkKeyboardProvider;	// IMP=0x006000000013389a
+ (id)lightKeyboardProvider;	// IMP=0x006000000013387d
- (void).cxx_destruct;	// IMP=0x000000000013415f
@property(nonatomic) _Bool lightKeyboard; // @synthesize lightKeyboard=_lightKeyboard;
- (void)setTintColor:(id)arg1;	// IMP=0x000000000013412e
- (id)tintColor;	// IMP=0x000000000013411d
- (struct CGPoint)menuAnchorPoint;	// IMP=0x0000000000133f5a
- (_Bool)shouldLift;	// IMP=0x0000000000133f34
- (void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3;	// IMP=0x0000000000133ba4
- (void)updateButton:(id)arg1 toUseButtonShapes:(_Bool)arg2;	// IMP=0x0000000000133b85
- (id)imageSymbolConfiguration;	// IMP=0x0000000000133ade
- (void)updateButton:(id)arg1 forSelectedState:(_Bool)arg2;	// IMP=0x00000000001339df
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000133983
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001338bf
- (long long)_securePasteButtonSite;	// IMP=0x00000000001338b7

@end
