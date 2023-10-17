//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class HKHealthRecordsStore, NSArray, _UIContentUnavailableView;

__attribute__((visibility("hidden")))
@interface WDClinicalSettingsViewAnalyticsDataViewController : UITableViewController
{
    HKHealthRecordsStore *_healthRecordsStore;	// 8 = 0x8
    NSArray *_filePaths;	// 16 = 0x10
    _UIContentUnavailableView *_noDataView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000002a9b6
@property(retain) _UIContentUnavailableView *noDataView; // @synthesize noDataView=_noDataView;
@property(retain) NSArray *filePaths; // @synthesize filePaths=_filePaths;
@property(retain, nonatomic) HKHealthRecordsStore *healthRecordsStore; // @synthesize healthRecordsStore=_healthRecordsStore;
- (id)description;	// IMP=0x000000000002a8a1
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000002a746
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000002a611
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000002a520
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000002a515
- (void)fetchClinicalOptInDataCollectionFilePaths;	// IMP=0x000000000002a2cd
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x000000000002a2c2
- (void)viewDidLoad;	// IMP=0x000000000002a0e5

@end
