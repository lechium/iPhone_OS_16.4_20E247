//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIFont;

__attribute__((visibility("hidden")))
@interface AVMobileChromelessControlsStyleSheet
{
    struct UIEdgeInsets _landscapeFullscreenInsets;	// 8 = 0x8
    struct UIEdgeInsets _portraitFullscreenInsets;	// 40 = 0x28
    struct UIEdgeInsets _embeddedInlineInsets;	// 72 = 0x48
    double _standardPaddingFullScreen;	// 104 = 0x68
    double _standardPaddingInline;	// 112 = 0x70
    UIFont *_timeLabelFont;	// 120 = 0x78
    UIFont *_titleFont;	// 128 = 0x80
    UIFont *_subtitleFont;	// 136 = 0x88
    UIFont *_infoAffordanceButtonFont;	// 144 = 0x90
    UIFont *_contentTagFont;	// 152 = 0x98
    UIFont *_prominentContentTagFont;	// 160 = 0xa0
    UIFont *_secondaryPlaybackControlsFont;	// 168 = 0xa8
    UIFont *_playPauseButtonFont;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x00000000001160db
- (double)standardPaddingInline;	// IMP=0x00000000001160c9
- (double)standardPaddingFullScreen;	// IMP=0x00000000001160b7
- (struct UIEdgeInsets)embeddedInlineInsets;	// IMP=0x0000000000116097
- (struct UIEdgeInsets)portraitFullscreenInsets;	// IMP=0x0000000000116077
- (struct UIEdgeInsets)landscapeFullscreenInsets;	// IMP=0x0000000000116057
@property(readonly, nonatomic) UIFont *secondaryPlaybackControlsFont;
@property(readonly, nonatomic) UIFont *playPauseButtonFont;
@property(readonly, nonatomic) UIFont *titleFont;
@property(readonly, nonatomic) UIFont *timeLabelFont;
@property(readonly, nonatomic) UIFont *subtitleFont;
@property(readonly, nonatomic) UIFont *prominentContentTagFont;
@property(readonly, nonatomic) UIFont *infoAffordanceButtonFont;
@property(readonly, nonatomic) UIFont *contentTagFont;
- (id)initWithTraitCollection:(id)arg1;	// IMP=0x0000000000115cfc

@end

