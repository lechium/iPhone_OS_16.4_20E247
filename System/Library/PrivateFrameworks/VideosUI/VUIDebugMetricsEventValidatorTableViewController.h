//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface VUIDebugMetricsEventValidatorTableViewController : UITableViewController
{
    NSDictionary *_event;	// 8 = 0x8
    NSArray *_results;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000014ac63
@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
@property(retain, nonatomic) NSDictionary *event; // @synthesize event=_event;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000000014ab61
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000014a11a
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000014a077
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000014a033
- (void)_reloadResults:(id)arg1;	// IMP=0x00000000001497d2
- (id)initWithEvent:(id)arg1;	// IMP=0x000000000014957a

@end

