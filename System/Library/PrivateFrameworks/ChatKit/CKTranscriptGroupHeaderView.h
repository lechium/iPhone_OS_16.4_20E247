//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CKConversation, CNComposeRecipientTextView, UIButton, _UIBackdropView;

__attribute__((visibility("hidden")))
@interface CKTranscriptGroupHeaderView : UIView
{
    CKConversation *_conversation;	// 8 = 0x8
    CNComposeRecipientTextView *_textView;	// 16 = 0x10
    UIView *_separator;	// 24 = 0x18
    UIButton *_actionButton;	// 32 = 0x20
    _UIBackdropView *_backdropView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000046a72e
@property(retain, nonatomic) _UIBackdropView *backdropView; // @synthesize backdropView=_backdropView;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) CNComposeRecipientTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
- (void)layoutSubviews;	// IMP=0x000000000046a4b8
- (id)initWithFrame:(struct CGRect)arg1 conversation:(id)arg2;	// IMP=0x000000000046a0ee
- (void)dealloc;	// IMP=0x0000000000469f1d

@end

