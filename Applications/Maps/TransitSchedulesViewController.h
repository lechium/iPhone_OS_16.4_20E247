//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ContainerHeaderView, GEOComposedRoute, GEOLocation, GEOTransitVehicleUpdater, MISSING_TYPE, MKMapItem, MKTransitMapItemUpdater, NSArray, NSData, NSDate, NSNumber, NSString, NSTimeZone, RouteAnnotationsConfiguration, TransitScheduleStopsTableViewDataSource, TransitSchedulesDepartureDataProvider, TransitSchedulesDepartureInfoProvider, TransitSchedulesHeaderView, TransitSchedulesLineOptionsProvider, UICollectionView, UICollectionViewCell, UICollectionViewDiffableDataSource, _TtC8MapsSync34MapsSyncCollectionTransitItemQuery;
@protocol ActionCoordination, GEOTransitAttribution, GEOTransitLine, GEOTransitLineItem, PlaceCardViewControllerDelegate, TransitItemIncident, TransitSchedulesDepartureViewProviding, TransitSchedulesHeadsignViewProviding;

@interface TransitSchedulesViewController
{
    _Bool _isRoutingScheduleCard;	// 8 = 0x8
    ContainerHeaderView *_containerHeaderView;	// 16 = 0x10
    id <GEOTransitAttribution> _attribution;	// 24 = 0x18
    NSData *_routingParameters;	// 32 = 0x20
    NSDate *_selectedTripDepartureDate;	// 40 = 0x28
    NSDate *_scheduleWindowStartDate;	// 48 = 0x30
    NSArray *_sectionIdentifiers;	// 56 = 0x38
    NSNumber *_selectedTripIdentifier;	// 64 = 0x40
    NSString *_boardingStopName;	// 72 = 0x48
    TransitScheduleStopsTableViewDataSource *_stopsDataSource;	// 80 = 0x50
    UICollectionViewDiffableDataSource *_dataSource;	// 88 = 0x58
    GEOLocation *_boardingStopLocation;	// 96 = 0x60
    NSTimeZone *_boardingStopTimeZone;	// 104 = 0x68
    unsigned long long _boardingStopIndex;	// 112 = 0x70
    unsigned long long _boardingStopMuid;	// 120 = 0x78
    unsigned long long _transitLineIdentifier;	// 128 = 0x80
    int _initialMapApplicationState;	// 136 = 0x88
    long long _initialViewMode;	// 144 = 0x90
    RouteAnnotationsConfiguration *_initialRouteConfiguration;	// 152 = 0x98
    unsigned long long _initialRoutingSchedulesNetworkRequestState;	// 160 = 0xa0
    UICollectionViewCell<TransitItemIncident> *_transitIncidentCell;	// 168 = 0xa8
    TransitSchedulesDepartureInfoProvider *_departureInfoProvider;	// 176 = 0xb0
    TransitSchedulesLineOptionsProvider *_lineOptionsProvider;	// 184 = 0xb8
    id <GEOTransitLineItem> _selectedTransitLineItem;	// 192 = 0xc0
    MKMapItem *_boardingStopMapItem;	// 200 = 0xc8
    _TtC8MapsSync34MapsSyncCollectionTransitItemQuery *_transitCollectionQuery;	// 208 = 0xd0
    _Bool _requestAllDirections;	// 216 = 0xd8
    _Bool _pinnedTransitLine;	// 217 = 0xd9
    NSArray *_incidents;	// 224 = 0xe0
    id <PlaceCardViewControllerDelegate> _placeCardDelegate;	// 232 = 0xe8
    id <ActionCoordination> _actionCoordinator;	// 240 = 0xf0
    GEOTransitVehicleUpdater *_vehicleUpdater;	// 248 = 0xf8
    GEOComposedRoute *_selectedTripRoute;	// 256 = 0x100
    id <GEOTransitLine> _selectedTransitLine;	// 264 = 0x108
    NSString *_selectedTripVehicleNumber;	// 272 = 0x110
    MKTransitMapItemUpdater *_mapItemUpdater;	// 280 = 0x118
    MISSING_TYPE *_collectionView;	// 288 = 0x120
    TransitSchedulesHeaderView *_headerTitleView;	// 296 = 0x128
    id <TransitSchedulesDepartureViewProviding> _departureCellProvider;	// 304 = 0x130
    id <TransitSchedulesHeadsignViewProviding> _headsignCellProvider;	// 312 = 0x138
    TransitSchedulesDepartureDataProvider *_departureDataProvider;	// 320 = 0x140
    NSDate *_referenceDate;	// 328 = 0x148
}

