//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSObject, NSString, UIImageView, UITableViewCell, UIWebClip, WKWebView;
@protocol _SFWebClipViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface _SFWebClipViewController : UITableViewController
{
    WKWebView *_webView;	// 8 = 0x8
    UITableViewCell *_titleCell;	// 16 = 0x10
    UITableViewCell *_addressCell;	// 24 = 0x18
    UIImageView *_iconImageView;	// 32 = 0x20
    _Bool _suspendAfterDismiss;	// 40 = 0x28
    _Bool _delegateNotifiedOfResult;	// 41 = 0x29
    _Bool _showingDemoModeAlert;	// 42 = 0x2a
    _Bool _canEditAndSave;	// 43 = 0x2b
    UIWebClip *_webClip;	// 48 = 0x30
    NSObject<_SFWebClipViewControllerDelegate> *_delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000016a247
@property(nonatomic) _Bool canEditAndSave; // @synthesize canEditAndSave=_canEditAndSave;
@property(nonatomic) __weak NSObject<_SFWebClipViewControllerDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain) UIWebClip *webClip; // @synthesize webClip=_webClip;
- (_Bool)bookmarkTextEntryTableViewControllerShouldUseTranslucentAppearance:(id)arg1;	// IMP=0x000000000016a1db
- (void)bookmarkTextEntryTableViewController:(id)arg1 dismissedWithText:(id)arg2;	// IMP=0x000000000016a188
- (_Bool)_shouldUseTranslucentAppearance;	// IMP=0x000000000016a14f
- (void)dealloc;	// IMP=0x000000000016a09d
- (void)_textFieldChanged:(id)arg1;	// IMP=0x0000000000169f83
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x0000000000169f4f
- (_Bool)_canAddWebClip;	// IMP=0x0000000000169eef
- (_Bool)createAndAddToHomeScreenBundle;	// IMP=0x0000000000169c9e
- (_Bool)_showDemoModeFeatureDisabledAlert;	// IMP=0x0000000000169b08
- (void)_add;	// IMP=0x0000000000169868
- (void)_cancel;	// IMP=0x00000000001697fd
- (void)viewWillLayoutSubviews;	// IMP=0x000000000016970b
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000169622
- (struct CGPoint)_centerForIconView;	// IMP=0x000000000016940c
- (struct UIEdgeInsets)_cellInset;	// IMP=0x0000000000169368
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000169281
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000169202
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x0000000000169188
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000169148
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000016913d
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000016903f
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000168fbf
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000168e88
- (void)updateUIAnimated:(_Bool)arg1;	// IMP=0x00000000001689f7
- (void)viewDidLoad;	// IMP=0x00000000001689b4
- (void)loadView;	// IMP=0x00000000001686e8
- (id)initWithStyle:(long long)arg1;	// IMP=0x0000000000168526

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

