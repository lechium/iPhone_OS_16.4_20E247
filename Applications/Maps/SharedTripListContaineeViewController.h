//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ContainerHeaderView, GEOSharedNavState, NSString, SharedTripsTableDataSource, UITableView;
@protocol SharedTripsActionCoordination;

@interface SharedTripListContaineeViewController
{
    SharedTripsTableDataSource *_sharedTripsDataSource;	// 8 = 0x8
    UITableView *_tableView;	// 16 = 0x10
    ContainerHeaderView *_headerView;	// 24 = 0x18
    id _subscriptionToken;	// 32 = 0x20
    GEOSharedNavState *_selectedTrip;	// 40 = 0x28
    id <SharedTripsActionCoordination> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000285657
@property(nonatomic) __weak id <SharedTripsActionCoordination> delegate; // @synthesize delegate=_delegate;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00100000002854aa
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00100000002853cd
- (double)heightForLayout:(unsigned long long)arg1;	// IMP=0x00100000002852af
- (void)applyAlphaToContent:(double)arg1;	// IMP=0x001000000028525c
- (id)contentView;	// IMP=0x0010000000285247
- (id)headerView;	// IMP=0x0010000000285232
@property(nonatomic) __weak GEOSharedNavState *selectedTrip; // @synthesize selectedTrip=_selectedTrip;
- (int)currentUITargetForAnalytics;	// IMP=0x001000000028505d
- (void)headerViewButtonTapped:(id)arg1;	// IMP=0x0010000000284f2c
- (void)headerViewTapped:(id)arg1;	// IMP=0x0010000000284e88
- (void)viewDidLoad;	// IMP=0x00100000002842f1
- (void)dealloc;	// IMP=0x001000000028423f
- (id)init;	// IMP=0x0010000000284152

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
