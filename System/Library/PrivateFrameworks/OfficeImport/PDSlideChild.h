//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OADColorMap, OADThemeOverrides;

__attribute__((visibility("hidden")))
@interface PDSlideChild
{
    _Bool mShowMasterPlaceholderAnimations;	// 73 = 0x49
    _Bool mShowMasterShapes;	// 74 = 0x4a
    OADThemeOverrides *mThemeOverrides;	// 80 = 0x50
    OADColorMap *mColorMapOverride;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000443cf9
- (id)description;	// IMP=0x0000000000443cbb
- (id)drawingTheme;	// IMP=0x0000000000443c1d
- (void)doneWithContent;	// IMP=0x0000000000443bb6
- (id)defaultTextListStyle;	// IMP=0x0000000000443b52
- (id)styleMatrix;	// IMP=0x00000000001e859e
- (id)colorMap;	// IMP=0x0000000000038305
- (id)fontScheme;	// IMP=0x00000000001cb46a
- (id)colorScheme;	// IMP=0x0000000000038239
- (void)setColorMapOverride:(id)arg1;	// IMP=0x0000000000164625
- (id)colorMapOverride;	// IMP=0x000000000003838a
- (id)themeOverrides;	// IMP=0x00000000000382f0
- (void)setShowMasterShapes:(_Bool)arg1;	// IMP=0x000000000003be06
- (_Bool)showMasterShapes;	// IMP=0x00000000000a1c00
- (void)setShowMasterPlaceholderAnimations:(_Bool)arg1;	// IMP=0x00000000001cb045
- (_Bool)showMasterPlaceholderAnimations;	// IMP=0x0000000000443b42
- (id)init;	// IMP=0x0000000000037699

@end

