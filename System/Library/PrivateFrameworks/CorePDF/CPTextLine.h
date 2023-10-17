//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPCharSequence, NSArray;

__attribute__((visibility("hidden")))
@interface CPTextLine
{
    CPCharSequence *charSequence;	// 128 = 0x80
    CDStruct_2e2afed4 *wordArray;	// 136 = 0x88
    unsigned int wordCount;	// 144 = 0x90
    struct CPInlineContainer *inlineList;	// 152 = 0x98
    int lineNumber;	// 160 = 0xa0
    int columnNumber;	// 164 = 0xa4
    double baseline;	// 168 = 0xa8
    _Bool baseLineIsNull;	// 176 = 0xb0
    struct CGRect normalizedBounds;	// 184 = 0xb8
    _Bool hasBeenSplit;	// 216 = 0xd8
    _Bool hasBeenProcessed;	// 217 = 0xd9
    _Bool maySplit;	// 218 = 0xda
    _Bool hasTabs;	// 219 = 0xdb
    NSArray *columnBreaks;	// 224 = 0xe0
    NSArray *xsegments;	// 232 = 0xe8
    int levels;	// 240 = 0xf0
    float maximumLetterGap;	// 244 = 0xf4
    float maximumWordGap;	// 248 = 0xf8
    int tabsBefore;	// 252 = 0xfc
    _Bool irregular;	// 256 = 0x100
    unsigned int leftSpacerIndex;	// 260 = 0x104
    unsigned int rightSpacerIndex;	// 264 = 0x108
    _Bool isListItem;	// 268 = 0x10c
    unsigned int listSpacerIndex;	// 272 = 0x110
    _Bool lineBreakAfter;	// 276 = 0x114
    struct CPPDFStyle *uniformStyle;	// 280 = 0x118
    unsigned short uniformStyleFlags;	// 288 = 0x120
    double monospaceWidth;	// 296 = 0x128
    unsigned int *spacesBefore;	// 304 = 0x130
    _Bool disposed;	// 312 = 0x138
}

