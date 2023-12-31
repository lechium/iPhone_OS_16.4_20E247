//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsAutocompleteUI/CNComposeRecipientTextView.h>

@class UIView;
@protocol CKComposeRecipientViewDelegate;

__attribute__((visibility("hidden")))
@interface CKComposeRecipientView : CNComposeRecipientTextView
{
    _Bool _showsBackgroundPlatterView;	// 8 = 0x8
    id <CKComposeRecipientViewDelegate> layoutDelegate;	// 16 = 0x10
    UIView *_backgroundPlatterView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000031ba24
@property(retain, nonatomic) UIView *backgroundPlatterView; // @synthesize backgroundPlatterView=_backgroundPlatterView;
@property(nonatomic) _Bool showsBackgroundPlatterView; // @synthesize showsBackgroundPlatterView=_showsBackgroundPlatterView;
@property(nonatomic) __weak id <CKComposeRecipientViewDelegate> layoutDelegate; // @synthesize layoutDelegate;
- (void)_updateBackgroundPlatterViewIfNecessary;	// IMP=0x000000000031b6bf
- (struct UIEdgeInsets)layoutMargins;	// IMP=0x000000000031b3cd
- (struct UIEdgeInsets)safeAreaInsets;	// IMP=0x000000000031b263
- (void)atomTextViewDidBecomeFirstResponder:(id)arg1;	// IMP=0x000000000031b1e7
- (void)reset;	// IMP=0x000000000031afdf
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000031aee6
- (void)layoutSubviews;	// IMP=0x000000000031aea5
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000031ae46

@end

