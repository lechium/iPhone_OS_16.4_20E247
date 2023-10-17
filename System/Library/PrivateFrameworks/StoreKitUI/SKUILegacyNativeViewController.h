//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIViewController.h"

@class NSData, NSString, NSURL, SKUICategoryController, SKUIStorePageViewController, SSVLoadURLOperation;

__attribute__((visibility("hidden")))
@interface SKUILegacyNativeViewController : SKUIViewController
{
    NSURL *_activeURL;	// 8 = 0x8
    SKUICategoryController *_categoryController;	// 16 = 0x10
    NSURL *_defaultURL;	// 24 = 0x18
    NSData *_initialData;	// 32 = 0x20
    SSVLoadURLOperation *_initialOperation;	// 40 = 0x28
    SKUIStorePageViewController *_storePageViewController;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000293260
- (id)_storePageViewController;	// IMP=0x00000000002931c1
- (void)_reloadNavigationItem;	// IMP=0x0000000000292f08
- (void)_finishLoadWithResult:(_Bool)arg1 error:(id)arg2;	// IMP=0x0000000000292bf0
- (id)_categoryController;	// IMP=0x0000000000292b08
- (id)activeMetricsController;	// IMP=0x0000000000292aeb
- (void)categoryController:(id)arg1 didSelectCategory:(id)arg2;	// IMP=0x00000000002929fb
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;	// IMP=0x0000000000292946
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000029283e
- (void)loadView;	// IMP=0x00000000002926dc
- (void)reloadData;	// IMP=0x00000000002922f7
- (void)dealloc;	// IMP=0x00000000002922ac
- (id)initWithData:(id)arg1 fromOperation:(id)arg2;	// IMP=0x0000000000292191

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
