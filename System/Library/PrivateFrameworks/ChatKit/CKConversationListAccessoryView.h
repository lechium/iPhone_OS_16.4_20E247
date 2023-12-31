//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class NSDictionary, NSNumber, UIImageSymbolConfiguration, UIImageView, UIView, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface CKConversationListAccessoryView : UIControl
{
    _Bool _imageNeedsEdgeAntiAliasing;	// 8 = 0x8
    _Bool _needsVisualEffects;	// 9 = 0x9
    _Bool _needsVibrancy;	// 10 = 0xa
    NSDictionary *_configStateMap;	// 16 = 0x10
    UIView *_colorView;	// 24 = 0x18
    UIVisualEffectView *_backgroundView;	// 32 = 0x20
    UIVisualEffectView *_vibrancyView;	// 40 = 0x28
    UIImageView *_imageView;	// 48 = 0x30
    NSNumber *_lastKnownState;	// 56 = 0x38
}

+ (id)defaultStateConfigMap;	// IMP=0x00600000003db912
+ (double)defaultDiameter;	// IMP=0x00600000003db904
- (void).cxx_destruct;	// IMP=0x00000000003dd7c5
@property(retain, nonatomic) NSNumber *lastKnownState; // @synthesize lastKnownState=_lastKnownState;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIVisualEffectView *vibrancyView; // @synthesize vibrancyView=_vibrancyView;
@property(retain, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *colorView; // @synthesize colorView=_colorView;
@property(nonatomic) _Bool needsVibrancy; // @synthesize needsVibrancy=_needsVibrancy;
@property(nonatomic) _Bool needsVisualEffects; // @synthesize needsVisualEffects=_needsVisualEffects;
@property(retain, nonatomic) NSDictionary *configStateMap; // @synthesize configStateMap=_configStateMap;
@property(nonatomic) _Bool imageNeedsEdgeAntiAliasing; // @synthesize imageNeedsEdgeAntiAliasing=_imageNeedsEdgeAntiAliasing;
- (void)layoutSubviews;	// IMP=0x00000000003dd18f
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000003dd101
- (void)setTintColor:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000003dd073
- (void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000003dcfe5
- (void)setBlurEffect:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000003dcf36
- (void)setBlurEffect:(id)arg1 withVibrancyEffectStyle:(long long)arg2 forState:(unsigned long long)arg3;	// IMP=0x00000000003dce7a
- (void)setVibrancyEffectStyle:(long long)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000003dcdf8
- (void)_setConfig:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000003dccfa
- (void)setSelected:(_Bool)arg1;	// IMP=0x00000000003dccb9
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000003dcc78
- (void)setEnabled:(_Bool)arg1;	// IMP=0x00000000003dcc37
@property(retain, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfiguration;
- (void)_setNeedsVisualAppearanceUpdate;	// IMP=0x00000000003dcb61
- (void)_updateVisualAppearanceForCurrentStateIfNeeded;	// IMP=0x00000000003dc1d2
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000003dc0db
- (id)configForState:(unsigned long long)arg1;	// IMP=0x00000000003dc024
- (id)init;	// IMP=0x00000000003dbfef
- (id)initWithDiameter:(double)arg1;	// IMP=0x00000000003dbfb2
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000003db9a5

@end

