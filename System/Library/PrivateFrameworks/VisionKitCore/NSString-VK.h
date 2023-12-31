//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (VK)
+ (id)vk_NSAttachmentCharacterString;	// IMP=0x00200000000868d2
- (id)vk_rangesOfMatchesForString:(id)arg1;	// IMP=0x0010000000088864
- (id)vk_truncatedStringWithMaxLength:(unsigned long long)arg1 truncated:(_Bool *)arg2;	// IMP=0x001000000008876b
- (id)vk_stringByTrimmingLeadingCharactersInSet:(id)arg1;	// IMP=0x00100000000886ce
- (unsigned long long)vk_countOfCharactersInSet:(id)arg1;	// IMP=0x0010000000088601
- (struct _NSRange)vk_safeCharacterRangeForRange:(struct _NSRange)arg1;	// IMP=0x00100000000885b8
- (_Bool)vk_isLastCharacterInRangeANewlineForRange:(struct _NSRange)arg1;	// IMP=0x0010000000088514
@property(readonly, nonatomic) unsigned long long vk_lengthOfLongestLine;
- (struct _NSRange)vk_paragraphRangeForRange:(struct _NSRange)arg1 contentEnd:(unsigned long long *)arg2;	// IMP=0x00100000000883d6
- (id)vk_stringByReplacingCharactersInStringMap:(id)arg1;	// IMP=0x0010000000087ced
- (id)vk_stringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;	// IMP=0x0010000000087b95
- (id)vk_stringByReplacingNewlineCharactersWithWhiteSpace;	// IMP=0x0010000000087b28
- (id)vk_checkedSubstringWithRange:(struct _NSRange)arg1;	// IMP=0x0010000000087ad0
- (id)vk_substringWithRange:(struct _NSRange)arg1;	// IMP=0x0010000000087a4c
- (id)vk_substringToIndex:(unsigned long long)arg1;	// IMP=0x00100000000879c2
- (id)vk_substringFromIndex:(unsigned long long)arg1;	// IMP=0x0010000000087991
- (void)vk_enumerateContentLineRangesInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000878be
- (void)vk_enumerateParagraphsInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000877f7
@property(readonly, nonatomic) _Bool vk_containsAlphanumericCharacters;
@property(readonly, nonatomic) _Bool vk_containsNonWhitespaceAndAttachmentCharacters;
@property(readonly, nonatomic) _Bool vk_containsNonWhitespaceCharacters;
- (id)vk_uniqueWordsWithMinLength:(unsigned long long)arg1;	// IMP=0x00100000000872a2
@property(readonly, nonatomic) unsigned long long vk_wordCount;
@property(readonly, nonatomic) unsigned long long vk_numberOfLines;
@property(readonly, nonatomic) _Bool vk_isLastCharacterANewline;
@property(readonly, nonatomic) NSString *vk_stringByRemovingAttachmentCharacters;
@property(readonly, nonatomic) NSString *vk_stringReplacingUnsafeXMLCharacters;
@property(readonly, nonatomic) NSString *vk_stringReplacingUnsafeHTMLCharacters;
- (struct _NSRange)vk_lineRangeIgnoringLineBreakCharactersForIndex:(unsigned long long)arg1;	// IMP=0x0010000000086f66
- (_Bool)vk_rangeIsValid:(struct _NSRange)arg1;	// IMP=0x0010000000086f2e
@property(readonly, nonatomic) NSString *vk_sanitizedFilenameString;
@property(readonly, nonatomic) NSString *vk_whitespaceAndNewlineCoalescedString;
@property(readonly, nonatomic) NSString *vk_leadingTrimmedString;
@property(readonly, nonatomic) NSString *vk_trailingTrimmedString;
@property(readonly, nonatomic) NSString *vk_trimmedString;
@property(readonly, nonatomic) NSString *vk_htmlStringEscapingQuotesAndLineBreaks;
@property(readonly, nonatomic) NSString *vk_md5;
@property(readonly, nonatomic) NSString *vk_hexCodes;
@property(readonly, nonatomic) struct _NSRange vk_range;
@end

