//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8PaperKit26TextToolListViewController : UIViewController
{
    MISSING_TYPE *stackView;	// 8 = 0x8
    MISSING_TYPE *contentSizeObserver;	// 16 = 0x10
    MISSING_TYPE *minimumItemHeight;	// 24 = 0x18
    MISSING_TYPE *minimumPreferredContentSizeWidth;	// 32 = 0x20
    MISSING_TYPE *delegate;	// 40 = 0x28
    MISSING_TYPE *autoFillFormListItemVisible;	// 56 = 0x38
    MISSING_TYPE *addShapeListItemVisible;	// 57 = 0x39
    MISSING_TYPE *$__lazy_storage_$_listItemViews;	// 64 = 0x40
    MISSING_TYPE *$__lazy_storage_$_addTextBoxListItemView;	// 72 = 0x48
    MISSING_TYPE *$__lazy_storage_$_autoFillFormListItemView;	// 80 = 0x50
    MISSING_TYPE *$__lazy_storage_$_addSignatureListItemView;	// 88 = 0x58
    MISSING_TYPE *$__lazy_storage_$_addShapeListItemView;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000190be0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000190b80
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000001909d0
- (void)didTapAddShapeListItemView:(id)arg1 forEvent:(id)arg2;	// IMP=0x0000000000190770
- (void)didTapAutoFillFormListItemView:(id)arg1 forEvent:(id)arg2;	// IMP=0x0000000000190750
- (void)didTapAddSignatureListItemView:(id)arg1 forEvent:(id)arg2;	// IMP=0x00000000001906e0
- (void)didTapAddTextBoxListItemView:(id)arg1 forEvent:(id)arg2;	// IMP=0x00000000001906c0
- (void)updatePreferredContentSize;	// IMP=0x0000000000190590
- (_Bool)_canShowWhileLocked;	// IMP=0x000000000018ffa0
- (void)viewDidLoad;	// IMP=0x000000000018ff70

@end

