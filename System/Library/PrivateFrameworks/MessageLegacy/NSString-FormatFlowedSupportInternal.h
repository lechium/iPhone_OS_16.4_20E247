//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (FormatFlowedSupportInternal)
+ (id)mf_stringFromMimeEnrichedString:(id)arg1 asHTML:(_Bool)arg2;	// IMP=0x00800000000606ba
+ (id)mf_stringFromMimeRichTextString:(id)arg1 asHTML:(_Bool)arg2;	// IMP=0x008000000006063e
+ (id)mf_stringForMimeTypeFromFileName:(id)arg1;	// IMP=0x0080000000064e9c
+ (id)mf_stringWithAttachmentCharacter;	// IMP=0x0080000000064879
+ (id)mf_stringRepresentationForBytes:(long long)arg1;	// IMP=0x0080000000064712
+ (id)mf_messageIDStringWithDomainHint:(id)arg1;	// IMP=0x008000000006434f
+ (id)mf_UUID;	// IMP=0x008000000006431d
- (unsigned long long)mf_nextWordFromIndex:(unsigned long long)arg1 forward:(_Bool)arg2;	// IMP=0x0010000000015f4b
- (unsigned long long)mf_lineBreakBeforeIndex:(unsigned long long)arg1 withinRange:(struct _NSRange)arg2;	// IMP=0x0010000000015e50
- (id)mf_convertFromFlowedText:(unsigned int)arg1 visuallyEmpty:(_Bool *)arg2;	// IMP=0x0010000000016068
- (id)mf_prefixToString:(id)arg1;	// IMP=0x0010000000064fc2
- (id)mf_stringByTrimmingWhitespaceAndNewlineCharacters;	// IMP=0x0010000000064f8a
- (_Bool)mf_containsSubstring:(id)arg1;	// IMP=0x0010000000064f76
- (_Bool)mf_containsSubstring:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0010000000064f53
- (_Bool)mf_caseInsensitiveIsEqualToString:(id)arg1;	// IMP=0x0010000000064f35
- (id)mf_stringByEscapingHTMLCodes;	// IMP=0x0010000000064ca2
- (id)mf_stringByEscapingForXML;	// IMP=0x0010000000064b57
- (id)mf_uniqueFilenameWithRespectToFilenames:(id)arg1;	// IMP=0x00100000000648c6
- (id)mf_stringWithNoExtraSpaces;	// IMP=0x0010000000064721
- (id)mf_fileSystemString;	// IMP=0x0010000000064655
- (id)mf_stringByLocalizingReOrFwdPrefix;	// IMP=0x0010000000064462
- (_Bool)mf_isSubdirectoryOfPath:(id)arg1;	// IMP=0x00100000000656c4
- (_Bool)mf_makeDirectoryWithMode:(int)arg1;	// IMP=0x001000000006567d
- (id)mf_stringByAbbreviatingSharedResourcesDirectoryWithTildeInPath;	// IMP=0x0010000000065aa0
- (id)mf_stringByExpandingTildeWithSharedResourcesDirectoryInPath;	// IMP=0x0010000000065963
- (id)mf_canonicalizedAbsolutePath;	// IMP=0x00100000000658d8
- (id)mf_betterStringByResolvingSymlinksInPath;	// IMP=0x0010000000065820
- (id)mf_stringByReallyAbbreviatingSharedResourcesDirectoryWithTildeInPath;	// IMP=0x001000000006571d
@end
