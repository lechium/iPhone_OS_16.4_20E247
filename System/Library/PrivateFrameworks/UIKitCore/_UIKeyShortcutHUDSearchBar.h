//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, NSString, UIButton, _UIKeyShortcutHUDSearchButton, _UIKeyShortcutHUDSearchTextField;
@protocol _UIKeyShortcutHUDSearchBarDelegate;

__attribute__((visibility("hidden")))
@interface _UIKeyShortcutHUDSearchBar : UIView
{
    _Bool _searching;	// 8 = 0x8
    _Bool _usingFallbackSearchAnimation;	// 9 = 0x9
    id <_UIKeyShortcutHUDSearchBarDelegate> _delegate;	// 16 = 0x10
    _UIKeyShortcutHUDSearchTextField *_searchTextField;	// 24 = 0x18
    UIView *_backgroundView;	// 32 = 0x20
    UIButton *_cancelButton;	// 40 = 0x28
    NSArray *_standardSearchTextFieldConstraints;	// 48 = 0x30
    NSArray *_searchTextFieldTransitionConstraints;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000008d0098
@property(nonatomic, getter=isUsingFallbackSearchAnimation) _Bool usingFallbackSearchAnimation; // @synthesize usingFallbackSearchAnimation=_usingFallbackSearchAnimation;
@property(retain, nonatomic) NSArray *searchTextFieldTransitionConstraints; // @synthesize searchTextFieldTransitionConstraints=_searchTextFieldTransitionConstraints;
@property(retain, nonatomic) NSArray *standardSearchTextFieldConstraints; // @synthesize standardSearchTextFieldConstraints=_standardSearchTextFieldConstraints;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic, getter=isSearching) _Bool searching; // @synthesize searching=_searching;
@property(readonly, nonatomic) _UIKeyShortcutHUDSearchTextField *searchTextField; // @synthesize searchTextField=_searchTextField;
@property(nonatomic) __weak id <_UIKeyShortcutHUDSearchBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_doNothing:(id)arg1;	// IMP=0x00000000008cff90
- (void)_textChanged:(id)arg1;	// IMP=0x00000000008cfefc
- (_Bool)isFirstResponder;	// IMP=0x00000000008cfedf
- (_Bool)resignFirstResponder;	// IMP=0x00000000008cfec2
- (_Bool)becomeFirstResponder;	// IMP=0x00000000008cfea5
- (void)selectAll:(id)arg1;	// IMP=0x00000000008cfe88
- (void)didCompleteSearchTransition;	// IMP=0x00000000008cfde2
- (void)prepareForSearchTransition:(_Bool)arg1 usingCell:(id)arg2;	// IMP=0x00000000008cf774
@property(nonatomic) __weak _UIKeyShortcutHUDSearchButton *searchButton;
@property(readonly, nonatomic, getter=isEditing) _Bool editing;
@property(retain, nonatomic) NSString *text;
- (void)_setupLayout;	// IMP=0x00000000008cf009
- (void)_createCancelButton;	// IMP=0x00000000008cec71
- (void)_createSearchTextField;	// IMP=0x00000000008ce918
- (void)_createBackgroundView;	// IMP=0x00000000008ce7df
- (void)_commonInit;	// IMP=0x00000000008ce797
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000008ce74b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000008ce6ee

@end

