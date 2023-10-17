//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITextView.h>

@class NSAttributedString, NSString, UIColor, UIFont;

@interface UITextView (MULabelView)
+ (id)_mapsui_defaultTextView;	// IMP=0x00100000000bcff6
@property(nonatomic) _Bool allowsDefaultTighteningForTruncation;
@property(nonatomic, setter=_setHyphenationFactor:) float _hyphenationFactor;
@property(nonatomic) long long lineBreakMode;
@property(nonatomic) long long numberOfLines;
@property(readonly, nonatomic) double idealWidth;
@property(copy, nonatomic) NSAttributedString *_mapsui_attributedText;
@property(copy, nonatomic) NSString *_mapsui_text;

// Remaining properties
@property(nonatomic) _Bool adjustsFontForContentSizeCategory;
@property(copy, nonatomic) NSAttributedString *attributedText;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) UIFont *font;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *text;
@property(nonatomic) long long textAlignment;
@property(copy, nonatomic) UIColor *textColor;
@end
