//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class SFContactAutoFillPropertyValues;

__attribute__((visibility("hidden")))
@interface SFContactAutoFillDetailViewController : UITableViewController
{
    SFContactAutoFillPropertyValues *_propertyValues;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000003f8ce
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000003f812
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000003f6b5
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000003f666
- (void)viewDidLoad;	// IMP=0x000000000003f588
- (id)initWithPropertyValues:(id)arg1;	// IMP=0x000000000003f507

@end
