//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MKPlaceSectionViewController.h"

@class MKMapItem, MKPlaceSectionHeaderView, NSArray, NSString, NSTimeZone;
@protocol _MKInfoCardAnalyticsDelegate;

__attribute__((visibility("hidden")))
@interface MKPlaceHoursViewController : MKPlaceSectionViewController
{
    _Bool _isExpanded;	// 8 = 0x8
    MKPlaceSectionHeaderView *_headerView;	// 16 = 0x10
    NSArray *_businessHours;	// 24 = 0x18
    _Bool _resizableViewsDisabled;	// 32 = 0x20
    id <_MKInfoCardAnalyticsDelegate> _analyticsDelegate;	// 40 = 0x28
    MKMapItem *_mapItem;	// 48 = 0x30
}

+ (id)placeHoursWithMapItem:(id)arg1;	// IMP=0x001000000007f09f
- (void).cxx_destruct;	// IMP=0x000000000008025d
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(nonatomic) __weak id <_MKInfoCardAnalyticsDelegate> analyticsDelegate; // @synthesize analyticsDelegate=_analyticsDelegate;
@property(nonatomic) _Bool resizableViewsDisabled; // @synthesize resizableViewsDisabled=_resizableViewsDisabled;
- (id)infoCardChildUnactionableUIElements;	// IMP=0x0000000000080202
- (id)infoCardChildPossibleActions;	// IMP=0x000000000008015e
- (void)infoCardThemeChanged;	// IMP=0x000000000007ff58
- (void)_updateHoursAnimated:(_Bool)arg1;	// IMP=0x000000000007f94c
- (void)_contentSizeDidChange;	// IMP=0x000000000007f938
- (void)_toggleShowAllHours;	// IMP=0x000000000007f85f
- (void)_setExpanded:(_Bool)arg1;	// IMP=0x000000000007f7a1
- (_Bool)_shouldOnlyShowExpanded;	// IMP=0x000000000007f623
@property(readonly, nonatomic) NSArray *businessHours;
- (id)hoursBuilderWithHours:(id)arg1;	// IMP=0x000000000007f4d0
@property(readonly, nonatomic) NSTimeZone *timeZone;
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000007f382
- (void)viewDidLoad;	// IMP=0x000000000007f1c4
- (id)titleString;	// IMP=0x000000000007f1b3
- (id)initWithMapItem:(id)arg1;	// IMP=0x000000000007f147
- (_Bool)_canShowWhileLocked;	// IMP=0x000000000007f097

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

