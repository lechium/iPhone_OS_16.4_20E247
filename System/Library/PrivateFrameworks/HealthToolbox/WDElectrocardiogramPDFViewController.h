//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSData, NSDate, NSString, PDFDocument, PDFView;

__attribute__((visibility("hidden")))
@interface WDElectrocardiogramPDFViewController : UIViewController
{
    NSData *_pdfData;	// 8 = 0x8
    NSDate *_sampleDate;	// 16 = 0x10
    PDFDocument *_pdfDocument;	// 24 = 0x18
    NSString *_firstName;	// 32 = 0x20
    NSString *_lastName;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000046146
@property(readonly, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(readonly, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(readonly, nonatomic) PDFDocument *pdfDocument; // @synthesize pdfDocument=_pdfDocument;
@property(readonly, nonatomic) NSDate *sampleDate; // @synthesize sampleDate=_sampleDate;
@property(readonly, nonatomic) NSData *pdfData; // @synthesize pdfData=_pdfData;
- (unsigned long long)overrideMask;	// IMP=0x00000000000460e6
- (void)didTapShare;	// IMP=0x0000000000045ef6
- (void)didTapDone;	// IMP=0x0000000000045edd
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000045e33
- (void)loadView;	// IMP=0x0000000000045cc2
@property(readonly, nonatomic) PDFView *pdfView;
- (id)initWithPDFData:(id)arg1 sampleDate:(id)arg2 firstName:(id)arg3 lastName:(id)arg4;	// IMP=0x0000000000045a3a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
