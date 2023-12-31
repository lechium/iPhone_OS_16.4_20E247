//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class ErrorModeView, NSArray, NSString, RAPReport, UITableView;
@protocol RAPRouteListViewControllerDelegate;

@interface RAPRouteListViewController : UIViewController
{
    id <RAPRouteListViewControllerDelegate> _delegate;	// 8 = 0x8
    RAPReport *_report;	// 16 = 0x10
    NSArray *_requests;	// 24 = 0x18
    UITableView *_tableView;	// 32 = 0x20
    ErrorModeView *_errorModeView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000472966
- (void)macFooterViewLeftButtonTapped:(id)arg1;	// IMP=0x0010000000472954
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0010000000472886
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00100000004727c2
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00100000004727a5
- (void)_dismiss;	// IMP=0x001000000047271b
- (void)_onCancelPressed:(id)arg1;	// IMP=0x0010000000472709
- (void)_displayEmptyState;	// IMP=0x0010000000472510
- (void)_setupViews;	// IMP=0x0010000000472200
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000472156
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000472035
- (void)viewDidLoad;	// IMP=0x0010000000471ff4
- (id)initWithReport:(id)arg1 delegate:(id)arg2;	// IMP=0x0010000000471caf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

