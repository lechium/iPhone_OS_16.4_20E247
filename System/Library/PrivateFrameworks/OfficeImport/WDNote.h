//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class WDCharacterRun, WDText;

__attribute__((visibility("hidden")))
@interface WDNote
{
    WDText *mText;	// 8 = 0x8
    WDCharacterRun *mReference;	// 16 = 0x10
    _Bool mAutomaticNumbering;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000003f3ea9
- (id)description;	// IMP=0x00000000003f3e6b
- (id)initWithParagraph:(id)arg1 footnote:(_Bool)arg2;	// IMP=0x0000000000163b3f
- (int)runType;	// IMP=0x0000000000164031
- (void)setAutomaticNumbering:(_Bool)arg1;	// IMP=0x000000000016400c
- (_Bool)automaticNumbering;	// IMP=0x000000000022c24e
- (id)reference;	// IMP=0x000000000016401c
- (id)text;	// IMP=0x0000000000163fc0

@end
