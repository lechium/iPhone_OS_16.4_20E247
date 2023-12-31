//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSSet;

@interface CRLWPFontList : NSObject
{
    NSDictionary *_knownFonts;	// 8 = 0x8
    CDUnknownBlockType _fontPropertyResolver;	// 16 = 0x10
    NSSet *_downloadedFonts;	// 24 = 0x18
    NSDictionary *_knownFontFamilyFaces;	// 32 = 0x20
    NSArray *_recentFontNames;	// 40 = 0x28
    NSMutableArray *_cachedAvailableFamilyFonts;	// 48 = 0x30
}

+ (id)excludedFamilyNames;	// IMP=0x004000000054eac3
+ (id)sharedInstance;	// IMP=0x001000000054ea6e
- (void).cxx_destruct;	// IMP=0x002000000055210b
@property(retain) NSMutableArray *cachedAvailableFamilyFonts; // @synthesize cachedAvailableFamilyFonts=_cachedAvailableFamilyFonts;
@property(retain) NSArray *recentFontNames; // @synthesize recentFontNames=_recentFontNames;
@property(retain) NSDictionary *knownFontFamilyFaces; // @synthesize knownFontFamilyFaces=_knownFontFamilyFaces;
@property(retain) NSSet *downloadedFonts; // @synthesize downloadedFonts=_downloadedFonts;
@property(copy, nonatomic) CDUnknownBlockType fontPropertyResolver; // @synthesize fontPropertyResolver=_fontPropertyResolver;
@property(retain) NSDictionary *knownFonts; // @synthesize knownFonts=_knownFonts;
- (void)saveRecentFontNames:(id)arg1;	// IMP=0x0010000000551f0b
@property(readonly) NSArray *recentBaseFonts;
- (id)description;	// IMP=0x0010000000551c0e
- (void)registerRecentFont:(id)arg1;	// IMP=0x00100000005518aa
- (id)fontForStyles:(id)arg1;	// IMP=0x00100000005512b6
- (id)baseFontWithDescriptor:(id)arg1;	// IMP=0x00100000005511fc
- (id)fontsForAvailableFamilies;	// IMP=0x0010000000550fcd
- (id)fontFromStyle:(id)arg1;	// IMP=0x0010000000550ec0
- (void)dropFontsWithPSNamesInSet:(id)arg1;	// IMP=0x0010000000550c1a
- (id)cacheKeyForFontDescriptor:(id)arg1;	// IMP=0x0010000000550b6d
- (id)cacheKeyForFontWithPostScriptName:(id)arg1 atSize:(double)arg2 bold:(_Bool)arg3 italic:(_Bool)arg4;	// IMP=0x0010000000550b3e
- (id)fontForKey:(id)arg1;	// IMP=0x0010000000550abb
- (void)cacheFont:(id)arg1 withKey:(id)arg2;	// IMP=0x0010000000550a00
- (void)cacheFont:(id)arg1 forPostScriptName:(id)arg2 atSize:(double)arg3 bold:(_Bool)arg4 italic:(_Bool)arg5;	// IMP=0x001000000055096b
- (id)fontForPostscriptName:(id)arg1 atSize:(double)arg2 bold:(_Bool)arg3 italic:(_Bool)arg4;	// IMP=0x0010000000550867
- (id)fontForPostscriptName:(id)arg1 atSize:(double)arg2;	// IMP=0x001000000055080d
- (id)fontForPostscriptName:(id)arg1;	// IMP=0x0010000000550748
- (void)reset;	// IMP=0x00100000005506e4
- (void)cacheFaces:(id)arg1 forFontFamily:(id)arg2;	// IMP=0x0010000000550629
- (id)cachedFacesOfFontFamily:(id)arg1;	// IMP=0x00100000005505a6
- (id)fontFacesForFontFamily:(id)arg1;	// IMP=0x0010000000550517
- (id)postScriptNameForFamilyName:(id)arg1;	// IMP=0x00100000005504fe
- (id)normalizeChangedFontUrlsToStrings:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000005501b4
- (void)fontsChanged:(id)arg1;	// IMP=0x001000000054fe7a
- (void)registerDownloadedFontPostScriptNames:(id)arg1;	// IMP=0x001000000054fe74
- (void)downloadableFontsChanged:(id)arg1;	// IMP=0x001000000054fd84
- (id)availableFontFamilies;	// IMP=0x001000000054fcdd
- (id)familyNameFromFontDescriptor:(struct __CTFontDescriptor *)arg1;	// IMP=0x001000000054fc92
- (id)sortedFontFamilies;	// IMP=0x001000000054f674
- (id)availableFontDescriptorsForAllFamilies;	// IMP=0x001000000054f1da
- (id)familiesForFontsInCollection:(struct __CTFontCollection *)arg1;	// IMP=0x001000000054f01a
- (void)loadRecentFonts;	// IMP=0x001000000054ecfc
- (id)init;	// IMP=0x001000000054eb9a

@end

