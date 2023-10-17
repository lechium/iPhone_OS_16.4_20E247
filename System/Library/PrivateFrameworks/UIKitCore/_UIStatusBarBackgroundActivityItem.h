//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIStatusBarActivityIconView, _UIStatusBarImageView, _UIStatusBarPillView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarBackgroundActivityItem
{
    _UIStatusBarPillView *_backgroundView;	// 8 = 0x8
    _UIStatusBarActivityIconView *_iconView;	// 16 = 0x10
    _UIStatusBarImageView *_secondaryIconView;	// 24 = 0x18
    long long _previousType;	// 32 = 0x20
}

+ (double)_fontSizeAdjustmentForActivityType:(long long)arg1;	// IMP=0x0040000000f63e4c
+ (double)_verticalOffsetForActivityType:(long long)arg1;	// IMP=0x0040000000f63ddf
+ (_Bool)_identifierContainsSecondaryItemImage:(id)arg1;	// IMP=0x0040000000f62d79
+ (_Bool)_identifierContainsItemImage:(id)arg1;	// IMP=0x0040000000f62d1b
+ (id)secondaryIconDisplayIdentifier;	// IMP=0x0040000000f62b71
+ (id)backgroundDisplayIdentifier;	// IMP=0x0040000000f62b58
- (void).cxx_destruct;	// IMP=0x0000000000f645ed
@property(nonatomic) long long previousType; // @synthesize previousType=_previousType;
@property(retain, nonatomic) _UIStatusBarImageView *secondaryIconView; // @synthesize secondaryIconView=_secondaryIconView;
@property(retain, nonatomic) _UIStatusBarActivityIconView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) _UIStatusBarPillView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (_Bool)crossfadeForUpdate:(id)arg1;	// IMP=0x0000000000f644ee
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1;	// IMP=0x0000000000f64437
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1;	// IMP=0x0000000000f64380
- (id)viewForIdentifier:(id)arg1;	// IMP=0x0000000000f64298
- (id)imageView;	// IMP=0x0000000000f64286
- (void)_create_secondaryIconView;	// IMP=0x0000000000f6422c
- (void)_create_iconView;	// IMP=0x0000000000f6419b
- (void)_create_backgroundView;	// IMP=0x0000000000f6410a
- (id)_visualEffectForActivityType:(long long)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000f6407d
- (_Bool)_shouldPulseForActivityType:(long long)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000f64040
- (_Bool)_shouldRingForActivityType:(long long)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000f64010
- (id)_backgroundColorForActivityType:(long long)arg1;	// IMP=0x0000000000f63e6f
- (id)secondaryImageForUpdate:(id)arg1;	// IMP=0x0000000000f63d1a
- (id)_secondarySystemImageNameForActivityType:(long long)arg1;	// IMP=0x0000000000f63d12
- (id)imageForUpdate:(id)arg1;	// IMP=0x0000000000f63a2b
- (id)_textLabelForActivityType:(long long)arg1;	// IMP=0x0000000000f63a14
- (id)_imageNameForActivityType:(long long)arg1;	// IMP=0x0000000000f639f2
- (id)_systemImageNameForActivityType:(long long)arg1;	// IMP=0x0000000000f639d8
- (id)imageNameForUpdate:(id)arg1;	// IMP=0x0000000000f63948
- (id)systemImageNameForUpdate:(id)arg1;	// IMP=0x0000000000f638b8
- (void)applyStyleAttributes:(id)arg1 toDisplayItem:(id)arg2;	// IMP=0x0000000000f637f1
- (void)updatedDisplayItemsWithData:(id)arg1;	// IMP=0x0000000000f63750
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;	// IMP=0x0000000000f62eaf
- (_Bool)canEnableDisplayItem:(id)arg1 fromData:(id)arg2;	// IMP=0x0000000000f62dd7
- (id)_backgroundActivityViewForIdentifier:(id)arg1;	// IMP=0x0000000000f62c9a
- (id)createDisplayItemForIdentifier:(id)arg1;	// IMP=0x0000000000f62be1
- (id)indicatorEntryKey;	// IMP=0x0000000000f62bcd
- (id)initWithIdentifier:(id)arg1 statusBar:(id)arg2;	// IMP=0x0000000000f62b8a

@end
