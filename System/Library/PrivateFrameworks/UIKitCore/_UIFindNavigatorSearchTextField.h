//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UISearchTextField.h"

__attribute__((visibility("hidden")))
@interface _UIFindNavigatorSearchTextField : UISearchTextField
{
    _Bool _keyboardDidAppear;	// 8 = 0x8
}

+ (id)_newlineImageForSize:(struct CGSize)arg1 withTraitCollection:(id)arg2;	// IMP=0x0060000000122462
@property(nonatomic) _Bool keyboardDidAppear; // @synthesize keyboardDidAppear=_keyboardDidAppear;
- (id)text;	// IMP=0x000000000012298b
- (void)insertNewline;	// IMP=0x00000000001226d1
- (void)layoutSubviews;	// IMP=0x0000000000122368
- (struct CGRect)_availableTextRectForBounds:(struct CGRect)arg1 forEditing:(_Bool)arg2 accountForRightView:(_Bool)arg3;	// IMP=0x000000000012222e
- (struct CGRect)_availableTextRectForBounds:(struct CGRect)arg1 forEditing:(_Bool)arg2;	// IMP=0x00000000001221ce
- (_Bool)_isTextRectWideEnoughForRightView:(struct CGRect)arg1;	// IMP=0x000000000012214c
- (struct CGRect)rightViewRectForBounds:(struct CGRect)arg1;	// IMP=0x00000000001220a8
- (struct CGRect)_baselineLeftViewRectForBounds:(struct CGRect)arg1;	// IMP=0x0000000000122004
- (struct CGRect)_applyRightViewOffsetIfApplicable:(struct CGRect)arg1;	// IMP=0x0000000000121ebf
- (_Bool)_showsClearButtonWhenNonEmpty:(_Bool)arg1;	// IMP=0x0000000000121e86
- (_Bool)_delegateShouldScrollToVisibleWhenBecomingFirstResponder;	// IMP=0x0000000000121e7e
- (id)undoManager;	// IMP=0x0000000000121e2e
- (long long)keyboardAppearance;	// IMP=0x0000000000121dea
- (_Bool)canResignFirstResponder;	// IMP=0x0000000000121d3b
- (_Bool)_canResignIfContainsFirstResponder;	// IMP=0x0000000000121d33
- (id)selectionContainerView;	// IMP=0x0000000000121d2a
- (struct CGRect)visibleRect;	// IMP=0x0000000000121ccc
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000000121c83
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000121ae6

@end
