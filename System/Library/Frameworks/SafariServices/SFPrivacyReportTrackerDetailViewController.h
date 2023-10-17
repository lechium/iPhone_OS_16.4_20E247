//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSNumberFormatter, UIView, WBSKnownTrackingThirdParty;

__attribute__((visibility("hidden")))
@interface SFPrivacyReportTrackerDetailViewController : UITableViewController
{
    NSNumberFormatter *_numberFormatter;	// 8 = 0x8
    WBSKnownTrackingThirdParty *_tracker;	// 16 = 0x10
    UIView *_header;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000740f0
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x00000000000740e8
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00000000000740c9
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000073f87
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000073f38
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000073e92
- (void)viewLayoutMarginsDidChange;	// IMP=0x0000000000073e51
- (void)_updateHeaderSize;	// IMP=0x0000000000073d11
- (void)viewDidLoad;	// IMP=0x0000000000073741
- (id)initWithTracker:(id)arg1;	// IMP=0x00000000000736bb

@end
