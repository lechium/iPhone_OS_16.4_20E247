//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class DOCConfiguration, MISSING_TYPE, NSArray;

@interface _TtC5Files24DOCServiceViewController : UIViewController
{
    MISSING_TYPE *currentViewController;	// 8 = 0x8
    MISSING_TYPE *currentServiceContext;	// 16 = 0x10
    MISSING_TYPE *configuration;	// 24 = 0x18
    MISSING_TYPE *isBrowserViewController;	// 32 = 0x20
    MISSING_TYPE *shouldOverrideWindowAppearance;	// 33 = 0x21
    MISSING_TYPE *lastAppearance;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00400000001a52f0
- (void)embedViewController:(id)arg1;	// IMP=0x00100000001a5250
@property(nonatomic, readonly) NSArray *preferredFocusEnvironments;
- (void)updateEditingTo:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00100000001a4eb0
- (void)updateAppearance:(id)arg1 shouldFlushCA:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000001a4d00
- (void)updateAppearance:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a4910
@property(nonatomic, readonly) UIViewController *childViewControllerForScreenEdgesDeferringSystemGestures;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;	// IMP=0x00100000001a4860
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;	// IMP=0x00100000001a4790
- (void)viewDidLoad;	// IMP=0x00100000001a46d0
- (void)loadView;	// IMP=0x00100000001a4650
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001a4610
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00100000001a45a0
@property(nonatomic) _Bool shouldOverrideWindowAppearance; // @synthesize shouldOverrideWindowAppearance;
@property(nonatomic) _Bool isBrowserViewController; // @synthesize isBrowserViewController;
@property(nonatomic, retain) DOCConfiguration *configuration; // @synthesize configuration;

@end

