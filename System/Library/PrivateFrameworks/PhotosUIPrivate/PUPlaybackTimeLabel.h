//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface PUPlaybackTimeLabel : UIView
{
    _Bool __needsUpdateBackground;	// 8 = 0x8
    _Bool __needsUpdateLabel;	// 9 = 0x9
    long long _format;	// 16 = 0x10
    UIView *__backgroundView;	// 24 = 0x18
    UILabel *__label;	// 32 = 0x20
    CDStruct_1b6d18a9 _currentPlaybackTime;	// 40 = 0x28
    CDStruct_1b6d18a9 _playbackDuration;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000003ef4c9
@property(nonatomic, setter=_setNeedsUpdateLabel:) _Bool _needsUpdateLabel; // @synthesize _needsUpdateLabel=__needsUpdateLabel;
@property(nonatomic, setter=_setNeedsUpdateBackground:) _Bool _needsUpdateBackground; // @synthesize _needsUpdateBackground=__needsUpdateBackground;
@property(readonly, nonatomic) UILabel *_label; // @synthesize _label=__label;
@property(readonly, nonatomic) UIView *_backgroundView; // @synthesize _backgroundView=__backgroundView;
@property(nonatomic) CDStruct_1b6d18a9 playbackDuration; // @synthesize playbackDuration=_playbackDuration;
@property(nonatomic) CDStruct_1b6d18a9 currentPlaybackTime; // @synthesize currentPlaybackTime=_currentPlaybackTime;
@property(nonatomic) long long format; // @synthesize format=_format;
- (id)_stringFromTimeInterval:(double)arg1;	// IMP=0x00000000003ef3b6
- (id)_labelTextWithFormat:(long long)arg1 elapsedInterval:(double)arg2 remainingInterval:(double)arg3;	// IMP=0x00000000003ef269
- (struct CGSize)_maximumLabelSizeWithDuration:(double)arg1;	// IMP=0x00000000003eef45
- (void)_updateLabelIfNeeded;	// IMP=0x00000000003eedda
- (void)_invalidateLabel;	// IMP=0x00000000003eeda7
- (void)_updateBackgroundIfNeeded;	// IMP=0x00000000003eebf1
- (void)_invalidateBackground;	// IMP=0x00000000003eebbe
- (void)_updateIfNeeded;	// IMP=0x00000000003eeb77
- (void)_setNeedsUpdate;	// IMP=0x00000000003eeb65
- (_Bool)_needsUpdate;	// IMP=0x00000000003eeb2c
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000003eea8b
- (void)layoutSubviews;	// IMP=0x00000000003eea4a
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000003ee5ef

@end

