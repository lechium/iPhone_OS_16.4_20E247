//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKTableViewController.h>

@class NSArray, NSPredicate, NSString, UIFont, WDProfile;

__attribute__((visibility("hidden")))
@interface WDStoredDataByCategoryViewController : HKTableViewController
{
    _Bool _queryReturned;	// 8 = 0x8
    WDProfile *_profile;	// 16 = 0x10
    UIFont *_bodyFont;	// 24 = 0x18
    NSArray *_capturedSampleTypes;	// 32 = 0x20
    NSArray *_savedCategories;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000006f529
@property(nonatomic) _Bool queryReturned; // @synthesize queryReturned=_queryReturned;
@property(retain) NSArray *savedCategories; // @synthesize savedCategories=_savedCategories;
@property(retain, nonatomic) NSArray *capturedSampleTypes; // @synthesize capturedSampleTypes=_capturedSampleTypes;
@property(retain, nonatomic) UIFont *bodyFont; // @synthesize bodyFont=_bodyFont;
@property(retain, nonatomic) WDProfile *profile; // @synthesize profile=_profile;
- (id)_makeDataListViewControllerForDisplayType:(id)arg1;	// IMP=0x000000000006f289
- (void)selectSourceStoredDataTableViewCell:(id)arg1;	// IMP=0x000000000006f1e8
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000006f0ad
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000000006efa4
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000000006ef93
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000006e890
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000006e7b5
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000006e6ee
- (void)presentDeleteConfirmation;	// IMP=0x000000000006e3b4
- (id)reduceCategoriesForCapturedSampleTypes:(id)arg1;	// IMP=0x000000000006dc74
- (void)deleteAllStoredData;	// IMP=0x00000000000872b6
@property(readonly, nonatomic) _Bool shouldShowDeleteAllDataButton;
@property(readonly, nonatomic) NSString *storedDataDisplayName;
@property(readonly, nonatomic) NSPredicate *storedDataPredicate;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000006db77
- (void)handleSamplesQueryResults:(id)arg1;	// IMP=0x000000000006dab2
- (void)_displayTypeStringsChanged:(id)arg1;	// IMP=0x000000000006da75
- (void)viewDidLoad;	// IMP=0x000000000006d6e4
- (id)init;	// IMP=0x000000000006d6cd
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000000006d639

@end
