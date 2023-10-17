//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKMapService.h>

@class GEOMapServiceTraits;

@interface MKMapService (Maps)
+ (unsigned int)venuesCategorySearchMaxResults;	// IMP=0x0020000000a85738
+ (unsigned int)searchMaxResults;	// IMP=0x0010000000a8557c
- (id)ticketForURLQuery:(id)arg1 identifier:(id)arg2 resultProviderId:(int)arg3 contentProvider:(id)arg4 traits:(id)arg5 source:(int)arg6;	// IMP=0x0010000000a86ae9
- (id)ticketForQuerySearch:(id)arg1 source:(int)arg2;	// IMP=0x0010000000a868b6
- (id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 retainedSearch:(id)arg3 traits:(id)arg4;	// IMP=0x0010000000a868a4
- (id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 traits:(id)arg3;	// IMP=0x0010000000a8688c
- (id)_ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 retainedSearch:(id)arg3 traits:(id)arg4;	// IMP=0x0010000000a867c1
- (id)ticketForMapItemToRefine:(id)arg1;	// IMP=0x0010000000a86744
- (id)ticketForReverseGeocodeLocation:(id)arg1;	// IMP=0x0010000000a866c7
- (id)ticketForReverseGeocodeCoordinate:(struct CLLocationCoordinate2D)arg1;	// IMP=0x0010000000a86651
- (void)_addInVehicleInfoToTraits:(id)arg1;	// IMP=0x0010000000a8663c
- (void)_addCarPlayInfoToTraits:(id)arg1;	// IMP=0x0010000000a862da
- (void)_addCarPlayConnectionToTraits:(id)arg1;	// IMP=0x0010000000a86213
@property(readonly, nonatomic) GEOMapServiceTraits *mapsDefaultTraitsWithCarPlayInfo;
- (id)mapsDefaultTraitsForMapView:(id)arg1 mapViewEnteredForegroundDate:(id)arg2 mapViewportChangedDate:(id)arg3 directionsType:(unsigned long long)arg4 includeCarPlayInfo:(_Bool)arg5;	// IMP=0x0010000000a86082
- (id)mapsDefaultTraitsForMapView:(id)arg1 mapViewEnteredForegroundDate:(id)arg2 mapViewportChangedDate:(id)arg3 directionsType:(unsigned long long)arg4;	// IMP=0x0010000000a86060
- (id)mapsDefaultTraitsForMapView:(id)arg1 mapViewEnteredForegroundDate:(id)arg2 mapViewportChangedDate:(id)arg3;	// IMP=0x0010000000a85cfe
- (id)mapsDefaultTraitsForMapRegion:(id)arg1 source:(int)arg2;	// IMP=0x0010000000a85c7c
- (id)_mapsDefaultTraits;	// IMP=0x0010000000a857c8
- (id)mapsDefaultTraits;	// IMP=0x0010000000a857b6
- (id)_mapsDefaultTraitsForAnalytics;	// IMP=0x0010000000a85743
- (void)captureUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3 mapItem:(id)arg4 timestamp:(double)arg5 resultIndex:(int)arg6;	// IMP=0x0010000000a86cb1
- (void)captureUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3 mapItem:(id)arg4 resultIndex:(int)arg5;	// IMP=0x0010000000a86c99
- (void)captureUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3 routeIndex:(unsigned long long)arg4;	// IMP=0x0010000000a86c01
- (id)_maps_ticketForSearchHistoryEntry:(id)arg1 source:(int)arg2 traits:(id)arg3 isRedoOrAutoRedoSearch:(_Bool)arg4;	// IMP=0x0010000000b5b164
@end
