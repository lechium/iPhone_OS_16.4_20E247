//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AirQualityConditionsViewController, CLLocation, NSObject, NSString, UIContextMenuInteraction, UIStackView, UIView, UIVisualEffectView, WeatherConditionsViewController;
@protocol OS_dispatch_source, WeatherStackViewControllerDelegate;

@interface WeatherStackViewController
{
    UIContextMenuInteraction *_contextMenuInteraction;	// 8 = 0x8
    id <WeatherStackViewControllerDelegate> _delegate;	// 16 = 0x10
    _Bool _overlayHidden;	// 24 = 0x18
    _Bool _airQualityShown;	// 25 = 0x19
    _Bool _weatherShown;	// 26 = 0x1a
    NSString *_blurGroupName;	// 32 = 0x20
    double _overlayAlpha;	// 40 = 0x28
    UIView *_contentView;	// 48 = 0x30
    UIVisualEffectView *_blurView;	// 56 = 0x38
    UIStackView *_stackView;	// 64 = 0x40
    CLLocation *_location;	// 72 = 0x48
    AirQualityConditionsViewController *_airQualityConditionsViewController;	// 80 = 0x50
    WeatherConditionsViewController *_weatherConditionsViewController;	// 88 = 0x58
    NSObject<OS_dispatch_source> *_updateVisibilityTimer;	// 96 = 0x60
    long long _animationCount;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x002000000047675f
@property(nonatomic) long long animationCount; // @synthesize animationCount=_animationCount;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *updateVisibilityTimer; // @synthesize updateVisibilityTimer=_updateVisibilityTimer;
@property(nonatomic) _Bool weatherShown; // @synthesize weatherShown=_weatherShown;
@property(nonatomic) _Bool airQualityShown; // @synthesize airQualityShown=_airQualityShown;
@property(retain, nonatomic) WeatherConditionsViewController *weatherConditionsViewController; // @synthesize weatherConditionsViewController=_weatherConditionsViewController;
@property(retain, nonatomic) AirQualityConditionsViewController *airQualityConditionsViewController; // @synthesize airQualityConditionsViewController=_airQualityConditionsViewController;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(nonatomic) __weak UIStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) __weak UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) double overlayAlpha; // @synthesize overlayAlpha=_overlayAlpha;
@property(nonatomic) _Bool overlayHidden; // @synthesize overlayHidden=_overlayHidden;
@property(readonly, nonatomic) __weak id <WeatherStackViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *blurGroupName; // @synthesize blurGroupName=_blurGroupName;
- (id)_airQualityConditionsPunchOutURL;	// IMP=0x0010000000476524
- (id)_weatherPunchOutURL;	// IMP=0x00100000004764c1
- (void)_openAirQualityConditionsPunchOutURL;	// IMP=0x00100000004763fe
- (void)_openWeatherPunchOutURL;	// IMP=0x001000000047633b
- (void)_configureWeatherOrbSupport;	// IMP=0x00100000004762af
- (void)_configureSubviews;	// IMP=0x0010000000475ab1
- (double)_viewAlpha;	// IMP=0x0010000000475a81
- (_Bool)_viewShown;	// IMP=0x0010000000475a4e
- (void)_updateVisibilityAnimated:(_Bool)arg1;	// IMP=0x0010000000475314
- (void)_requestVisibilityUpdateAnimated:(_Bool)arg1;	// IMP=0x001000000047514e
- (void)_setCornerRadiusWithMaskedCorners:(unsigned long long)arg1 withValue:(double)arg2;	// IMP=0x0010000000474d9a
- (void)airQualityConditionsViewController:(id)arg1 makeVisible:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x0010000000474c07
- (void)weatherConditionsViewController:(id)arg1 makeVisible:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x0010000000474a74
- (void)weatherLocationDataProvider:(id)arg1 didChangeLocation:(id)arg2;	// IMP=0x0010000000474a5f
- (void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x001000000047491b
- (id)contextMenuInteraction:(id)arg1 configuration:(id)arg2 highlightPreviewForItemWithIdentifier:(id)arg3;	// IMP=0x001000000047467f
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;	// IMP=0x00100000004744d2
- (void)setOverlayHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00100000004742bb
- (void)clearSavedLocation;	// IMP=0x00100000004741af
- (void)viewDidLoad;	// IMP=0x001000000047414a
- (void)applyBorderAndShadow;	// IMP=0x0010000000473e15
- (void)loadView;	// IMP=0x0010000000473c00
- (id)initWithWeatherLocationDataProvider:(id)arg1 delegate:(id)arg2;	// IMP=0x0010000000473a65
- (_Bool)_canShowWhileLocked;	// IMP=0x0010000000473a5d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

