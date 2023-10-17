//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CKAcknowledgmentGlyphView, CKMessageAcknowledgmentDraftDescriptor, UIButton;
@protocol CKMessageAcknowledgmentPickerBarItemViewDelegate;

__attribute__((visibility("hidden")))
@interface CKMessageAcknowledgmentPickerBarItemView : UIView
{
    _Bool _selected;	// 8 = 0x8
    long long _messageAcknowledgmentType;	// 16 = 0x10
    id <CKMessageAcknowledgmentPickerBarItemViewDelegate> _delegate;	// 24 = 0x18
    CKAcknowledgmentGlyphView *_acknowledgmentGlyphView;	// 32 = 0x20
    UIButton *_itemButton;	// 40 = 0x28
    CKMessageAcknowledgmentDraftDescriptor *_draft;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000011a41a
@property(readonly, nonatomic) CKMessageAcknowledgmentDraftDescriptor *draft; // @synthesize draft=_draft;
@property(retain, nonatomic) UIButton *itemButton; // @synthesize itemButton=_itemButton;
@property(readonly, nonatomic) CKAcknowledgmentGlyphView *acknowledgmentGlyphView; // @synthesize acknowledgmentGlyphView=_acknowledgmentGlyphView;
@property(nonatomic) __weak id <CKMessageAcknowledgmentPickerBarItemViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long messageAcknowledgmentType; // @synthesize messageAcknowledgmentType=_messageAcknowledgmentType;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(readonly, nonatomic) _Bool displaySelected;
- (void)layoutSubviews;	// IMP=0x000000000011a067
- (void)itemButtonTapped:(id)arg1;	// IMP=0x0000000000119ffe
- (void)configureWithMessageAcknowledgmentDescriptor:(id)arg1 initiallySelected:(_Bool)arg2;	// IMP=0x0000000000119e1c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000119dc6

@end
