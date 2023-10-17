//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewController.h"

#import <UIKitCore/UITableViewDelegate-Protocol.h>

@class NSArray, NSString, UITableView, _UIContentUnavailableView;

__attribute__((visibility("hidden")))
@interface _UIPrototypingMenuViewController : UIViewController <UITableViewDelegate>
{
    NSArray *_allSettings;	// 8 = 0x8
    UITableView *_tableView;	// 16 = 0x10
    NSString *_domain;	// 24 = 0x18
    _UIContentUnavailableView *_noContentView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000012c670e
@property(retain, nonatomic) _UIContentUnavailableView *noContentView; // @synthesize noContentView=_noContentView;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *allSettings; // @synthesize allSettings=_allSettings;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000012c658f
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000012c62d3
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000012c61e6
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000012c612b
- (void)_resetSettings:(id)arg1;	// IMP=0x00000000012c5f11
- (void)_reloadSettings:(id)arg1;	// IMP=0x00000000012c5ea9
- (void)viewDidLoad;	// IMP=0x00000000012c5cb4
- (void)loadView;	// IMP=0x00000000012c5bd8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
