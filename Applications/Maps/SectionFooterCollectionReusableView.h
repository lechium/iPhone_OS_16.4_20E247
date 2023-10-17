//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

@class MapsThemeButton, NSString;

@interface SectionFooterCollectionReusableView : UICollectionReusableView
{
    MapsThemeButton *_actionButton;	// 8 = 0x8
    NSString *_actionTitle;	// 16 = 0x10
    CDUnknownBlockType _actionHandler;	// 24 = 0x18
}

+ (double)heightForFooterViewWithTraitCollection:(id)arg1;	// IMP=0x004000000017c5d4
+ (id)_maximumContentSizeCategory;	// IMP=0x001000000017c456
+ (id)_fontWithTraitCollection:(id)arg1;	// IMP=0x001000000017c43d
+ (id)_effectiveTraitCollectionWithTraitCollection:(id)arg1;	// IMP=0x001000000017c3b8
+ (id)reuseIdentifier;	// IMP=0x001000000017c1d2
- (void).cxx_destruct;	// IMP=0x002000000017c6f5
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(copy, nonatomic) NSString *actionTitle; // @synthesize actionTitle=_actionTitle;
@property(retain, nonatomic) MapsThemeButton *actionButton; // @synthesize actionButton=_actionButton;
- (void)setActionTitle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000017c538
- (void)setAccessibilityIdentifiersWithBaseString:(id)arg1;	// IMP=0x001000000017c46a
- (void)_updateFonts;	// IMP=0x001000000017c2c8
- (void)_didTapActionButton;	// IMP=0x001000000017c257
- (void)prepareForReuse;	// IMP=0x001000000017c1e4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000017bea6

@end
