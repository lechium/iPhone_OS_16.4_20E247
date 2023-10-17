//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UICollectionViewCell.h"

@class NSArray, NSString, UICalendarView, UILabel, UIPointerInteraction, UIView;

__attribute__((visibility("hidden")))
@interface _UICalendarDateViewCell : UICollectionViewCell
{
    UIPointerInteraction *_pointerInteraction;	// 8 = 0x8
    struct {
        unsigned int overhangMonth:1;
        unsigned int outOfRange:1;
        unsigned int isToday:1;
        unsigned int highlightsToday:1;
        unsigned int wantsRoundedSquare:1;
    } _flags;	// 16 = 0x10
    NSString *_fontDesign;	// 24 = 0x18
    NSArray *_decorations;	// 32 = 0x20
    UILabel *_dayLabel;	// 40 = 0x28
    UIView *_decorationContentView;	// 48 = 0x30
    UIView *_backgroundView;	// 56 = 0x38
    UIView *_labelContentView;	// 64 = 0x40
    UICalendarView *_calendarView;	// 72 = 0x48
}

+ (id)emphasizedFontForTraitCollection:(id)arg1 fontDesign:(id)arg2;	// IMP=0x00100000012d48b5
+ (id)fontForTraitCollection:(id)arg1 fontDesign:(id)arg2;	// IMP=0x00100000012d4683
+ (id)reuseIdentifier;	// IMP=0x00100000012d4671
- (void).cxx_destruct;	// IMP=0x00000000012d62a8
@property(nonatomic) __weak UICalendarView *calendarView; // @synthesize calendarView=_calendarView;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;	// IMP=0x00000000012d5f6a
- (void)_updateForPreferredContentSizeCategoryChange;	// IMP=0x00000000012d5ecb
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000012d5deb
- (void)_updateFontDesign;	// IMP=0x00000000012d5cf2
- (void)_updateBackgroundView;	// IMP=0x00000000012d5ba3
- (void)_updateLabelColor;	// IMP=0x00000000012d5ad0
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000012d5a6d
- (void)setSelected:(_Bool)arg1;	// IMP=0x00000000012d59e8
- (void)configureWithDay:(id)arg1 formatter:(id)arg2 fontDesign:(id)arg3 decorations:(id)arg4 outOfRange:(_Bool)arg5 renderOverhangDays:(_Bool)arg6 highlightsToday:(_Bool)arg7;	// IMP=0x00000000012d5487
- (void)layoutSubviews;	// IMP=0x00000000012d4b0b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000012d48da

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
