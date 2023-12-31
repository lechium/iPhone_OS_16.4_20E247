//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIPickerView.h>

@class NSString, WKContentView;

__attribute__((visibility("hidden")))
@interface WKSelectSinglePicker : UIPickerView
{
    WKContentView *_view;	// 8 = 0x8
    long long _selectedIndex;	// 16 = 0x10
}

- (void)selectRow:(long long)arg1 inComponent:(long long)arg2 extendingSelection:(_Bool)arg3;	// IMP=0x000000000047e102
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;	// IMP=0x000000000047df9d
- (id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3;	// IMP=0x000000000047de2f
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;	// IMP=0x000000000047de0b
- (long long)numberOfComponentsInPickerView:(id)arg1;	// IMP=0x000000000047de00
- (void)controlEndEditing;	// IMP=0x000000000047dd54
- (void)controlBeginEditing;	// IMP=0x000000000047dd4e
- (id)controlView;	// IMP=0x000000000047dd45
- (void)dealloc;	// IMP=0x000000000047dcee
- (id)initWithView:(id)arg1;	// IMP=0x000000000047db61

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

