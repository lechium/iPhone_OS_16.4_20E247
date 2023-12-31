//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKPageModelController, PDFAKPageAdaptorPrivate, PDFPage;

__attribute__((visibility("hidden")))
@interface PDFAKPageAdaptor : NSObject
{
    PDFAKPageAdaptorPrivate *_private;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000003ff84
- (void)_annotationsWereAdded:(id)arg1;	// IMP=0x000000000003f977
- (void)_annotationsWereRemoved:(id)arg1;	// IMP=0x000000000003f636
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000003f15a
- (void)_stopObservingPageModel;	// IMP=0x000000000003f0d1
- (void)_startObservingPageModel;	// IMP=0x000000000003f03c
- (void)initializeExifAndScaleOnAnnotation:(id)arg1;	// IMP=0x000000000003ed4d
- (void)pdfPageWasRotated:(id)arg1;	// IMP=0x000000000003ebab
- (void)pdfPage:(id)arg1 didRemoveAnnotation:(id)arg2;	// IMP=0x000000000003eace
- (void)pdfPage:(id)arg1 didAddAnnotation:(id)arg2;	// IMP=0x000000000003e9e1
@property(readonly, nonatomic) AKPageModelController *akPageModelController;
@property(readonly, nonatomic) __weak PDFPage *pdfPage;
- (void)_teardown;	// IMP=0x000000000003e95a
- (void)teardown;	// IMP=0x000000000003e8b5
- (void)dealloc;	// IMP=0x000000000003e83b
- (id)initWithPDFPage:(id)arg1 pageModelController:(id)arg2;	// IMP=0x000000000003e752
- (id)initWithPDFPage:(id)arg1;	// IMP=0x000000000003e6bb

@end

