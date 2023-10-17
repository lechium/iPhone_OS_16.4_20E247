//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CPTable
{
    struct CGRect tableBounds;	// 96 = 0x60
    unsigned int rowCount;	// 128 = 0x80
    double *rowY;	// 136 = 0x88
    unsigned int columnCount;	// 144 = 0x90
    double *columnX;	// 152 = 0x98
    struct CGColor *backgroundColor;	// 160 = 0xa0
    unsigned int backgroundGraphicCount;	// 168 = 0xa8
    id *backgroundGraphics;	// 176 = 0xb0
    unsigned int usedGraphicCount;	// 184 = 0xb8
    _Bool disposed;	// 188 = 0xbc
}

@property(readonly, nonatomic) unsigned int backgroundGraphicCount; // @synthesize backgroundGraphicCount;
@property(readonly, nonatomic) double *columnX; // @synthesize columnX;
@property(readonly, nonatomic) double *rowY; // @synthesize rowY;
@property(readonly, nonatomic) struct CGRect tableBounds; // @synthesize tableBounds;
- (unsigned int)usedGraphicCount;	// IMP=0x000000000002fbb1
- (void)incrementUsedGraphicCount;	// IMP=0x000000000002fba1
- (id)backgroundGraphicAtIndex:(unsigned int)arg1;	// IMP=0x000000000002fb7a
- (void)setBackgroundGraphics:(id)arg1;	// IMP=0x000000000002fa6c
- (struct CGColor *)backgroundColor;	// IMP=0x000000000002f9cc
@property(nonatomic) unsigned int columnCount;
@property(nonatomic) unsigned int rowCount;
- (void)dealloc;	// IMP=0x000000000002f8c6
- (void)finalize;	// IMP=0x000000000002f888
- (void)dispose;	// IMP=0x000000000002f795
- (id)initWithBounds:(struct CGRect)arg1;	// IMP=0x000000000002f746

@end
