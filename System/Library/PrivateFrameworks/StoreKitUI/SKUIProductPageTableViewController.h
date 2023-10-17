//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSString, SKUIClientContext, SKUIColorScheme, SKUILayoutCache, SKUIProductPageHeaderViewController, SKUIProductPageTableView, UIColor, UITableView;
@protocol SKUIProductPageChildViewController, SKUIProductPageChildViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUIProductPageTableViewController : UIViewController
{
    SKUIClientContext *_clientContext;	// 8 = 0x8
    SKUIColorScheme *_colorScheme;	// 16 = 0x10
    id <SKUIProductPageChildViewControllerDelegate> _delegate;	// 24 = 0x18
    id <SKUIProductPageChildViewController> _delegateSender;	// 32 = 0x20
    UIColor *_evenColor;	// 40 = 0x28
    SKUIProductPageHeaderViewController *_headerViewController;	// 48 = 0x30
    UIColor *_color;	// 56 = 0x38
    NSArray *_sections;	// 64 = 0x40
    SKUIProductPageTableView *_tableView;	// 72 = 0x48
    SKUILayoutCache *_textLayoutCache;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000001f30d8
@property(retain, nonatomic) SKUILayoutCache *textLayoutCache; // @synthesize textLayoutCache=_textLayoutCache;
@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) SKUIProductPageHeaderViewController *headerViewController; // @synthesize headerViewController=_headerViewController;
@property(nonatomic) __weak id <SKUIProductPageChildViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
@property(nonatomic) __weak id <SKUIProductPageChildViewController> delegateSender; // @synthesize delegateSender=_delegateSender;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (id)_textLayoutRequestWithText:(id)arg1;	// IMP=0x00000000001f2f6b
- (id)_tableView;	// IMP=0x00000000001f2dcc
- (void)_addHeaderView;	// IMP=0x00000000001f2bb8
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000000001f2b98
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x00000000001f2ae8
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x00000000001f2a38
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001f298c
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00000000001f28c6
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x00000000001f2800
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000001f2471
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000001f241f
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001f236b
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000001f234e
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000001f22eb
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000001f225c
- (void)loadView;	// IMP=0x00000000001f2210
@property(readonly, nonatomic) UITableView *tableView;
- (void)scrollToView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001f1c82
- (void)dealloc;	// IMP=0x00000000001f1c1b
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000001f1b9e
- (id)initWithReleaseNotes:(id)arg1 clientContext:(id)arg2;	// IMP=0x00000000001f1752
- (id)initWithInAppPurchases:(id)arg1 clientContext:(id)arg2;	// IMP=0x00000000001f1590

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
