//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AKPDFDocumentWrapper : NSObject
{
    struct CGPDFDocument *_pdfDocument;	// 8 = 0x8
}

- (struct CGPDFDocument *)pdfDocument;	// IMP=0x0000000000049ebd
- (void)dealloc;	// IMP=0x0000000000049e76
- (id)init;	// IMP=0x0000000000049e62
- (id)initWithPDF:(struct CGPDFDocument *)arg1;	// IMP=0x0000000000049e13

@end

