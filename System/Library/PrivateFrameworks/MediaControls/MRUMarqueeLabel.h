//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class BSUIEmojiLabelView, MPUMarqueeView, NSString, UIColor, UIFont;

__attribute__((visibility("hidden")))
@interface MRUMarqueeLabel : UIView
{
    _Bool _marqueeEnabled;	// 8 = 0x8
    NSString *_text;	// 16 = 0x10
    UIColor *_textColor;	// 24 = 0x18
    UIView *_animationReferenceView;	// 32 = 0x20
    UIFont *_font;	// 40 = 0x28
    long long _numberOfLines;	// 48 = 0x30
    long long _textAlignment;	// 56 = 0x38
    double _contentGap;	// 64 = 0x40
    MPUMarqueeView *_marqueeView;	// 72 = 0x48
    BSUIEmojiLabelView *_label;	// 80 = 0x50
    struct CGSize _contentSize;	// 88 = 0x58
    struct UIEdgeInsets _fadeEdgeInsets;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000000d7934
@property(retain, nonatomic) BSUIEmojiLabelView *label; // @synthesize label=_label;
@property(retain, nonatomic) MPUMarqueeView *marqueeView; // @synthesize marqueeView=_marqueeView;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) double contentGap; // @synthesize contentGap=_contentGap;
@property(nonatomic) struct UIEdgeInsets fadeEdgeInsets; // @synthesize fadeEdgeInsets=_fadeEdgeInsets;
@property(nonatomic, getter=isMarqueeEnabled) _Bool marqueeEnabled; // @synthesize marqueeEnabled=_marqueeEnabled;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) __weak UIView *animationReferenceView; // @synthesize animationReferenceView=_animationReferenceView;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void)addCoordinatedMarqueeView:(id)arg1;	// IMP=0x00000000000d77cb
- (id)viewForFirstBaselineLayout;	// IMP=0x00000000000d77ae
- (void)layoutSubviews;	// IMP=0x00000000000d7207
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000d70f3
- (void)mru_applyVisualStylingWithColor:(id)arg1 alpha:(double)arg2 blendMode:(long long)arg3;	// IMP=0x0000000000056e0c
- (void)mt_applyVisualStyling:(id)arg1;	// IMP=0x0000000000056d9c

@end

