//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSLocale.h>

@class NSArray, NSString;

@interface NSLocale (InternationalSupportExtensions)
+ (id)_parentLocaleIdentifierForIdentifier:(id)arg1;	// IMP=0x002000000000679a
+ (id)_supportedKeyboardLanguages;	// IMP=0x0020000000006789
+ (id)_regionLanguageData;	// IMP=0x0020000000006778
+ (id)_regionLanguageDataForRegionCode:(id)arg1 subdivisionCode:(id)arg2;	// IMP=0x00200000000066f4
+ (id)_languagesForRegion:(id)arg1 subdivision:(id)arg2 withThreshold:(long long)arg3;	// IMP=0x0020000000005eb8
+ (id)_languagesToExemplarStrings;	// IMP=0x0020000000005ea7
+ (id)_ICUdisplayNameForLanguage:(id)arg1 capitalization:(struct ULocaleDisplayNames *)arg2;	// IMP=0x0020000000005dda
+ (id)_normalizedLanguageIdentifierFromString:(id)arg1;	// IMP=0x0020000000005cc2
+ (id)_minimizeSubtagsForLocaleIdentifier:(id)arg1;	// IMP=0x0020000000005aaf
+ (id)_addLikelySubtagsForLocaleIdentifier:(id)arg1;	// IMP=0x00200000000059ec
+ (id)_displayNameForNormalizedLanguage:(id)arg1 context:(long long)arg2 displayLanguage:(id)arg3;	// IMP=0x00200000000055a2
+ (id)displayNameForRegion:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3 short:(_Bool)arg4;	// IMP=0x0020000000005505
+ (id)displayNameForLanguage:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3;	// IMP=0x0020000000005470
+ (id)spokenLanguagesForLanguages:(id)arg1 includeLanguagesForRegion:(_Bool)arg2;	// IMP=0x00200000000041c8
+ (id)spokenLanguagesForLanguage:(id)arg1;	// IMP=0x0020000000003fd6
+ (id)availableSpokenLanguages;	// IMP=0x0020000000003cd3
+ (id)languagesByAddingRelatedLanguagesToLanguages:(id)arg1;	// IMP=0x0020000000003845
+ (id)relatedLanguagesForLanguage:(id)arg1;	// IMP=0x00200000000033b0
+ (id)matchedLanguagesFromAvailableLanguages:(id)arg1 forPreferredLanguages:(id)arg2;	// IMP=0x0020000000002fba
+ (id)_displayNameForRegion:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3 short:(_Bool)arg4;	// IMP=0x0020000000002d1b
+ (id)_displayNameForLanguage:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3;	// IMP=0x0020000000002bac
+ (id)minimizedLanguagesFromLanguages:(id)arg1;	// IMP=0x0020000000002716
+ (id)languageFromLanguage:(id)arg1 byReplacingRegion:(id)arg2;	// IMP=0x00200000000025a1
+ (id)scriptCodeFromLanguage:(id)arg1;	// IMP=0x00200000000024d4
+ (id)baseLanguageFromLanguage:(id)arg1;	// IMP=0x002000000000239f
+ (id)containingRegionOfRegion:(id)arg1;	// IMP=0x0020000000002312
+ (id)_containingRegionOfType:(int)arg1 forRegion:(id)arg2;	// IMP=0x0020000000002278
+ (id)containingContinentOfRegion:(id)arg1;	// IMP=0x002000000000225e
+ (id)_availableRegionsOfType:(int)arg1;	// IMP=0x002000000000217b
+ (id)availableContinents;	// IMP=0x0020000000002164
+ (id)exemplarRegionForLanguage:(id)arg1;	// IMP=0x0020000000001fff
+ (id)supportedRegions;	// IMP=0x0020000000001f16
+ (id)regionsForLanguage:(id)arg1 withThreshold:(long long)arg2;	// IMP=0x0020000000001cfd
+ (id)languagesForRegion:(id)arg1 subdivision:(id)arg2 withThreshold:(long long)arg3 filter:(long long)arg4;	// IMP=0x0020000000001bf4
+ (id)exemplarForLanguage:(id)arg1;	// IMP=0x0020000000001af9
+ (id)supportedLanguages;	// IMP=0x0020000000001866
+ (id)_deviceLanguages;	// IMP=0x0020000000001617
+ (id)baseSystemLanguages;	// IMP=0x00200000000013ca
+ (id)_globalPreferredLanguages;	// IMP=0x0020000000001268
+ (id)deviceLanguage;	// IMP=0x002000000000124f
- (id)displayNameForRegion:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3 short:(_Bool)arg4;	// IMP=0x0010000000005517
- (id)displayNameForLanguage:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3;	// IMP=0x0010000000005482
- (long long)positionOfDayPeriodInFormattedTime;	// IMP=0x0010000000005371
- (id)countryCodeTopLevelDomainsUsingPunycode:(_Bool)arg1;	// IMP=0x0010000000004fab
- (id)localizedStringForNumberingSystem:(id)arg1 short:(_Bool)arg2;	// IMP=0x0010000000004e3d
@property(readonly, copy) NSArray *availableNumberingSystems;
@property(readonly, copy) NSString *numberingSystem;
- (_Bool)isEquivalentTo:(id)arg1;	// IMP=0x0010000000004784
- (id)localizedStringForRegion:(id)arg1 context:(long long)arg2 short:(_Bool)arg3;	// IMP=0x0010000000002c7f
- (id)localizedStringForLanguage:(id)arg1 context:(long long)arg2;	// IMP=0x0010000000002b18
@property(readonly) NSString *languageIdentifier;
@end