@property(nonatomic) _Bool lineBreakAfter; // @synthesize lineBreakAfter;
@property(nonatomic) unsigned int listSpacerIndex; // @synthesize listSpacerIndex;
@property(nonatomic) _Bool isListItem; // @synthesize isListItem;
@property(nonatomic) unsigned int rightSpacerIndex; // @synthesize rightSpacerIndex;
@property(nonatomic) unsigned int leftSpacerIndex; // @synthesize leftSpacerIndex;
- (struct CGRect)normalizedBounds;	// IMP=0x00000000000320e2
- (double)rotationAngle;	// IMP=0x00000000000320c5
- (double)medianFontSize;	// IMP=0x0000000000032013
- (_Bool)hasDropCap;	// IMP=0x0000000000031f55
- (long long)topIsAbove:(id)arg1;	// IMP=0x0000000000031e9b
- (id)attributes;	// IMP=0x0000000000031e8e
- (void)setIrregular:(_Bool)arg1;	// IMP=0x0000000000031e7e
- (_Bool)irregular;	// IMP=0x0000000000031e6e
- (void)setMaximumWordGap:(float)arg1;	// IMP=0x0000000000031e5c
- (float)maximumWordGap;	// IMP=0x0000000000031e4a
- (void)setMaximumLetterGap:(float)arg1;	// IMP=0x0000000000031e38
- (float)maximumLetterGap;	// IMP=0x0000000000031e26
- (void)recomputeLevels;	// IMP=0x0000000000031da9
- (void)setLevels:(int)arg1;	// IMP=0x0000000000031d99
- (int)levels;	// IMP=0x0000000000031d89
- (void)setSpaces:(unsigned int)arg1 beforeWordAtIndex:(unsigned int)arg2;	// IMP=0x0000000000031ce4
- (unsigned int)spacesBeforeWordAtIndex:(unsigned int)arg1;	// IMP=0x0000000000031cb2
- (double)monospaceWidth;	// IMP=0x0000000000031af1
- (_Bool)isMonospaced;	// IMP=0x0000000000031acd
- (_Bool)styleIsUniform:(struct CPPDFStyle **)arg1 styleFlags:(unsigned short)arg2;	// IMP=0x00000000000319a3
- (void)recomputeBaseline;	// IMP=0x0000000000031853
- (void)translateObjectYBy:(double)arg1;	// IMP=0x0000000000031807
- (_Bool)isIndivisible;	// IMP=0x00000000000317ff
- (void)setBaselineToNull;	// IMP=0x00000000000317ee
- (void)setBaseline:(double)arg1;	// IMP=0x00000000000317d1
- (double)baseline;	// IMP=0x00000000000316f7
- (_Bool)hyphenated;	// IMP=0x00000000000316ef
- (struct CGPoint)anchor;	// IMP=0x0000000000031697
- (_Bool)overlapsHorizontally:(struct CGRect)arg1;	// IMP=0x00000000000315e4
- (_Bool)overlapsWith:(id)arg1;	// IMP=0x0000000000031588
- (long long)baseLineDescendingApprox:(id)arg1;	// IMP=0x000000000003143e
- (long long)baseLineDescending:(id)arg1;	// IMP=0x00000000000313e3
- (long long)baseLineAscending:(id)arg1;	// IMP=0x0000000000031388
- (struct CGRect)bounds;	// IMP=0x00000000000312b7
- (void)fitBoundsToChildren;	// IMP=0x00000000000312b1
- (int)tabsBefore;	// IMP=0x00000000000312a1
- (void)setTabsBefore:(int)arg1;	// IMP=0x0000000000031291
- (_Bool)hasTabs;	// IMP=0x0000000000031281
- (void)setHasTabs:(_Bool)arg1;	// IMP=0x0000000000031271
- (void)accept:(id)arg1;	// IMP=0x0000000000031256
- (void)setColumnBreaks:(id)arg1;	// IMP=0x0000000000031218
- (id)columnBreaks;	// IMP=0x0000000000031207
- (_Bool)hasBeenProcessed;	// IMP=0x00000000000311f7
- (void)setHasBeenProcessed:(_Bool)arg1;	// IMP=0x00000000000311e7
- (_Bool)hasBeenSplit;	// IMP=0x00000000000311d7
- (void)setHasBeenSplit:(_Bool)arg1;	// IMP=0x00000000000311c7
- (id)properties;	// IMP=0x00000000000311ba
- (_Bool)mapToWordPairsWithIndex:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;	// IMP=0x0000000000031132
- (_Bool)mapToWordPairs:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;	// IMP=0x00000000000310b7
- (_Bool)mapToWordsWithIndex:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;	// IMP=0x0000000000031046
- (_Bool)mapToWords:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;	// IMP=0x0000000000030fd6
- (_Bool)removeTextLines:(id)arg1 whereTrue:(CDUnknownFunctionPointerType)arg2 passing:(void *)arg3;	// IMP=0x0000000000030dc2
- (id)newTextLineFromWordAt:(unsigned int)arg1 lengthInWords:(unsigned int)arg2;	// IMP=0x0000000000030be6
- (_Bool)changesFontAt:(id)arg1;	// IMP=0x0000000000030b3d
- (_Bool)hasJustifiedAlignment;	// IMP=0x0000000000030b1e
- (int)align;	// IMP=0x0000000000030ac0
- (long long)zOrder;	// IMP=0x0000000000030a67
- (void)anchorChunk:(id)arg1 atWordIndex:(unsigned int)arg2;	// IMP=0x0000000000030913
- (struct CPInlineContainer *)inlineList;	// IMP=0x0000000000030902
- (unsigned int)inlineCount;	// IMP=0x00000000000308e2
- (CDStruct_2e2afed4 *)lastWord;	// IMP=0x00000000000308b5
- (CDStruct_2e2afed4 *)firstWord;	// IMP=0x0000000000030893
- (CDStruct_2e2afed4 *)wordAtIndex:(unsigned int)arg1;	// IMP=0x0000000000030863
- (struct CGRect)boundsOfWordAtIndex:(unsigned int)arg1;	// IMP=0x0000000000030817
- (unsigned int)wordCount;	// IMP=0x0000000000030807
- (CDStruct_2e2afed4 *)wordArrayOfSize:(unsigned int)arg1;	// IMP=0x0000000000030792
- (CDStruct_2e2afed4 *)wordArray;	// IMP=0x0000000000030781
- (id)charSequence;	// IMP=0x0000000000030770
- (void)setCharSequence:(id)arg1;	// IMP=0x0000000000030732
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000030648
- (void)dealloc;	// IMP=0x00000000000305e3
- (void)finalize;	// IMP=0x00000000000305a5
- (void)dispose;	// IMP=0x000000000003051e
- (id)init;	// IMP=0x0000000000030452

@end
