//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIViewController.h"

@class NSMutableArray, NSString, SKUIActivityIndicatorView, SKUIChartsTemplateViewElement, SKUILayoutCache, SKUIModernChartsView, SKUIResourceLoader, SKUIViewElementLayoutContext;

__attribute__((visibility("hidden")))
@interface SKUIModernChartsDocumentViewController : SKUIViewController
{
    SKUIActivityIndicatorView *_activityIndicatorView;	// 8 = 0x8
    SKUIModernChartsView *_chartsView;	// 16 = 0x10
    NSMutableArray *_columnViewControllers;	// 24 = 0x18
    SKUILayoutCache *_layoutCache;	// 32 = 0x20
    SKUIChartsTemplateViewElement *_templateElement;	// 40 = 0x28
    SKUIViewElementLayoutContext *_viewLayoutContext;	// 48 = 0x30
    SKUIResourceLoader *_resourceLoader;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000034a5eb
- (id)_resourceLoader;	// IMP=0x000000000034a514
- (id)_viewLayoutContext;	// IMP=0x000000000034a3c7
- (struct CGRect)_computedFrameForActivityIndicatorView;	// IMP=0x000000000034a2a9
- (void)_showActivityIndicator;	// IMP=0x000000000034a05b
- (void)_reloadWithTemplateElement:(id)arg1;	// IMP=0x0000000000349df7
- (id)_newColumnViewControllersWithReusableViewControllers:(id)arg1;	// IMP=0x000000000034975f
- (id)_layoutCache;	// IMP=0x000000000034971e
- (void)_hideActivityIndicator;	// IMP=0x00000000003496e6
- (struct UIEdgeInsets)_contentInset;	// IMP=0x000000000034962d
- (void)resourceLoader:(id)arg1 didLoadAllForReason:(long long)arg2;	// IMP=0x0000000000349547
- (void)resourceLoaderDidBeginLoading:(id)arg1;	// IMP=0x00000000003494b3
- (void)viewWillLayoutSubviews;	// IMP=0x00000000003493ef
- (void)loadView;	// IMP=0x000000000034932f
- (id)contentScrollView;	// IMP=0x0000000000349327
- (void)getModalSourceViewForElementIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000348f39
- (void)documentMediaQueriesDidUpdate:(id)arg1;	// IMP=0x0000000000348e09
- (void)documentDidUpdate:(id)arg1;	// IMP=0x0000000000348d84
- (id)initWithTemplateElement:(id)arg1;	// IMP=0x0000000000348d1c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
