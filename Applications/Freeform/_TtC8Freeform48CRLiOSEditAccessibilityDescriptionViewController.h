//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE;

@interface _TtC8Freeform48CRLiOSEditAccessibilityDescriptionViewController : UIViewController
{
    MISSING_TYPE *initialAccessibilityDescription;	// 8 = 0x8
    MISSING_TYPE *titleText;	// 24 = 0x18
    MISSING_TYPE *subtitleText;	// 40 = 0x28
    MISSING_TYPE *placeholderText;	// 56 = 0x38
    MISSING_TYPE *isCancelled;	// 72 = 0x48
    MISSING_TYPE *delegate;	// 80 = 0x50
    MISSING_TYPE *isCompact;	// 88 = 0x58
    MISSING_TYPE *$__lazy_storage_$_textView;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0040000000a0b170
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000a0b110
- (void)triggerClose;	// IMP=0x0010000000a0b0d0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000a0a990
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000a0a830
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000a0a780
- (void)loadView;	// IMP=0x0010000000a0a750
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000a09ed0
- (id)initWithInitialAccessibilityDescription:(id)arg1 title:(id)arg2 subtitle:(id)arg3 submitButtonTitle:(id)arg4 placeholder:(id)arg5 delegate:(id)arg6;	// IMP=0x0010000000a09e00
@property(nonatomic) _Bool isCancelled; // @synthesize isCancelled;

@end

