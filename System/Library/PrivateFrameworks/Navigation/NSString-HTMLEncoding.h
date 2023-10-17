//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (HTMLEncoding)
+ (id)_navigation_stringForPower:(double)arg1 unit:(id)arg2;	// IMP=0x008000000001eb90
+ (long long)_navigation_abbreviatedFromatterUnitsStyleForLocale:(id)arg1;	// IMP=0x008000000001eb39
+ (id)_navigation_selectInstructionWithServerStringArray:(id)arg1 isSpoken:(_Bool)arg2 clientBlock:(CDUnknownBlockType)arg3;	// IMP=0x008000000001e90f
+ (id)_navigation_selectInstructionWithServerString:(id)arg1 isSpoken:(_Bool)arg2 clientBlock:(CDUnknownBlockType)arg3;	// IMP=0x008000000001e86e
+ (_Bool)_navigation_logIfContainsVariables:(id)arg1;	// IMP=0x008000000001e6bd
+ (void)_navigation_logMismatchBetweenServerInstruction:(id)arg1 clientInstruction:(id)arg2;	// IMP=0x008000000001e573
+ (id)_navigation_languageDirectionStringWithFormat:(id)arg1;	// IMP=0x008000000001e225
+ (id)_navigation_formattedStringForPriceValueWithAmount:(id)arg1 currencyCode:(id)arg2 showsCurrencySymbol:(_Bool)arg3;	// IMP=0x008000000001db0b
+ (id)_navigation_formattedStringForPriceValueWithAmount:(id)arg1 currencyCode:(id)arg2;	// IMP=0x008000000001daf3
+ (id)_navigation_formattedStringForPriceValue:(double)arg1 currencyCode:(id)arg2;	// IMP=0x008000000001da5c
+ (id)_navigation_commaListDelimiter;	// IMP=0x008000000001da4b
+ (id)_navigation_stringWithCountdownValue:(id)arg1 inToken:(id)arg2 options:(CDStruct_ef0b40be)arg3;	// IMP=0x008000000001d17e
+ (id)_navigation_stringWithTimeStampValues:(id)arg1 options:(CDStruct_ef0b40be)arg2;	// IMP=0x008000000001c746
+ (id)_navigation_spokenStringWithMinutes:(unsigned long long)arg1 andAbbreviationType:(unsigned long long)arg2;	// IMP=0x008000000001c48c
+ (id)_navigation_spokenStringWithSeconds:(unsigned long long)arg1 andAbbreviationType:(unsigned long long)arg2;	// IMP=0x008000000001c440
+ (id)_navigation_spokenStringWithSeconds:(unsigned long long)arg1 abbreviated:(_Bool)arg2;	// IMP=0x008000000001c42c
+ (id)_navigation_stringWithMinutes:(unsigned long long)arg1 andAbbreviationType:(unsigned long long)arg2;	// IMP=0x008000000001c28c
+ (id)_navigation_stringWithSeconds:(unsigned long long)arg1 andAbbreviationType:(unsigned long long)arg2;	// IMP=0x008000000001c240
+ (id)_navigation_stringWithSeconds:(unsigned long long)arg1 abbreviated:(_Bool)arg2;	// IMP=0x008000000001c22c
+ (id)_navigation_stringForDistance:(double)arg1 formatter:(id)arg2 locale:(id)arg3 shouldScale:(_Bool)arg4;	// IMP=0x008000000001b92f
+ (id)_navigation_formatterForOptions:(id)arg1;	// IMP=0x008000000001b769
+ (id)_navigation_localizedStringForDistance:(double)arg1 detail:(long long)arg2 unitFormat:(long long)arg3 locale:(id)arg4 useMetric:(unsigned long long)arg5 useYards:(unsigned long long)arg6 shouldScale:(_Bool)arg7;	// IMP=0x008000000001b494
+ (id)_navigation_localizedStringForDistance:(double)arg1 detail:(long long)arg2 unitFormat:(long long)arg3 locale:(id)arg4 useMetric:(unsigned long long)arg5 useYards:(unsigned long long)arg6;	// IMP=0x008000000001b478
+ (id)_navigation_localizedStringForDistance:(double)arg1 context:(long long)arg2 extraDetail:(_Bool)arg3;	// IMP=0x008000000001b303
+ (id)_navigation_stringForServerFormattedString:(id)arg1 abbreviatedUnits:(_Bool)arg2 detail:(long long)arg3 spoken:(_Bool)arg4 wrappedOverrideVariables:(id)arg5 allTokensExpanded:(_Bool *)arg6;	// IMP=0x008000000001b2b3
+ (id)_navigation_stringForServerFormattedString:(id)arg1 abbreviatedUnits:(_Bool)arg2 detail:(long long)arg3 spoken:(_Bool)arg4 wrappedOverrideVariables:(id)arg5;	// IMP=0x008000000001b290
+ (id)_navigation_stringForServerFormattedString:(id)arg1 options:(CDStruct_ef0b40be)arg2 wrappedOverrideVariables:(id)arg3 allTokensExpanded:(_Bool *)arg4;	// IMP=0x008000000001a187
+ (id)_navigation_stringForServerFormattedString:(id)arg1 options:(CDStruct_ef0b40be)arg2 wrappedOverrideVariables:(id)arg3;	// IMP=0x008000000001a16b
+ (_Bool)_replaceToken:(id)arg1 composedString:(id)arg2 options:(CDStruct_ef0b40be)arg3 overrideVariables:(id)arg4;	// IMP=0x008000000001a063
+ (_Bool)_replaceToken:(id)arg1 composedString:(id)arg2 replacement:(id)arg3;	// IMP=0x0080000000019e8b
+ (id)_navigation_replacementForFormatToken:(id)arg1 abbreviatedUnits:(_Bool)arg2 overrideVariables:(id)arg3 detail:(long long)arg4 spoken:(_Bool)arg5;	// IMP=0x0080000000019e44
+ (id)_navigation_overridenTokenForToken:(id)arg1 overrideVariables:(id)arg2;	// IMP=0x0080000000019aa2
+ (id)_navigation_replacementForFormatToken:(id)arg1 options:(CDStruct_ef0b40be)arg2 overrideVariables:(id)arg3 useMetric:(unsigned long long)arg4;	// IMP=0x0080000000018ee6
+ (id)_navigation_replacementForFormatToken:(id)arg1 options:(CDStruct_ef0b40be)arg2 overrideVariables:(id)arg3;	// IMP=0x0080000000018ed1
+ (id)_navigation_stringForServerFormattedString:(id)arg1 abbreviatedUnits:(_Bool)arg2 detail:(long long)arg3 spoken:(_Bool)arg4 overrideVariables:(id)arg5 allTokensExpanded:(_Bool *)arg6;	// IMP=0x0080000000018dcb
+ (id)_navigation_stringForServerFormattedString:(id)arg1 abbreviatedUnits:(_Bool)arg2 detail:(long long)arg3 spoken:(_Bool)arg4 overrideVariables:(id)arg5;	// IMP=0x0080000000018cc9
+ (id)_navigation_stringForServerFormattedString:(id)arg1 options:(CDStruct_ef0b40be)arg2 overrideVariables:(id)arg3 allTokensExpanded:(_Bool *)arg4;	// IMP=0x0080000000018bc2
+ (id)_navigation_stringForServerFormattedString:(id)arg1 options:(CDStruct_ef0b40be)arg2 overrideVariables:(id)arg3;	// IMP=0x0080000000018ac0
+ (id)_navigation_stringForServerFormattedString:(id)arg1;	// IMP=0x0080000000018a8b
+ (id)_navigation_frequencyRangeLocalizedInMixedUnitsWithMinString:(id)arg1 maxString:(id)arg2 estimate:(_Bool)arg3 recurring:(_Bool)arg4;	// IMP=0x00800000000189cf
+ (id)_navigation_frequencyRangeLocalizedInHoursWithMinHours:(long long)arg1 maxHours:(long long)arg2 estimate:(_Bool)arg3 recurring:(_Bool)arg4;	// IMP=0x0080000000018859
+ (id)_navigation_frequencyRangeLocalizedInMinutesWithMinMinutes:(long long)arg1 maxMinutes:(long long)arg2 estimate:(_Bool)arg3 recurring:(_Bool)arg4;	// IMP=0x00800000000186e3
+ (id)_navigation_descriptionForFrequencyRangeWithMinFrequency:(long long)arg1 maxFrequency:(long long)arg2 estimate:(_Bool)arg3 recurring:(_Bool)arg4;	// IMP=0x00800000000184a9
+ (id)_navigation_descriptionForFrequencyMinuteValue:(long long)arg1;	// IMP=0x0080000000018445
+ (id)_frequencyDateComponents:(long long)arg1;	// IMP=0x00800000000183b8
+ (id)_navigation_formattedDescriptionForLiveStatus:(long long)arg1 updatedDepartureTimeString:(id)arg2;	// IMP=0x00800000000182b5
+ (id)_navigation_formattedDescriptionForFrequency:(id)arg1;	// IMP=0x0080000000017fa7
+ (id)_frequencyStringForComponents:(id)arg1 forRange:(_Bool)arg2 forceShort:(_Bool)arg3;	// IMP=0x0080000000017b1d
+ (_Bool)_componentsWillUseShortFormat:(id)arg1;	// IMP=0x0080000000017ac8
+ (id)_navigation_stringForExpectedTravelTime:(double)arg1 dateUnitStyle:(long long)arg2;	// IMP=0x008000000001794e
+ (id)_navigation_formattedStringForHourRanges:(id)arg1 timeZone:(id)arg2 delimeter:(id)arg3;	// IMP=0x0080000000016f53
+ (id)_navigation_formattedStringForHourRanges:(id)arg1 timeZone:(id)arg2;	// IMP=0x0080000000016ebe
+ (id)_navigation_formattedStringForOperatingHours:(id)arg1 timeZone:(id)arg2;	// IMP=0x0080000000016bcb
+ (id)_navigation_formatFloatForPrintedDistance:(double)arg1;	// IMP=0x0080000000016ac6
+ (id)_navigation_formattedStringForFloat:(double)arg1 useIncreasedPrecision:(_Bool)arg2;	// IMP=0x0080000000016978
+ (id)_navigation_formattedStringForFloat:(double)arg1;	// IMP=0x0080000000016964
+ (id)_navigation_formattedStringForInteger:(long long)arg1;	// IMP=0x0080000000016831
+ (id)_navigation_pointerDescription:(id)arg1;	// IMP=0x008000000001f20f
+ (id)_navigation_stringWithTime:(id)arg1;	// IMP=0x008000000001f1ee
+ (id)_navigation_stringWithAltitudeUnits;	// IMP=0x008000000001f1e1
+ (id)_navigation_stringWithAltitude:(double)arg1 accuracy:(double)arg2;	// IMP=0x008000000001f120
+ (id)_navigation_stringWithDirection:(double)arg1 abbreviated:(_Bool)arg2;	// IMP=0x008000000001ecda
+ (id)_navigation_stringWithSpeedUnits;	// IMP=0x008000000001eccd
+ (id)_navigation_stringWithSpeed:(double)arg1;	// IMP=0x008000000001ec6b
- (id)_navigation_sanitizedStringForDisplayInHTML;	// IMP=0x001000000001676f
- (id)_navigation_stringByReplacingNewLinesWithString:(id)arg1;	// IMP=0x00100000000166c4
- (id)_navigation_stringByEscapingHTML;	// IMP=0x00100000000165a4
- (unsigned long long)_navigation_distanceLevenshtein:(id)arg1;	// IMP=0x001000000001e946
- (_Bool)_navigation_containsVariables;	// IMP=0x001000000001e643
- (id)_navigation_stripVariablesFromString;	// IMP=0x001000000001e4e4
- (_Bool)_navigation_isPrivate;	// IMP=0x001000000001e4cb
- (id)_navigation_stringByStrippingPrivateTag;	// IMP=0x001000000001e472
- (id)_navigation_stringByMarkingAsPrivateText;	// IMP=0x001000000001e446
- (id)_navigation_stripTagsFromSpokenString;	// IMP=0x001000000001e38f
- (_Bool)_navigation_isCJK;	// IMP=0x001000000001e0a1
- (id)_navigation_stringByMarkingAsNormalText;	// IMP=0x001000000001e039
- (id)_navigation_stringByMarkingAsNavigationText;	// IMP=0x001000000001de34
- (id)_navigation_stringByMarkingAsAddress;	// IMP=0x001000000001ddcc
- (id)_navigation_stringByMakingPhonetic;	// IMP=0x001000000001dd64
- (id)mnlpr_componentsSeparatedByGlyph;	// IMP=0x0010000000042805
@end
