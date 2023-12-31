//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WeatherFoundation/WFWeatherConditions.h>

@class NSDate, NSString, UIColor;

@interface WFWeatherConditions (NWMLocalizedWind)
+ (int)_preferredWindSpeedUnitForLocale:(id)arg1;	// IMP=0x0020000000009f63
+ (id)_localizedWindspeed:(double)arg1 withUnit:(int)arg2 forLocale:(id)arg3;	// IMP=0x0020000000009c5b
+ (id)_defaultWindSpeedWithUnit:(double)arg1;	// IMP=0x0020000000009ba0
+ (id)nwm_localizedWindpeedUnit;	// IMP=0x00200000000097f9
+ (id)nwc_symbolNameForTimeOfDay:(unsigned long long)arg1 code:(unsigned long long)arg2;	// IMP=0x002000000000a331
+ (id)nwc_noDataImageForComplicationFamily:(long long)arg1;	// IMP=0x002000000000a2ba
+ (id)_nwm_shortSuffixedKey:(id)arg1;	// IMP=0x002000000000a81e
+ (id)nwm_localizedNoDataRounded;	// IMP=0x002000000000a6d3
+ (id)nwm_localizedNoData;	// IMP=0x002000000000a6bb
+ (id)nwm_localizedDescriptionShortKeyForConditionCode:(unsigned long long)arg1 timeOfDay:(unsigned long long)arg2;	// IMP=0x002000000000a664
+ (id)nwm_localizedDescriptionKeyForConditionCode:(unsigned long long)arg1 timeOfDay:(unsigned long long)arg2;	// IMP=0x002000000000a62e
+ (id)nwm_localizedDescriptionShortForConditionCode:(unsigned long long)arg1 timeOfDay:(unsigned long long)arg2;	// IMP=0x002000000000a5e5
+ (id)nwm_localizedDescriptionForConditionCode:(unsigned long long)arg1 timeOfDay:(unsigned long long)arg2;	// IMP=0x002000000000a59c
+ (id)nwc_ultravioletIndexCategoryColorForNumber:(id)arg1;	// IMP=0x002000000000d4be
+ (id)nwc_ultravioletIndexCategoryColorUnknown;	// IMP=0x002000000000d4a5
+ (id)nwc_ultravioletIndexCategoryColorSpectrum;	// IMP=0x002000000000d48c
- (double)_speedByConverting:(double)arg1 toUnit:(int)arg2;	// IMP=0x001000000000a28e
- (id)_localizedWindDirectionAbbreviation:(_Bool)arg1;	// IMP=0x001000000000a1de
- (unsigned long long)_indexOfWindDirectionKeyForWindDirectionInDegrees:(double)arg1 keys:(id)arg2;	// IMP=0x001000000000a121
- (id)nwm_windDirectionKey;	// IMP=0x0010000000009ad6
@property(readonly, nonatomic) NSString *nwm_localizedWindspeedWithoutUnit;
@property(readonly, nonatomic) NSString *nwm_localizedWindspeedWithUnit;
@property(readonly, nonatomic) NSString *nwm_localizedWindDirection;
@property(readonly, nonatomic) NSString *nwm_localizedWindDirectionAbbreviationCompact;
@property(readonly, nonatomic) NSString *nwm_localizedWindDirectionAbbreviation;
- (unsigned long long)_nwc_code;	// IMP=0x001000000000a4bc
- (id)nwc_symbolNameForTimeOfDay:(unsigned long long)arg1;	// IMP=0x001000000000a472
- (id)nwc_conditionImageForTimeOfDay:(unsigned long long)arg1 withScale:(long long)arg2;	// IMP=0x001000000000a35d
- (unsigned long long)nw_timeOfDay;	// IMP=0x001000000000a936
- (id)nwm_localizedDescriptionShort;	// IMP=0x001000000000a8b4
- (id)nwm_localizedDescriptionKey;	// IMP=0x001000000000a883
- (id)nwm_localizedDescription;	// IMP=0x001000000000a83a
- (id)nwm_localizedDescriptionKeyForTimeOfDay:(unsigned long long)arg1;	// IMP=0x001000000000a7b0
- (id)nwm_localizedDescriptionShortForTimeOfDay:(unsigned long long)arg1;	// IMP=0x001000000000a734
- (id)nwm_localizedDescriptionForTimeOfDay:(unsigned long long)arg1;	// IMP=0x001000000000a6eb
@property(readonly, nonatomic) NSString *nwc_ultravioletIndexRiskDescription;
@property(readonly, nonatomic) UIColor *nwc_ultravioletIndexCategoryColor;
@property(readonly, nonatomic) unsigned long long nwc_ultravioletIndexCategory;
@property(readonly, nonatomic) NSDate *nwc_expirationDate;
@property(readonly, nonatomic) NSDate *nwc_date;
@property(readonly, nonatomic) unsigned long long simplifiedPrecipitationCondition;
@property(readonly, nonatomic, getter=isTypeOfPrecipitation) _Bool typeOfPrecipitation;
- (unsigned long long)_code;	// IMP=0x0010000000013153
@property(readonly, nonatomic) unsigned long long nwm_ultravioletIndexCategory;
@property(readonly, nonatomic) NSString *nwm_localizedUltravioletIndexRiskDescription;
@end

