//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PDFFormFieldPrivateVars;

__attribute__((visibility("hidden")))
@interface PDFFormField : NSObject
{
    PDFFormFieldPrivateVars *_private;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000003e685
- (_Bool)_isRedacted;	// IMP=0x000000000003e5af
- (void)addStringDefaultValueToDictionaryRef:(struct __CFDictionary *)arg1;	// IMP=0x000000000003e569
- (void)addNameDefaultValueToDictionaryRef:(struct __CFDictionary *)arg1;	// IMP=0x000000000003e503
- (void)addStringValueToDictionaryRef:(struct __CFDictionary *)arg1;	// IMP=0x000000000003e4bd
- (void)addNameValueToDictionaryRef:(struct __CFDictionary *)arg1;	// IMP=0x000000000003e457
- (void)addFieldNameToDictionaryRef:(struct __CFDictionary *)arg1;	// IMP=0x000000000003e411
- (void)addFieldTypeToDictionaryRef:(struct __CFDictionary *)arg1;	// IMP=0x000000000003e3df
- (id)description;	// IMP=0x000000000003e322
- (_Bool)writeDefaultValue;	// IMP=0x000000000003e315
- (void)setWriteDefaultValue:(_Bool)arg1;	// IMP=0x000000000003e308
- (id)defaultStringValue;	// IMP=0x000000000003e2f6
- (void)setDefaultStringValue:(id)arg1;	// IMP=0x000000000003e2b1
- (id)stringValue;	// IMP=0x000000000003e29f
- (void)setStringValue:(id)arg1;	// IMP=0x000000000003e25a
- (id)fieldName;	// IMP=0x000000000003e248
- (void)setFieldName:(id)arg1;	// IMP=0x000000000003e203
- (long long)buttonType;	// IMP=0x000000000003e1f5
- (void)setButtonType:(long long)arg1;	// IMP=0x000000000003e1e7
- (int)fieldType;	// IMP=0x000000000003e1da
- (void)setFieldType:(int)arg1;	// IMP=0x000000000003e1cd
- (id)document;	// IMP=0x000000000003e1b3
- (void)setDocument:(id)arg1;	// IMP=0x000000000003dc62
- (struct __CFDictionary *)createDictionaryRef;	// IMP=0x000000000003d4f3
- (void)commonCreateDictionaryRef:(struct __CFDictionary *)arg1;	// IMP=0x000000000003d467
- (struct __CFDictionary *)dictionaryRef;	// IMP=0x000000000003d415
- (void)clearDictionaryRef;	// IMP=0x000000000003d37f
- (void)dealloc;	// IMP=0x000000000003d341
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003d1b2
- (void)commonInit;	// IMP=0x000000000003d0fc
- (id)initWithFormDictionary:(struct CGPDFDictionary *)arg1;	// IMP=0x000000000003cd70
- (id)initWithAnnotation:(id)arg1;	// IMP=0x000000000003c942

@end

