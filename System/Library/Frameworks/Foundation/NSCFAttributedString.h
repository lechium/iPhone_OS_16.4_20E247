//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSMutableAttributedString.h"

__attribute__((visibility("hidden")))
@interface NSCFAttributedString : NSMutableAttributedString
{
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x00800000003d67ef
- (void)removeAttribute:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000003d6c3b
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange)arg3;	// IMP=0x00000000003d6bf4
- (void)addAttributes:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000003d6bbc
- (void)setAttributedString:(id)arg1;	// IMP=0x00000000003d6b77
- (void)deleteCharactersInRange:(struct _NSRange)arg1;	// IMP=0x00000000003d6b46
- (void)appendAttributedString:(id)arg1;	// IMP=0x00000000003d6b01
- (void)insertAttributedString:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000003d6acd
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withAttributedString:(id)arg2;	// IMP=0x00000000003d6a9b
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000003d6a60
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;	// IMP=0x00000000003d68d7
- (Class)classForCoder;	// IMP=0x00000000003d68b1
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003d68a0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003d6891
- (_Bool)isEqualToAttributedString:(id)arg1;	// IMP=0x00000000003d6876
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(struct _NSRange *)arg3 inRange:(struct _NSRange)arg4;	// IMP=0x00000000003d685b
- (id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(struct _NSRange *)arg2 inRange:(struct _NSRange)arg3;	// IMP=0x00000000003d6842
- (id)attributedSubstringFromRange:(struct _NSRange)arg1;	// IMP=0x00000000003d682b
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3;	// IMP=0x00000000003d681b
- (unsigned long long)length;	// IMP=0x00000000003d6811
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;	// IMP=0x00000000003d6801
- (id)string;	// IMP=0x00000000003d67f7
- (_Bool)_isDeallocating;	// IMP=0x00000000003d67df
- (_Bool)_tryRetain;	// IMP=0x00000000003d67ce
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003d67b3
- (unsigned long long)retainCount;	// IMP=0x00000000003d67a9
- (oneway void)release;	// IMP=0x00000000003d679f
- (id)retain;	// IMP=0x00000000003d6787

@end
