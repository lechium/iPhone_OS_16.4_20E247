//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSDateFormatter, NSDictionary, NSString, UILocalizedIndexedCollation, UITableView;
@protocol WFRemoteFileListViewDelegate;

__attribute__((visibility("hidden")))
@interface WFRemoteFileListView : UIView
{
    id <WFRemoteFileListViewDelegate> _delegate;	// 8 = 0x8
    UITableView *_tableView;	// 16 = 0x10
    NSDateFormatter *_dateFormatter;	// 24 = 0x18
    UILocalizedIndexedCollation *_collation;	// 32 = 0x20
    NSDictionary *_filesBySection;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000004cb43
@property(copy, nonatomic) NSDictionary *filesBySection; // @synthesize filesBySection=_filesBySection;
@property(readonly, nonatomic) UILocalizedIndexedCollation *collation; // @synthesize collation=_collation;
@property(readonly, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <WFRemoteFileListViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000004c976
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x000000000004c83a
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;	// IMP=0x000000000004c74e
- (id)sectionIndexTitlesForTableView:(id)arg1;	// IMP=0x000000000004c6fe
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000000004c5e3
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000004c541
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000004c4a6
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000004c301
- (id)fileAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000004c0eb
- (id)cellAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000004c03b
- (struct CGRect)frameOfCellAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000004bf77
- (void)updateCheckmarkForFile:(id)arg1;	// IMP=0x000000000004bbc5
- (void)setFiles:(id)arg1;	// IMP=0x000000000004b696
@property(nonatomic) struct UIEdgeInsets verticalScrollIndicatorInsets;
@property(nonatomic) struct UIEdgeInsets contentInset;
- (id)initWithFrame:(struct CGRect)arg1 collation:(id)arg2;	// IMP=0x000000000004b3c2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

