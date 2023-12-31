//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIPickerView.h"

@class DOMHTMLSelectElement, NSArray, NSString;
@protocol UIWebSelectedItemPrivate;

__attribute__((visibility("hidden")))
@interface UIWebSelectMultiplePicker : UIPickerView
{
    DOMHTMLSelectElement *_selectionNode;	// 80 = 0x50
    NSArray *_cachedItems;	// 88 = 0x58
    id <UIWebSelectedItemPrivate> _singleSelectionItem;	// 96 = 0x60
    unsigned long long _singleSelectionIndex;	// 104 = 0x68
    double _fontSize;	// 112 = 0x70
    double _maximumTextWidth;	// 120 = 0x78
    long long _textAlignment;	// 128 = 0x80
    double _layoutWidth;	// 136 = 0x88
}

@property(retain, nonatomic) id <UIWebSelectedItemPrivate> _singleSelectionItem; // @synthesize _singleSelectionItem;
@property(retain, nonatomic) NSArray *_cachedItems; // @synthesize _cachedItems;
@property(retain, nonatomic) DOMHTMLSelectElement *_selectionNode; // @synthesize _selectionNode;
- (void)pickerView:(id)arg1 row:(int)arg2 column:(int)arg3 checked:(_Bool)arg4;	// IMP=0x000000000079ad20
- (int)_itemIndexForRowIndex:(int)arg1;	// IMP=0x000000000079acae
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;	// IMP=0x000000000079ac91
- (long long)numberOfComponentsInPickerView:(id)arg1;	// IMP=0x000000000079ac86
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;	// IMP=0x000000000079a891
- (void)layoutSubviews;	// IMP=0x000000000079a7a8
- (void)controlEndEditing;	// IMP=0x000000000079a7a2
- (void)controlBeginEditing;	// IMP=0x000000000079a79c
- (id)controlView;	// IMP=0x000000000079a793
- (void)dealloc;	// IMP=0x000000000079a70f
- (id)initWithDOMHTMLSelectElement:(id)arg1 cachedItems:(id)arg2 singleSelectionItem:(id)arg3 singleSelectionIndex:(unsigned long long)arg4 multipleSelection:(_Bool)arg5;	// IMP=0x000000000079a54b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

