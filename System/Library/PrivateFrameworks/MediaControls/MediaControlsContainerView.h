//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MPCPlayerResponse, MediaControlsTimeControl, MediaControlsTransportStackView, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface MediaControlsContainerView : UIView
{
    _Bool _empty;	// 8 = 0x8
    long long _style;	// 16 = 0x10
    MediaControlsTransportStackView *_transportStackView;	// 24 = 0x18
    MediaControlsTimeControl *_timeControl;	// 32 = 0x20
    UIVisualEffectView *_primaryVisualEffectView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000099c50
@property(retain, nonatomic) UIVisualEffectView *primaryVisualEffectView; // @synthesize primaryVisualEffectView=_primaryVisualEffectView;
@property(retain, nonatomic) MediaControlsTimeControl *timeControl; // @synthesize timeControl=_timeControl;
@property(retain, nonatomic) MediaControlsTransportStackView *transportStackView; // @synthesize transportStackView=_transportStackView;
@property(nonatomic, getter=isEmpty) _Bool empty; // @synthesize empty=_empty;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000099bae
- (void)_updateStyle;	// IMP=0x0000000000099a75
@property(retain, nonatomic) MPCPlayerResponse *response;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000099917
@property(nonatomic, getter=isTimeControlOnScreen) _Bool timeControlOnScreen;
- (void)setRatingActionSheetDelegate:(id)arg1;	// IMP=0x0000000000099815
- (void)layoutSubviews;	// IMP=0x0000000000099386
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000099191

@end

