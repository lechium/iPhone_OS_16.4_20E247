//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, WDDocument, WDTableCell;

__attribute__((visibility("hidden")))
@interface WDText : NSObject
{
    NSMutableArray *mBlocks;	// 8 = 0x8
    int mTextType;	// 16 = 0x10
    WDDocument *mDocument;	// 24 = 0x18
    WDTableCell *mTableCell;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000040608c
@property(readonly) __weak WDDocument *document; // @synthesize document=mDocument;
- (id)description;	// IMP=0x000000000040604e
- (id)content;	// IMP=0x0000000000405f0e
- (_Bool)isEmpty;	// IMP=0x0000000000405e43
- (id)newRunIterator;	// IMP=0x0000000000405de5
- (id)runIterator;	// IMP=0x0000000000405d68
- (id)newBlockIterator;	// IMP=0x0000000000405d39
- (id)blockIterator;	// IMP=0x0000000000405d02
- (int)tableNestingLevel;	// IMP=0x00000000000d3a99
- (void)removeLastBlock;	// IMP=0x00000000000fdeff
- (void)removeLastCharacter:(unsigned short)arg1;	// IMP=0x00000000000e7175
- (id)addTableAtIndex:(int)arg1;	// IMP=0x0000000000405c93
- (id)addTable;	// IMP=0x00000000000e3512
- (id)paragraphs;	// IMP=0x0000000000405ae3
- (id)firstParagraph;	// IMP=0x0000000000405902
- (id)addParagraphAtIndex:(int)arg1;	// IMP=0x0000000000405893
- (id)addParagraph;	// IMP=0x00000000000d5052
@property(readonly) __weak WDTableCell *tableCell; // @synthesize tableCell=mTableCell;
- (int)textType;	// IMP=0x00000000000d430e
- (void)addBlock:(id)arg1;	// IMP=0x000000000040587c
- (unsigned long long)indexOfBlock:(id)arg1;	// IMP=0x0000000000405865
- (id)lastBlock;	// IMP=0x00000000001aad4d
- (id)blockAt:(unsigned long long)arg1;	// IMP=0x00000000000eba80
- (unsigned long long)blockCount;	// IMP=0x00000000000ea276
- (id)blocks;	// IMP=0x0000000000405857
- (id)initWithDocument:(id)arg1 textType:(int)arg2 tableCell:(id)arg3;	// IMP=0x00000000000bfe1d
- (id)initWithDocument:(id)arg1 textType:(int)arg2;	// IMP=0x00000000000bfe07

@end
