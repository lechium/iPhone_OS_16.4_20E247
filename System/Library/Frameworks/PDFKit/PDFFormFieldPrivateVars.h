//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PDFDocument;

__attribute__((visibility("hidden")))
@interface PDFFormFieldPrivateVars : NSObject
{
    PDFDocument *document;	// 8 = 0x8
    struct CGRect bounds;	// 16 = 0x10
    int fieldType;	// 48 = 0x30
    long long buttonType;	// 56 = 0x38
    NSString *fieldName;	// 64 = 0x40
    NSString *stringValue;	// 72 = 0x48
    NSString *defaultStringValue;	// 80 = 0x50
    _Bool writeDefaultValue;	// 88 = 0x58
    struct __CFDictionary *dictionary;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000003c906

@end
