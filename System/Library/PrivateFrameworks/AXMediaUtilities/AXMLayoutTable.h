//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AXMLayoutHeader, NSMutableArray;

__attribute__((visibility("hidden")))
@interface AXMLayoutTable
{
    AXMLayoutHeader *_header;	// 8 = 0x8
    NSMutableArray *_rows;	// 16 = 0x10
    NSMutableArray *_columns;	// 24 = 0x18
}

+ (id)region:(id)arg1 row:(id)arg2;	// IMP=0x006000000003f683
- (void).cxx_destruct;	// IMP=0x000000000003f8b8
- (id)columns;	// IMP=0x000000000003f8a3
- (id)rows;	// IMP=0x000000000003f88e
- (id)firstColumn;	// IMP=0x000000000003f871
- (void)addColumn:(id)arg1;	// IMP=0x000000000003f854
- (id)header;	// IMP=0x000000000003f83f
- (id)firstLine;	// IMP=0x000000000003f822
- (void)addRow:(id)arg1;	// IMP=0x000000000003f805
- (struct CGRect)normalizedFrame;	// IMP=0x000000000003f7b8
- (struct CGRect)frame;	// IMP=0x000000000003f76b

@end
