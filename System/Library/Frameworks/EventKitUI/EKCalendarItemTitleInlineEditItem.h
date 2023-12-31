//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UITableViewCell, UITextField;

__attribute__((visibility("hidden")))
@interface EKCalendarItemTitleInlineEditItem
{
    UITableViewCell *_titleCell;	// 32 = 0x20
    _Bool _drawsOwnRowSeparators;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000003978
@property(nonatomic) _Bool drawsOwnRowSeparators; // @synthesize drawsOwnRowSeparators=_drawsOwnRowSeparators;
- (void)_setDrawsOwnRowSeparatorsForCell:(id)arg1;	// IMP=0x0000000000003887
- (id)searchStringForEventAutocomplete;	// IMP=0x000000000000373b
- (_Bool)textFieldShouldClear:(id)arg1;	// IMP=0x0000000000003726
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x00000000000036b0
- (void)textFieldDidChange:(id)arg1;	// IMP=0x000000000000369e
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x00000000000035f3
- (void)textFieldDidBeginEditing:(id)arg1;	// IMP=0x0000000000003549
- (_Bool)editor:(id)arg1 canSelectSubitem:(unsigned long long)arg2;	// IMP=0x0000000000003516
- (_Bool)saveAndDismissWithForce:(_Bool)arg1;	// IMP=0x000000000000343e
- (_Bool)usesDetailViewControllerForSubitem:(unsigned long long)arg1;	// IMP=0x0000000000003436
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;	// IMP=0x000000000000322c
@property(readonly, nonatomic) UITextField *titleTextField;
- (_Bool)isSaveable;	// IMP=0x00000000000030b4
- (id)_makeCell:(unsigned long long)arg1;	// IMP=0x0000000000002e83
- (void)addStylingToCell:(id)arg1 forSubitemAtIndex:(unsigned long long)arg2;	// IMP=0x0000000000002b96
- (void)_contentSizeCategoryChanged:(id)arg1;	// IMP=0x0000000000002b84
- (unsigned long long)numberOfSubitems;	// IMP=0x0000000000002b79
- (void)reset;	// IMP=0x0000000000002b58
- (_Bool)isInline;	// IMP=0x0000000000002b50
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;	// IMP=0x0000000000002ac8
- (void)dealloc;	// IMP=0x0000000000002a46
- (id)init;	// IMP=0x00000000000029a3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

