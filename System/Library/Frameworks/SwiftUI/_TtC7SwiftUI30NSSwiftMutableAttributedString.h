//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/NSTextStorage.h>

@class MISSING_TYPE, NSString;

__attribute__((visibility("hidden")))
@interface _TtC7SwiftUI30NSSwiftMutableAttributedString : NSTextStorage
{
    MISSING_TYPE *_storage;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00000000011bd3f9
- (id)initWithAttributedString:(id)arg1;	// IMP=0x00000000011bd398
- (id)initWithString:(id)arg1 attributes:(id)arg2;	// IMP=0x00000000011bd2b8
- (id)initWithString:(id)arg1;	// IMP=0x00000000011bd25a
- (id)initWithMarkdownString:(id)arg1 options:(id)arg2 baseURL:(id)arg3 error:(id *)arg4;	// IMP=0x00000000011bd11f
- (id)initWithMarkdown:(id)arg1 options:(id)arg2 baseURL:(id)arg3 error:(id *)arg4;	// IMP=0x00000000011bcf95
- (id)initWithContentsOfMarkdownFileAtURL:(id)arg1 options:(id)arg2 baseURL:(id)arg3 error:(id *)arg4;	// IMP=0x00000000011bce3f
- (id)initWithData:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;	// IMP=0x00000000011bcd35
- (id)initWithURL:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;	// IMP=0x00000000011bcc1a
- (id)initWithFileURL:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;	// IMP=0x00000000011bcb29
- (id)initWithHTML:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3;	// IMP=0x00000000011bca42
- (id)init;	// IMP=0x00000000011bc9f5
- (id)_nsAttributedSubstringFromRange:(struct _NSRange)arg1;	// IMP=0x00000000011bc98f
- (void)ensureAttributesAreFixedInRange:(struct _NSRange)arg1;	// IMP=0x00000000011bc707
- (void)fixAttributesInRange:(struct _NSRange)arg1;	// IMP=0x00000000011bc701
- (void)invalidateAttributesInRange:(struct _NSRange)arg1;	// IMP=0x00000000011bc6fb
- (void)setAttributedString:(id)arg1;	// IMP=0x00000000011bc6b0
- (void)deleteCharactersInRange:(struct _NSRange)arg1;	// IMP=0x00000000011bc642
- (void)appendAttributedString:(id)arg1;	// IMP=0x00000000011bc3cd
- (void)insertAttributedString:(id)arg1 atIndex:(long long)arg2;	// IMP=0x00000000011bc1e6
- (void)removeAttribute:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000011bbebb
- (void)addAttributes:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000011bbda5
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange)arg3;	// IMP=0x00000000011bba03
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000011bb84c
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;	// IMP=0x00000000011bb488
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withAttributedString:(id)arg2;	// IMP=0x00000000011bb22f
- (void)enumerateAttribute:(id)arg1 inRange:(struct _NSRange)arg2 options:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000011baf20
- (void)enumerateAttributesInRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000011bad92
- (_Bool)isEqualToAttributedString:(id)arg1;	// IMP=0x00000000011bac3b
- (id)attribute:(id)arg1 atIndex:(long long)arg2 longestEffectiveRange:(struct _NSRange *)arg3 inRange:(struct _NSRange)arg4;	// IMP=0x00000000011baab2
- (id)attribute:(id)arg1 atIndex:(long long)arg2 effectiveRange:(struct _NSRange *)arg3;	// IMP=0x00000000011ba8a7
- (id)attributesAtIndex:(long long)arg1 longestEffectiveRange:(struct _NSRange *)arg2 inRange:(struct _NSRange)arg3;	// IMP=0x00000000011ba6f8
- (id)attributesAtIndex:(long long)arg1 effectiveRange:(struct _NSRange *)arg2;	// IMP=0x00000000011ba524
- (id)attributedSubstringFromRange:(struct _NSRange)arg1;	// IMP=0x00000000011ba3e2
@property(nonatomic, readonly) NSString *string;
@property(nonatomic, readonly) long long length;
- (id)initWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00000000011b9ddb
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000011b9d4d

@end