+ (id)validDeparturesInDepartureSequence:(id)arg1 withReferenceDate:(id)arg2;	// IMP=0x0020000000246447
+ (_Bool)shouldShowScheduleForTransitMapItem:(id)arg1 sequence:(id)arg2;	// IMP=0x0010000000245c44
- (void).cxx_destruct;	// IMP=0x0020000000251298
@property(nonatomic, getter=isPinnedTransitLine) _Bool pinnedTransitLine; // @synthesize pinnedTransitLine=_pinnedTransitLine;
@property(retain, nonatomic) NSDate *referenceDate; // @synthesize referenceDate=_referenceDate;
@property(retain, nonatomic) TransitSchedulesDepartureDataProvider *departureDataProvider; // @synthesize departureDataProvider=_departureDataProvider;
@property(retain, nonatomic) id <TransitSchedulesHeadsignViewProviding> headsignCellProvider; // @synthesize headsignCellProvider=_headsignCellProvider;
@property(retain, nonatomic) id <TransitSchedulesDepartureViewProviding> departureCellProvider; // @synthesize departureCellProvider=_departureCellProvider;
@property(retain, nonatomic) TransitSchedulesHeaderView *headerTitleView; // @synthesize headerTitleView=_headerTitleView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) MKTransitMapItemUpdater *mapItemUpdater; // @synthesize mapItemUpdater=_mapItemUpdater;
@property(copy, nonatomic) NSString *selectedTripVehicleNumber; // @synthesize selectedTripVehicleNumber=_selectedTripVehicleNumber;
@property(retain, nonatomic) id <GEOTransitLine> selectedTransitLine; // @synthesize selectedTransitLine=_selectedTransitLine;
@property(retain, nonatomic) GEOComposedRoute *selectedTripRoute; // @synthesize selectedTripRoute=_selectedTripRoute;
@property(retain, nonatomic) GEOTransitVehicleUpdater *vehicleUpdater; // @synthesize vehicleUpdater=_vehicleUpdater;
@property(nonatomic) _Bool requestAllDirections; // @synthesize requestAllDirections=_requestAllDirections;
@property(nonatomic) __weak id <ActionCoordination> actionCoordinator; // @synthesize actionCoordinator=_actionCoordinator;
@property(nonatomic) __weak id <PlaceCardViewControllerDelegate> placeCardDelegate; // @synthesize placeCardDelegate=_placeCardDelegate;
@property(copy, nonatomic) NSArray *incidents; // @synthesize incidents=_incidents;
- (void)updatedDepartureInfoProvider:(id)arg1;	// IMP=0x0010000000250f68
- (void)_fetchMapsSyncTransitLineItemWithCallback:(CDUnknownBlockType)arg1;	// IMP=0x0010000000250bc3
- (void)unpinSelectedTransitLine;	// IMP=0x0010000000250a96
- (void)pinSelectedTransitLine;	// IMP=0x0010000000250861
- (void)_checkIfPinnedLine;	// IMP=0x00100000002506b7
- (void)showLineInfo;	// IMP=0x0010000000250573
- (void)showDirectionsToSelectedTransitStop;	// IMP=0x00100000002502df
- (void)viewLineOnMap;	// IMP=0x001000000025014e
- (void)queryContentsDidChangeWithQuery:(id)arg1;	// IMP=0x001000000025013c
- (void)selectDeparture:(id)arg1;	// IMP=0x0010000000250100
- (void)selectDepartureSequence:(id)arg1;	// IMP=0x001000000025008f
- (void)timingViewController:(id)arg1 didPickTiming:(id)arg2;	// IMP=0x001000000025000f
- (int)currentUITargetForAnalytics;	// IMP=0x0010000000250004
- (void)_updateDeparturesHeaderTitlesForHeaderView:(id)arg1;	// IMP=0x001000000024fc2e
- (void)_updateDeparturesHeaderTitles;	// IMP=0x001000000024fbdd
- (id)_firstVisibleDeparture;	// IMP=0x001000000024f8e0
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x001000000024f39c
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 itemIdentifier:(id)arg3;	// IMP=0x001000000024ee84
- (long long)_sectionIndexForSectionType:(unsigned long long)arg1;	// IMP=0x001000000024ed90
- (unsigned long long)_sectionTypeForSectionIndex:(unsigned long long)arg1;	// IMP=0x001000000024ed12
- (void)_clearVehicles;	// IMP=0x001000000024ec2c
- (void)_updateVehicleUpdater;	// IMP=0x001000000024eb80
- (void)transitVehicleUpdater:(id)arg1 didFailUpdateForTripIDs:(id)arg2 withError:(id)arg3;	// IMP=0x001000000024eab0
- (void)transitVehicleUpdater:(id)arg1 didTimeoutUpdateForTripIDs:(id)arg2;	// IMP=0x001000000024ea05
- (void)transitVehicleUpdater:(id)arg1 didUpdateVehiclePositions:(id)arg2 forTripIDs:(id)arg3;	// IMP=0x001000000024e7bc
- (void)transitMapItemUpdater:(id)arg1 updatedMapItem:(id)arg2 error:(id)arg3;	// IMP=0x001000000024e34f
- (void)transitMapItemUpdater:(id)arg1 willUpdateMapItem:(id)arg2;	// IMP=0x001000000024e349
- (id)ticketForTransitMapItemUpdater:(id)arg1;	// IMP=0x001000000024e1c2
- (void)transitItemReferenceDateUpdater:(id)arg1 didUpdateToReferenceDate:(id)arg2;	// IMP=0x001000000024e15a
- (unsigned long long)preferredPresentationStyle;	// IMP=0x001000000024e14f
- (double)heightForLayout:(unsigned long long)arg1;	// IMP=0x001000000024e07c
- (void)handleDismissAction:(id)arg1;	// IMP=0x001000000024dfee
- (void)departureCellProvider:(id)arg1 selectDeparture:(id)arg2 withIndex:(unsigned long long)arg3;	// IMP=0x001000000024dd37
- (void)setSelectedDeparture:(id)arg1;	// IMP=0x001000000024db57
- (void)departureDataProvider:(id)arg1 selectedDeparture:(id)arg2 withIndex:(unsigned long long)arg3;	// IMP=0x001000000024da86
- (void)departureDataProvider:(id)arg1 updatedDepartureSequences:(id)arg2;	// IMP=0x001000000024d73c
- (_Bool)_hasHeadsignSection;	// IMP=0x001000000024d717
- (_Bool)_shouldShowDepartureInfoSection;	// IMP=0x001000000024d688
- (void)departureDataProvider:(id)arg1 selectedDepartureSequence:(id)arg2 withIndex:(unsigned long long)arg3;	// IMP=0x001000000024d538
- (void)departureDataProvider:(id)arg1 updatedDepartures:(id)arg2;	// IMP=0x001000000024d37c
- (void)_removeSection:(unsigned long long)arg1 toSnapshot:(id)arg2;	// IMP=0x001000000024d25a
- (void)_clearSection:(unsigned long long)arg1 inSnapshot:(id)arg2;	// IMP=0x001000000024d170
- (void)_addSection:(unsigned long long)arg1 toSnapshot:(id)arg2;	// IMP=0x001000000024ce71
- (void)_expandStopsSection:(id)arg1;	// IMP=0x001000000024cdf7
- (void)_updateStopsSectionHeader:(id)arg1;	// IMP=0x001000000024cd13
- (void)_updateStopsSectionHeader;	// IMP=0x001000000024ccc2
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x001000000024cc48
- (_Bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;	// IMP=0x001000000024cc40
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x001000000024c773
- (void)headerViewTapped:(id)arg1;	// IMP=0x001000000024c736
- (void)headerViewButtonTapped:(id)arg1;	// IMP=0x001000000024c724
- (void)restoreInitialMapState;	// IMP=0x001000000024c523
- (void)showRouteOnMap;	// IMP=0x001000000024c234
- (void)changeDate;	// IMP=0x001000000024c08b
- (void)changedDate:(id)arg1;	// IMP=0x001000000024bfe2
- (void)setScheduleWindowStartDate:(id)arg1;	// IMP=0x001000000024bf4f
- (_Bool)shouldShowChangeDateButton;	// IMP=0x001000000024bed0
- (void)loadSelectedTripDetails;	// IMP=0x001000000024b78c
- (void)selectDeparture;	// IMP=0x001000000024b6db
- (void)processUpdatedDepartureSequencesFromMapItem:(id)arg1;	// IMP=0x001000000024b3a7
- (void)fetchNewScheduleData;	// IMP=0x001000000024acd7
- (_Bool)isNetworkError:(id)arg1;	// IMP=0x001000000024ac24
- (id)traits;	// IMP=0x001000000024aa2e
- (unsigned long long)_departuresHeaderStyle;	// IMP=0x001000000024a9bc
- (unsigned long long)selectedTripIdentifier;	// IMP=0x001000000024a99f
- (_Bool)hasSelectedTrip;	// IMP=0x001000000024a98a
- (id)_startEndDatesForOperatingHoursTimeRanges:(id)arg1;	// IMP=0x001000000024a6ae
- (id)titleForStopsHeader;	// IMP=0x001000000024a585
- (id)_headerViewForSectionType:(unsigned long long)arg1;	// IMP=0x001000000024a4b1
- (void)setBoardingStationMapItem:(id)arg1;	// IMP=0x0010000000249bf9
- (void)_rebuildStopsSection;	// IMP=0x0010000000249b30
- (void)updateStopsSectionForNetworkState:(unsigned long long)arg1;	// IMP=0x001000000024955c
- (void)updateDeparturesSectionForNetworkState:(unsigned long long)arg1;	// IMP=0x00100000002492fa
- (id)fetchSelectedTransitLineItem;	// IMP=0x0010000000248e5b
- (_Bool)hasIncidents;	// IMP=0x0010000000248e13
- (void)_stopObservingDepartureProvider;	// IMP=0x0010000000248da2
- (void)_startObservingDepartureProvider;	// IMP=0x0010000000248d24
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000248bfe
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000248ae5
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000002489ae
- (void)viewDidLoad;	// IMP=0x0010000000247857
- (id)_collectionViewLayout;	// IMP=0x0010000000246dbe
- (id)initWithTransitRouteStep:(id)arg1;	// IMP=0x00100000002465da
- (id)initWithTransitMapItem:(id)arg1 departureSequence:(id)arg2;	// IMP=0x0010000000246029
- (id)initWithDepartureSequence:(id)arg1 timeZone:(id)arg2 scheduleWindowStartDate:(id)arg3;	// IMP=0x0010000000245dd0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000245ce8
- (_Bool)_canShowWhileLocked;	// IMP=0x0010000000245c3c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
