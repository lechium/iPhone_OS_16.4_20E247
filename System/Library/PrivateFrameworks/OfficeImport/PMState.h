//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CMOutlineState, OADTablePartStyle;

__attribute__((visibility("hidden")))
@interface PMState
{
    CMOutlineState *mListState;	// 88 = 0x58
    OADTablePartStyle *mCurrentRowStyle;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000046ec23
- (id)currentRowStyle;	// IMP=0x00000000000aa51f
- (void)setCurrentRowStyle:(id)arg1;	// IMP=0x00000000001f9a12
- (id)listState;	// IMP=0x00000000000a7a9c
- (id)init;	// IMP=0x0000000000039008

@end
