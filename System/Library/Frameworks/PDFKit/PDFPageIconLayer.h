//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class PDFDocument;

__attribute__((visibility("hidden")))
@interface PDFPageIconLayer : CALayer
{
    PDFDocument *_document;	// 8 = 0x8
    int _pageIndex;	// 16 = 0x10
    struct CGSize _frameSize;	// 24 = 0x18
    _Bool _needsUpdate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000d33e3
@property(nonatomic) __weak PDFDocument *document; // @synthesize document=_document;
- (void)updateAsPageIndex:(int)arg1 forDocument:(id)arg2;	// IMP=0x00000000000d2f21
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000000d2ed0
- (void)setNeedsUpdate;	// IMP=0x00000000000d2ebf
@property(readonly, nonatomic) int pageIndex;
- (id)initWithSize:(struct CGSize)arg1;	// IMP=0x00000000000d2d02

@end
