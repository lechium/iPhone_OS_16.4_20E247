//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumberFormatter, NSString, TTRIIntervalChooserTextView;
@protocol TTRICustomRecurrenceEditorIntervalChooserTableViewCellDelegate;

@interface TTRICustomRecurrenceEditorIntervalChooserTableViewCell
{
    id <TTRICustomRecurrenceEditorIntervalChooserTableViewCellDelegate> _delegate;	// 8 = 0x8
    TTRIIntervalChooserTextView *_intervalChooserTextView;	// 16 = 0x10
    NSNumberFormatter *_numberFormatter;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000001e5f6
@property(retain, nonatomic) NSNumberFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
@property(retain, nonatomic) TTRIIntervalChooserTextView *intervalChooserTextView; // @synthesize intervalChooserTextView=_intervalChooserTextView;
@property(nonatomic) __weak id <TTRICustomRecurrenceEditorIntervalChooserTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)textViewDidEndEditing:(id)arg1;	// IMP=0x001000000001e31c
- (void)textViewDidChange:(id)arg1;	// IMP=0x001000000001e286
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;	// IMP=0x001000000001e08d
- (void)setIntervalValue:(long long)arg1;	// IMP=0x001000000001dfb4
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x001000000001dbde

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

