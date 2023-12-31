//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface VUIMonogramViewConfiguration : NSObject
{
    long long _style;	// 8 = 0x8
    double _focusedSizeIncrease;	// 16 = 0x10
    UIColor *_unfocusedBgColor;	// 24 = 0x18
    UIColor *_focusedBgColor;	// 32 = 0x20
    double _unfocusedShadowAlpha;	// 40 = 0x28
    double _focusedShadowAlpha;	// 48 = 0x30
    UIImage *_unfocusedShadowImage;	// 56 = 0x38
    UIImage *_focusedShadowImage;	// 64 = 0x40
    long long _titleTextStyle;	// 72 = 0x48
    UIColor *_titleUnfocusedColor;	// 80 = 0x50
    UIColor *_titleFocusedColor;	// 88 = 0x58
    long long _subtitleTextStyle;	// 96 = 0x60
    UIColor *_subtitleUnfocusedColor;	// 104 = 0x68
    UIColor *_subtitleFocusedColor;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000000017fbfd
@property(retain, nonatomic) UIColor *subtitleFocusedColor; // @synthesize subtitleFocusedColor=_subtitleFocusedColor;
@property(retain, nonatomic) UIColor *subtitleUnfocusedColor; // @synthesize subtitleUnfocusedColor=_subtitleUnfocusedColor;
@property(nonatomic) long long subtitleTextStyle; // @synthesize subtitleTextStyle=_subtitleTextStyle;
@property(retain, nonatomic) UIColor *titleFocusedColor; // @synthesize titleFocusedColor=_titleFocusedColor;
@property(retain, nonatomic) UIColor *titleUnfocusedColor; // @synthesize titleUnfocusedColor=_titleUnfocusedColor;
@property(nonatomic) long long titleTextStyle; // @synthesize titleTextStyle=_titleTextStyle;
@property(retain, nonatomic) UIImage *focusedShadowImage; // @synthesize focusedShadowImage=_focusedShadowImage;
@property(retain, nonatomic) UIImage *unfocusedShadowImage; // @synthesize unfocusedShadowImage=_unfocusedShadowImage;
@property(nonatomic) double focusedShadowAlpha; // @synthesize focusedShadowAlpha=_focusedShadowAlpha;
@property(nonatomic) double unfocusedShadowAlpha; // @synthesize unfocusedShadowAlpha=_unfocusedShadowAlpha;
@property(retain, nonatomic) UIColor *focusedBgColor; // @synthesize focusedBgColor=_focusedBgColor;
@property(retain, nonatomic) UIColor *unfocusedBgColor; // @synthesize unfocusedBgColor=_unfocusedBgColor;
@property(nonatomic) double focusedSizeIncrease; // @synthesize focusedSizeIncrease=_focusedSizeIncrease;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(readonly, nonatomic) double unfocusedImageAlpha;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000017f8cb
- (id)initWithShadowImages:(_Bool)arg1;	// IMP=0x000000000017f794
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000000017f44c

@end

