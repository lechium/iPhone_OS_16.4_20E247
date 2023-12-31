//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PDSlideMaster;

__attribute__((visibility("hidden")))
@interface PDSlideLayout
{
    int mSlideLayoutType;	// 96 = 0x60
    PDSlideMaster *mSlideMaster;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000443e50
- (id)description;	// IMP=0x0000000000443e12
- (void)doneWithContent;	// IMP=0x0000000000443de3
- (id)parentSlideBase;	// IMP=0x0000000000037ca7
- (id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;	// IMP=0x0000000000038190
- (id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;	// IMP=0x0000000000038077
- (id)parentTextStyleForTables;	// IMP=0x00000000001f8936
- (id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(_Bool)arg4;	// IMP=0x0000000000037d92
- (id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;	// IMP=0x0000000000037f51
- (id)transition;	// IMP=0x0000000000443d2a
- (id)background;	// IMP=0x00000000000a3409
- (id)defaultTheme;	// IMP=0x00000000000a898d
@property __weak PDSlideMaster *slideMaster; // @synthesize slideMaster=mSlideMaster;
- (void)setSlideLayoutType:(int)arg1;	// IMP=0x00000000000377a3
- (int)slideLayoutType;	// IMP=0x0000000000038a1b
- (id)initWithSlideMaster:(id)arg1;	// IMP=0x0000000000037626

@end

