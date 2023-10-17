//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MapsThemeImageView, MapsThemeLabel, NSString, UIView, WeatherConditions, WeatherLocationDataProvider, _TtC4Maps29WeatherConditionsDataProvider;
@protocol WeatherConditionsViewControllerDelegate;

@interface WeatherConditionsViewController
{
    _TtC4Maps29WeatherConditionsDataProvider *_weatherConditionsDataProvider;	// 8 = 0x8
    WeatherLocationDataProvider *_weatherLocationDataProvider;	// 16 = 0x10
    id <WeatherConditionsViewControllerDelegate> _delegate;	// 24 = 0x18
    WeatherConditions *_weatherConditions;	// 32 = 0x20
    UIView *_contentView;	// 40 = 0x28
    MapsThemeImageView *_imageView;	// 48 = 0x30
    MapsThemeLabel *_titleLabel;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000007cd3f4
@property(retain, nonatomic) MapsThemeLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MapsThemeImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) WeatherConditions *weatherConditions; // @synthesize weatherConditions=_weatherConditions;
@property(nonatomic) __weak id <WeatherConditionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_titleFont;	// IMP=0x00100000007cd2ad
- (void)_updateSubviews;	// IMP=0x00100000007cd164
- (void)_setupConstraints;	// IMP=0x00100000007cc83d
- (void)_createSubviews;	// IMP=0x00100000007cc0d6
- (_Bool)_shouldShowWeatherConditions;	// IMP=0x00100000007cc070
- (void)weatherConditionsDataProviderDidChangeWeatherConditions:(id)arg1;	// IMP=0x00100000007cc05e
- (void)_toggleWeatherConditionsVisibility;	// IMP=0x00100000007cc028
- (void)_preferredContentSizeChanged:(id)arg1;	// IMP=0x00100000007cc016
- (void)clearSavedLocation;	// IMP=0x00100000007cbfce
- (void)viewDidLoad;	// IMP=0x00100000007cbe9d
- (void)loadView;	// IMP=0x00100000007cbdf4
- (void)setWeatherConditions:(id)arg1;	// IMP=0x00100000007cbd77
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)setVisible:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00100000007cbcdd
- (void)setVisible:(_Bool)arg1;	// IMP=0x00100000007cbcc9
@property(readonly, nonatomic, getter=isVisible) _Bool visible;
- (id)initWithWeatherLocationDataProvider:(id)arg1;	// IMP=0x00100000007cbbab
- (_Bool)_canShowWhileLocked;	// IMP=0x00100000007cbba3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
