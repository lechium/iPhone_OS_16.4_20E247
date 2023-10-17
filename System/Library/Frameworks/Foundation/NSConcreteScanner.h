//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSScanner.h"

@class NSCharacterSet, NSString;

__attribute__((visibility("hidden")))
@interface NSConcreteScanner : NSScanner
{
    NSString *scanString;	// 8 = 0x8
    NSCharacterSet *skipSet;	// 16 = 0x10
    NSCharacterSet *invertedSkipSet;	// 24 = 0x18
    id locale;	// 32 = 0x20
    unsigned long long scanLocation;	// 40 = 0x28
    struct {
        unsigned int caseSensitive:1;
        unsigned int :31;
    } flags;	// 48 = 0x30
}

- (void)dealloc;	// IMP=0x00000000004e53ca
- (_Bool)scanLongLong:(long long *)arg1;	// IMP=0x00000000004e53a0
- (_Bool)scanInt:(int *)arg1;	// IMP=0x00000000004e5376
- (id)locale;	// IMP=0x00000000004e5358
- (void)setLocale:(id)arg1;	// IMP=0x00000000004e531a
- (_Bool)caseSensitive;	// IMP=0x00000000004e5308
- (void)setCaseSensitive:(_Bool)arg1;	// IMP=0x00000000004e52f0
- (id)charactersToBeSkipped;	// IMP=0x00000000004e52d2
- (void)setCharactersToBeSkipped:(id)arg1;	// IMP=0x00000000004e5267
- (unsigned long long)scanLocation;	// IMP=0x00000000004e5256
- (void)setScanLocation:(unsigned long long)arg1;	// IMP=0x00000000004e51a6
- (id)_invertedSkipSet;	// IMP=0x00000000004e50e3
- (id)string;	// IMP=0x00000000004e50c5
- (id)initWithString:(id)arg1;	// IMP=0x00000000004e4fee

@end
