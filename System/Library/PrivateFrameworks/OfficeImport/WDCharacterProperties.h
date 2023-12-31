//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WDCharacterPropertiesValues, WDDocument;

__attribute__((visibility("hidden")))
@interface WDCharacterProperties : NSObject
{
    _Bool mOriginal;	// 8 = 0x8
    _Bool mTracked;	// 9 = 0x9
    _Bool mResolved;	// 10 = 0xa
    WDCharacterPropertiesValues *mOriginalProperties;	// 16 = 0x10
    WDCharacterPropertiesValues *mTrackedProperties;	// 24 = 0x18
    WDDocument *mDocument;	// 32 = 0x20
}

+ (SEL)setFontSelectorForFontType:(int)arg1;	// IMP=0x00600000003e8edc
+ (SEL)fontOverriddenSelectorForFontType:(int)arg1;	// IMP=0x00600000003e8e88
+ (SEL)fontSelectorForFontType:(int)arg1;	// IMP=0x00600000003e8e34
- (void).cxx_destruct;	// IMP=0x00000000003ec746
@property(readonly) __weak WDDocument *document; // @synthesize document=mDocument;
- (id)description;	// IMP=0x00000000003ec706
- (void)copyPropertiesInto:(id)arg1;	// IMP=0x000000000023a3e2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000023a2f1
- (_Bool)isBracketTwoLinesInOneOverridden;	// IMP=0x00000000003ec685
- (void)setBracketTwoLinesInOne:(int)arg1;	// IMP=0x00000000003ec603
- (int)bracketTwoLinesInOne;	// IMP=0x00000000003ec57f
- (_Bool)isTwoLinesInOneOverridden;	// IMP=0x00000000003ec4ff
- (void)setTwoLinesInOne:(_Bool)arg1;	// IMP=0x00000000003ec47d
- (_Bool)twoLinesInOne;	// IMP=0x00000000003ec3ff
- (_Bool)isCompressHorizontalInVerticalOverridden;	// IMP=0x00000000003ec37f
- (void)setCompressHorizontalInVertical:(_Bool)arg1;	// IMP=0x00000000003ec2fd
- (_Bool)compressHorizontalInVertical;	// IMP=0x00000000003ec27f
- (_Bool)isHorizontalInVerticalOverridden;	// IMP=0x00000000003ec1ff
- (void)setHorizontalInVertical:(_Bool)arg1;	// IMP=0x00000000003ec17d
- (_Bool)horizontalInVertical;	// IMP=0x00000000003ec0ff
- (_Bool)isOffsetToPictureDataOverridden;	// IMP=0x00000000003ec07f
- (void)setOffsetToPictureData:(int)arg1;	// IMP=0x00000000003ebfef
- (int)offsetToPictureData;	// IMP=0x00000000003ebf71
- (_Bool)isObjectIDForOle2Overridden;	// IMP=0x00000000003ebef1
- (void)setObjectIDForOle2:(int)arg1;	// IMP=0x00000000003ebe61
- (int)objectIDForOle2;	// IMP=0x00000000003ebde3
- (_Bool)isOle2Overridden;	// IMP=0x00000000003ebd63
- (void)setOle2:(_Bool)arg1;	// IMP=0x00000000003ebce1
- (_Bool)ole2;	// IMP=0x00000000003ebc63
- (_Bool)isEmbeddedObjectOverridden;	// IMP=0x00000000003ebbe3
- (void)setEmbeddedObject:(_Bool)arg1;	// IMP=0x00000000003ebb61
- (_Bool)embeddedObject;	// IMP=0x00000000003ebae3
- (_Bool)isFontSizeForBiTextOverridden;	// IMP=0x00000000003eba63
- (void)setFontSizeForBiText:(unsigned short)arg1;	// IMP=0x00000000000ceba9
- (unsigned short)fontSizeForBiText;	// IMP=0x00000000003eb9e3
- (_Bool)isLanguageForBiTextOverridden;	// IMP=0x00000000003eb963
- (void)setLanguageForBiText:(int)arg1;	// IMP=0x00000000000bbaf7
- (int)languageForBiText;	// IMP=0x00000000003eb8e5
- (_Bool)isLanguageForFarEastOverridden;	// IMP=0x00000000003eb865
- (void)setLanguageForFarEast:(int)arg1;	// IMP=0x00000000000bba65
- (int)languageForFarEast;	// IMP=0x00000000003eb7e4
- (_Bool)isCharPositionOfPictureBulletInBookmarkOverridden;	// IMP=0x0000000000166efc
- (void)setCharPositionOfPictureBulletInBookmark:(int)arg1;	// IMP=0x0000000000165d20
- (int)charPositionOfPictureBulletInBookmark;	// IMP=0x0000000000166f7e
- (_Bool)isListCharacterPictureBulletOverridden;	// IMP=0x00000000000d0c46
- (void)setListCharacterPictureBullet:(_Bool)arg1;	// IMP=0x0000000000165c9c
- (_Bool)isListCharacterPictureBullet;	// IMP=0x0000000000165db2
- (_Bool)isSpecialCharacterOverridden;	// IMP=0x00000000003eb762
- (void)setSpecialCharacter:(_Bool)arg1;	// IMP=0x00000000000d9540
- (_Bool)isSpecialCharacter;	// IMP=0x00000000003eb6e2
- (_Bool)formattingChangedDifferentFrom:(id)arg1;	// IMP=0x00000000003eb665
- (_Bool)editDifferentFrom:(id)arg1;	// IMP=0x00000000003eb5e8
- (_Bool)deletionDifferentFrom:(id)arg1;	// IMP=0x00000000003eb56b
- (_Bool)isEditDateOverridden;	// IMP=0x00000000003eb4eb
- (void)setEditDate:(id)arg1;	// IMP=0x00000000001d48d3
- (id)editDate;	// IMP=0x00000000001d4a2a
- (_Bool)isDeletionDateOverridden;	// IMP=0x00000000003eb46a
- (void)setDeletionDate:(id)arg1;	// IMP=0x00000000001d4bfe
- (id)deletionDate;	// IMP=0x00000000001d4d55
- (_Bool)isIndexToAuthorIDOfFormattingChangeOverridden;	// IMP=0x00000000003eb3e9
- (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1;	// IMP=0x000000000021d4c7
- (unsigned short)indexToAuthorIDOfFormattingChange;	// IMP=0x00000000003eb369
- (_Bool)isIndexToAuthorIDOfEditOverridden;	// IMP=0x00000000003eb2e9
- (void)setIndexToAuthorIDOfEdit:(unsigned short)arg1;	// IMP=0x00000000001d49a7
- (unsigned short)indexToAuthorIDOfEdit;	// IMP=0x00000000001d4ab5
- (_Bool)isIndexToAuthorIDOfDeletionOverridden;	// IMP=0x00000000003eb269
- (void)setIndexToAuthorIDOfDeletion:(unsigned short)arg1;	// IMP=0x00000000001d4cd3
- (unsigned short)indexToAuthorIDOfDeletion;	// IMP=0x00000000001d4de1
- (_Bool)isFormattingChangedOverridden;	// IMP=0x000000000019b65d
- (void)setFormattingChanged:(int)arg1;	// IMP=0x00000000000bbc8b
- (int)formattingChanged;	// IMP=0x000000000019b6df
- (_Bool)isEditedOverridden;	// IMP=0x00000000003eb1e7
- (void)setEdited:(int)arg1;	// IMP=0x00000000000bbc09
- (int)edited;	// IMP=0x00000000003eb161
- (_Bool)isDeletedOverridden;	// IMP=0x00000000000edac5
- (void)setDeleted:(int)arg1;	// IMP=0x00000000000bbb87
- (int)deleted;	// IMP=0x00000000001d4e5f
- (_Bool)isUseCsFontOverridden;	// IMP=0x00000000003eb0df
- (void)setUseCsFont:(int)arg1;	// IMP=0x00000000003eb05d
- (int)useCsFont;	// IMP=0x00000000003eafd9
- (_Bool)isRightToLeftOverridden;	// IMP=0x00000000000ed6b9
- (void)setRightToLeft:(int)arg1;	// IMP=0x00000000001fbe17
- (int)rightToLeft;	// IMP=0x00000000001fc7df
- (_Bool)isLanguageForDefaultTextOverridden;	// IMP=0x00000000003eaf57
- (void)setLanguageForDefaultText:(int)arg1;	// IMP=0x00000000000bb9d3
- (int)languageForDefaultText;	// IMP=0x00000000003eaed9
- (_Bool)isColorAutoOverridden;	// IMP=0x00000000003eae59
- (void)setColorAuto:(_Bool)arg1;	// IMP=0x00000000000cec2b
- (_Bool)isColorAuto;	// IMP=0x00000000003eadd9
- (_Bool)isColorOverridden;	// IMP=0x00000000000ef345
- (void)setColor:(id)arg1;	// IMP=0x00000000000badbd
- (id)color;	// IMP=0x00000000000f1684
- (_Bool)isEmphasisMarkOverridden;	// IMP=0x00000000003ead58
- (void)setEmphasisMark:(int)arg1;	// IMP=0x00000000003eacc8
- (int)emphasisMark;	// IMP=0x00000000003eac4a
- (_Bool)isVerticalAlignOverridden;	// IMP=0x00000000000ef0be
- (void)setVerticalAlign:(int)arg1;	// IMP=0x00000000000bb4cc
- (int)verticalAlign;	// IMP=0x00000000000fdf9c
- (_Bool)isShadow2010Overridden;	// IMP=0x00000000003eabc8
- (void)setShadow2010:(id)arg1;	// IMP=0x00000000003eaaf4
- (id)shadow2010;	// IMP=0x00000000003eaa6b
- (_Bool)isReflectionOverridden;	// IMP=0x00000000003ea9eb
- (void)setReflection:(id)arg1;	// IMP=0x00000000003ea917
- (id)reflection;	// IMP=0x00000000003ea88e
- (_Bool)isFontSizeOverridden;	// IMP=0x00000000000eefba
- (void)setFontSize:(unsigned short)arg1;	// IMP=0x00000000000bb550
- (unsigned short)fontSize;	// IMP=0x00000000000ef03b
- (_Bool)isPositionOverridden;	// IMP=0x00000000003ea80b
- (void)setPosition:(short)arg1;	// IMP=0x00000000000bb449
- (short)position;	// IMP=0x00000000003ea78b
- (_Bool)isSpacingOverridden;	// IMP=0x00000000003ea70b
- (void)setSpacing:(short)arg1;	// IMP=0x00000000000bb3c5
- (short)spacing;	// IMP=0x00000000003ea68b
- (_Bool)isHiddenOverridden;	// IMP=0x00000000000efa43
- (void)setHidden:(int)arg1;	// IMP=0x00000000000bb341
- (int)hidden;	// IMP=0x00000000001de47d
- (_Bool)isLowerCaseOverridden;	// IMP=0x00000000003ea609
- (void)setLowerCase:(_Bool)arg1;	// IMP=0x00000000003ea587
- (_Bool)isLowerCase;	// IMP=0x00000000003ea509
- (_Bool)isCapsOverridden;	// IMP=0x00000000000ef2c5
- (void)setCaps:(int)arg1;	// IMP=0x00000000000bb2bf
- (int)caps;	// IMP=0x00000000000fdf17
- (_Bool)isSmallCapsOverridden;	// IMP=0x00000000000ef243
- (void)setSmallCaps:(int)arg1;	// IMP=0x00000000000bb23d
- (int)smallCaps;	// IMP=0x00000000001d02a5
- (_Bool)isLigatureOverridden;	// IMP=0x00000000003ea489
- (void)setLigature:(int)arg1;	// IMP=0x00000000003ea407
- (int)ligature;	// IMP=0x00000000003ea383
- (_Bool)isHighlightColorOverridden;	// IMP=0x00000000003ea303
- (void)setHighlightColor:(int)arg1;	// IMP=0x00000000000bb1b9
- (int)highlightColor;	// IMP=0x00000000003ea27d
- (_Bool)isHighlightOverridden;	// IMP=0x00000000003ea1fd
- (void)setHighlight:(_Bool)arg1;	// IMP=0x00000000001ded77
- (_Bool)isHighlight;	// IMP=0x00000000003ea17d
- (_Bool)isDoubleStrikeThroughOverridden;	// IMP=0x00000000000eef39
- (void)setDoubleStrikeThrough:(int)arg1;	// IMP=0x00000000000bab5f
- (int)doubleStrikeThrough;	// IMP=0x00000000001cc35b
- (_Bool)isStrikeThroughOverridden;	// IMP=0x00000000000eeeb7
- (void)setStrikeThrough:(int)arg1;	// IMP=0x00000000000baadd
- (int)strikeThrough;	// IMP=0x0000000000211271
- (_Bool)isUnderlineOverridden;	// IMP=0x00000000000ef1c1
- (void)setUnderline:(int)arg1;	// IMP=0x00000000000ba983
- (int)underline;	// IMP=0x00000000000ef447
- (_Bool)isTextScaleOverridden;	// IMP=0x00000000003ea0fb
- (void)setTextScale:(unsigned short)arg1;	// IMP=0x00000000003ea079
- (unsigned short)textScale;	// IMP=0x00000000003e9ff8
- (_Bool)isKerningOverridden;	// IMP=0x00000000003e9f78
- (void)setKerning:(unsigned short)arg1;	// IMP=0x00000000000bb5d2
- (unsigned short)kerning;	// IMP=0x00000000003e9ef8
- (_Bool)isUnderlineColorOverridden;	// IMP=0x00000000003e9e78
- (void)setUnderlineColor:(id)arg1;	// IMP=0x00000000000baa08
- (id)underlineColor;	// IMP=0x00000000003e9def
- (_Bool)isShadow2010OpacityOverridden;	// IMP=0x00000000003e9d6f
- (void)setShadow2010Opacity:(float)arg1;	// IMP=0x00000000003e9cde
- (float)shadow2010Opacity;	// IMP=0x00000000003e9c5f
- (_Bool)isShadowOverridden;	// IMP=0x00000000003e9bdf
- (void)setShadow:(int)arg1;	// IMP=0x00000000000ba7f9
- (int)shadow;	// IMP=0x00000000003e9b59
- (_Bool)isImprintOverridden;	// IMP=0x00000000003e9ad9
- (void)setImprint:(int)arg1;	// IMP=0x00000000000ba8ff
- (int)imprint;	// IMP=0x00000000003e9a53
- (_Bool)isEmbossedOverridden;	// IMP=0x00000000003e99d3
- (void)setEmbossed:(int)arg1;	// IMP=0x00000000000ba87d
- (int)embossed;	// IMP=0x00000000003e994d
- (_Bool)isOutline2010WidthOverridden;	// IMP=0x00000000003e98cd
- (void)setOutline2010Width:(float)arg1;	// IMP=0x00000000003e983c
- (float)outline2010Width;	// IMP=0x00000000003e97bd
- (_Bool)isOutlineColorOverridden;	// IMP=0x00000000003e973d
- (void)setOutlineColor:(id)arg1;	// IMP=0x00000000003e9669
- (id)outlineColor;	// IMP=0x00000000003e95e0
- (_Bool)isOutlineOverridden;	// IMP=0x00000000003e9560
- (void)setOutline:(int)arg1;	// IMP=0x00000000000ba776
- (int)outline;	// IMP=0x00000000003e94da
- (_Bool)isItalicForBiTextOverridden;	// IMP=0x00000000003e945a
- (void)setItalicForBiText:(int)arg1;	// IMP=0x00000000003e93d8
- (int)italicForBiText;	// IMP=0x00000000003e9354
- (_Bool)isItalicOverridden;	// IMP=0x00000000000eee34
- (void)setItalic:(int)arg1;	// IMP=0x00000000000ba6f2
- (int)italic;	// IMP=0x00000000000f0e8a
- (_Bool)isBoldForBiTextOverridden;	// IMP=0x00000000003e92d2
- (void)setBoldForBiText:(int)arg1;	// IMP=0x00000000003e9250
- (int)boldForBiText;	// IMP=0x00000000003e91cc
- (_Bool)isBoldOverridden;	// IMP=0x00000000000eedb4
- (void)setBold:(int)arg1;	// IMP=0x00000000000ba66e
- (int)bold;	// IMP=0x00000000000f0896
- (_Bool)isSymbolCharacterOverridden;	// IMP=0x00000000003e914a
- (void)setSymbolCharacter:(unsigned short)arg1;	// IMP=0x00000000001cfed0
- (unsigned short)symbolCharacter;	// IMP=0x00000000003e90ca
- (_Bool)isFontHintOverridden;	// IMP=0x00000000003e904a
- (void)setFontHint:(int)arg1;	// IMP=0x00000000003e8fb1
- (int)fontHint;	// IMP=0x00000000003e8f30
- (void)setFont:(id)arg1 forFontType:(int)arg2;	// IMP=0x00000000003e8d7f
- (_Bool)isFontOverriddenForFontType:(int)arg1;	// IMP=0x00000000003e8d5a
- (id)fontForFontType:(int)arg1;	// IMP=0x00000000003e8d22
- (_Bool)isSymbolFontOverridden;	// IMP=0x00000000003e8ca2
- (void)setSymbolFont:(id)arg1;	// IMP=0x00000000000bb8f5
- (id)symbolFont;	// IMP=0x00000000003e8c18
- (_Bool)isFarEastFontOverridden;	// IMP=0x00000000003e8b98
- (void)setFarEastFont:(id)arg1;	// IMP=0x00000000000bb737
- (id)farEastFont;	// IMP=0x00000000003e8b0e
- (_Bool)isExtendedFontOverridden;	// IMP=0x00000000003e8a8e
- (void)setExtendedFont:(id)arg1;	// IMP=0x00000000000bb815
- (id)extendedFont;	// IMP=0x00000000003e8a04
- (_Bool)isFontOverridden;	// IMP=0x00000000000ef140
- (void)setFont:(id)arg1;	// IMP=0x00000000000bb657
- (id)font;	// IMP=0x00000000000f287a
- (_Bool)isShadingOverridden;	// IMP=0x00000000000ef3c6
- (id)mutableShading;	// IMP=0x00000000000bae93
- (id)shading;	// IMP=0x00000000001f590e
- (_Bool)isBorderOverridden;	// IMP=0x00000000003e8982
- (id)mutableBorder;	// IMP=0x00000000000babe3
- (id)border;	// IMP=0x00000000003e88f6
- (void)clearBaseStyle;	// IMP=0x00000000000ce58f
- (_Bool)isBaseStyleOverridden;	// IMP=0x00000000000ee433
- (void)setBaseStyle:(id)arg1;	// IMP=0x00000000000dbbf4
- (id)baseStyle;	// IMP=0x00000000000f157c
- (void)removeEmptyFormattingChanges:(id)arg1;	// IMP=0x00000000003e63f0
- (void)applyPropertiesFrom:(id)arg1 ifOverriddenIn:(id)arg2;	// IMP=0x00000000003e559f
- (void)negateFormattingChangesWithDefaults:(id)arg1;	// IMP=0x0000000000199d4d
- (void)setResolveMode:(int)arg1;	// IMP=0x00000000000ba653
- (int)resolveMode;	// IMP=0x00000000003e5580
- (_Bool)isAnythingOverridden;	// IMP=0x00000000003e551e
- (id)initWithDocument:(id)arg1;	// IMP=0x00000000000ba5a8
- (int)reverseBooleanProperty:(int)arg1;	// IMP=0x00000000003ee74a
- (_Bool)formattingChangedDifferentFrom:(id)arg1 mode:(int)arg2;	// IMP=0x00000000003ed2e1
- (_Bool)editDifferentFrom:(id)arg1 mode:(int)arg2;	// IMP=0x00000000003ed00f
- (_Bool)deletionDifferentFrom:(id)arg1 mode:(int)arg2;	// IMP=0x00000000003ecd3d
- (_Bool)isBooleanProbablyDifferent:(unsigned char)arg1 than:(unsigned char)arg2;	// IMP=0x00000000003ecd13
- (_Bool)isAnythingOverriddenIn:(id)arg1;	// IMP=0x00000000003ec777

@end

