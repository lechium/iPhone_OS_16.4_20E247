//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PDFRevealManagerPrivate;

__attribute__((visibility("hidden")))
@interface PDFRevealManager : NSObject
{
    PDFRevealManagerPrivate *_private;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000075cc7
- (void)reset;	// IMP=0x0000000000075cac
- (id)PDFRVDocumentContextForPage:(id)arg1;	// IMP=0x0000000000075c8e
- (id)PDFRVPresenter;	// IMP=0x0000000000075c2d
- (id)PDFRVPresentingContextAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000075c0f
- (id)initWithPDFView:(id)arg1;	// IMP=0x0000000000075b90

@end
