//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class MISSING_TYPE, NSArray;

@interface _TtC5Files33DOCSuggestionsTableViewController : UITableViewController
{
    MISSING_TYPE *suggestionsTableViewDelegate;	// 8 = 0x8
    MISSING_TYPE *suggestions;	// 24 = 0x18
    MISSING_TYPE *sortedSuggestions;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00400000003788a0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000378820
- (id)initWithStyle:(long long)arg1;	// IMP=0x00100000003787f0
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000378740
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0010000000378110
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0010000000378100
- (_Bool)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;	// IMP=0x00100000003780f0
- (_Bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;	// IMP=0x00100000003780e0
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0010000000378040
- (void)keyCommandCancelSelection;	// IMP=0x0010000000377420
- (void)keyCommandConfirmSelection;	// IMP=0x00100000003773f0
- (void)keyCommandMoveSelectionDown;	// IMP=0x00100000003772b0
- (void)keyCommandMoveSelectionUp;	// IMP=0x0010000000377270
@property(nonatomic, readonly) NSArray *keyCommands;
- (_Bool);	// IMP=0x00100000003771e0
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000377000
- (void)viewDidLoad;	// IMP=0x0010000000376d80
- (void)loadView;	// IMP=0x00100000003769c0
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000376950
- (id)init;	// IMP=0x00100000003768e0

@end
