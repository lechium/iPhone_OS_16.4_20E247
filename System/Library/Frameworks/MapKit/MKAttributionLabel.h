//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface MKAttributionLabel : UIView
{
    NSAttributedString *_strokeText;	// 8 = 0x8
    NSAttributedString *_innerText;	// 16 = 0x10
    unsigned long long _mapType;	// 24 = 0x18
    _Bool _useDarkText;	// 32 = 0x20
    long long _displayStyle;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000a8b53
@property(nonatomic) long long displayStyle; // @synthesize displayStyle=_displayStyle;
@property(nonatomic) unsigned long long mapType; // @synthesize mapType=_mapType;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000000000a8a95
- (void)sizeToFit;	// IMP=0x00000000000a8904
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000a8845
- (void)_updateTextColor;	// IMP=0x00000000000a87a7
- (id)_labelTitle;	// IMP=0x00000000000a872d
- (void)_prepareLabel;	// IMP=0x00000000000a855d
- (id)_attributesWithStroke:(_Bool)arg1;	// IMP=0x00000000000a82b0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000a81cc

@end

