//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, RAPTablePartsDataSource, UITableView, UIViewController;
@protocol RAPPresentingViewController;

@interface RAPTablePart : NSObject
{
    UITableView *_tableView;	// 8 = 0x8
    NSArray *_sections;	// 16 = 0x10
    UIViewController<RAPPresentingViewController> *_presentingViewController;	// 24 = 0x18
}

+ (_Bool)isHoldingChangesAffectingTableView:(id)arg1;	// IMP=0x004000000027afb0
+ (void)holdChangesAffectingTableView:(id)arg1 withinBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000027aea2
- (void).cxx_destruct;	// IMP=0x002000000027b6ec
@property(nonatomic) __weak UIViewController<RAPPresentingViewController> *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)didChange;	// IMP=0x001000000027b654
- (void)presentingViewControllerViewDidLayoutSubviews;	// IMP=0x001000000027b52b
@property(readonly, nonatomic) RAPTablePartsDataSource *dataSource;
- (void)_setTableView:(id)arg1;	// IMP=0x001000000027b328
- (void)holdChangesAffectingTableViewWithinBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000027afc9
- (void)dealloc;	// IMP=0x001000000027ad48
- (id)initWithSections:(id)arg1;	// IMP=0x001000000027acbb
- (id)_dataSource;	// IMP=0x001000000027ac35
- (id)init;	// IMP=0x001000000027ac1c

@end
