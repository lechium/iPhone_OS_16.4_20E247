//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableView.h>

@class MISSING_TYPE, NSString;

@interface UITableView (Maps)
- (MISSING_TYPE *)_maps_reloadCellHeights;	// IMP=0x0010000000165768
- (void)_maps_initializeRAPAppearanceWithStyle:(long long)arg1;	// IMP=0x0010000000165693
- (void)_maps_initializeRAPAppearance;	// IMP=0x0010000000165629
- (id)_maps_groupedHeaderViewWithTitle:(id)arg1 buttonTitle:(id)arg2 target:(id)arg3 selector:(SEL)arg4;	// IMP=0x001000000016549d
- (id)_maps_groupedHeaderViewWithTitle:(id)arg1;	// IMP=0x0010000000165397
- (void)_maps_registerGroupedHeaderView;	// IMP=0x0010000000165332
- (_Bool)_maps_shouldShowTopHairline;	// IMP=0x00100000001651fc
- (long long)_maps_indexOfFirstNonEmptySection;	// IMP=0x001000000016511c
- (void)_maps_commitUpdates;	// IMP=0x00100000001caf46
- (struct CGRect)_maps_rectForRowAtIndexPath:(id)arg1;	// IMP=0x00100000001caf27
- (struct CGRect)_maps_rectForHeaderInSection:(long long)arg1;	// IMP=0x00100000001caf08
- (long long)_maps_numberOfRowsInSection:(long long)arg1;	// IMP=0x00100000001caef6
@property(readonly, nonatomic) long long _maps_numberOfSections;
@property(readonly, nonatomic) struct CGSize _maps_contentSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

