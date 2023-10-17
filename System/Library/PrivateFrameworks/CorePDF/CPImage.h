//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CPImage
{
    struct CPPDFImage *imageData;	// 168 = 0xa8
    _Bool renderedBoundsComputed;	// 176 = 0xb0
}

- (_Bool)isVisible;	// IMP=0x000000000000b7a6
- (long long)zOrder;	// IMP=0x000000000000b794
- (void)accept:(id)arg1;	// IMP=0x000000000000b779
- (void)recomputeRenderedBounds;	// IMP=0x000000000000b56e
- (struct CGRect)bounds;	// IMP=0x000000000000b54b
- (struct CGRect)renderedBounds;	// IMP=0x000000000000b4d2
- (struct CPPDFImage *)imageData;	// IMP=0x000000000000b4c1
- (id)initWithBounds:(struct CGRect)arg1;	// IMP=0x000000000000b46f
- (id)initWithPDFImage:(struct CPPDFImage *)arg1;	// IMP=0x000000000000ba47

@end
