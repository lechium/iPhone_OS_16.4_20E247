//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LPButtonStyle, LPCaptionButtonPresentationProperties, LPCircularProgressIndicator, UIButton;

__attribute__((visibility("hidden")))
@interface LPCaptionBarButtonView
{
    LPCaptionButtonPresentationProperties *_properties;	// 8 = 0x8
    LPButtonStyle *_style;	// 16 = 0x10
    UIButton *_button;	// 24 = 0x18
    UIButton *_collapsedButton;	// 32 = 0x20
    LPCircularProgressIndicator *_progressIndicator;	// 40 = 0x28
    _Bool _collapsed;	// 48 = 0x30
    double _progress;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000d076f
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic, getter=isCollapsed) _Bool collapsed; // @synthesize collapsed=_collapsed;
- (_Bool)_menuButtonShowsSingleImage;	// IMP=0x00000000000d0626
- (_Bool)_menuButtonShowsChevron;	// IMP=0x00000000000d0535
- (_Bool)_menuButtonShowsIndicator;	// IMP=0x00000000000d04e1
- (_Bool)_menuButtonShowsImages;	// IMP=0x00000000000d04d9
- (id)_createMenu;	// IMP=0x00000000000cfd3f
- (void)_configureMenuButton:(id)arg1;	// IMP=0x00000000000cf173
- (void)_configurePillButton:(id)arg1;	// IMP=0x00000000000cedd1
- (id)_createCollapsedButton;	// IMP=0x00000000000ceca7
- (id)_createButton;	// IMP=0x00000000000ce6ab
- (_Bool)isFinished;	// IMP=0x00000000000ce654
- (_Bool)isUpdating;	// IMP=0x00000000000ce5fd
- (void)updateProgressIndicator;	// IMP=0x00000000000ce556
- (void)removeTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000000ce4d2
- (void)addTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000000ce44e
- (struct CGSize)collapsedSizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000ce431
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000ce162
- (void)layoutComponentView;	// IMP=0x00000000000cdcec
- (id)initWithHost:(id)arg1 properties:(id)arg2 style:(id)arg3;	// IMP=0x00000000000cdb78
- (id)initWithHost:(id)arg1;	// IMP=0x00000000000cdb6a

@end

