//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITableViewCellLayoutManager.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UITableViewCellLayoutManagerEditable1 : UITableViewCellLayoutManager
{
}

- (void)_textValueChanged:(id)arg1;	// IMP=0x0000000001044282
- (void)_textFieldEndEditingOnReturn:(id)arg1;	// IMP=0x000000000104427c
- (void)_textFieldEndEditing:(id)arg1;	// IMP=0x00000000010441f6
- (void)_textFieldStartEditing:(id)arg1;	// IMP=0x0000000001044169
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x0000000001044161
- (_Bool)textFieldShouldBeginEditing:(id)arg1;	// IMP=0x0000000001044159
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x0000000001044059
- (void)textFieldDidBeginEditing:(id)arg1;	// IMP=0x0000000001044053
- (struct CGSize)intrinsicContentSizeForCell:(id)arg1 rowWidth:(double)arg2;	// IMP=0x0000000001043f78
- (id)editableTextFieldForCell:(id)arg1;	// IMP=0x0000000001043e37
- (id)detailTextLabelForCell:(id)arg1;	// IMP=0x0000000001043e2f
- (void)layoutSubviewsOfCell:(id)arg1;	// IMP=0x00000000010432c5
- (double)defaultTextFieldFontSizeForCell:(id)arg1;	// IMP=0x0000000001043296

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
