//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class RAPQuestion;
@protocol RAPMenu;

@interface RAPReportComposerDirectionsSubcategorySection
{
    RAPQuestion<RAPMenu> *_question;	// 8 = 0x8
    CDUnknownBlockType _selection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000089c12c
- (void)didSelectCellForRowAtIndex:(long long)arg1 tableIndexPath:(id)arg2;	// IMP=0x001000000089c08f
- (id)cellForRowAtIndex:(long long)arg1;	// IMP=0x001000000089bf9d
- (long long)rowsCount;	// IMP=0x001000000089bf4e
- (id)initWithQuestion:(id)arg1 selection:(CDUnknownBlockType)arg2;	// IMP=0x001000000089be6e

@end

