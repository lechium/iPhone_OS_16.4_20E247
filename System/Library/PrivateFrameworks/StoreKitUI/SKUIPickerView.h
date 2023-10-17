//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UIPickerView, _UIBackdropView;
@protocol SKUIPickerViewDelegate;

__attribute__((visibility("hidden")))
@interface SKUIPickerView : UIView
{
    _UIBackdropView *_backdropView;	// 8 = 0x8
    id <SKUIPickerViewDelegate> _delegate;	// 16 = 0x10
    UIPickerView *_pickerView;	// 24 = 0x18
    UIView *_separatorView;	// 32 = 0x20
    NSArray *_titles;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000006d9c1
@property(nonatomic) __weak id <SKUIPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;	// IMP=0x000000000006d974
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;	// IMP=0x000000000006d8e2
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;	// IMP=0x000000000006d8c5
- (long long)numberOfComponentsInPickerView:(id)arg1;	// IMP=0x000000000006d8ba
- (void)layoutSubviews;	// IMP=0x000000000006d792
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000006d775
@property(nonatomic) long long selectedItemIndex;
- (void)dealloc;	// IMP=0x000000000006d6cd
- (id)initWithTitles:(id)arg1;	// IMP=0x000000000006d492
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000006d444
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006d430

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
