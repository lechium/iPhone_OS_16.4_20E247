//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface VUIDebugMetricsImpressionViewController : UITableViewController
{
    NSArray *_array;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000027856a
@property(retain, nonatomic) NSArray *array; // @synthesize array=_array;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000000027852f
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000002783a4
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000277d6c
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000277cf0
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000277cd3
- (id)object;	// IMP=0x0000000000277c5b
- (void)setObject:(id)arg1;	// IMP=0x0000000000277bbb
- (void)viewDidLoad;	// IMP=0x000000000027787b
- (id)init;	// IMP=0x0000000000277847

@end
