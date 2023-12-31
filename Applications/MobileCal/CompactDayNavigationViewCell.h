//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EKUITodayCirclePulseView, NSString, TappableDayNumber, UIColor, UIImageView, UILabel, UIView;

@interface CompactDayNavigationViewCell
{
    _Bool _monthAnimationState;	// 8 = 0x8
    _Bool _applyMonthAnimationStateAdjustments;	// 9 = 0x9
    _Bool _hasOverlay;	// 10 = 0xa
    NSString *_displayString;	// 16 = 0x10
    NSString *_overlayString;	// 24 = 0x18
    TappableDayNumber *_dateNumber;	// 32 = 0x20
    UILabel *_monthAnimationStateDayNumber;	// 40 = 0x28
    UILabel *_monthAnimationStateOverlay;	// 48 = 0x30
    double _circleDiameter;	// 56 = 0x38
    double _circleDiameterOverlay;	// 64 = 0x40
    double _circleDiameterOverlayLarge;	// 72 = 0x48
    EKUITodayCirclePulseView *_pulseView;	// 80 = 0x50
    UIColor *_weekendColor;	// 88 = 0x58
    UIImageView *_dayBadge;	// 96 = 0x60
    UIImageView *_monthAnimationStateDayBadge;	// 104 = 0x68
    long long _badgeType;	// 112 = 0x70
    UIColor *_badgeColor;	// 120 = 0x78
    NSString *_badgeLocale;	// 128 = 0x80
    _Bool _verticallyCompressedState;	// 136 = 0x88
    _Bool _matchesMonthView;	// 137 = 0x89
    UIView *_eventCountsSubview;	// 144 = 0x90
    UILabel *_label;	// 152 = 0x98
}

+ (double)badgeDiameter;	// IMP=0x004000000000fd82
+ (double)circleDiameter;	// IMP=0x001000000000fd74
+ (void)localeChanged;	// IMP=0x001000000000fb67
+ (double)contentHeightForFontSize:(double)arg1 overlayFontSize:(double)arg2;	// IMP=0x001000000000fab9
+ (double)roundedRectHeightToMatchMonthView;	// IMP=0x001000000000fa32
+ (double)largeOverlayCircleDiameterForSizeClass:(long long)arg1;	// IMP=0x001000000000f9f9
+ (double)overlayCircleDiameterForSizeClass:(long long)arg1;	// IMP=0x001000000000f9d4
+ (double)standardCircleDiameterForSizeClass:(long long)arg1;	// IMP=0x001000000000f99b
- (void).cxx_destruct;	// IMP=0x0020000000012883
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) _Bool matchesMonthView; // @synthesize matchesMonthView=_matchesMonthView;
@property(nonatomic) _Bool verticallyCompressedState; // @synthesize verticallyCompressedState=_verticallyCompressedState;
@property(retain, nonatomic) UIView *eventCountsSubview; // @synthesize eventCountsSubview=_eventCountsSubview;
- (id)preferredPointerShape;	// IMP=0x00100000000127bf
- (void)stopPulsing;	// IMP=0x001000000001277d
- (void)pulseToday;	// IMP=0x001000000001231e
- (void)touchCancelled:(id)arg1;	// IMP=0x00100000000122ff
- (void)touchUpOccurred:(id)arg1;	// IMP=0x001000000001226c
- (void)touchDownOccurred:(id)arg1;	// IMP=0x001000000001224a
- (void)_updateToMatchMonthViewIfNeeded;	// IMP=0x001000000001201e
- (double)yCenterForDayNumbers;	// IMP=0x0010000000011fd7
- (double)_circleDiameter;	// IMP=0x0010000000011e86
- (double)_circleXForDiameter:(double)arg1;	// IMP=0x0010000000011e25
- (void)layoutSubviews;	// IMP=0x0010000000011771
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000000116b2
- (void)setLabelElementsVisible:(_Bool)arg1;	// IMP=0x001000000001165d
- (double)baselineOffsetFromTop;	// IMP=0x0010000000011583
- (double)contentWidth;	// IMP=0x0010000000011534
- (_Bool)usesRoundedRectInsteadOfCircle;	// IMP=0x00100000000114f4
- (void)setUsesRoundedRectInsteadOfCircle:(_Bool)arg1;	// IMP=0x00100000000114d7
- (double)overlayFontSize;	// IMP=0x00100000000114ba
- (void)setOverlayFontSize:(double)arg1;	// IMP=0x0010000000011422
- (double)fontSize;	// IMP=0x0010000000011405
- (void)setFontSize:(double)arg1;	// IMP=0x001000000001136d
- (void)setNeedsDisplay;	// IMP=0x0010000000011321
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00100000000111f6
- (void)_updateTextColor;	// IMP=0x001000000001113a
- (void)_updateDisplayedString;	// IMP=0x00100000000110a8
- (void)_updateBadge;	// IMP=0x0010000000010ec7
- (void)setBadgeLocale:(id)arg1;	// IMP=0x0010000000010e57
- (id)badgeLocale;	// IMP=0x0010000000010e42
- (void)setBadgeColor:(id)arg1;	// IMP=0x0010000000010dd2
- (id)badgeColor;	// IMP=0x0010000000010d91
- (void)setBadgeType:(long long)arg1;	// IMP=0x0010000000010d6c
- (long long)badgeType;	// IMP=0x0010000000010d5b
- (void)setCircleDiameter:(double)arg1 overlayDiameter:(double)arg2 largeOverlayDiameter:(double)arg3;	// IMP=0x0010000000010d25
- (void)updateOverlay;	// IMP=0x0010000000010b9a
- (void)setUnderlineThickness:(double)arg1;	// IMP=0x0010000000010b7d
- (void)setOverlayString:(id)arg1;	// IMP=0x0010000000010a83
- (void)setDisplayedString:(id)arg1;	// IMP=0x0010000000010a18
- (void)setDate:(id)arg1 forceStringUpdate:(_Bool)arg2;	// IMP=0x00100000000108c5
- (void)setDate:(id)arg1;	// IMP=0x00100000000108b1
- (void)setCircled:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000010756
- (void)setCircled:(_Bool)arg1;	// IMP=0x001000000001073f
@property(retain, nonatomic) UIColor *weekendColor;
- (void)setIsWeekend:(_Bool)arg1;	// IMP=0x00100000000105be
- (void)setIsToday:(_Bool)arg1;	// IMP=0x001000000001054d
- (void)_updateMonthAnimationStateBadgeToState:(_Bool)arg1;	// IMP=0x001000000001035f
- (void)_loadMonthAnimationStateBadgeIfNeeded;	// IMP=0x00100000000102b4
- (void)_loadMonthAnimationStateOverlayIfNeeded;	// IMP=0x00100000000101ae
@property(nonatomic) _Bool applyMonthAnimationStateAdjustments;
@property(nonatomic) _Bool monthAnimationState;
- (void)_createMonthAnimationStateModeSubviews;	// IMP=0x001000000000ff38
- (void)_createSubviewsWithSizeClass:(long long)arg1;	// IMP=0x001000000000fd90
@property(readonly, nonatomic) struct CGRect circleFrame;
- (void)prepareForReuse;	// IMP=0x001000000000fce6
- (id)initWithFrame:(struct CGRect)arg1 loadMonthAnimationState:(_Bool)arg2 hasOverlay:(_Bool)arg3 sizeClass:(long long)arg4;	// IMP=0x001000000000fbb3
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000000fb6d

@end

