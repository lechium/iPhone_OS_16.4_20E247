//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, NSDictionary, NSLayoutConstraint, NSMapTable, NSString, UIColor, UIFont, UILabel, UILayoutGuide, _UIDatePickerLinkedLabelStorage;

__attribute__((visibility("hidden")))
@interface _UIDatePickerLinkedLabel : UIView
{
    struct {
        unsigned int needsStorageSync:1;
    } _flags;	// 8 = 0x8
    UILabel *_renderingLabel;	// 16 = 0x10
    struct CGSize _lastSize;	// 24 = 0x18
    NSMapTable *_longestPossibleTitle;	// 40 = 0x28
    NSMapTable *_longestPossibleWidth;	// 48 = 0x30
    NSLayoutConstraint *_renderLabelXConstraint;	// 56 = 0x38
    _UIDatePickerLinkedLabelStorage *_storage;	// 64 = 0x40
    UILayoutGuide *_contentLayoutGuide;	// 72 = 0x48
    NSArray *_titles;	// 80 = 0x50
    NSArray *_possibleTitles;	// 88 = 0x58
    NSDictionary *_overrideAttributes;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000070f566
@property(retain, nonatomic) NSDictionary *overrideAttributes; // @synthesize overrideAttributes=_overrideAttributes;
@property(retain, nonatomic) NSArray *possibleTitles; // @synthesize possibleTitles=_possibleTitles;
@property(retain, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(readonly, nonatomic) UILayoutGuide *contentLayoutGuide; // @synthesize contentLayoutGuide=_contentLayoutGuide;
@property(retain, nonatomic) _UIDatePickerLinkedLabelStorage *storage; // @synthesize storage=_storage;
- (void)setContentHuggingPriority:(float)arg1 forAxis:(long long)arg2;	// IMP=0x000000000070f43c
- (void)setContentCompressionResistancePriority:(float)arg1 forAxis:(long long)arg2;	// IMP=0x000000000070f3dc
@property(nonatomic) _Bool textColorFollowsTintColor;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory;
@property(nonatomic) long long textAlignment;
@property(retain, nonatomic) UIColor *textColor;
@property(nonatomic) double minimumScaleFactor;
@property(nonatomic) _Bool adjustsFontSizeToFitWidth;
@property(retain, nonatomic) UIFont *font;
- (id)_longestPossibleTitleForPriority:(unsigned long long)arg1 width:(double *)arg2;	// IMP=0x000000000070ebd1
- (void)_invalidatePossibleTitleCaches;	// IMP=0x000000000070eac3
- (long long)_renderPriorityForContainerWidth:(double)arg1 initialPriority:(long long)arg2;	// IMP=0x000000000070ea29
- (void)_storageSyncWithContainerSize:(struct CGSize)arg1;	// IMP=0x000000000070e84c
- (void)didMoveToWindow;	// IMP=0x000000000070e7de
- (void)_storageSyncIfNecessaryWithContainerSize:(struct CGSize)arg1;	// IMP=0x000000000070e7bd
- (void)_setNeedsStorageSync;	// IMP=0x000000000070e7a0
- (void)_updateAlignmentConstraint;	// IMP=0x000000000070e56e
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000070e460
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x000000000070e3ba
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000070e314
- (void)layoutSubviews;	// IMP=0x000000000070e2ad
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000070e29b
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;	// IMP=0x000000000070e1ba
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000070db26

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
