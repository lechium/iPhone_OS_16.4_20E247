//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, TTRIUIDividedGridViewTableViewCell;

@interface TTRIRecurrenceGridChooserController
{
    TTRIUIDividedGridViewTableViewCell *_tableViewCell;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000007720
- (id)cellAccessibilityLabels;	// IMP=0x0010000000007718
- (void)selectCell:(id)arg1 atIndex:(long long)arg2;	// IMP=0x001000000052a977
- (void)refreshCells;	// IMP=0x001000000052a953
- (void)prepareForDisplay;	// IMP=0x001000000052a92f
- (long long)gridViewType;	// IMP=0x001000000052a907
- (id)cellLabels;	// IMP=0x001000000052a8e0
- (_Bool)drawBackgroundForRow:(long long)arg1;	// IMP=0x00100000000076fb
- (void)dividedGridViewController:(id)arg1 didSelectCell:(id)arg2 atIndex:(long long)arg3;	// IMP=0x00100000000076e3
- (void)dividedGridViewControllerDidLayout:(id)arg1;	// IMP=0x00100000000076b5
- (double)heightForRow:(long long)arg1;	// IMP=0x0010000000007655
- (id)cellForRow:(long long)arg1;	// IMP=0x0010000000007643
- (id)allCells;	// IMP=0x00100000000075c9
- (id)tableViewCell;	// IMP=0x001000000000745c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

