//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OISFURegularExpression : NSObject
{
    NSString *_expressionString;	// 8 = 0x8
    void *_reserved;	// 16 = 0x10
}

+ (id)regularExpressionWithString:(id)arg1;	// IMP=0x0010000000289fd7
+ (void)initialize;	// IMP=0x0010000000289f9b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000028a73f
- (const char *)getBytesForString:(id)arg1 lossByte:(unsigned char)arg2;	// IMP=0x000000000028a6e7
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000028a638
- (struct _NSRange)matchedRangeForString:(id)arg1 range:(struct _NSRange)arg2 subexpressionRanges:(struct _NSRange *)arg3 count:(unsigned int)arg4;	// IMP=0x000000000028a4e1
- (struct _NSRange)matchedRangeForCString:(const char *)arg1 range:(struct _NSRange)arg2 subexpressionRanges:(struct _NSRange *)arg3 count:(unsigned int)arg4;	// IMP=0x000000000028a350
- (id)expressionString;	// IMP=0x000000000028a346
- (unsigned long long)hash;	// IMP=0x000000000028a330
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000028a2b6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000028a245
- (id)init;	// IMP=0x000000000028a22c
- (unsigned long long)numberOfSubexpressions;	// IMP=0x000000000028a21e
- (id)initWithExpressionString:(id)arg1 options:(unsigned int)arg2;	// IMP=0x000000000028a07f
- (id)initWithExpressionString:(id)arg1;	// IMP=0x000000000028a06b
- (void)dealloc;	// IMP=0x000000000028a006

@end

