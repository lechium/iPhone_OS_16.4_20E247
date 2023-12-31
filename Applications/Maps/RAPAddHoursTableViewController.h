//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSArray, NSString, RAPHoursSection, RAPStoreHour, UITableViewDiffableDataSource;
@protocol RAPAddHoursDelegate;

@interface RAPAddHoursTableViewController : UITableViewController
{
    RAPStoreHour *_model;	// 8 = 0x8
    NSArray *_orderedWeekdays;	// 16 = 0x10
    RAPHoursSection *_startHoursSection;	// 24 = 0x18
    RAPHoursSection *_endHoursSection;	// 32 = 0x20
    UITableViewDiffableDataSource *_diffableDataSource;	// 40 = 0x28
    id <RAPAddHoursDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000558f79
@property(nonatomic) __weak id <RAPAddHoursDelegate> delegate; // @synthesize delegate=_delegate;
- (void)checkmarkTableViewCell:(id)arg1 isSelected:(_Bool)arg2;	// IMP=0x0010000000558c93
- (void)macFooterViewRightButtonTapped:(id)arg1;	// IMP=0x0010000000558c81
- (void)macFooterViewLeftButtonTapped:(id)arg1;	// IMP=0x0010000000558c6f
@property(readonly, nonatomic) int analyticTarget;
- (void)_captureUserAction:(int)arg1;	// IMP=0x0010000000558c17
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 itemIdentifier:(id)arg3;	// IMP=0x0010000000558546
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0010000000557ea5
- (void)_updateTitleCell:(id)arg1 shouldIlluminate:(_Bool)arg2;	// IMP=0x0010000000557e46
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x0010000000557d07
- (id)_weekdayForIndexPath:(id)arg1;	// IMP=0x0010000000557c53
- (void)_setAppearanceForDayCell:(id)arg1 withDay:(id)arg2;	// IMP=0x0010000000557bc8
- (void)dateChanged:(id)arg1;	// IMP=0x0010000000557a03
- (void)allDayOptionChanged:(id)arg1;	// IMP=0x00100000005577bb
- (id)_allDaySwitch;	// IMP=0x0010000000557744
- (_Bool)_isDaySection:(long long)arg1;	// IMP=0x0010000000557738
- (void)_cancelAddingHours;	// IMP=0x00100000005576fe
- (void)_commitAddingHours;	// IMP=0x00100000005575fb
- (void)viewDidLoad;	// IMP=0x0010000000557397
- (void)_commonInit;	// IMP=0x0010000000556a8c
- (id)initWithStyle:(long long)arg1;	// IMP=0x0010000000556a40

// Remaining properties
@property(readonly, nonatomic) int backAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *eventValue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

