//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVPlayback/TVPPlayer.h>

__attribute__((visibility("hidden")))
@interface VUIPlayer : TVPPlayer
{
}

+ (void)updateSupplementaryAvailableAudioLanguageCodes:(id)arg1;	// IMP=0x008000000002822c
+ (id)savedPreferredAudioLanguageCode;	// IMP=0x00800000000281d5
+ (void)initialize;	// IMP=0x0080000000027f38
- (void)_configurePlayerForCurrentNetworkSettingsAndMediaItem;	// IMP=0x00000000000283a7
- (void)_videoPlaybackSettingsDidChange:(id)arg1;	// IMP=0x00000000000282b4
- (void)_currentMediaItemDidChange:(id)arg1;	// IMP=0x00000000000282a2
- (void)dealloc;	// IMP=0x0000000000028160
- (id)initWithName:(id)arg1;	// IMP=0x0000000000027f88

@end

