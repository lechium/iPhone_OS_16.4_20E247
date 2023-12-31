//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPButton.h>

@class CCUICAPackageView;

__attribute__((visibility("hidden")))
@interface MediaControlsRoutingButtonView : MPButton
{
    _Bool _userInterfaceStyleSwitchingEnabled;	// 8 = 0x8
    long long _currentMode;	// 16 = 0x10
    long long _deviceType;	// 24 = 0x18
    CCUICAPackageView *_packageView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000043dbc
@property(retain, nonatomic) CCUICAPackageView *packageView; // @synthesize packageView=_packageView;
@property(nonatomic, getter=isUserInterfaceStyleSwitchingEnabled) _Bool userInterfaceStyleSwitchingEnabled; // @synthesize userInterfaceStyleSwitchingEnabled=_userInterfaceStyleSwitchingEnabled;
@property(nonatomic) long long deviceType; // @synthesize deviceType=_deviceType;
@property(nonatomic) long long currentMode; // @synthesize currentMode=_currentMode;
- (void)_updateGlyphState;	// IMP=0x0000000000043c86
- (void)_updateGlyphPackage;	// IMP=0x0000000000043b6d
- (id)_glyphResource;	// IMP=0x0000000000043abd
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000043a15
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000043914
- (void)layoutSubviews;	// IMP=0x00000000000437aa
- (void)setAlpha:(double)arg1;	// IMP=0x0000000000043722
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000434fe

@end

