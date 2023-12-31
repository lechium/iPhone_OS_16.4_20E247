//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSLocale.h>

@class NSArray, NSString;

@interface NSLocale (Setup)
+ (id)_subdivisionCodeFromSubdivisionTag:(id)arg1 restrictedToRegionCode:(id)arg2;	// IMP=0x0020000000002dde
+ (id)displayNameForSelectableScriptCode:(id)arg1;	// IMP=0x002000000001c12f
+ (void)setArchivedPreferences:(id)arg1;	// IMP=0x002000000001b7f8
+ (id)archivedPreferencesWithHashesForBundleIDs:(id)arg1;	// IMP=0x002000000001b792
+ (void)archivedPreferencesWithHashesForBundleIDs:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x002000000001b6ae
+ (id)_hashesFromAppPreferences:(id)arg1;	// IMP=0x002000000001b3b1
+ (id)_archivedPreferencesWithOverridingLanguages:(id)arg1 hash:(out id *)arg2;	// IMP=0x002000000001abb4
+ (id)archivedPreferencesWithHash:(out id *)arg1;	// IMP=0x002000000001ab9d
+ (id)archivedPreferences;	// IMP=0x002000000001ab89
+ (void)unregisterPreferredLanguageForKeyboardLanguage:(id)arg1;	// IMP=0x002000000001a91e
+ (void)registerPreferredLanguageForAddedKeyboardLanguage:(id)arg1;	// IMP=0x002000000001a657
+ (id)_sanitizedLanguageIdentifierFromKeyboardLanguage:(id)arg1 currentLocale:(id)arg2;	// IMP=0x002000000001a25c
+ (id)_sanitizedLanguageIdentifierFromKeyboardLanguage:(id)arg1;	// IMP=0x002000000001a1cf
+ (void)enableDefaultKeyboardForPreferredLanguages;	// IMP=0x0020000000019999
+ (void)_setUsesTwelveHourClock:(_Bool)arg1;	// IMP=0x0020000000019895
+ (_Bool)_defaultUsesTwelveHourClock;	// IMP=0x002000000001971c
+ (_Bool)_usesTwelveHourClock;	// IMP=0x002000000001961f
+ (void)setLanguageAndRegion:(id)arg1;	// IMP=0x00200000000194d5
+ (id)_preferencesForSetLanguageAndRegion:(id)arg1;	// IMP=0x002000000001902a
+ (void)setLanguageToPreferredLanguages:(id)arg1 fallback:(id)arg2;	// IMP=0x0020000000018f3d
+ (void)setPreferredLanguageAndUpdateLocale:(id)arg1;	// IMP=0x0020000000018df1
+ (id)languageArrayAfterSettingLanguage:(id)arg1 fallback:(id)arg2 toLanguageArray:(id)arg3;	// IMP=0x0020000000018ae9
+ (id)canonicalLocaleIdentifierWithValidCalendarForComponents:(id)arg1;	// IMP=0x002000000001893d
+ (void)setLocaleAfterRegionChange:(id)arg1;	// IMP=0x00200000000188ad
+ (void)_insertFallbackLanguageIfNecessaryForRegion:(id)arg1;	// IMP=0x00200000000187b6
+ (id)localeIdentifierForRegionChange:(id)arg1;	// IMP=0x002000000001862e
+ (void)setLocaleAfterLanguageChange:(id)arg1;	// IMP=0x00200000000184de
+ (id)validateLocale:(id)arg1;	// IMP=0x002000000001817c
+ (void)resetCustomFormats;	// IMP=0x0020000000018106
+ (void)setLocaleAndResetCustomFormat:(id)arg1;	// IMP=0x00200000000180d0
+ (void)resetTimeFormat;	// IMP=0x0020000000018072
+ (void)setLocaleAndResetTimeFormat:(id)arg1;	// IMP=0x002000000001803c
+ (void)setLocaleOnly:(id)arg1;	// IMP=0x0020000000017e7c
+ (id)renderableLanguagesFromList:(id)arg1;	// IMP=0x0020000000017d83
+ (id)renderableLocaleLanguages;	// IMP=0x0020000000017b2a
+ (id)renderableUILanguages;	// IMP=0x0020000000017a47
+ (id)addLikelySubtagsForLocaleIdentifier:(id)arg1;	// IMP=0x0020000000017983
+ (id)canonicalLocaleIdentifierFromComponents:(id)arg1;	// IMP=0x0020000000017925
+ (id)canonicalLanguageAndScriptCodeIdentifierForIdentifier:(id)arg1;	// IMP=0x002000000001775b
+ (id)canonicalLocaleIdentifier:(id)arg1 withNewLanguageIdentifier:(id)arg2;	// IMP=0x00200000000174b5
+ (id)supportedCJLanguageIdentifiers;	// IMP=0x002000000001735e
+ (id)deviceLanguageIdentifier;	// IMP=0x0020000000017345
+ (id)deviceLanguageLocale;	// IMP=0x00200000000172df
- (id)defaultLanguagesForMultilingualSetup;	// IMP=0x0010000000002ac9
- (id)languagesForMultilingualSetup;	// IMP=0x0010000000002ab5
- (id)_languagesForMultilingualSetupWithKeyboardsIDs:(id)arg1;	// IMP=0x00100000000027a0
- (_Bool)requiresMultilingualSetup;	// IMP=0x001000000000278c
- (_Bool)_requiresMultilingualSetupWithKeyboardIDs:(id)arg1;	// IMP=0x001000000000259b
@property(readonly, copy) NSString *explanationTextForSelectableScripts;
@property(readonly, copy) NSString *optionNameWithColonForSelectableScripts;
@property(readonly, copy) NSString *optionNameForSelectableScripts;
@property(readonly, copy) NSArray *selectableScriptCodes;
- (id)localeByChangingLanguageTo:(id)arg1;	// IMP=0x001000000001aace
@end

